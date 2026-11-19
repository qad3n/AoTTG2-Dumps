// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.OidCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E5")]
public sealed class OidCollection : ICollection, IEnumerable
{
	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Oid> _list;

	[Token(Token = "0x170000FE")]
	public Oid this[int index]
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x620A460", Offset = "0x6209460", VA = "0x620A460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public int Count
	{
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x620A4B0", Offset = "0x62094B0", VA = "0x620A4B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000100")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x620A810", Offset = "0x6209810", VA = "0x620A810", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	public object SyncRoot
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x620A820", Offset = "0x6209820", VA = "0x620A820", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x620A340", Offset = "0x6209340", VA = "0x620A340")]
	public OidCollection()
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x620A3C0", Offset = "0x62093C0", VA = "0x620A3C0")]
	public int Add(Oid oid)
	{
		return default(int);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x620A4F0", Offset = "0x62094F0", VA = "0x620A4F0")]
	public OidEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x620A590", Offset = "0x6209590", VA = "0x620A590", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x620A600", Offset = "0x6209600", VA = "0x620A600", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
