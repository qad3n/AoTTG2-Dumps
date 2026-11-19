// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SymbolsDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000172")]
internal class SymbolsDictionary
{
	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x10")]
	private int last;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable names;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x20")]
	private Hashtable wildcards;

	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x28")]
	private ArrayList particles;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x30")]
	private object particleLast;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x38")]
	private bool isUpaEnforced;

	[Token(Token = "0x17000418")]
	public int Count
	{
		[Token(Token = "0x6000FC5")]
		[Address(RVA = "0x61443C0", Offset = "0x61433C0", VA = "0x61443C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000419")]
	public bool IsUpaEnforced
	{
		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0x61443D0", Offset = "0x61433D0", VA = "0x61443D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x61443E0", Offset = "0x61433E0", VA = "0x61443E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700041A")]
	public int this[XmlQualifiedName name]
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x6145230", Offset = "0x6144230", VA = "0x6145230")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x6144320", Offset = "0x6143320", VA = "0x6144320")]
	public SymbolsDictionary()
	{
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x61443F0", Offset = "0x61433F0", VA = "0x61443F0")]
	public int AddName(XmlQualifiedName name, object particle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x6144510", Offset = "0x6143510", VA = "0x6144510")]
	public void AddNamespaceList(NamespaceList list, object particle, bool allowLocal)
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x61448C0", Offset = "0x61438C0", VA = "0x61448C0")]
	private void AddWildcard(string wildcard, object particle)
	{
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x6144A40", Offset = "0x6143A40", VA = "0x6144A40")]
	public ICollection GetNamespaceListSymbols(NamespaceList list)
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x61452C0", Offset = "0x61442C0", VA = "0x61452C0")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x61452F0", Offset = "0x61442F0", VA = "0x61452F0")]
	public object GetParticle(int symbol)
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x6145320", Offset = "0x6144320", VA = "0x6145320")]
	public string NameOf(int symbol)
	{
		return null;
	}
}
