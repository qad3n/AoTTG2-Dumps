// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.ClassMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000154")]
internal class ClassMap : ObjectMap
{
	[Token(Token = "0x40006FA")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable _elements;

	[Token(Token = "0x40006FB")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList _elementMembers;

	[Token(Token = "0x40006FC")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable _attributeMembers;

	[Token(Token = "0x40006FD")]
	[FieldOffset(Offset = "0x28")]
	private XmlTypeMapMemberAttribute[] _attributeMembersArray;

	[Token(Token = "0x40006FE")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _flatLists;

	[Token(Token = "0x40006FF")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList _allMembers;

	[Token(Token = "0x4000700")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _membersWithDefault;

	[Token(Token = "0x4000701")]
	[FieldOffset(Offset = "0x48")]
	private ArrayList _listMembers;

	[Token(Token = "0x4000702")]
	[FieldOffset(Offset = "0x50")]
	private XmlTypeMapMemberAnyElement _defaultAnyElement;

	[Token(Token = "0x4000703")]
	[FieldOffset(Offset = "0x58")]
	private XmlTypeMapMemberAnyAttribute _defaultAnyAttribute;

	[Token(Token = "0x4000704")]
	[FieldOffset(Offset = "0x60")]
	private XmlTypeMapMemberNamespaces _namespaceDeclarations;

	[Token(Token = "0x4000705")]
	[FieldOffset(Offset = "0x68")]
	private XmlTypeMapMember _xmlTextCollector;

	[Token(Token = "0x4000706")]
	[FieldOffset(Offset = "0x70")]
	private XmlTypeMapMember _returnMember;

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x78")]
	private bool _ignoreMemberNamespace;

	[Token(Token = "0x4000708")]
	[FieldOffset(Offset = "0x79")]
	private bool _canBeSimpleType;

	[Token(Token = "0x4000709")]
	[FieldOffset(Offset = "0x7A")]
	private bool? _isOrderDependentMap;

	[Token(Token = "0x170003CA")]
	public bool IsOrderDependentMap
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x277C100", Offset = "0x277A700", VA = "0x18277C100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CB")]
	public XmlTypeMapMemberAnyElement DefaultAnyElementMember
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CC")]
	public XmlTypeMapMemberAnyAttribute DefaultAnyAttributeMember
	{
		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	public XmlTypeMapMemberNamespaces NamespaceDeclarations
	{
		[Token(Token = "0x6000EF2")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	public ICollection AttributeMembers
	{
		[Token(Token = "0x6000EF3")]
		[Address(RVA = "0x277BD80", Offset = "0x277A380", VA = "0x18277BD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CF")]
	public ICollection ElementMembers
	{
		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D0")]
	public ArrayList AllMembers
	{
		[Token(Token = "0x6000EF5")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public ArrayList FlatLists
	{
		[Token(Token = "0x6000EF6")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	public ArrayList ListMembers
	{
		[Token(Token = "0x6000EF7")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D3")]
	public XmlTypeMapMember XmlTextCollector
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D4")]
	public XmlTypeMapMember ReturnMember
	{
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D5")]
	public XmlQualifiedName SimpleContentBaseType
	{
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x277C370", Offset = "0x277A970", VA = "0x18277C370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D6")]
	public bool HasSimpleContent
	{
		[Token(Token = "0x6000EFC")]
		[Address(RVA = "0x277C0A0", Offset = "0x277A6A0", VA = "0x18277C0A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x277A8F0", Offset = "0x2778EF0", VA = "0x18277A8F0")]
	public void AddMember(XmlTypeMapMember member)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x277BC20", Offset = "0x277A220", VA = "0x18277BC20")]
	private void RegisterFlatList(XmlTypeMapMemberExpandable member)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x277B620", Offset = "0x2779C20", VA = "0x18277B620")]
	public XmlTypeMapMemberAttribute GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x277B770", Offset = "0x2779D70", VA = "0x18277B770")]
	public XmlTypeMapElementInfo GetElement(string name, string ns, int minimalOrder)
	{
		return null;
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x277BA20", Offset = "0x277A020", VA = "0x18277BA20")]
	public XmlTypeMapElementInfo GetElement(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x277B550", Offset = "0x2779B50", VA = "0x18277B550")]
	private string BuildKey(string name, string ns, int explicitOrder)
	{
		return null;
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x1D2B790", Offset = "0x1D29D90", VA = "0x181D2B790")]
	public void SetCanBeSimpleType(bool can)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x277BCE0", Offset = "0x277A2E0", VA = "0x18277BCE0")]
	public ClassMap()
	{
	}
}
