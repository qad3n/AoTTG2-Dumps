// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.GroupCollection
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
[Token(Token = "0x20000A2")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Group>))]
public class GroupCollection : IList<Group>, ICollection<Group>, IEnumerable<Group>, IEnumerable, IReadOnlyList<Group>, IReadOnlyCollection<Group>, IList, ICollection
{
	[Token(Token = "0x20000A3")]
	private sealed class Enumerator : IEnumerator<Group>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x10")]
		private readonly GroupCollection _collection;

		[Token(Token = "0x400027E")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x170000A4")]
		public Group Current
		{
			[Token(Token = "0x600030B")]
			[Address(RVA = "0x61E0210", Offset = "0x61DF210", VA = "0x61E0210", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600030C")]
			[Address(RVA = "0x61E0290", Offset = "0x61DF290", VA = "0x61E0290", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000309")]
		[Address(RVA = "0x61DF410", Offset = "0x61DE410", VA = "0x61DF410")]
		internal Enumerator(GroupCollection collection)
		{
		}

		[Token(Token = "0x600030A")]
		[Address(RVA = "0x61E01D0", Offset = "0x61DF1D0", VA = "0x61E01D0", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600030D")]
		[Address(RVA = "0x61E02A0", Offset = "0x61DF2A0", VA = "0x61E02A0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600030E")]
		[Address(RVA = "0x61E02B0", Offset = "0x61DF2B0", VA = "0x61E02B0", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Match _match;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x18")]
	private readonly Hashtable _captureMap;

	[Token(Token = "0x400027C")]
	[FieldOffset(Offset = "0x20")]
	private Group[] _groups;

	[Token(Token = "0x1700009B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x61DF0C0", Offset = "0x61DE0C0", VA = "0x61DF0C0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009C")]
	public int Count
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x61DF0D0", Offset = "0x61DE0D0", VA = "0x61DF0D0", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009D")]
	public Group this[int groupnum]
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x61DF0F0", Offset = "0x61DE0F0", VA = "0x61DF0F0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public Group this[string groupname]
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x61DF1F0", Offset = "0x61DE1F0", VA = "0x61DF1F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x61DF7D0", Offset = "0x61DE7D0", VA = "0x61DF7D0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A0")]
	public object SyncRoot
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x61DF7E0", Offset = "0x61DE7E0", VA = "0x61DF7E0", Slot = "33")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000A1")]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x61DFBC0", Offset = "0x61DEBC0", VA = "0x61DFBC0", Slot = "4")]
	private Group System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x61DFBD0", Offset = "0x61DEBD0", VA = "0x61DFBD0", Slot = "5")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002Eset_Item(int index, Group value)
	{
	}

	[Token(Token = "0x170000A2")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x61E0090", Offset = "0x61DF090", VA = "0x61E0090", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000A3")]
	[Token(Token = "0x6000306")]
	[Address(RVA = "0x61E0140", Offset = "0x61DF140", VA = "0x61E0140", Slot = "20")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x61E0150", Offset = "0x61DF150", VA = "0x61E0150", Slot = "21")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x61DF080", Offset = "0x61DE080", VA = "0x61DF080")]
	internal GroupCollection(Match match, Hashtable caps)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x61DF3A0", Offset = "0x61DE3A0", VA = "0x61DF3A0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x61DF440", Offset = "0x61DE440", VA = "0x61DF440", Slot = "16")]
	private IEnumerator<Group> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x61DF100", Offset = "0x61DE100", VA = "0x61DF100")]
	private Group GetGroup(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x61DF4B0", Offset = "0x61DE4B0", VA = "0x61DF4B0")]
	private Group GetGroupImpl(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x61DF7F0", Offset = "0x61DE7F0", VA = "0x61DF7F0", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x61DF8B0", Offset = "0x61DE8B0", VA = "0x61DF8B0", Slot = "14")]
	public void CopyTo(Group[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x61DFA50", Offset = "0x61DEA50", VA = "0x61DFA50", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EIndexOf(Group item)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x61DFB20", Offset = "0x61DEB20", VA = "0x61DFB20", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EInsert(int index, Group item)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x61DFB70", Offset = "0x61DEB70", VA = "0x61DFB70", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x61DFC20", Offset = "0x61DEC20", VA = "0x61DFC20", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EAdd(Group item)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x61DFC70", Offset = "0x61DEC70", VA = "0x61DFC70", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EClear()
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x61DFCC0", Offset = "0x61DECC0", VA = "0x61DFCC0", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EContains(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x61DFD70", Offset = "0x61DED70", VA = "0x61DFD70", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemove(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x61DFDC0", Offset = "0x61DEDC0", VA = "0x61DFDC0", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x61DFE10", Offset = "0x61DEE10", VA = "0x61DFE10", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x61DFE60", Offset = "0x61DEE60", VA = "0x61DFE60", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x61DFF50", Offset = "0x61DEF50", VA = "0x61DFF50", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x61E0040", Offset = "0x61DF040", VA = "0x61E0040", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x61E00A0", Offset = "0x61DF0A0", VA = "0x61E00A0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x61E00F0", Offset = "0x61DF0F0", VA = "0x61E00F0", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x61E01A0", Offset = "0x61DF1A0", VA = "0x61E01A0")]
	internal GroupCollection()
	{
	}
}
