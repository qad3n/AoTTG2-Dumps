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
[Token(Token = "0x20000A6")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Match>))]
[DebuggerDisplay("Count = {Count}")]
public class MatchCollection : IList<Match>, ICollection<Match>, IEnumerable<Match>, IEnumerable, IReadOnlyList<Match>, IReadOnlyCollection<Match>, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x20000A7")]
	private sealed class Enumerator : IEnumerator<Match>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000292")]
		[FieldOffset(Offset = "0x10")]
		private readonly MatchCollection _collection;

		[Token(Token = "0x4000293")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x170000B1")]
		public Match Current
		{
			[Token(Token = "0x6000343")]
			[Address(RVA = "0x61E2120", Offset = "0x61E1120", VA = "0x61E2120", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000344")]
			[Address(RVA = "0x61E2190", Offset = "0x61E1190", VA = "0x61E2190", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000341")]
		[Address(RVA = "0x61E17D0", Offset = "0x61E07D0", VA = "0x61E17D0")]
		internal Enumerator(MatchCollection collection)
		{
		}

		[Token(Token = "0x6000342")]
		[Address(RVA = "0x61E20E0", Offset = "0x61E10E0", VA = "0x61E20E0", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000345")]
		[Address(RVA = "0x61E21A0", Offset = "0x61E11A0", VA = "0x61E21A0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000346")]
		[Address(RVA = "0x61E21B0", Offset = "0x61E11B0", VA = "0x61E21B0", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Regex _regex;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<Match> _matches;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x20")]
	private bool _done;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _input;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x30")]
	private readonly int _beginning;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x34")]
	private readonly int _length;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x38")]
	private int _startat;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x3C")]
	private int _prevlen;

	[Token(Token = "0x170000A9")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x61E14F0", Offset = "0x61E04F0", VA = "0x61E14F0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AA")]
	public int Count
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x61E1500", Offset = "0x61E0500", VA = "0x61E1500", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AB")]
	public virtual Match this[int i]
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x61E1580", Offset = "0x61E0580", VA = "0x61E1580", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AC")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000329")]
		[Address(RVA = "0x61E1870", Offset = "0x61E0870", VA = "0x61E1870", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AD")]
	public object SyncRoot
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x61E1880", Offset = "0x61E0880", VA = "0x61E1880", Slot = "33")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000AE")]
	[Token(Token = "0x6000330")]
	[Address(RVA = "0x61E1AF0", Offset = "0x61E0AF0", VA = "0x61E1AF0", Slot = "4")]
	private Match System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x61E1B10", Offset = "0x61E0B10", VA = "0x61E1B10", Slot = "5")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002Eset_Item(int index, Match value)
	{
	}

	[Token(Token = "0x170000AF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x61E1F90", Offset = "0x61E0F90", VA = "0x61E1F90", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000B0")]
	[Token(Token = "0x600033E")]
	[Address(RVA = "0x61E2040", Offset = "0x61E1040", VA = "0x61E2040", Slot = "20")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x61E2060", Offset = "0x61E1060", VA = "0x61E2060", Slot = "21")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x61E13B0", Offset = "0x61E03B0", VA = "0x61E13B0")]
	internal MatchCollection(Regex regex, string input, int beginning, int length, int startat)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x61E1760", Offset = "0x61E0760", VA = "0x61E1760", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x61E1800", Offset = "0x61E0800", VA = "0x61E1800", Slot = "16")]
	private IEnumerator<Match> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x61E15E0", Offset = "0x61E05E0", VA = "0x61E15E0")]
	private Match GetMatch(int i)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x61E1560", Offset = "0x61E0560", VA = "0x61E1560")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x61E1890", Offset = "0x61E0890", VA = "0x61E1890", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x61E1960", Offset = "0x61E0960", VA = "0x61E1960", Slot = "14")]
	public void CopyTo(Match[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x61E19E0", Offset = "0x61E09E0", VA = "0x61E19E0", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EIndexOf(Match item)
	{
		return default(int);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x61E1A50", Offset = "0x61E0A50", VA = "0x61E1A50", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EInsert(int index, Match item)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x61E1AA0", Offset = "0x61E0AA0", VA = "0x61E1AA0", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x61E1B60", Offset = "0x61E0B60", VA = "0x61E1B60", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EAdd(Match item)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x61E1BB0", Offset = "0x61E0BB0", VA = "0x61E1BB0", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EClear()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x61E1C00", Offset = "0x61E0C00", VA = "0x61E1C00", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EContains(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x61E1C70", Offset = "0x61E0C70", VA = "0x61E1C70", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemove(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x61E1CC0", Offset = "0x61E0CC0", VA = "0x61E1CC0", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x61E1D10", Offset = "0x61E0D10", VA = "0x61E1D10", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x61E1D60", Offset = "0x61E0D60", VA = "0x61E1D60", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x61E1E50", Offset = "0x61E0E50", VA = "0x61E1E50", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x61E1F40", Offset = "0x61E0F40", VA = "0x61E1F40", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x61E1FA0", Offset = "0x61E0FA0", VA = "0x61E1FA0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x61E1FF0", Offset = "0x61E0FF0", VA = "0x61E1FF0", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x61E20B0", Offset = "0x61E10B0", VA = "0x61E20B0")]
	internal MatchCollection()
	{
	}
}
