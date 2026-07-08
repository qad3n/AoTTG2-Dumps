using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F5")]
internal sealed class SchemaNotation
{
	[Token(Token = "0x4000A4E")]
	[FieldOffset(Offset = "0x10")]
	private XmlQualifiedName name;

	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x18")]
	private string systemLiteral;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x20")]
	private string pubid;

	[Token(Token = "0x17000566")]
	internal XmlQualifiedName Name
	{
		[Token(Token = "0x60013EB")]
		[Address(RVA = "0x43B4B00", Offset = "0x43B4B00", VA = "0x43B4B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	internal string SystemLiteral
	{
		[Token(Token = "0x60013EC")]
		[Address(RVA = "0x43B4B10", Offset = "0x43B4B10", VA = "0x43B4B10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013ED")]
		[Address(RVA = "0x43B4B20", Offset = "0x43B4B20", VA = "0x43B4B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000568")]
	internal string Pubid
	{
		[Token(Token = "0x60013EE")]
		[Address(RVA = "0x43B4B30", Offset = "0x43B4B30", VA = "0x43B4B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013EF")]
		[Address(RVA = "0x43B4B40", Offset = "0x43B4B40", VA = "0x43B4B40")]
		set
		{
		}
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x43B4AD0", Offset = "0x43B4AD0", VA = "0x43B4AD0")]
	internal SchemaNotation(XmlQualifiedName name)
	{
	}
}
