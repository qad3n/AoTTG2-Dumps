// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.MatchCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x4904B70", Offset = "0x4904B70", VA = "0x4904B70", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600031E")]
			[Address(RVA = "0x4904BE0", Offset = "0x4904BE0", VA = "0x4904BE0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600031B")]
		[Address(RVA = "0x4904220", Offset = "0x4904220", VA = "0x4904220")]
		internal Enumerator(MatchCollection collection)
		{
		}

		[Token(Token = "0x600031C")]
		[Address(RVA = "0x4904B30", Offset = "0x4904B30", VA = "0x4904B30", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600031F")]
		[Address(RVA = "0x4904BF0", Offset = "0x4904BF0", VA = "0x4904BF0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000320")]
		[Address(RVA = "0x4904C00", Offset = "0x4904C00", VA = "0x4904C00", Slot = "5")]
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
		[Address(RVA = "0x4903F50", Offset = "0x4903F50", VA = "0x4903F50", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	public int Count
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x4903F60", Offset = "0x4903F60", VA = "0x4903F60", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public virtual Match this[int i]
	{
		[Token(Token = "0x60002FE")]
		[Address(RVA = "0x4903FD0", Offset = "0x4903FD0", VA = "0x4903FD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x49042C0", Offset = "0x49042C0", VA = "0x49042C0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	public object SyncRoot
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x49042D0", Offset = "0x49042D0", VA = "0x49042D0", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	private Match System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EItem
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x4904540", Offset = "0x4904540", VA = "0x4904540", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x4904560", Offset = "0x4904560", VA = "0x4904560", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x49049E0", Offset = "0x49049E0", VA = "0x49049E0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x4904A90", Offset = "0x4904A90", VA = "0x4904A90", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x4904AB0", Offset = "0x4904AB0", VA = "0x4904AB0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4903E10", Offset = "0x4903E10", VA = "0x4903E10")]
	internal MatchCollection(Regex regex, string input, int beginning, int length, int startat)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x49041B0", Offset = "0x49041B0", VA = "0x49041B0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4904250", Offset = "0x4904250", VA = "0x4904250", Slot = "16")]
	private IEnumerator<Match> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4904030", Offset = "0x4904030", VA = "0x4904030")]
	private Match GetMatch(int i)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4903FC0", Offset = "0x4903FC0", VA = "0x4903FC0")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x49042E0", Offset = "0x49042E0", VA = "0x49042E0", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x49043B0", Offset = "0x49043B0", VA = "0x49043B0", Slot = "14")]
	public void CopyTo(Match[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4904430", Offset = "0x4904430", VA = "0x4904430", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EIndexOf(Match item)
	{
		return default(int);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x49044A0", Offset = "0x49044A0", VA = "0x49044A0", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EInsert(int index, Match item)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x49044F0", Offset = "0x49044F0", VA = "0x49044F0", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x49045B0", Offset = "0x49045B0", VA = "0x49045B0", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EAdd(Match item)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4904600", Offset = "0x4904600", VA = "0x4904600", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EClear()
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4904650", Offset = "0x4904650", VA = "0x4904650", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EContains(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x49046C0", Offset = "0x49046C0", VA = "0x49046C0", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemove(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4904710", Offset = "0x4904710", VA = "0x4904710", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4904760", Offset = "0x4904760", VA = "0x4904760", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x49047B0", Offset = "0x49047B0", VA = "0x49047B0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x49048A0", Offset = "0x49048A0", VA = "0x49048A0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4904990", Offset = "0x4904990", VA = "0x4904990", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x49049F0", Offset = "0x49049F0", VA = "0x49049F0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4904A40", Offset = "0x4904A40", VA = "0x4904A40", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4904B00", Offset = "0x4904B00", VA = "0x4904B00")]
	internal MatchCollection()
	{
	}
}
