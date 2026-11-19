// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_fixed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001CA")]
internal class Datatype_fixed : Datatype_decimal
{
	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x6163F60", Offset = "0x6162F60", VA = "0x6163F60", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x6164430", Offset = "0x6163430", VA = "0x6164430", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x6155180", Offset = "0x6154180", VA = "0x6155180")]
	public Datatype_fixed()
	{
	}
}
