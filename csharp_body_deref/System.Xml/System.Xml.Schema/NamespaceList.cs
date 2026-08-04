// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.NamespaceList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x46B9500", Offset = "0x46B9500", VA = "0x46B9500")]
		get
		{
			return default(ListType);
		}
	}

	[Token(Token = "0x17000504")]
	public string Excluded
	{
		[Token(Token = "0x6001285")]
		[Address(RVA = "0x46B9510", Offset = "0x46B9510", VA = "0x46B9510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	public ICollection Enumerate
	{
		[Token(Token = "0x6001286")]
		[Address(RVA = "0x46B9520", Offset = "0x46B9520", VA = "0x46B9520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x46B9110", Offset = "0x46B9110", VA = "0x46B9110")]
	public NamespaceList()
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x46B9120", Offset = "0x46B9120", VA = "0x46B9120")]
	public NamespaceList(string namespaces, string targetNamespace)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x46B93D0", Offset = "0x46B93D0", VA = "0x46B93D0")]
	public NamespaceList Clone()
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x46B9590", Offset = "0x46B9590", VA = "0x46B9590", Slot = "4")]
	public virtual bool Allows(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x46B9610", Offset = "0x46B9610", VA = "0x46B9610")]
	public bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x46B9640", Offset = "0x46B9640", VA = "0x46B9640", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x46B9C50", Offset = "0x46B9C50", VA = "0x46B9C50")]
	public static bool IsSubset(NamespaceList sub, NamespaceList super)
	{
		return default(bool);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x46BA0B0", Offset = "0x46BA0B0", VA = "0x46BA0B0")]
	public static NamespaceList Union(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x46BA840", Offset = "0x46BA840", VA = "0x46BA840")]
	private NamespaceList CompareSetToOther(NamespaceList other)
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x46BA960", Offset = "0x46BA960", VA = "0x46BA960")]
	public static NamespaceList Intersection(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x46BB040", Offset = "0x46BB040", VA = "0x46BB040")]
	private void RemoveNamespace(string tns)
	{
	}
}
