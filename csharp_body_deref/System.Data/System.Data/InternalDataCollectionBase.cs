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

[Token(Token = "0x2000025")]
public class InternalDataCollectionBase : ICollection, IEnumerable
{
	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CollectionChangeEventArgs s_refreshEventArgs;

	[Token(Token = "0x17000077")]
	[Browsable(false)]
	public virtual int Count
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x5E8A500", Offset = "0x5E89500", VA = "0x5E8A500", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	[Browsable(false)]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000332")]
		[Address(RVA = "0x5E8A5D0", Offset = "0x5E895D0", VA = "0x5E8A5D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	[Browsable(false)]
	public object SyncRoot
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x5E8A690", Offset = "0x5E89690", VA = "0x5E8A690", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	protected virtual ArrayList List
	{
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x5E8A6A0", Offset = "0x5E896A0", VA = "0x5E8A6A0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x5E8A540", Offset = "0x5E89540", VA = "0x5E8A540", Slot = "10")]
	public virtual void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x5E8A590", Offset = "0x5E89590", VA = "0x5E8A590", Slot = "11")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x5E8A5E0", Offset = "0x5E895E0", VA = "0x5E8A5E0")]
	internal int NamesEqual(string s1, string s2, bool fCaseSensitive, CultureInfo locale)
	{
		return default(int);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x5E8A6B0", Offset = "0x5E896B0", VA = "0x5E8A6B0")]
	public InternalDataCollectionBase()
	{
	}
}
