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
		[Address(RVA = "0x24FF140", Offset = "0x24FD740", VA = "0x1824FF140", Slot = "9")]
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
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
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
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	protected virtual ArrayList List
	{
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x24FEF40", Offset = "0x24FD540", VA = "0x1824FEF40", Slot = "10")]
	public virtual void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x24FEF90", Offset = "0x24FD590", VA = "0x1824FEF90", Slot = "11")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x24FEFD0", Offset = "0x24FD5D0", VA = "0x1824FEFD0")]
	internal int NamesEqual(string s1, string s2, bool fCaseSensitive, CultureInfo locale)
	{
		return default(int);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public InternalDataCollectionBase()
	{
	}
}
