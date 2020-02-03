#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SentencePieceProcessor SentencePieceProcessor;

typedef struct SentencePieceText SentencePieceText;

unsigned char *spp_encode_as_serialized_proto(SentencePieceProcessor *spp, char const *sentence, size_t *len);

SentencePieceProcessor *spp_new();

int spp_from_serialized_proto(SentencePieceProcessor *spp, char const *data, size_t len);

int spp_load(SentencePieceProcessor *spp, char const *filename);

void spp_free(SentencePieceProcessor *spp);

bool spp_is_unknown(SentencePieceProcessor *spp, int id);

int spp_piece_to_id(SentencePieceProcessor *spp, char const *piece);

#ifdef __cplusplus
}
#endif
