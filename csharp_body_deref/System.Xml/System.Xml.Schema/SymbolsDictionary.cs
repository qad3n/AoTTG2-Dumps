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
		[Address(RVA = "0x4507B60", Offset = "0x4507B60", VA = "0x4507B60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000419")]
	public bool IsUpaEnforced
	{
		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0x4507B70", Offset = "0x4507B70", VA = "0x4507B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x4507B80", Offset = "0x4507B80", VA = "0x4507B80")]
		set
		{
		}
	}

	[Token(Token = "0x1700041A")]
	public int this[XmlQualifiedName name]
	{
		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x4508D30", Offset = "0x4508D30", VA = "0x4508D30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x4507AC0", Offset = "0x4507AC0", VA = "0x4507AC0")]
	public SymbolsDictionary()
	{
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x4507B90", Offset = "0x4507B90", VA = "0x4507B90")]
	public int AddName(XmlQualifiedName name, object particle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x4507CB0", Offset = "0x4507CB0", VA = "0x4507CB0")]
	public void AddNamespaceList(NamespaceList list, object particle, bool allowLocal)
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x45080D0", Offset = "0x45080D0", VA = "0x45080D0")]
	private void AddWildcard(string wildcard, object particle)
	{
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x4508250", Offset = "0x4508250", VA = "0x4508250")]
	public ICollection GetNamespaceListSymbols(NamespaceList list)
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x4508DC0", Offset = "0x4508DC0", VA = "0x4508DC0")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x4508DF0", Offset = "0x4508DF0", VA = "0x4508DF0")]
	public object GetParticle(int symbol)
	{
		return null;
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x4508E20", Offset = "0x4508E20", VA = "0x4508E20")]
	public string NameOf(int symbol)
	{
		return null;
	}
}
