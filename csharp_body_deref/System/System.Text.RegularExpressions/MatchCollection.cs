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
[Token(Token = "0x20000E5")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Match>))]
[DebuggerDisplay("Count = {Count}")]
public class MatchCollection : IList<Match>, ICollection<Match>, IEnumerable<Match>, IEnumerable, IReadOnlyList<Match>, IReadOnlyCollection<Match>, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x20000E6")]
	private sealed class Enumerator : IEnumerator<Match>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000361")]
		[FieldOffset(Offset = "0x10")]
		private readonly MatchCollection _collection;

		[Token(Token = "0x4000362")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x170000E0")]
		public Match Current
		{
			[Token(Token = "0x60004F7")]
			[Address(RVA = "0x284AA90", Offset = "0x2849090", VA = "0x18284AA90", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004F8")]
			[Address(RVA = "0x284AA90", Offset = "0x2849090", VA = "0x18284AA90", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x1A7BE00", Offset = "0x1A7A400", VA = "0x181A7BE00")]
		internal Enumerator(MatchCollection collection)
		{
		}

		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x284A910", Offset = "0x2848F10", VA = "0x18284A910", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x10")]
	private readonly Regex _regex;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<Match> _matches;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x20")]
	private bool _done;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _input;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x30")]
	private readonly int _beginning;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x34")]
	private readonly int _length;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x38")]
	private int _startat;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x3C")]
	private int _prevlen;

	[Token(Token = "0x170000D8")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public int Count
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x284D2C0", Offset = "0x284B8C0", VA = "0x18284D2C0", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DA")]
	public virtual Match this[int i]
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x284D320", Offset = "0x284B920", VA = "0x18284D320", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	public object SyncRoot
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "33")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<System.Text.RegularExpressions.Match>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000DD")]
	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x284CC80", Offset = "0x284B280", VA = "0x18284CC80", Slot = "4")]
	private Match System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x284CCA0", Offset = "0x284B2A0", VA = "0x18284CCA0", Slot = "5")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002Eset_Item(int index, Match value)
	{
	}

	[Token(Token = "0x170000DE")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000DF")]
	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x284CC80", Offset = "0x284B280", VA = "0x18284CC80", Slot = "20")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x284D100", Offset = "0x284B700", VA = "0x18284D100", Slot = "21")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x284D180", Offset = "0x284B780", VA = "0x18284D180")]
	internal MatchCollection(Regex regex, string input, int beginning, int length, int startat)
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x284C7A0", Offset = "0x284ADA0", VA = "0x18284C7A0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x284CB00", Offset = "0x284B100", VA = "0x18284CB00", Slot = "16")]
	private IEnumerator<Match> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x284C810", Offset = "0x284AE10", VA = "0x18284C810")]
	private Match GetMatch(int i)
	{
		return null;
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x284C780", Offset = "0x284AD80", VA = "0x18284C780")]
	private void EnsureInitialized()
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x284C690", Offset = "0x284AC90", VA = "0x18284C690", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x284C610", Offset = "0x284AC10", VA = "0x18284C610", Slot = "14")]
	public void CopyTo(Match[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x284CB70", Offset = "0x284B170", VA = "0x18284CB70", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EIndexOf(Match item)
	{
		return default(int);
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x284CBE0", Offset = "0x284B1E0", VA = "0x18284CBE0", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EInsert(int index, Match item)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x284CC30", Offset = "0x284B230", VA = "0x18284CC30", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x284C9A0", Offset = "0x284AFA0", VA = "0x18284C9A0", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EAdd(Match item)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x284C9F0", Offset = "0x284AFF0", VA = "0x18284C9F0", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EClear()
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x284CA40", Offset = "0x284B040", VA = "0x18284CA40", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002EContains(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x284CAB0", Offset = "0x284B0B0", VA = "0x18284CAB0", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EMatch_003E_002ERemove(Match item)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x284CCF0", Offset = "0x284B2F0", VA = "0x18284CCF0", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x284CD40", Offset = "0x284B340", VA = "0x18284CD40", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x284CD90", Offset = "0x284B390", VA = "0x18284CD90", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x284CED0", Offset = "0x284B4D0", VA = "0x18284CED0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x284D010", Offset = "0x284B610", VA = "0x18284D010", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x284D0B0", Offset = "0x284B6B0", VA = "0x18284D0B0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x284D060", Offset = "0x284B660", VA = "0x18284D060", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x284D150", Offset = "0x284B750", VA = "0x18284D150")]
	internal MatchCollection()
	{
	}
}
