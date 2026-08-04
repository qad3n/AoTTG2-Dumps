// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdAttributeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000028")]
internal interface IDtdAttributeInfo
{
	[Token(Token = "0x1700001B")]
	string Prefix
	{
		[Token(Token = "0x600013F")]
		get;
	}

	[Token(Token = "0x1700001C")]
	string LocalName
	{
		[Token(Token = "0x6000140")]
		get;
	}

	[Token(Token = "0x1700001D")]
	int LineNumber
	{
		[Token(Token = "0x6000141")]
		get;
	}

	[Token(Token = "0x1700001E")]
	int LinePosition
	{
		[Token(Token = "0x6000142")]
		get;
	}

	[Token(Token = "0x1700001F")]
	bool IsNonCDataType
	{
		[Token(Token = "0x6000143")]
		get;
	}

	[Token(Token = "0x17000020")]
	bool IsDeclaredInExternal
	{
		[Token(Token = "0x6000144")]
		get;
	}

	[Token(Token = "0x17000021")]
	bool IsXmlAttribute
	{
		[Token(Token = "0x6000145")]
		get;
	}
}
