/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void AttachMandatoryAttributes ( PtrElement pEl,
                                        PtrDocument pDoc );
extern Attribute TtaNewAttribute ( AttributeType attType );
extern void TtaAttachAttribute ( Element element,
                                 Attribute attribute,
                                 Document document );
extern void TtaRemoveAttribute ( Element element,
                                 Attribute attribute,
                                 Document document );
extern void TtaSetAttributeValue ( Attribute attribute,
                                   int value,
                                   Element element,
                                   Document document );
extern void TtaSetAttributeText ( Attribute attribute,
                                  const char* buffer,
                                  Element element,
                                  Document document );
extern void TtaNextAttribute ( Element element,
                               Attribute *attribute );
extern void TtaCopyAttributes ( Element src,
                                Element target,
                                Document doc_src,
                                Document doc_target );
extern void TtaGiveAttributeType ( Attribute attribute,
                                   AttributeType *attType,
                                   int *attrKind );
extern void TtaGiveAttributeTypeFromName ( const char *name,
                                           Element element,
                                           AttributeType *attType,
                                           int *attrKind );
extern void TtaGiveAttributeTypeFromOriginalName ( char *name,
                                                   Element element,
                                                   AttributeType *attType,
                                                   int *attrKind );
extern char *TtaGetAttributeName ( AttributeType attType );
extern char *TtaGetAttributeOriginalName ( AttributeType attType );
extern int TtaSameAttributeTypes ( AttributeType type1,
                                   AttributeType type2 );
extern int TtaGetAttributeValue ( Attribute attribute );
extern char *TtaGetAttributeValueOriginalName ( AttributeType attType,
                                                int value );
extern ThotBool TtaIsValidID ( Attribute attr,
                               ThotBool update );
extern char *TtaGetAttributeValueName ( AttributeType attType,
                                        int value );
extern int TtaGetAttributeValueFromOriginalName ( char *name,
                                                  AttributeType attType );
extern int TtaGetAttributeValueFromName ( char *name,
                                          AttributeType attType );
extern void TtaSearchAttribute ( AttributeType searchedAttribute,
                                 SearchDomain scope,
                                 Element element,
                                 Element *elementFound,
                                 Attribute *attributeFound );
extern void TtaSearchAttributes ( AttributeType searchedAtt1,
                                  AttributeType searchedAtt2,
                                  SearchDomain scope,
                                  Element element,
                                  Element *elementFound,
                                  Attribute *attributeFound );
extern Attribute TtaGetTypedAttrAncestor ( Element pEl,
                                           int attNum,
                                           SSchema pSSattr,
                                           Element *pElAttr );

#else /* __STDC__ */

extern void AttachMandatoryAttributes ( PtrElement pEl,
                                          PtrDocument pDoc );
extern Attribute TtaNewAttribute ( AttributeType attType );
extern void TtaAttachAttribute ( Element element,
                                   Attribute attribute,
                                   Document document );
extern void TtaRemoveAttribute ( Element element,
                                   Attribute attribute,
                                   Document document );
extern void TtaSetAttributeValue ( Attribute attribute,
                                     int value,
                                     Element element,
                                     Document document );
extern void TtaSetAttributeText ( Attribute attribute,
                                    const char* buffer,
                                    Element element,
                                    Document document );
extern void TtaNextAttribute ( Element element,
                                 Attribute *attribute );
extern void TtaCopyAttributes ( Element src,
                                  Element target,
                                  Document doc_src,
                                  Document doc_target );
extern void TtaGiveAttributeType ( Attribute attribute,
                                     AttributeType *attType,
                                     int *attrKind );
extern void TtaGiveAttributeTypeFromName ( const char *name,
                                             Element element,
                                             AttributeType *attType,
                                             int *attrKind );
extern void TtaGiveAttributeTypeFromOriginalName ( char *name,
                                                     Element element,
                                                     AttributeType *attType,
                                                     int *attrKind );
extern char *TtaGetAttributeName ( AttributeType attType );
extern char *TtaGetAttributeOriginalName ( AttributeType attType );
extern int TtaSameAttributeTypes ( AttributeType type1,
                                     AttributeType type2 );
extern int TtaGetAttributeValue ( Attribute attribute );
extern char *TtaGetAttributeValueOriginalName ( AttributeType attType,
                                                  int value );
extern ThotBool TtaIsValidID ( Attribute attr,
                                 ThotBool update );
extern char *TtaGetAttributeValueName ( AttributeType attType,
                                          int value );
extern int TtaGetAttributeValueFromOriginalName ( char *name,
                                                    AttributeType attType );
extern int TtaGetAttributeValueFromName ( char *name,
                                            AttributeType attType );
extern void TtaSearchAttribute ( AttributeType searchedAttribute,
                                   SearchDomain scope,
                                   Element element,
                                   Element *elementFound,
                                   Attribute *attributeFound );
extern void TtaSearchAttributes ( AttributeType searchedAtt1,
                                    AttributeType searchedAtt2,
                                    SearchDomain scope,
                                    Element element,
                                    Element *elementFound,
                                    Attribute *attributeFound );
extern Attribute TtaGetTypedAttrAncestor ( Element pEl,
                                             int attNum,
                                             SSchema pSSattr,
                                             Element *pElAttr );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
