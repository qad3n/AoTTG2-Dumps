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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000459")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010A7")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x279B380", Offset = "0x2799980", VA = "0x18279B380", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x279B3D0", Offset = "0x27999D0", VA = "0x18279B3D0")]
	public Datatype_anyAtomicType()
	{
	}
}
