using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000199")]
internal class Datatype_yearMonthDuration : Datatype_duration
{
	[Token(Token = "0x1700047F")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x4522100", Offset = "0x4522100", VA = "0x4522100", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x4521EF0", Offset = "0x4521EF0", VA = "0x4521EF0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x451B280", Offset = "0x451B280", VA = "0x451B280")]
	public Datatype_yearMonthDuration()
	{
	}
}
