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

[Token(Token = "0x2000124")]
public sealed class OidCollection : ICollection, IEnumerable
{
	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Oid> _list;

	[Token(Token = "0x1700012D")]
	public Oid this[int index]
	{
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x287EAA0", Offset = "0x287D0A0", VA = "0x18287EAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public int Count
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x287EA60", Offset = "0x287D060", VA = "0x18287EA60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012F")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600071C")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000130")]
	public object SyncRoot
	{
		[Token(Token = "0x600071D")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x287E9E0", Offset = "0x287CFE0", VA = "0x18287E9E0")]
	public OidCollection()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x287E660", Offset = "0x287CC60", VA = "0x18287E660")]
	public int Add(Oid oid)
	{
		return default(int);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x287E740", Offset = "0x287CD40", VA = "0x18287E740")]
	public OidEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x287E740", Offset = "0x287CD40", VA = "0x18287E740", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x287E7B0", Offset = "0x287CDB0", VA = "0x18287E7B0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
