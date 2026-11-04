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
[Token(Token = "0x20000E1")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Group>))]
public class GroupCollection : IList<Group>, ICollection<Group>, IEnumerable<Group>, IEnumerable, IReadOnlyList<Group>, IReadOnlyCollection<Group>, IList, ICollection
{
	[Token(Token = "0x20000E2")]
	private sealed class Enumerator : IEnumerator<Group>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400034C")]
		[FieldOffset(Offset = "0x10")]
		private readonly GroupCollection _collection;

		[Token(Token = "0x400034D")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x170000D3")]
		public Group Current
		{
			[Token(Token = "0x60004BF")]
			[Address(RVA = "0x284A960", Offset = "0x2848F60", VA = "0x18284A960", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004C0")]
			[Address(RVA = "0x284A960", Offset = "0x2848F60", VA = "0x18284A960", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x1A7BE00", Offset = "0x1A7A400", VA = "0x181A7BE00")]
		internal Enumerator(GroupCollection collection)
		{
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x284A880", Offset = "0x2848E80", VA = "0x18284A880", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x10")]
	private readonly Match _match;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x18")]
	private readonly Hashtable _captureMap;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x20")]
	private Group[] _groups;

	[Token(Token = "0x170000CA")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public int Count
	{
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x284BF70", Offset = "0x284A570", VA = "0x18284BF70", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CC")]
	public Group this[int groupnum]
	{
		[Token(Token = "0x600049F")]
		[Address(RVA = "0x284BAF0", Offset = "0x284A0F0", VA = "0x18284BAF0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public Group this[string groupname]
	{
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x284BFA0", Offset = "0x284A5A0", VA = "0x18284BFA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public object SyncRoot
	{
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "33")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<System.Text.RegularExpressions.Group>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000D0")]
	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x284BAF0", Offset = "0x284A0F0", VA = "0x18284BAF0", Slot = "4")]
	private Group System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x284BB00", Offset = "0x284A100", VA = "0x18284BB00", Slot = "5")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002Eset_Item(int index, Group value)
	{
	}

	[Token(Token = "0x170000D1")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000D2")]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x284BAF0", Offset = "0x284A0F0", VA = "0x18284BAF0", Slot = "20")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x284BEF0", Offset = "0x284A4F0", VA = "0x18284BEF0", Slot = "21")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal GroupCollection(Match match, Hashtable caps)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x284AF10", Offset = "0x2849510", VA = "0x18284AF10", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x284B910", Offset = "0x2849F10", VA = "0x18284B910", Slot = "16")]
	private IEnumerator<Group> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x284B340", Offset = "0x2849940", VA = "0x18284B340")]
	private Group GetGroup(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x284AF80", Offset = "0x2849580", VA = "0x18284AF80")]
	private Group GetGroupImpl(int groupnum)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x284AC60", Offset = "0x2849260", VA = "0x18284AC60", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x284AD20", Offset = "0x2849320", VA = "0x18284AD20", Slot = "14")]
	public void CopyTo(Group[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x284B980", Offset = "0x2849F80", VA = "0x18284B980", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EIndexOf(Group item)
	{
		return default(int);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x284BA50", Offset = "0x284A050", VA = "0x18284BA50", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EInsert(int index, Group item)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x284BAA0", Offset = "0x284A0A0", VA = "0x18284BAA0", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x284B7C0", Offset = "0x2849DC0", VA = "0x18284B7C0", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EAdd(Group item)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x284B810", Offset = "0x2849E10", VA = "0x18284B810", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EClear()
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x284B860", Offset = "0x2849E60", VA = "0x18284B860", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002EContains(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x284B8C0", Offset = "0x2849EC0", VA = "0x18284B8C0", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002EGroup_003E_002ERemove(Group item)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x284BB50", Offset = "0x284A150", VA = "0x18284BB50", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x284BBA0", Offset = "0x284A1A0", VA = "0x18284BBA0", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x284BBF0", Offset = "0x284A1F0", VA = "0x18284BBF0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x284BD30", Offset = "0x284A330", VA = "0x18284BD30", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x284BE00", Offset = "0x284A400", VA = "0x18284BE00", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x284BEA0", Offset = "0x284A4A0", VA = "0x18284BEA0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x284BE50", Offset = "0x284A450", VA = "0x18284BE50", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x284BF40", Offset = "0x284A540", VA = "0x18284BF40")]
	internal GroupCollection()
	{
	}
}
