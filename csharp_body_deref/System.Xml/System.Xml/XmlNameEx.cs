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
		[Address(RVA = "0x47DAAF0", Offset = "0x47DAAF0", VA = "0x47DAAF0", Slot = "11")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x17000269")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x47DAB20", Offset = "0x47DAB20", VA = "0x47DAB20", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public override bool IsNil
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x47DAB30", Offset = "0x47DAB30", VA = "0x47DAB30", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public override XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x47DAB40", Offset = "0x47DAB40", VA = "0x47DAB40", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	public override XmlSchemaType SchemaType
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x47DAB50", Offset = "0x47DAB50", VA = "0x47DAB50", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	public override XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x47DAB60", Offset = "0x47DAB60", VA = "0x47DAB60", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	public override XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x47DABC0", Offset = "0x47DABC0", VA = "0x47DABC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x47DA490", Offset = "0x47DA490", VA = "0x47DA490")]
	internal XmlNameEx(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x47DAAA0", Offset = "0x47DAAA0", VA = "0x47DAAA0")]
	public void SetValidity(XmlSchemaValidity value)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x47DAAB0", Offset = "0x47DAAB0", VA = "0x47DAAB0")]
	public void SetIsDefault(bool value)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x47DAAD0", Offset = "0x47DAAD0", VA = "0x47DAAD0")]
	public void SetIsNil(bool value)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x47DAC20", Offset = "0x47DAC20", VA = "0x47DAC20", Slot = "18")]
	public override bool Equals(IXmlSchemaInfo schemaInfo)
	{
		return default(bool);
	}
}
