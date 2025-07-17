// //Traditional function
// function greet(name){
//     return "Hello", + name;
// }

// console.log(greet("Bishwajyoti"));// Output: Hello, Sagar

// //Arrow functon 
// const greet = (name) =>{
//     return "Hello, " + name;
// };
// console.log(greet("Bishwajyoti")); //Output: Hello, Bishwajyoti

// //Shorter Arrow Function(One-liner)
// const greet = name => "Hello, " + name;
// console.log(greet("Bishwajyoti"));//Output: Hello, Bishwajyoti

// let a = 10;
// let b = 20;
// let c = 30;

// function addfun(){
    
//     return a+b;
// }
// console.log(addfun());

// function addfun(){
//     return a+b+c;
// }

// const jarvis = (message) =>{
    //     return "Hello, " + message;
    // };
    // document.writeln(jarvis("Sir I'm Jarvis. How can I help you today?")); 
    
    // const greet = name => "Hello, " + name;
    // console.log(greet("Bishwajyoti"));//Output: Hello, Bishwajyoti
    
    //Arrow functon 
    let a;
    let b;
    
    const inervar = (num1,num2) =>{
        a = num1;
        b = num2;
    };
    
    const numMultiple = (num1,num2) =>{
        return num1 * num2;
    };
    
    const callNumMultifun = () =>{
        document.writeln(numMultiple(a,b));
    };    
    
    inervar(12,4);
    callNumMultifun();