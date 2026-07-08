using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001CA")]
internal class Datatype_fixed : Datatype_decimal
{
	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x4528380", Offset = "0x4528380", VA = "0x4528380", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x4528860", Offset = "0x4528860", VA = "0x4528860", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x45192E0", Offset = "0x45192E0", VA = "0x45192E0")]
	public Datatype_fixed()
	{
	}
}
