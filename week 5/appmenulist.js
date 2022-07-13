//populate menu with a variable 
Vue.component('mymenu', { 
    props: ['menu'], //defining the props 
    template:   
    //defining template for the menu list 
    `
    <ul>
        <li v-for="x in menu">{{x}}</li>
    </ul>
    `,
}) 
   
// create new vue instance and indicate the id for vue app 
new Vue({ 
    el: '#app', 
})