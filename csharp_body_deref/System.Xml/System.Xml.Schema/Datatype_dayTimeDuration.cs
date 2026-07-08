using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200019A")]
internal class Datatype_dayTimeDuration : Datatype_duration
{
	[Token(Token = "0x17000480")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010F0")]
		[Address(RVA = "0x4522320", Offset = "0x4522320", VA = "0x4522320", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x4522110", Offset = "0x4522110", VA = "0x4522110", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x451B0A0", Offset = "0x451B0A0", VA = "0x451B0A0")]
	public Datatype_dayTimeDuration()
	{
	}
}
