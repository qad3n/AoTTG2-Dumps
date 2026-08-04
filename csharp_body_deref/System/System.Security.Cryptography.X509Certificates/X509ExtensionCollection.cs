// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ExtensionCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4942360", Offset = "0x4942360", VA = "0x4942360", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x4942390", Offset = "0x4942390", VA = "0x4942390", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public object SyncRoot
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x49423C0", Offset = "0x49423C0", VA = "0x49423C0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public X509Extension this[string oid]
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x49423D0", Offset = "0x49423D0", VA = "0x49423D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x49422F0", Offset = "0x49422F0", VA = "0x49422F0")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4942840", Offset = "0x4942840", VA = "0x4942840")]
	public int Add(X509Extension extension)
	{
		return default(int);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x49428B0", Offset = "0x49428B0", VA = "0x49428B0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x49429A0", Offset = "0x49429A0", VA = "0x49429A0")]
	public X509ExtensionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x4942A70", Offset = "0x4942A70", VA = "0x4942A70", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
