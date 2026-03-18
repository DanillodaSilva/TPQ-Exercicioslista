const input = document.getElementById("input")
const mensagem = document.getElementById("mensagem")
const botao = document.getElementById("botao")

botao.addEventListener("click", ()=>{
  const idade = input.value
    
  if(idade === ""){
    mensagem.innerHTML = "Preencha o campo acima com a sua idade"
  }else if(idade < 18){
    mensagem.innerHTML = "Você é menor de idade"
  }else{
    mensagem.innerHTML = "Você é maior de idade"
  }

  })