from unidecode import unidecode

def remove_acentos(input_file, output_file):
    with open(input_file, 'r', encoding='utf-8') as f_in:
        with open(output_file, 'w+', encoding='utf-8') as f_out:
            for line in f_in:
                line_sem_acentos = unidecode(line)
                f_out.write(line_sem_acentos)

    print(f"Processamento concluído. Arquivo de saída: {output_file}")

if __name__ == "__main__":
    input_file = r"C:\Users\milen\OneDrive\Documentos\Estrutura de Dados\Lab_Busca\Lista_Padronizado.csv"
    output_file = r"C:\Users\milen\OneDrive\Documentos\Estrutura de Dados\Lab_Busca\s.csv"
    remove_acentos(input_file, output_file)
