// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdDefaultAttributeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000029")]
internal interface IDtdDefaultAttributeInfo : IDtdAttributeInfo
{
	[Token(Token = "0x17000022")]
	string DefaultValueExpanded
	{
		[Token(Token = "0x6000146")]
		get;
	}

	[Token(Token = "0x17000023")]
	object DefaultValueTyped
	{
		[Token(Token = "0x6000147")]
		get;
	}

	[Token(Token = "0x17000024")]
	int ValueLineNumber
	{
		[Token(Token = "0x6000148")]
		get;
	}

	[Token(Token = "0x17000025")]
	int ValueLinePosition
	{
		[Token(Token = "0x6000149")]
		get;
	}
}
