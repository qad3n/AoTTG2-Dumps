// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSubstitutionGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025B")]
internal class XmlSchemaSubstitutionGroup : XmlSchemaObject
{
	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList membersList;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x40")]
	private XmlQualifiedName examplar;

	[Token(Token = "0x1700068C")]
	[XmlIgnore]
	internal ArrayList Members
	{
		[Token(Token = "0x6001781")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068D")]
	[XmlIgnore]
	internal XmlQualifiedName Examplar
	{
		[Token(Token = "0x6001782")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001783")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x267F730", Offset = "0x267DD30", VA = "0x18267F730")]
	public XmlSchemaSubstitutionGroup()
	{
	}
}
