using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200002B")]
internal interface IDtdParser
{
	[Token(Token = "0x6000156")]
	IDtdInfo ParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset);

	[Token(Token = "0x6000157")]
	IDtdInfo ParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter);
}
