// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNameEx
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x27321B0", Offset = "0x27307B0", VA = "0x1827321B0", Slot = "11")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x17000269")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x2732090", Offset = "0x2730690", VA = "0x182732090", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public override bool IsNil
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x27320A0", Offset = "0x27306A0", VA = "0x1827320A0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public override XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	public override XmlSchemaType SchemaType
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	public override XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x2732130", Offset = "0x2730730", VA = "0x182732130", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	public override XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x27320B0", Offset = "0x27306B0", VA = "0x1827320B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x2731EF0", Offset = "0x27304F0", VA = "0x182731EF0")]
	internal XmlNameEx(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x2731EE0", Offset = "0x27304E0", VA = "0x182731EE0")]
	public void SetValidity(XmlSchemaValidity value)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x2731E80", Offset = "0x2730480", VA = "0x182731E80")]
	public void SetIsDefault(bool value)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x2731EB0", Offset = "0x27304B0", VA = "0x182731EB0")]
	public void SetIsNil(bool value)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x2731C70", Offset = "0x2730270", VA = "0x182731C70", Slot = "18")]
	public override bool Equals(IXmlSchemaInfo schemaInfo)
	{
		return default(bool);
	}
}
