// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlTypeMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000152")]
public class XmlTypeMapping : XmlMapping
{
	[Token(Token = "0x40006EE")]
	[FieldOffset(Offset = "0x48")]
	private string xmlType;

	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x50")]
	private string xmlTypeNamespace;

	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x58")]
	private TypeData type;

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x60")]
	private XmlTypeMapping baseMap;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x68")]
	private bool multiReferenceType;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x69")]
	private bool includeInSchema;

	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x6A")]
	private bool isNullable;

	[Token(Token = "0x40006F5")]
	[FieldOffset(Offset = "0x6B")]
	private bool isAny;

	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x70")]
	private ArrayList _derivedTypes;

	[Token(Token = "0x170003BF")]
	public string TypeFullName
	{
		[Token(Token = "0x6000ED5")]
		[Address(RVA = "0x21477F0", Offset = "0x2145DF0", VA = "0x1821477F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C0")]
	internal TypeData TypeData
	{
		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C1")]
	internal string XmlType
	{
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x170003C2")]
	internal string XmlTypeNamespace
	{
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x278F400", Offset = "0x278DA00", VA = "0x18278F400")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C3")]
	internal bool HasXmlTypeNamespace
	{
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x1D94490", Offset = "0x1D92A90", VA = "0x181D94490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C4")]
	internal ArrayList DerivedTypes
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C5")]
	internal bool MultiReferenceType
	{
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C6")]
	internal XmlTypeMapping BaseMap
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C7")]
	internal bool IncludeInSchema
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x12BF1C0", Offset = "0x12BD7C0", VA = "0x1812BF1C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C8")]
	internal bool IsNullable
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x26EDC80", Offset = "0x26EC280", VA = "0x1826EDC80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x26EE020", Offset = "0x26EC620", VA = "0x1826EE020")]
		set
		{
		}
	}

	[Token(Token = "0x170003C9")]
	internal bool IsAny
	{
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x1D90450", Offset = "0x1D8EA50", VA = "0x181D90450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x278F420", Offset = "0x278DA20", VA = "0x18278F420")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x278F350", Offset = "0x278D950", VA = "0x18278F350")]
	internal XmlTypeMapping(string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x278F120", Offset = "0x278D720", VA = "0x18278F120")]
	internal XmlTypeMapping GetRealTypeMap(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x278EEF0", Offset = "0x278D4F0", VA = "0x18278EEF0")]
	internal XmlTypeMapping GetRealElementMap(string name, string ens)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x278F2C0", Offset = "0x278D8C0", VA = "0x18278F2C0")]
	internal void UpdateRoot(XmlQualifiedName qname)
	{
	}
}
