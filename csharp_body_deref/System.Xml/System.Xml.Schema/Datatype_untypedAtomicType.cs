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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700045B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010AB")]
		[Address(RVA = "0x1B2A120", Offset = "0x1B28720", VA = "0x181B2A120", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x27A2FB0", Offset = "0x27A15B0", VA = "0x1827A2FB0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x27A3000", Offset = "0x27A1600", VA = "0x1827A3000")]
	public Datatype_untypedAtomicType()
	{
	}
}
