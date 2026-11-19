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
		[Address(RVA = "0x5FCA6C0", Offset = "0x5FC96C0", VA = "0x5FCA6C0")]
		get
		{
			return default(ListType);
		}
	}

	[Token(Token = "0x17000504")]
	public string Excluded
	{
		[Token(Token = "0x6001285")]
		[Address(RVA = "0x5FCA6D0", Offset = "0x5FC96D0", VA = "0x5FCA6D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	public ICollection Enumerate
	{
		[Token(Token = "0x6001286")]
		[Address(RVA = "0x5FCA6E0", Offset = "0x5FC96E0", VA = "0x5FCA6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x5FCA2E0", Offset = "0x5FC92E0", VA = "0x5FCA2E0")]
	public NamespaceList()
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x5FCA2F0", Offset = "0x5FC92F0", VA = "0x5FCA2F0")]
	public NamespaceList(string namespaces, string targetNamespace)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x5FCA590", Offset = "0x5FC9590", VA = "0x5FCA590")]
	public NamespaceList Clone()
	{
		return null;
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x5FCA750", Offset = "0x5FC9750", VA = "0x5FCA750", Slot = "4")]
	public virtual bool Allows(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x5FCA7D0", Offset = "0x5FC97D0", VA = "0x5FCA7D0")]
	public bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x5FCA800", Offset = "0x5FC9800", VA = "0x5FCA800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x5FCAD00", Offset = "0x5FC9D00", VA = "0x5FCAD00")]
	public static bool IsSubset(NamespaceList sub, NamespaceList super)
	{
		return default(bool);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x5FCB0F0", Offset = "0x5FCA0F0", VA = "0x5FCB0F0")]
	public static NamespaceList Union(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x5FCB6C0", Offset = "0x5FCA6C0", VA = "0x5FCB6C0")]
	private NamespaceList CompareSetToOther(NamespaceList other)
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x5FCB810", Offset = "0x5FCA810", VA = "0x5FCB810")]
	public static NamespaceList Intersection(NamespaceList o1, NamespaceList o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x5FCBE70", Offset = "0x5FCAE70", VA = "0x5FCBE70")]
	private void RemoveNamespace(string tns)
	{
	}
}
