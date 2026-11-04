// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XsdSimpleValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000433")]
	public object TypedValue
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public XsdSimpleValue(XmlSchemaSimpleType st, object value)
	{
	}
}
