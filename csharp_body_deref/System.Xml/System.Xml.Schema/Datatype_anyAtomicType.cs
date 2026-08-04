// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_anyAtomicType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000191")]
internal class Datatype_anyAtomicType : Datatype_anySimpleType
{
	[Token(Token = "0x17000458")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x485DDE0", Offset = "0x485DDE0", VA = "0x485DDE0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000459")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010A7")]
		[Address(RVA = "0x485DDF0", Offset = "0x485DDF0", VA = "0x485DDF0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x485DD70", Offset = "0x485DD70", VA = "0x485DD70", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x4858740", Offset = "0x4858740", VA = "0x4858740")]
	public Datatype_anyAtomicType()
	{
	}
}
