// //Traditional Way
// const avenger ={
//     fullname: "Tony stark",
//     age: 51,
//     power: "Genius"
// };

// const name= avenger.fullname;
// const age= avenger.age;

// console.log(fullname);
// console.log(age);

// //Modern Way
// const avenger ={
//     fullname: "Tony stark",
//     age: 51,
//     power: "Genius"
// };

// const {fullname,age}= avenger;

// console.log(fullname);
// console.log(age);

//Modern Way
// const avenger =[{
//     fullname: "Tony stark",
//     age: 51,
//     power: "Genius"
// }, 
// {
//     fullname: "Steev Roger",
//     age: 71,
//     power: "Artificial Super Human being"
// },  
// {
//     fullname: "Bruce Banner",
//     age: 61,
//     power: "Gamma Beast"
// }, 
// {
//     fullname: "Natasha Romonoff",
//     age: 36,
//     power: "Agent"
// }, 

// {
//     fullname: "Thor",
//     age: 1000,
//     power: "God of Thunder"
// }, 
// ];


// console.log(avenger[4]);

// //Modern Way
const avenger ={
    fullname: "Tony stark",
    age: 51,
    power: "Genius",
    home: "New York",
    height: "5'10",
    NetWorth: "159B",
    Girlfriend: "Peggy Carter",
    Nationality: "American"
}

const showDetail = ({fullname, age, power})=>{
    console.log(`Name: ${fullname}`);
    console.log(`Age: ${age}`);
    console.log(`Power: ${power}`);
}
showDetail(avenger);

// const {fullname,age}= avenger;

// console.log(fullname);
// console.log(age);

