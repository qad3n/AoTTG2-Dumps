// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.InternalDataCollectionBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000005")]
public class InternalDataCollectionBase : ICollection, IEnumerable
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CollectionChangeEventArgs s_refreshEventArgs;

	[Token(Token = "0x17000001")]
	[Browsable(false)]
	public virtual int Count
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x45318E0", Offset = "0x45318E0", VA = "0x45318E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	[Browsable(false)]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x45319B0", Offset = "0x45319B0", VA = "0x45319B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	[Browsable(false)]
	public object SyncRoot
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4531A70", Offset = "0x4531A70", VA = "0x4531A70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	protected virtual ArrayList List
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4531A80", Offset = "0x4531A80", VA = "0x4531A80", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4531920", Offset = "0x4531920", VA = "0x4531920", Slot = "10")]
	public virtual void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4531970", Offset = "0x4531970", VA = "0x4531970", Slot = "11")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x45319C0", Offset = "0x45319C0", VA = "0x45319C0")]
	internal int NamesEqual(string s1, string s2, bool fCaseSensitive, CultureInfo locale)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4531A90", Offset = "0x4531A90", VA = "0x4531A90")]
	public InternalDataCollectionBase()
	{
	}
}
