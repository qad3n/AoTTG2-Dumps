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
		[Address(RVA = "0x61358B0", Offset = "0x61348B0", VA = "0x61358B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C0")]
	internal TypeData TypeData
	{
		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x6138AF0", Offset = "0x6137AF0", VA = "0x6138AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C1")]
	internal string XmlType
	{
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x6138B00", Offset = "0x6137B00", VA = "0x6138B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x6138B10", Offset = "0x6137B10", VA = "0x6138B10")]
		set
		{
		}
	}

	[Token(Token = "0x170003C2")]
	internal string XmlTypeNamespace
	{
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x612FFE0", Offset = "0x612EFE0", VA = "0x612FFE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x6138B20", Offset = "0x6137B20", VA = "0x6138B20")]
		set
		{
		}
	}

	[Token(Token = "0x170003C3")]
	internal bool HasXmlTypeNamespace
	{
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x6138B30", Offset = "0x6137B30", VA = "0x6138B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C4")]
	internal ArrayList DerivedTypes
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x6138B40", Offset = "0x6137B40", VA = "0x6138B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C5")]
	internal bool MultiReferenceType
	{
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x6138B50", Offset = "0x6137B50", VA = "0x6138B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C6")]
	internal XmlTypeMapping BaseMap
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x6138B60", Offset = "0x6137B60", VA = "0x6138B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x6138B70", Offset = "0x6137B70", VA = "0x6138B70")]
		set
		{
		}
	}

	[Token(Token = "0x170003C7")]
	internal bool IncludeInSchema
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x6138B80", Offset = "0x6137B80", VA = "0x6138B80")]
		set
		{
		}
	}

	[Token(Token = "0x170003C8")]
	internal bool IsNullable
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x6138B90", Offset = "0x6137B90", VA = "0x6138B90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x6138BA0", Offset = "0x6137BA0", VA = "0x6138BA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C9")]
	internal bool IsAny
	{
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x6138BB0", Offset = "0x6137BB0", VA = "0x6138BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x6138BC0", Offset = "0x6137BC0", VA = "0x6138BC0")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x6138A30", Offset = "0x6137A30", VA = "0x6138A30")]
	internal XmlTypeMapping(string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x612FE70", Offset = "0x612EE70", VA = "0x612FE70")]
	internal XmlTypeMapping GetRealTypeMap(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x6138BD0", Offset = "0x6137BD0", VA = "0x6138BD0")]
	internal XmlTypeMapping GetRealElementMap(string name, string ens)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x6138F60", Offset = "0x6137F60", VA = "0x6138F60")]
	internal void UpdateRoot(XmlQualifiedName qname)
	{
	}
}
