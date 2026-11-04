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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(ListType);
		}
	}

	[Token(Token = "0x17000504")]
	public string Excluded
	{
		[Token(Token = "0x6001285")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	public ICollection Enumerate
	{
		[Token(Token = "0x6001286")]
		[Address(RVA = "0x2605740", Offset = "0x2603D40", VA = "0x182605740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public NamespaceList()
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x2605490", Offset = "0x2603A90", VA = "0x182605490")]
	public NamespaceList(string namespaces, string targetNamespace)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x2604370", Offset = "0x2602970", VA = "0x182604370")]
	public NamespaceList Clone()
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x26042C0", Offset = "0x26028C0", VA = "0x1826042C0", Slot = "4")]
	public virtual bool Allows(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x2604340", Offset = "0x2602940", VA = "0x182604340")]
	public bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x2604CC0", Offset = "0x26032C0", VA = "0x182604CC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x2604A10", Offset = "0x2603010", VA = "0x182604A10")]
	public static bool IsSubset(NamespaceList sub, NamespaceList super)
	{
		return default(bool);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x2605060", Offset = "0x2603660", VA = "0x182605060")]
	public static NamespaceList Union(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x26044C0", Offset = "0x2602AC0", VA = "0x1826044C0")]
	private NamespaceList CompareSetToOther(NamespaceList other)
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x2604600", Offset = "0x2602C00", VA = "0x182604600")]
	public static NamespaceList Intersection(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x2604C60", Offset = "0x2603260", VA = "0x182604C60")]
	private void RemoveNamespace(string tns)
	{
	}
}
