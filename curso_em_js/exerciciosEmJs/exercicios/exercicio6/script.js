const input = document.getElementById("input")
const mensagem = document.getElementById("mensagem")
const botao = document.getElementById("bttn")
const valor = document.getElementById("valor")

botao.addEventListener("click", () => {
  const preço = input.value

  if(preço === ""){
   mensagem.innerHTML = "Preencha todos os campos"
  }else if(preço >= 100){
    valor.innerHTML = preço + " reais e você tem desconto nessa compra!!"
    }else{
      valor.innerHTML = preço + " reais e você nâo tem desconto"
      }
})
