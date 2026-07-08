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
			[Address(RVA = "0x45DDBA0", Offset = "0x45DDBA0", VA = "0x45DDBA0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700009B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002E6")]
			[Address(RVA = "0x45DDC20", Offset = "0x45DDC20", VA = "0x45DDC20", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x45DCD60", Offset = "0x45DCD60", VA = "0x45DCD60")]
		internal Enumerator(GroupCollection collection)
		{
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x45DDB60", Offset = "0x45DDB60", VA = "0x45DDB60", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x45DDC30", Offset = "0x45DDC30", VA = "0x45DDC30", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x45DDC40", Offset = "0x45DDC40", VA = "0x45DDC40", Slot = "5")]
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
		[Address(RVA = "0x45DCA10", Offset = "0x45DCA10", VA = "0x45DCA10", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000092")]
	public int Count
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x45DCA20", Offset = "0x45DCA20", VA = "0x45DCA20", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000093")]
	public Group this[int groupnum]
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x45DCA40", Offset = "0x45DCA40", VA = "0x45DCA40", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	public Group this[string groupname]
	{
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x45DCB40", Offset = "0x45DCB40", VA = "0x45DCB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000095")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x45DD170", Offset = "0x45DD170", VA = "0x45DD170", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000096")]
	public object SyncRoot
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x45DD180", Offset = "0x45DD180", VA = "0x45DD180", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000097")]
	private Group System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EItem
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x45DD550", Offset = "0x45DD550", VA = "0x45DD550", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x45DD560", Offset = "0x45DD560", VA = "0x45DD560", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x45DDA20", Offset = "0x45DDA20", VA = "0x45DDA20", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x45DDAD0", Offset = "0x45DDAD0", VA = "0x45DDAD0", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x45DDAE0", Offset = "0x45DDAE0", VA = "0x45DDAE0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x45DC9D0", Offset = "0x45DC9D0", VA = "0x45DC9D0")]
	internal GroupCollection(Match match, Hashtable caps)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x45DCCF0", Offset = "0x45DCCF0", VA = "0x45DCCF0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x45DCD90", Offset = "0x45DCD90", VA = "0x45DCD90", Slot = "16")]
	private IEnumerator<Group> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x45DCA50", Offset = "0x45DCA50", VA = "0x45DCA50")]
	private Group GetGroup(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x45DCE00", Offset = "0x45DCE00", VA = "0x45DCE00")]
	private Group GetGroupImpl(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x45DD190", Offset = "0x45DD190", VA = "0x45DD190", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x45DD250", Offset = "0x45DD250", VA = "0x45DD250", Slot = "14")]
	public void CopyTo(Group[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x45DD3E0", Offset = "0x45DD3E0", VA = "0x45DD3E0", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EIndexOf(Group item)
	{
		return default(int);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x45DD4B0", Offset = "0x45DD4B0", VA = "0x45DD4B0", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EInsert(int index, Group item)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x45DD500", Offset = "0x45DD500", VA = "0x45DD500", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x45DD5B0", Offset = "0x45DD5B0", VA = "0x45DD5B0", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EAdd(Group item)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x45DD600", Offset = "0x45DD600", VA = "0x45DD600", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EClear()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x45DD650", Offset = "0x45DD650", VA = "0x45DD650", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EContains(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x45DD700", Offset = "0x45DD700", VA = "0x45DD700", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemove(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x45DD750", Offset = "0x45DD750", VA = "0x45DD750", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x45DD7A0", Offset = "0x45DD7A0", VA = "0x45DD7A0", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x45DD7F0", Offset = "0x45DD7F0", VA = "0x45DD7F0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x45DD8E0", Offset = "0x45DD8E0", VA = "0x45DD8E0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x45DD9D0", Offset = "0x45DD9D0", VA = "0x45DD9D0", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x45DDA30", Offset = "0x45DDA30", VA = "0x45DDA30", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x45DDA80", Offset = "0x45DDA80", VA = "0x45DDA80", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x45DDB30", Offset = "0x45DDB30", VA = "0x45DDB30")]
	internal GroupCollection()
	{
	}
}
