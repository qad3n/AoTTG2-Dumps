// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.CaptureCollection
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000DD")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Capture>))]
[DebuggerDisplay("Count = {Count}")]
public class CaptureCollection : IList<Capture>, ICollection<Capture>, IEnumerable<Capture>, IEnumerable, IReadOnlyList<Capture>, IReadOnlyCollection<Capture>, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x20000DE")]
	private sealed class Enumerator : IEnumerator<Capture>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000342")]
		[FieldOffset(Offset = "0x10")]
		private readonly CaptureCollection _collection;

		[Token(Token = "0x4000343")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x170000C7")]
		public Capture Current
		{
			[Token(Token = "0x6000494")]
			[Address(RVA = "0x284AA00", Offset = "0x2849000", VA = "0x18284AA00", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000495")]
			[Address(RVA = "0x284AA00", Offset = "0x2849000", VA = "0x18284AA00", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000492")]
		[Address(RVA = "0x1A7BE00", Offset = "0x1A7A400", VA = "0x181A7BE00")]
		internal Enumerator(CaptureCollection collection)
		{
		}

		[Token(Token = "0x6000493")]
		[Address(RVA = "0x284A8D0", Offset = "0x2848ED0", VA = "0x18284A8D0", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000496")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000497")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x10")]
	private readonly Group _group;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _capcount;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x20")]
	private Capture[] _captures;

	[Token(Token = "0x170000BF")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C0")]
	public int Count
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C1")]
	public Capture this[int i]
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x28492A0", Offset = "0x28478A0", VA = "0x1828492A0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	public object SyncRoot
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "33")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000C4")]
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x28492A0", Offset = "0x28478A0", VA = "0x1828492A0", Slot = "4")]
	private Capture System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x28492B0", Offset = "0x28478B0", VA = "0x1828492B0", Slot = "5")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002Eset_Item(int index, Capture value)
	{
	}

	[Token(Token = "0x170000C5")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600048C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000C6")]
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x28492A0", Offset = "0x28478A0", VA = "0x1828492A0", Slot = "20")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x28496A0", Offset = "0x2847CA0", VA = "0x1828496A0", Slot = "21")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x2848F20", Offset = "0x2847520", VA = "0x182848F20", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x28490E0", Offset = "0x28476E0", VA = "0x1828490E0", Slot = "16")]
	private IEnumerator<Capture> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x2848CE0", Offset = "0x28472E0", VA = "0x182848CE0")]
	private Capture GetCapture(int i)
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x2848B50", Offset = "0x2847150", VA = "0x182848B50")]
	internal void ForceInitialized()
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x2848AB0", Offset = "0x28470B0", VA = "0x182848AB0", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x28488F0", Offset = "0x2846EF0", VA = "0x1828488F0", Slot = "14")]
	public void CopyTo(Capture[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x2849150", Offset = "0x2847750", VA = "0x182849150", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EIndexOf(Capture item)
	{
		return default(int);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x2849200", Offset = "0x2847800", VA = "0x182849200", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EInsert(int index, Capture item)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x2849250", Offset = "0x2847850", VA = "0x182849250", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x2848F90", Offset = "0x2847590", VA = "0x182848F90", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EAdd(Capture item)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x2848FE0", Offset = "0x28475E0", VA = "0x182848FE0", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EClear()
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x2849030", Offset = "0x2847630", VA = "0x182849030", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EContains(Capture item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x2849090", Offset = "0x2847690", VA = "0x182849090", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002ERemove(Capture item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x2849300", Offset = "0x2847900", VA = "0x182849300", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x2849350", Offset = "0x2847950", VA = "0x182849350", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x28493A0", Offset = "0x28479A0", VA = "0x1828493A0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x28494E0", Offset = "0x2847AE0", VA = "0x1828494E0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x28495B0", Offset = "0x2847BB0", VA = "0x1828495B0", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x2849650", Offset = "0x2847C50", VA = "0x182849650", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x2849600", Offset = "0x2847C00", VA = "0x182849600", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x28496F0", Offset = "0x2847CF0", VA = "0x1828496F0")]
	internal CaptureCollection()
	{
	}
}
