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
		[Address(RVA = "0x493C510", Offset = "0x493C510", VA = "0x493C510", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x493C540", Offset = "0x493C540", VA = "0x493C540", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013E")]
	public X509ChainElement this[int index]
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x493C570", Offset = "0x493C570", VA = "0x493C570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013F")]
	public object SyncRoot
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x493C600", Offset = "0x493C600", VA = "0x493C600", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x493C4A0", Offset = "0x493C4A0", VA = "0x493C4A0")]
	internal X509ChainElementCollection()
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x493C630", Offset = "0x493C630", VA = "0x493C630", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x493C660", Offset = "0x493C660", VA = "0x493C660")]
	public X509ChainElementEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x493C770", Offset = "0x493C770", VA = "0x493C770", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x493C7C0", Offset = "0x493C7C0", VA = "0x493C7C0")]
	internal void Add(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x493C870", Offset = "0x493C870", VA = "0x493C870")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x493C8A0", Offset = "0x493C8A0", VA = "0x493C8A0")]
	internal bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}
}
