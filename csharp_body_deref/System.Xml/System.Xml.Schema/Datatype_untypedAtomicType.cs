// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_untypedAtomicType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000192")]
internal class Datatype_untypedAtomicType : Datatype_anyAtomicType
{
	[Token(Token = "0x1700045A")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010AA")]
		[Address(RVA = "0x485DE70", Offset = "0x485DE70", VA = "0x485DE70", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700045B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010AB")]
		[Address(RVA = "0x485DE80", Offset = "0x485DE80", VA = "0x485DE80", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x485DE00", Offset = "0x485DE00", VA = "0x485DE00", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x4858920", Offset = "0x4858920", VA = "0x4858920")]
	public Datatype_untypedAtomicType()
	{
	}
}
