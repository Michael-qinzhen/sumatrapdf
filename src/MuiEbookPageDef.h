// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_txt.py !!!!

using namespace sertxt;

struct EbookPageDef {
    const char *  name;
    const char *  style;
};

extern const StructMetadata gEbookPageDefMetadata;

inline EbookPageDef *DeserializeEbookPageDef(char *data, size_t dataLen)
{
    return (EbookPageDef*)Deserialize(data, dataLen, &gEbookPageDefMetadata);
}

inline EbookPageDef *DeserializeEbookPageDef(TxtNode* root)
{
    return (EbookPageDef*)Deserialize(root, &gEbookPageDefMetadata);
}

inline uint8_t *SerializeEbookPageDef(EbookPageDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gEbookPageDefMetadata, dataLenOut);
}

inline void FreeEbookPageDef(EbookPageDef *val)
{
    FreeStruct((uint8_t*)val, &gEbookPageDefMetadata);
}
