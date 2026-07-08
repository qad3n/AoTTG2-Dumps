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
		[Address(RVA = "0x44FE830", Offset = "0x44FE830", VA = "0x44FE830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CB")]
	public XmlTypeMapMemberAnyElement DefaultAnyElementMember
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x44FEC80", Offset = "0x44FEC80", VA = "0x44FEC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CC")]
	public XmlTypeMapMemberAnyAttribute DefaultAnyAttributeMember
	{
		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x44FEC90", Offset = "0x44FEC90", VA = "0x44FEC90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	public XmlTypeMapMemberNamespaces NamespaceDeclarations
	{
		[Token(Token = "0x6000EF2")]
		[Address(RVA = "0x44FECA0", Offset = "0x44FECA0", VA = "0x44FECA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	public ICollection AttributeMembers
	{
		[Token(Token = "0x6000EF3")]
		[Address(RVA = "0x44F46F0", Offset = "0x44F46F0", VA = "0x44F46F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CF")]
	public ICollection ElementMembers
	{
		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x44FECB0", Offset = "0x44FECB0", VA = "0x44FECB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D0")]
	public ArrayList AllMembers
	{
		[Token(Token = "0x6000EF5")]
		[Address(RVA = "0x44FECC0", Offset = "0x44FECC0", VA = "0x44FECC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public ArrayList FlatLists
	{
		[Token(Token = "0x6000EF6")]
		[Address(RVA = "0x44FECD0", Offset = "0x44FECD0", VA = "0x44FECD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	public ArrayList ListMembers
	{
		[Token(Token = "0x6000EF7")]
		[Address(RVA = "0x44FECE0", Offset = "0x44FECE0", VA = "0x44FECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D3")]
	public XmlTypeMapMember XmlTextCollector
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x44FECF0", Offset = "0x44FECF0", VA = "0x44FECF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D4")]
	public XmlTypeMapMember ReturnMember
	{
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x44FED00", Offset = "0x44FED00", VA = "0x44FED00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D5")]
	public XmlQualifiedName SimpleContentBaseType
	{
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x44FED10", Offset = "0x44FED10", VA = "0x44FED10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D6")]
	public bool HasSimpleContent
	{
		[Token(Token = "0x6000EFC")]
		[Address(RVA = "0x44FF010", Offset = "0x44FF010", VA = "0x44FF010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x44FCD60", Offset = "0x44FCD60", VA = "0x44FCD60")]
	public void AddMember(XmlTypeMapMember member)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x44FDC70", Offset = "0x44FDC70", VA = "0x44FDC70")]
	private void RegisterFlatList(XmlTypeMapMemberExpandable member)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x44FDD20", Offset = "0x44FDD20", VA = "0x44FDD20")]
	public XmlTypeMapMemberAttribute GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x44FDE20", Offset = "0x44FDE20", VA = "0x44FDE20")]
	public XmlTypeMapElementInfo GetElement(string name, string ns, int minimalOrder)
	{
		return null;
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x44FE3F0", Offset = "0x44FE3F0", VA = "0x44FE3F0")]
	public XmlTypeMapElementInfo GetElement(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x44FDBB0", Offset = "0x44FDBB0", VA = "0x44FDBB0")]
	private string BuildKey(string name, string ns, int explicitOrder)
	{
		return null;
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x44FF000", Offset = "0x44FF000", VA = "0x44FF000")]
	public void SetCanBeSimpleType(bool can)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x44FF060", Offset = "0x44FF060", VA = "0x44FF060")]
	public ClassMap()
	{
	}
}
