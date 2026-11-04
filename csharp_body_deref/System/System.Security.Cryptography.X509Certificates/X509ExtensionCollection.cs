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

[Token(Token = "0x200014B")]
public sealed class X509ExtensionCollection : ICollection, IEnumerable
{
	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] Empty;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x17000190")]
	public int Count
	{
		[Token(Token = "0x600083A")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000191")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600083B")]
		[Address(RVA = "0x1A1F360", Offset = "0x1A1D960", VA = "0x181A1F360", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	public object SyncRoot
	{
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000193")]
	public X509Extension this[string oid]
	{
		[Token(Token = "0x600083D")]
		[Address(RVA = "0x288F3F0", Offset = "0x288D9F0", VA = "0x18288F3F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x288F380", Offset = "0x288D980", VA = "0x18288F380")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x288F020", Offset = "0x288D620", VA = "0x18288F020")]
	public int Add(X509Extension extension)
	{
		return default(int);
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x288F130", Offset = "0x288D730", VA = "0x18288F130", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x288F0A0", Offset = "0x288D6A0", VA = "0x18288F0A0")]
	public X509ExtensionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x288F280", Offset = "0x288D880", VA = "0x18288F280", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
