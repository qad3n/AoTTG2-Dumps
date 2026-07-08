using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B3")]
internal class Datatype_NCName : Datatype_Name
{
	[Token(Token = "0x170004B4")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x4524230", Offset = "0x4524230", VA = "0x4524230", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x4524240", Offset = "0x4524240", VA = "0x4524240", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x4519D90", Offset = "0x4519D90", VA = "0x4519D90")]
	public Datatype_NCName()
	{
	}
}
