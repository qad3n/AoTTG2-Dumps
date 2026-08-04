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
[Token(Token = "0x20000A1")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Group>))]
public class GroupCollection : IList<Group>, ICollection<Group>, IEnumerable<Group>, IEnumerable, IReadOnlyList<Group>, IReadOnlyCollection<Group>, IList, ICollection
{
	[Token(Token = "0x20000A2")]
	private sealed class Enumerator : IEnumerator<Group>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400027A")]
		[FieldOffset(Offset = "0x10")]
		private readonly GroupCollection _collection;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x1700009A")]
		public Group Current
		{
			[Token(Token = "0x60002E5")]
			[Address(RVA = "0x4902CA0", Offset = "0x4902CA0", VA = "0x4902CA0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002E6")]
			[Address(RVA = "0x4902D20", Offset = "0x4902D20", VA = "0x4902D20", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x4901E60", Offset = "0x4901E60", VA = "0x4901E60")]
		internal Enumerator(GroupCollection collection)
		{
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x4902C60", Offset = "0x4902C60", VA = "0x4902C60", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x4902D30", Offset = "0x4902D30", VA = "0x4902D30", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x4902D40", Offset = "0x4902D40", VA = "0x4902D40", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x10")]
	private readonly Match _match;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x18")]
	private readonly Hashtable _captureMap;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x20")]
	private Group[] _groups;

	[Token(Token = "0x17000091")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x4901B10", Offset = "0x4901B10", VA = "0x4901B10", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000092")]
	public int Count
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4901B20", Offset = "0x4901B20", VA = "0x4901B20", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000093")]
	public Group this[int groupnum]
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4901B40", Offset = "0x4901B40", VA = "0x4901B40", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	public Group this[string groupname]
	{
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4901C40", Offset = "0x4901C40", VA = "0x4901C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000095")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4902270", Offset = "0x4902270", VA = "0x4902270", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000096")]
	public object SyncRoot
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4902280", Offset = "0x4902280", VA = "0x4902280", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000097")]
	private Group System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EItem
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x4902650", Offset = "0x4902650", VA = "0x4902650", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x4902660", Offset = "0x4902660", VA = "0x4902660", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4902B20", Offset = "0x4902B20", VA = "0x4902B20", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4902BD0", Offset = "0x4902BD0", VA = "0x4902BD0", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4902BE0", Offset = "0x4902BE0", VA = "0x4902BE0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4901AD0", Offset = "0x4901AD0", VA = "0x4901AD0")]
	internal GroupCollection(Match match, Hashtable caps)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4901DF0", Offset = "0x4901DF0", VA = "0x4901DF0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4901E90", Offset = "0x4901E90", VA = "0x4901E90", Slot = "16")]
	private IEnumerator<Group> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4901B50", Offset = "0x4901B50", VA = "0x4901B50")]
	private Group GetGroup(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4901F00", Offset = "0x4901F00", VA = "0x4901F00")]
	private Group GetGroupImpl(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4902290", Offset = "0x4902290", VA = "0x4902290", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4902350", Offset = "0x4902350", VA = "0x4902350", Slot = "14")]
	public void CopyTo(Group[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x49024E0", Offset = "0x49024E0", VA = "0x49024E0", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EIndexOf(Group item)
	{
		return default(int);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x49025B0", Offset = "0x49025B0", VA = "0x49025B0", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EInsert(int index, Group item)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4902600", Offset = "0x4902600", VA = "0x4902600", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x49026B0", Offset = "0x49026B0", VA = "0x49026B0", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EAdd(Group item)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4902700", Offset = "0x4902700", VA = "0x4902700", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EClear()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4902750", Offset = "0x4902750", VA = "0x4902750", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EContains(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4902800", Offset = "0x4902800", VA = "0x4902800", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemove(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4902850", Offset = "0x4902850", VA = "0x4902850", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x49028A0", Offset = "0x49028A0", VA = "0x49028A0", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x49028F0", Offset = "0x49028F0", VA = "0x49028F0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x49029E0", Offset = "0x49029E0", VA = "0x49029E0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4902AD0", Offset = "0x4902AD0", VA = "0x4902AD0", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4902B30", Offset = "0x4902B30", VA = "0x4902B30", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4902B80", Offset = "0x4902B80", VA = "0x4902B80", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x4902C30", Offset = "0x4902C30", VA = "0x4902C30")]
	internal GroupCollection()
	{
	}
}
