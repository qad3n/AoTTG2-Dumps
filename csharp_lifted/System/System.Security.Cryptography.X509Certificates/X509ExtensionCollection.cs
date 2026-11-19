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

[Token(Token = "0x200010C")]
public sealed class X509ExtensionCollection : ICollection, IEnumerable
{
	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] Empty;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x17000161")]
	public int Count
	{
		[Token(Token = "0x600067A")]
		[Address(RVA = "0x621CC00", Offset = "0x621BC00", VA = "0x621CC00", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000162")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600067B")]
		[Address(RVA = "0x621CC30", Offset = "0x621BC30", VA = "0x621CC30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000163")]
	public object SyncRoot
	{
		[Token(Token = "0x600067C")]
		[Address(RVA = "0x621CC60", Offset = "0x621BC60", VA = "0x621CC60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public X509Extension this[string oid]
	{
		[Token(Token = "0x600067D")]
		[Address(RVA = "0x621CC70", Offset = "0x621BC70", VA = "0x621CC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x621CB90", Offset = "0x621BB90", VA = "0x621CB90")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x621D020", Offset = "0x621C020", VA = "0x621D020")]
	public int Add(X509Extension extension)
	{
		return default(int);
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x621D090", Offset = "0x621C090", VA = "0x621D090", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x621D180", Offset = "0x621C180", VA = "0x621D180")]
	public X509ExtensionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x621D250", Offset = "0x621C250", VA = "0x621D250", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
