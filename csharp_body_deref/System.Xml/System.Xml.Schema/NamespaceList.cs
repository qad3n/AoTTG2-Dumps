using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001DF")]
internal class NamespaceList
{
	[Token(Token = "0x20001E0")]
	public enum ListType
	{
		[Token(Token = "0x40008AD")]
		Any,
		[Token(Token = "0x40008AE")]
		Other,
		[Token(Token = "0x40008AF")]
		Set
	}

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0x10")]
	private ListType type;

	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable set;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x20")]
	private string targetNamespace;

	[Token(Token = "0x17000503")]
	public ListType Type
	{
		[Token(Token = "0x6001284")]
		[Address(RVA = "0x437BDA0", Offset = "0x437BDA0", VA = "0x437BDA0")]
		get
		{
			return default(ListType);
		}
	}

	[Token(Token = "0x17000504")]
	public string Excluded
	{
		[Token(Token = "0x6001285")]
		[Address(RVA = "0x437BDB0", Offset = "0x437BDB0", VA = "0x437BDB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	public ICollection Enumerate
	{
		[Token(Token = "0x6001286")]
		[Address(RVA = "0x437BDC0", Offset = "0x437BDC0", VA = "0x437BDC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x437B9B0", Offset = "0x437B9B0", VA = "0x437B9B0")]
	public NamespaceList()
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x437B9C0", Offset = "0x437B9C0", VA = "0x437B9C0")]
	public NamespaceList(string namespaces, string targetNamespace)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x437BC70", Offset = "0x437BC70", VA = "0x437BC70")]
	public NamespaceList Clone()
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x437BE30", Offset = "0x437BE30", VA = "0x437BE30", Slot = "4")]
	public virtual bool Allows(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x437BEB0", Offset = "0x437BEB0", VA = "0x437BEB0")]
	public bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x437BEE0", Offset = "0x437BEE0", VA = "0x437BEE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x437C4F0", Offset = "0x437C4F0", VA = "0x437C4F0")]
	public static bool IsSubset(NamespaceList sub, NamespaceList super)
	{
		return default(bool);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x437C950", Offset = "0x437C950", VA = "0x437C950")]
	public static NamespaceList Union(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x437D0E0", Offset = "0x437D0E0", VA = "0x437D0E0")]
	private NamespaceList CompareSetToOther(NamespaceList other)
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x437D200", Offset = "0x437D200", VA = "0x437D200")]
	public static NamespaceList Intersection(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x437D8E0", Offset = "0x437D8E0", VA = "0x437D8E0")]
	private void RemoveNamespace(string tns)
	{
	}
}
