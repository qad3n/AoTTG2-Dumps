using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Serializable]
[Token(Token = "0x20000A5")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Match>))]
public class MatchCollection : IList<Match>, ICollection<Match>, IEnumerable<Match>, IEnumerable, IReadOnlyList<Match>, IReadOnlyCollection<Match>, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x20000A6")]
	private sealed class Enumerator : IEnumerator<Match>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400028F")]
		[FieldOffset(Offset = "0x10")]
		private readonly MatchCollection _collection;

		[Token(Token = "0x4000290")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x170000A7")]
		public Match Current
		{
			[Token(Token = "0x600031D")]
			[Address(RVA = "0x45DFA70", Offset = "0x45DFA70", VA = "0x45DFA70", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600031E")]
			[Address(RVA = "0x45DFAE0", Offset = "0x45DFAE0", VA = "0x45DFAE0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600031B")]
		[Address(RVA = "0x45DF120", Offset = "0x45DF120", VA = "0x45DF120")]
		internal Enumerator(MatchCollection collection)
		{
		}

		[Token(Token = "0x600031C")]
		[Address(RVA = "0x45DFA30", Offset = "0x45DFA30", VA = "0x45DFA30", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600031F")]
		[Address(RVA = "0x45DFAF0", Offset = "0x45DFAF0", VA = "0x45DFAF0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000320")]
		[Address(RVA = "0x45DFB00", Offset = "0x45DFB00", VA = "0x45DFB00", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x10")]
	private readonly Regex _regex;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<Match> _matches;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x20")]
	private bool _done;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _input;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x30")]
	private readonly int _beginning;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x34")]
	private readonly int _length;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x38")]
	private int _startat;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x3C")]
	private int _prevlen;

	[Token(Token = "0x1700009F")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x45DEE50", Offset = "0x45DEE50", VA = "0x45DEE50", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	public int Count
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x45DEE60", Offset = "0x45DEE60", VA = "0x45DEE60", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public virtual Match this[int i]
	{
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x45DEED0", Offset = "0x45DEED0", VA = "0x45DEED0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x45DF1C0", Offset = "0x45DF1C0", VA = "0x45DF1C0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	public object SyncRoot
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x45DF1D0", Offset = "0x45DF1D0", VA = "0x45DF1D0", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	private Match System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EItem
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x45DF440", Offset = "0x45DF440", VA = "0x45DF440", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x45DF460", Offset = "0x45DF460", VA = "0x45DF460", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x45DF8E0", Offset = "0x45DF8E0", VA = "0x45DF8E0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x45DF990", Offset = "0x45DF990", VA = "0x45DF990", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x45DF9B0", Offset = "0x45DF9B0", VA = "0x45DF9B0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x45DED10", Offset = "0x45DED10", VA = "0x45DED10")]
	internal MatchCollection(Regex regex, string input, int beginning, int length, int startat)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x45DF0B0", Offset = "0x45DF0B0", VA = "0x45DF0B0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x45DF150", Offset = "0x45DF150", VA = "0x45DF150", Slot = "16")]
	private IEnumerator<Match> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x45DEF30", Offset = "0x45DEF30", VA = "0x45DEF30")]
	private Match GetMatch(int i)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x45DEEC0", Offset = "0x45DEEC0", VA = "0x45DEEC0")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x45DF1E0", Offset = "0x45DF1E0", VA = "0x45DF1E0", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x45DF2B0", Offset = "0x45DF2B0", VA = "0x45DF2B0", Slot = "14")]
	public void CopyTo(Match[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x45DF330", Offset = "0x45DF330", VA = "0x45DF330", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EIndexOf(Match item)
	{
		return default(int);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x45DF3A0", Offset = "0x45DF3A0", VA = "0x45DF3A0", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EInsert(int index, Match item)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x45DF3F0", Offset = "0x45DF3F0", VA = "0x45DF3F0", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x45DF4B0", Offset = "0x45DF4B0", VA = "0x45DF4B0", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EAdd(Match item)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x45DF500", Offset = "0x45DF500", VA = "0x45DF500", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EClear()
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x45DF550", Offset = "0x45DF550", VA = "0x45DF550", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EContains(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x45DF5C0", Offset = "0x45DF5C0", VA = "0x45DF5C0", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemove(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x45DF610", Offset = "0x45DF610", VA = "0x45DF610", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x45DF660", Offset = "0x45DF660", VA = "0x45DF660", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x45DF6B0", Offset = "0x45DF6B0", VA = "0x45DF6B0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x45DF7A0", Offset = "0x45DF7A0", VA = "0x45DF7A0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x45DF890", Offset = "0x45DF890", VA = "0x45DF890", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x45DF8F0", Offset = "0x45DF8F0", VA = "0x45DF8F0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x45DF940", Offset = "0x45DF940", VA = "0x45DF940", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x45DFA00", Offset = "0x45DFA00", VA = "0x45DFA00")]
	internal MatchCollection()
	{
	}
}
