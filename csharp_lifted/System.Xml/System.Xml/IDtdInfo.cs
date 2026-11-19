// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000026")]
internal interface IDtdInfo
{
	[Token(Token = "0x17000016")]
	XmlQualifiedName Name
	{
		[Token(Token = "0x6000136")]
		get;
	}

	[Token(Token = "0x17000017")]
	string InternalDtdSubset
	{
		[Token(Token = "0x6000137")]
		get;
	}

	[Token(Token = "0x17000018")]
	bool HasDefaultAttributes
	{
		[Token(Token = "0x6000138")]
		get;
	}

	[Token(Token = "0x17000019")]
	bool HasNonCDataAttributes
	{
		[Token(Token = "0x6000139")]
		get;
	}

	[Token(Token = "0x600013A")]
	IDtdAttributeListInfo LookupAttributeList(string prefix, string localName);

	[Token(Token = "0x600013B")]
	IDtdEntityInfo LookupEntity(string name);
}
