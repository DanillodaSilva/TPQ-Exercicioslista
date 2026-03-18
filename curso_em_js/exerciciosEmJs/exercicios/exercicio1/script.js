const input = document.getElementById("login");
const mensagem = document.getElementById("mensagem");
const botao = document.getElementById("botao");

botao.addEventListener("click", ()=>{
     const nome = input.value;

     if(nome === ""){
      mensagem.innerHTML = "Preencha todos os campos"
     }else if(/\d/.test(nome)){
       mensagem.innerHTML = "Por favor retire o numero do seu nome"
     }else{
      mensagem.innerHTML = "Seja bem vinde " + nome + "!"
     }

})