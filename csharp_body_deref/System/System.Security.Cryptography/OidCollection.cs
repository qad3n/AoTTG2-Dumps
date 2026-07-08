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
		[Address(RVA = "0x4609850", Offset = "0x4609850", VA = "0x4609850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public int Count
	{
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x46098A0", Offset = "0x46098A0", VA = "0x46098A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F6")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x4609C10", Offset = "0x4609C10", VA = "0x4609C10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F7")]
	public object SyncRoot
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x4609C20", Offset = "0x4609C20", VA = "0x4609C20", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4609730", Offset = "0x4609730", VA = "0x4609730")]
	public OidCollection()
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x46097B0", Offset = "0x46097B0", VA = "0x46097B0")]
	public int Add(Oid oid)
	{
		return default(int);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x46098E0", Offset = "0x46098E0", VA = "0x46098E0")]
	public OidEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4609980", Offset = "0x4609980", VA = "0x4609980", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x46099F0", Offset = "0x46099F0", VA = "0x46099F0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
