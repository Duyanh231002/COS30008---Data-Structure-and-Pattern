Vue.component('app-convert', // indicating the component tag
{
    // define the template for the component
    template:
    // you code here
    `
    <div class="container">
        <div class="row">
            <p>
                <!-- Using textbox to get user input -->
                <b><label for="num"> Enter number from 1 to 99:
                    <input type="number" name="num" id="num" v-model="numVar"></label>
                </b>
            </p>
        </div>
        <div class="row">
            <p>
                {{ numVar | num2roman }}
            </p>
        </div>
    </div>
    `,

    //  defining data to be used in the component
    data: function() {
        return {
            numVar:'',
        }
    },

    // adding filter functions
    filters: {
        num2roman: function(myNum) {
            var finalNum = "";
            var roman1 = ['', 'X', 'XX', 'XXX', 'XL', 'L', 'LX', 'LXX', 'LXXX', 'XC'];
            var roman2 = ['', 'I', 'II', 'III', 'IV', 'V', 'VI', 'VII', 'VIII', 'IX'];
            var strNum = String(myNum);
            if (strNum.length == 1) 
                finalNum = roman2[myNum];
            else if (strNum.length == 2)
                finalNum = roman1[strNum.charAt(0)] + roman2[strNum.charAt(1)];
            else 
                finalNum = "Please enter a number."
            return finalNum;
        }
    }
});

// create new vue instance and indicate the id for vue app
new Vue({ el: '#app' });