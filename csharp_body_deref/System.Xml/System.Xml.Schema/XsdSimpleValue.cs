using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000188")]
internal class XsdSimpleValue
{
	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaSimpleType xmlType;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x18")]
	private object typedValue;

	[Token(Token = "0x17000432")]
	public XmlSchemaSimpleType XmlType
	{
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x4511A00", Offset = "0x4511A00", VA = "0x4511A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000433")]
	public object TypedValue
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x4511A10", Offset = "0x4511A10", VA = "0x4511A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x45119C0", Offset = "0x45119C0", VA = "0x45119C0")]
	public XsdSimpleValue(XmlSchemaSimpleType st, object value)
	{
	}
}
