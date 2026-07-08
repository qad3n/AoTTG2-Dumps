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
		[Address(RVA = "0x41F4180", Offset = "0x41F4180", VA = "0x41F4180", Slot = "9")]
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
		[Address(RVA = "0x41F4250", Offset = "0x41F4250", VA = "0x41F4250", Slot = "7")]
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
		[Address(RVA = "0x41F4310", Offset = "0x41F4310", VA = "0x41F4310", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	protected virtual ArrayList List
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x41F4320", Offset = "0x41F4320", VA = "0x41F4320", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x41F41C0", Offset = "0x41F41C0", VA = "0x41F41C0", Slot = "10")]
	public virtual void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x41F4210", Offset = "0x41F4210", VA = "0x41F4210", Slot = "11")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x41F4260", Offset = "0x41F4260", VA = "0x41F4260")]
	internal int NamesEqual(string s1, string s2, bool fCaseSensitive, CultureInfo locale)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x41F4330", Offset = "0x41F4330", VA = "0x41F4330")]
	public InternalDataCollectionBase()
	{
	}
}
