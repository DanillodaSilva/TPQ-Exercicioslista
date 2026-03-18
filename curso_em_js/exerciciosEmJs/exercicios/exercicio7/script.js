const nome = document.getElementById("nome")
const idade = document.getElementById("idade")
const ingresso = document.getElementById("ingresso")
const mensagem = document.getElementById("mensagem")
const botao = document.getElementById("bttn")

botao.addEventListener("click", () => {
  const nomep = nome.value
  const idadep = idade.value
  const ingressop = ingresso.value

  if(nomep === "" || idadep === "" || ingressop === ""){
    mensagem.innerHTML = "Preencha todos os campos"
  }else if(idadep < 16){
    mensagem.innerHTML = "Entrada não permitida para menores de 16 anos."
    }else if(ingressop.toLowerCase() === "nao"){
      mensagem.innerHTML = "Entrada negada: é necessário possuir ingresso."
      }else if(ingressop.toLowerCase() === "sim"){
        mensagem.innerHTML = "Entrada permitida. Bem-vindo(a), " + nomep
        }else{
          mensagem.innerHTML = "Verifique se tudo esta escrito corretamente"
          }
})