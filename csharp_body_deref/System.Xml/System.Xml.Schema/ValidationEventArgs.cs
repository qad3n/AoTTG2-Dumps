using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F8")]
public class ValidationEventArgs : EventArgs
{
	[Token(Token = "0x4000A63")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaException ex;

	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x18")]
	private XmlSeverityType severity;

	[Token(Token = "0x17000569")]
	public XmlSeverityType Severity
	{
		[Token(Token = "0x600143D")]
		[Address(RVA = "0x43CE9B0", Offset = "0x43CE9B0", VA = "0x43CE9B0")]
		get
		{
			return default(XmlSeverityType);
		}
	}

	[Token(Token = "0x1700056A")]
	public XmlSchemaException Exception
	{
		[Token(Token = "0x600143E")]
		[Address(RVA = "0x43CE9C0", Offset = "0x43CE9C0", VA = "0x43CE9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x43CE8D0", Offset = "0x43CE8D0", VA = "0x43CE8D0")]
	internal ValidationEventArgs(XmlSchemaException ex)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x43CE940", Offset = "0x43CE940", VA = "0x43CE940")]
	internal ValidationEventArgs(XmlSchemaException ex, XmlSeverityType severity)
	{
	}
}
