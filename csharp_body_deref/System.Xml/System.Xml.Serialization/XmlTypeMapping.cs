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
		[Address(RVA = "0x44F8AD0", Offset = "0x44F8AD0", VA = "0x44F8AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C0")]
	internal TypeData TypeData
	{
		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x44FBF30", Offset = "0x44FBF30", VA = "0x44FBF30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C1")]
	internal string XmlType
	{
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x44FBF40", Offset = "0x44FBF40", VA = "0x44FBF40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x44FBF50", Offset = "0x44FBF50", VA = "0x44FBF50")]
		set
		{
		}
	}

	[Token(Token = "0x170003C2")]
	internal string XmlTypeNamespace
	{
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x44F2C20", Offset = "0x44F2C20", VA = "0x44F2C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x44FBF60", Offset = "0x44FBF60", VA = "0x44FBF60")]
		set
		{
		}
	}

	[Token(Token = "0x170003C3")]
	internal bool HasXmlTypeNamespace
	{
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x44FBF70", Offset = "0x44FBF70", VA = "0x44FBF70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C4")]
	internal ArrayList DerivedTypes
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x44FBF80", Offset = "0x44FBF80", VA = "0x44FBF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C5")]
	internal bool MultiReferenceType
	{
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x44FBF90", Offset = "0x44FBF90", VA = "0x44FBF90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C6")]
	internal XmlTypeMapping BaseMap
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x44FBFA0", Offset = "0x44FBFA0", VA = "0x44FBFA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x44FBFB0", Offset = "0x44FBFB0", VA = "0x44FBFB0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C7")]
	internal bool IncludeInSchema
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x44FBFC0", Offset = "0x44FBFC0", VA = "0x44FBFC0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C8")]
	internal bool IsNullable
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x44FBFD0", Offset = "0x44FBFD0", VA = "0x44FBFD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x44FBFE0", Offset = "0x44FBFE0", VA = "0x44FBFE0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C9")]
	internal bool IsAny
	{
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x44FBFF0", Offset = "0x44FBFF0", VA = "0x44FBFF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x44FC000", Offset = "0x44FC000", VA = "0x44FC000")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x44FBE70", Offset = "0x44FBE70", VA = "0x44FBE70")]
	internal XmlTypeMapping(string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x44F2AB0", Offset = "0x44F2AB0", VA = "0x44F2AB0")]
	internal XmlTypeMapping GetRealTypeMap(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x44FC010", Offset = "0x44FC010", VA = "0x44FC010")]
	internal XmlTypeMapping GetRealElementMap(string name, string ens)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x44FC430", Offset = "0x44FC430", VA = "0x44FC430")]
	internal void UpdateRoot(XmlQualifiedName qname)
	{
	}
}
