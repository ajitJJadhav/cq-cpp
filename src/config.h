

#ifndef CONFIG_H
#define CONFIG_H

// Define constants and settings
#define HIDDEN_SIZE 768
#define QUERY_MAXLEN 32
#define DOC_MAXLEN 180
#define DIMENSION_SIZE 128
#define VOCAB_SIZE 30522
#define PAD_TOKEN_ID 0
#define CODEBOOK_COUNT 16 
#define CODES_COUNT 256
#define TORCH_DTYPE torch::kFloat32
#define SIMILARITY_METRIC "cosine"
#define CODEBOOK_DIM 8
#define QUERY_FILE "../data/msmarco-test2019-queries-qrel.tsv"
#define RESULTS_FILE "../data/retrieval-results.tsv"
#define BASE_STORE_FILE "../data/output_result/result_"
#define STORE_SIZE 256



#endif
