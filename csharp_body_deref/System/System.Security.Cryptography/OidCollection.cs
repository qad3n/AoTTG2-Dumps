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

[Token(Token = "0x20000E4")]
public sealed class OidCollection : ICollection, IEnumerable
{
	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Oid> _list;

	[Token(Token = "0x170000F4")]
	public Oid this[int index]
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x492E950", Offset = "0x492E950", VA = "0x492E950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public int Count
	{
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x492E9A0", Offset = "0x492E9A0", VA = "0x492E9A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F6")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x492ED10", Offset = "0x492ED10", VA = "0x492ED10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F7")]
	public object SyncRoot
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x492ED20", Offset = "0x492ED20", VA = "0x492ED20", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x492E830", Offset = "0x492E830", VA = "0x492E830")]
	public OidCollection()
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x492E8B0", Offset = "0x492E8B0", VA = "0x492E8B0")]
	public int Add(Oid oid)
	{
		return default(int);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x492E9E0", Offset = "0x492E9E0", VA = "0x492E9E0")]
	public OidEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x492EA80", Offset = "0x492EA80", VA = "0x492EA80", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x492EAF0", Offset = "0x492EAF0", VA = "0x492EAF0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
