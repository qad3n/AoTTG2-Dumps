// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdParserAdapterWithValidation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200002D")]
internal interface IDtdParserAdapterWithValidation : IDtdParserAdapter
{
	[Token(Token = "0x1700003D")]
	bool DtdValidation
	{
		[Token(Token = "0x6000171")]
		get;
	}

	[Token(Token = "0x1700003E")]
	IValidationEventHandling ValidationEventHandling
	{
		[Token(Token = "0x6000172")]
		get;
	}
}
