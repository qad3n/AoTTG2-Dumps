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

[Token(Token = "0x2000143")]
public sealed class X509ChainElementCollection : ICollection, IEnumerable
{
	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x17000175")]
	public int Count
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000176")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x1A1F360", Offset = "0x1A1D960", VA = "0x181A1F360", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public X509ChainElement this[int index]
	{
		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x2888340", Offset = "0x2886940", VA = "0x182888340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public object SyncRoot
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x1AB84F0", Offset = "0x1AB6AF0", VA = "0x181AB84F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x28882D0", Offset = "0x28868D0", VA = "0x1828882D0")]
	internal X509ChainElementCollection()
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x1AB84C0", Offset = "0x1AB6AC0", VA = "0x181AB84C0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x2888190", Offset = "0x2886790", VA = "0x182888190")]
	public X509ChainElementEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x2888230", Offset = "0x2886830", VA = "0x182888230", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x2887FC0", Offset = "0x28865C0", VA = "0x182887FC0")]
	internal void Add(X509Certificate2 certificate)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x2547410", Offset = "0x2545A10", VA = "0x182547410")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x2888070", Offset = "0x2886670", VA = "0x182888070")]
	internal bool Contains(X509Certificate2 certificate)
	{
		return default(bool);
	}
}
