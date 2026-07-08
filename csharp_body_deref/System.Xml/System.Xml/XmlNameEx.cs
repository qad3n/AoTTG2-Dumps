using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000AB")]
internal sealed class XmlNameEx : XmlName
{
	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x48")]
	private byte flags;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaSimpleType memberType;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaType schemaType;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x60")]
	private object decl;

	[Token(Token = "0x17000268")]
	public override XmlSchemaValidity Validity
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x449D390", Offset = "0x449D390", VA = "0x449D390", Slot = "11")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x17000269")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x449D3C0", Offset = "0x449D3C0", VA = "0x449D3C0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public override bool IsNil
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x449D3D0", Offset = "0x449D3D0", VA = "0x449D3D0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public override XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x449D3E0", Offset = "0x449D3E0", VA = "0x449D3E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	public override XmlSchemaType SchemaType
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x449D3F0", Offset = "0x449D3F0", VA = "0x449D3F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	public override XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x449D400", Offset = "0x449D400", VA = "0x449D400", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	public override XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x449D460", Offset = "0x449D460", VA = "0x449D460", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x449CD30", Offset = "0x449CD30", VA = "0x449CD30")]
	internal XmlNameEx(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x449D340", Offset = "0x449D340", VA = "0x449D340")]
	public void SetValidity(XmlSchemaValidity value)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x449D350", Offset = "0x449D350", VA = "0x449D350")]
	public void SetIsDefault(bool value)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x449D370", Offset = "0x449D370", VA = "0x449D370")]
	public void SetIsNil(bool value)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x449D4C0", Offset = "0x449D4C0", VA = "0x449D4C0", Slot = "18")]
	public override bool Equals(IXmlSchemaInfo schemaInfo)
	{
		return default(bool);
	}
}
