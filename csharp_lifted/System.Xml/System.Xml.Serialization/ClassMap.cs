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
		[Address(RVA = "0x613B050", Offset = "0x613A050", VA = "0x613B050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CB")]
	public XmlTypeMapMemberAnyElement DefaultAnyElementMember
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x613B450", Offset = "0x613A450", VA = "0x613B450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CC")]
	public XmlTypeMapMemberAnyAttribute DefaultAnyAttributeMember
	{
		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x613B460", Offset = "0x613A460", VA = "0x613B460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	public XmlTypeMapMemberNamespaces NamespaceDeclarations
	{
		[Token(Token = "0x6000EF2")]
		[Address(RVA = "0x613B470", Offset = "0x613A470", VA = "0x613B470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	public ICollection AttributeMembers
	{
		[Token(Token = "0x6000EF3")]
		[Address(RVA = "0x6131980", Offset = "0x6130980", VA = "0x6131980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CF")]
	public ICollection ElementMembers
	{
		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x613B480", Offset = "0x613A480", VA = "0x613B480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D0")]
	public ArrayList AllMembers
	{
		[Token(Token = "0x6000EF5")]
		[Address(RVA = "0x613B490", Offset = "0x613A490", VA = "0x613B490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D1")]
	public ArrayList FlatLists
	{
		[Token(Token = "0x6000EF6")]
		[Address(RVA = "0x613B4A0", Offset = "0x613A4A0", VA = "0x613B4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	public ArrayList ListMembers
	{
		[Token(Token = "0x6000EF7")]
		[Address(RVA = "0x613B4B0", Offset = "0x613A4B0", VA = "0x613B4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D3")]
	public XmlTypeMapMember XmlTextCollector
	{
		[Token(Token = "0x6000EF8")]
		[Address(RVA = "0x613B4C0", Offset = "0x613A4C0", VA = "0x613B4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D4")]
	public XmlTypeMapMember ReturnMember
	{
		[Token(Token = "0x6000EF9")]
		[Address(RVA = "0x613B4D0", Offset = "0x613A4D0", VA = "0x613B4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D5")]
	public XmlQualifiedName SimpleContentBaseType
	{
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x613B4E0", Offset = "0x613A4E0", VA = "0x613B4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D6")]
	public bool HasSimpleContent
	{
		[Token(Token = "0x6000EFC")]
		[Address(RVA = "0x613B790", Offset = "0x613A790", VA = "0x613B790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x6139910", Offset = "0x6138910", VA = "0x6139910")]
	public void AddMember(XmlTypeMapMember member)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x613A6F0", Offset = "0x61396F0", VA = "0x613A6F0")]
	private void RegisterFlatList(XmlTypeMapMemberExpandable member)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x613A7A0", Offset = "0x61397A0", VA = "0x613A7A0")]
	public XmlTypeMapMemberAttribute GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x613A8A0", Offset = "0x61398A0", VA = "0x613A8A0")]
	public XmlTypeMapElementInfo GetElement(string name, string ns, int minimalOrder)
	{
		return null;
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x613ACA0", Offset = "0x6139CA0", VA = "0x613ACA0")]
	public XmlTypeMapElementInfo GetElement(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x613A630", Offset = "0x6139630", VA = "0x613A630")]
	private string BuildKey(string name, string ns, int explicitOrder)
	{
		return null;
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x613B780", Offset = "0x613A780", VA = "0x613B780")]
	public void SetCanBeSimpleType(bool can)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x613B7E0", Offset = "0x613A7E0", VA = "0x613B7E0")]
	public ClassMap()
	{
	}
}
