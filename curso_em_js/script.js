let nome = prompt("Digite o seu nome:")
let nota = prompt("Digite a sua nota:")

if(nota < 0 || nota > 10){
  alert("Digite uma nota dentro dos termos de 0 a 10!!!")
}else if(nota <= 4){
  alert(nome + " você está reprovado")
}else if(nota <= 6){
  alert(nome + " você está de recuperação")
}else{
  alert(nome + " você está aprovado")
}