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
		[Address(RVA = "0x4836230", Offset = "0x4836230", VA = "0x4836230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C0")]
	internal TypeData TypeData
	{
		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x4839690", Offset = "0x4839690", VA = "0x4839690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C1")]
	internal string XmlType
	{
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x48396A0", Offset = "0x48396A0", VA = "0x48396A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x48396B0", Offset = "0x48396B0", VA = "0x48396B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C2")]
	internal string XmlTypeNamespace
	{
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x4830380", Offset = "0x4830380", VA = "0x4830380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x48396C0", Offset = "0x48396C0", VA = "0x48396C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C3")]
	internal bool HasXmlTypeNamespace
	{
		[Token(Token = "0x6000EDB")]
		[Address(RVA = "0x48396D0", Offset = "0x48396D0", VA = "0x48396D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C4")]
	internal ArrayList DerivedTypes
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x48396E0", Offset = "0x48396E0", VA = "0x48396E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C5")]
	internal bool MultiReferenceType
	{
		[Token(Token = "0x6000EDD")]
		[Address(RVA = "0x48396F0", Offset = "0x48396F0", VA = "0x48396F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C6")]
	internal XmlTypeMapping BaseMap
	{
		[Token(Token = "0x6000EDE")]
		[Address(RVA = "0x4839700", Offset = "0x4839700", VA = "0x4839700")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EDF")]
		[Address(RVA = "0x4839710", Offset = "0x4839710", VA = "0x4839710")]
		set
		{
		}
	}

	[Token(Token = "0x170003C7")]
	internal bool IncludeInSchema
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x4839720", Offset = "0x4839720", VA = "0x4839720")]
		set
		{
		}
	}

	[Token(Token = "0x170003C8")]
	internal bool IsNullable
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x4839730", Offset = "0x4839730", VA = "0x4839730")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x4839740", Offset = "0x4839740", VA = "0x4839740")]
		set
		{
		}
	}

	[Token(Token = "0x170003C9")]
	internal bool IsAny
	{
		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x4839750", Offset = "0x4839750", VA = "0x4839750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EE4")]
		[Address(RVA = "0x4839760", Offset = "0x4839760", VA = "0x4839760")]
		set
		{
		}
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x48395D0", Offset = "0x48395D0", VA = "0x48395D0")]
	internal XmlTypeMapping(string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x4830210", Offset = "0x4830210", VA = "0x4830210")]
	internal XmlTypeMapping GetRealTypeMap(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x4839770", Offset = "0x4839770", VA = "0x4839770")]
	internal XmlTypeMapping GetRealElementMap(string name, string ens)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4839B90", Offset = "0x4839B90", VA = "0x4839B90")]
	internal void UpdateRoot(XmlQualifiedName qname)
	{
	}
}
