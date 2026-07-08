using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010B")]
public sealed class X509ExtensionCollection : ICollection, IEnumerable
{
	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] Empty;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x17000157")]
	public int Count
	{
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x461D260", Offset = "0x461D260", VA = "0x461D260", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x461D290", Offset = "0x461D290", VA = "0x461D290", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public object SyncRoot
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x461D2C0", Offset = "0x461D2C0", VA = "0x461D2C0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public X509Extension this[string oid]
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x461D2D0", Offset = "0x461D2D0", VA = "0x461D2D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x461D1F0", Offset = "0x461D1F0", VA = "0x461D1F0")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x461D740", Offset = "0x461D740", VA = "0x461D740")]
	public int Add(X509Extension extension)
	{
		return default(int);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x461D7B0", Offset = "0x461D7B0", VA = "0x461D7B0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x461D8A0", Offset = "0x461D8A0", VA = "0x461D8A0")]
	public X509ExtensionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x461D970", Offset = "0x461D970", VA = "0x461D970", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
