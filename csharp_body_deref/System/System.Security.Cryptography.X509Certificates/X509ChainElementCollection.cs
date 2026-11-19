// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000104")]
public sealed class X509ChainElementCollection : ICollection, IEnumerable
{
	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x17000146")]
	public int Count
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x62172B0", Offset = "0x62162B0", VA = "0x62172B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000147")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x62172E0", Offset = "0x62162E0", VA = "0x62172E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000148")]
	public X509ChainElement this[int index]
	{
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x6217310", Offset = "0x6216310", VA = "0x6217310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	public object SyncRoot
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x62173A0", Offset = "0x62163A0", VA = "0x62173A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x6217240", Offset = "0x6216240", VA = "0x6217240")]
	internal X509ChainElementCollection()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x62173D0", Offset = "0x62163D0", VA = "0x62173D0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x6217400", Offset = "0x6216400", VA = "0x6217400")]
	public X509ChainElementEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x6217510", Offset = "0x6216510", VA = "0x6217510", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x6217560", Offset = "0x6216560", VA = "0x6217560")]
	internal void Add(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x6217610", Offset = "0x6216610", VA = "0x6217610")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x6217640", Offset = "0x6216640", VA = "0x6217640")]
	internal bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}
}
