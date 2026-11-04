// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.BinaryFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D8")]
internal class BinaryFacetsChecker : FacetsChecker
{
	[Token(Token = "0x600124C")]
	[Address(RVA = "0x2603A60", Offset = "0x2602060", VA = "0x182603A60", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x2603B00", Offset = "0x2602100", VA = "0x182603B00", Slot = "14")]
	internal override Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x2603CE0", Offset = "0x26022E0", VA = "0x182603CE0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x2603E30", Offset = "0x2602430", VA = "0x182603E30")]
	private bool MatchEnumeration(byte[] value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public BinaryFacetsChecker()
	{
	}
}
