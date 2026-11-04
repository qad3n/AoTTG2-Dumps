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
		[Address(RVA = "0x2785F80", Offset = "0x2784580", VA = "0x182785F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000419")]
	public bool IsUpaEnforced
	{
		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		set
		{
		}
	}

	[Token(Token = "0x1700041A")]
	public int this[XmlQualifiedName name]
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x2785F90", Offset = "0x2784590", VA = "0x182785F90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x2785EE0", Offset = "0x27844E0", VA = "0x182785EE0")]
	public SymbolsDictionary()
	{
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x2784F20", Offset = "0x2783520", VA = "0x182784F20")]
	public int AddName(XmlQualifiedName name, object particle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x2785030", Offset = "0x2783630", VA = "0x182785030")]
	public void AddNamespaceList(NamespaceList list, object particle, bool allowLocal)
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x27852A0", Offset = "0x27838A0", VA = "0x1827852A0")]
	private void AddWildcard(string wildcard, object particle)
	{
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x2785440", Offset = "0x2783A40", VA = "0x182785440")]
	public ICollection GetNamespaceListSymbols(NamespaceList list)
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x2785410", Offset = "0x2783A10", VA = "0x182785410")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x2785A70", Offset = "0x2784070", VA = "0x182785A70")]
	public object GetParticle(int symbol)
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x2785AB0", Offset = "0x27840B0", VA = "0x182785AB0")]
	public string NameOf(int symbol)
	{
		return null;
	}
}
