// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaFacet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000229")]
public abstract class XmlSchemaFacet : XmlSchemaAnnotated
{
	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x50")]
	private string value;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x58")]
	private bool isFixed;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x5C")]
	private FacetType facetType;

	[Token(Token = "0x17000622")]
	[XmlAttribute("value")]
	public string Value
	{
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001659")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000623")]
	[XmlAttribute("fixed")]
	[DefaultValue(false)]
	public virtual bool IsFixed
	{
		[Token(Token = "0x600165A")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600165B")]
		[Address(RVA = "0x266C210", Offset = "0x266A810", VA = "0x18266C210", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000624")]
	internal FacetType FacetType
	{
		[Token(Token = "0x600165C")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(FacetType);
		}
		[Token(Token = "0x600165D")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		set
		{
		}
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlSchemaFacet()
	{
	}
}
