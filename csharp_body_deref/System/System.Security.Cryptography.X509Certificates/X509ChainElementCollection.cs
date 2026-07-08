using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000103")]
public sealed class X509ChainElementCollection : ICollection, IEnumerable
{
	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x1700013C")]
	public int Count
	{
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x4617410", Offset = "0x4617410", VA = "0x4617410", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x4617440", Offset = "0x4617440", VA = "0x4617440", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public X509ChainElement this[int index]
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x4617470", Offset = "0x4617470", VA = "0x4617470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	public object SyncRoot
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x4617500", Offset = "0x4617500", VA = "0x4617500", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x46173A0", Offset = "0x46173A0", VA = "0x46173A0")]
	internal X509ChainElementCollection()
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4617530", Offset = "0x4617530", VA = "0x4617530", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4617560", Offset = "0x4617560", VA = "0x4617560")]
	public X509ChainElementEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4617670", Offset = "0x4617670", VA = "0x4617670", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x46176C0", Offset = "0x46176C0", VA = "0x46176C0")]
	internal void Add(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4617770", Offset = "0x4617770", VA = "0x4617770")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x46177A0", Offset = "0x46177A0", VA = "0x46177A0")]
	internal bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}
}
