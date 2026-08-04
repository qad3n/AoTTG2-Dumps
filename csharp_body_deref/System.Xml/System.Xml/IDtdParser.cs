// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
