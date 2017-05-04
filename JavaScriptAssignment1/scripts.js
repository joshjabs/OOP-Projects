class Console {
	constructor(id) {
		this.element = document.getElementById(id);
	}
	log(message) {
		this.element.innerText += (message + "\n");
	}
}

let console = new Console("console");

var Person = (function() {
    var private = new WeakMap();

    function Person(id, name, age, ssn) {

        //Private Properties
        var privateProperties = {
            age: age,
            ssn: ssn
        };

        //Public Properties
        this.id = id;
        this.name = name;

        private.set(this, privateProperties);
    }

    Person.prototype.getAge = function() {
        return private.get(this).age;
    };

    Person.prototype.getSSN = function() {
        return private.get(this).ssn;
    };

    return Person;
}());

var p = new Person(123, 'John', 34, 4441239898);

console.log('Person id using direct access: ' + p.id);
console.log('Person name using direct access: ' + p.name);

console.log('Person age using getter: ' + p.getAge());
console.log('Person age using direct access: ' + p.age);

console.log('Person SSN using getter: ' + p.getSSN());
console.log('Person SSN using direct access: ' + p.ssn);

console.log('Publicly Accessible Properties: ' + Object.getOwnPropertyNames(p));
