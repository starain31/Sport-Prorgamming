/**
 * Created by starain on 7/14/16.
 */

var React = require('react');
var ReactDOM = require('react-dom');

var SurveyItem = React.createClass({
    render: function () {
        return (
            <div>
                <p>{this.props.item.title}</p>
                <p>{this.props.item.date}</p>
                <p>{this.props.item.description}</p>
                <p>{this.props.item.short_description}</p>
            </div>
        );
    }
});

var SurveyList = React.createClass({
    getInitialState: function () {
        return {
            item_list:[]
        };
    },

    componentDidMount: function () {
        $.ajax({
            url: this.props.url,
            type:"GET",
            dataType: 'JSONP',
            cache: false,
            success: function(data){
                console.log(data);
                this.setState({item_list: data}); // state variable data will contain the fetched data
            }.bind(this),
            error: function(xhr, status, err){
                console.error(this.props.url, status, err);
            }.bind(this)
        });

    },

    render: function () {
        return (
            <div>
                {
                    this.state.item_list.map(function (item, i) {
                        return (
                            <SurveyItem key={i} item={item}/>
                        );
                    })
                }
            </div>
        );
    }
});

ReactDOM.render(
    <SurveyList url="http://www.mocky.io/v2/56fcf6871000000e13aed252"/>,
    document.getElementById('fun')
);