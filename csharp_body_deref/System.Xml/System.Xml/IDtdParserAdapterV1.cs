// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdParserAdapterV1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200002E")]
internal interface IDtdParserAdapterV1 : IDtdParserAdapterWithValidation, IDtdParserAdapter
{
	[Token(Token = "0x1700003F")]
	bool V1CompatibilityMode
	{
		[Token(Token = "0x6000173")]
		get;
	}

	[Token(Token = "0x17000040")]
	bool Normalization
	{
		[Token(Token = "0x6000174")]
		get;
	}

	[Token(Token = "0x17000041")]
	bool Namespaces
	{
		[Token(Token = "0x6000175")]
		get;
	}
}
