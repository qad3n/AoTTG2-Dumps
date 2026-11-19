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
		[Address(RVA = "0x603A200", Offset = "0x6039200", VA = "0x603A200")]
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
		[Address(RVA = "0x603A210", Offset = "0x6039210", VA = "0x603A210")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001783")]
		[Address(RVA = "0x603A220", Offset = "0x6039220", VA = "0x603A220")]
		set
		{
		}
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x603A230", Offset = "0x6039230", VA = "0x603A230")]
	public XmlSchemaSubstitutionGroup()
	{
	}
}
