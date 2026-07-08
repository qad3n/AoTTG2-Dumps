using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B8")]
internal class Datatype_integer : Datatype_decimal
{
	[Token(Token = "0x170004C2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001168")]
		[Address(RVA = "0x4524B30", Offset = "0x4524B30", VA = "0x4524B30", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x4524B40", Offset = "0x4524B40", VA = "0x4524B40", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x4519880", Offset = "0x4519880", VA = "0x4519880")]
	public Datatype_integer()
	{
	}
}
