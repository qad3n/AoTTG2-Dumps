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
		[Address(RVA = "0x60DD8F0", Offset = "0x60DC8F0", VA = "0x60DD8F0", Slot = "11")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x17000269")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x60DD920", Offset = "0x60DC920", VA = "0x60DD920", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public override bool IsNil
	{
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x60DD930", Offset = "0x60DC930", VA = "0x60DD930", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026B")]
	public override XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x60DD940", Offset = "0x60DC940", VA = "0x60DD940", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026C")]
	public override XmlSchemaType SchemaType
	{
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x60DD950", Offset = "0x60DC950", VA = "0x60DD950", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	public override XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x60DD960", Offset = "0x60DC960", VA = "0x60DD960", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026E")]
	public override XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x60DD9C0", Offset = "0x60DC9C0", VA = "0x60DD9C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x60DD2A0", Offset = "0x60DC2A0", VA = "0x60DD2A0")]
	internal XmlNameEx(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x60DD8A0", Offset = "0x60DC8A0", VA = "0x60DD8A0")]
	public void SetValidity(XmlSchemaValidity value)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x60DD8B0", Offset = "0x60DC8B0", VA = "0x60DD8B0")]
	public void SetIsDefault(bool value)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x60DD8D0", Offset = "0x60DC8D0", VA = "0x60DD8D0")]
	public void SetIsNil(bool value)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x60DDA20", Offset = "0x60DCA20", VA = "0x60DDA20", Slot = "18")]
	public override bool Equals(IXmlSchemaInfo schemaInfo)
	{
		return default(bool);
	}
}
