// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.CaptureCollection
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

[Token(Token = "0x200009E")]
[DebuggerTypeProxy(typeof(CollectionDebuggerProxy<Capture>))]
[DebuggerDisplay("Count = {Count}")]
public class CaptureCollection : IList<Capture>, ICollection<Capture>, IEnumerable<Capture>, IEnumerable, IReadOnlyList<Capture>, IReadOnlyCollection<Capture>, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x200009F")]
	private sealed class Enumerator : IEnumerator<Capture>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000273")]
		[FieldOffset(Offset = "0x10")]
		private readonly CaptureCollection _collection;

		[Token(Token = "0x4000274")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x17000098")]
		public Capture Current
		{
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0x61DED50", Offset = "0x61DDD50", VA = "0x61DED50", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000099")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002E1")]
			[Address(RVA = "0x61DEDC0", Offset = "0x61DDDC0", VA = "0x61DEDC0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x61DE140", Offset = "0x61DD140", VA = "0x61DE140")]
		internal Enumerator(CaptureCollection collection)
		{
		}

		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x61DED20", Offset = "0x61DDD20", VA = "0x61DED20", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x61DEDD0", Offset = "0x61DDDD0", VA = "0x61DEDD0", Slot = "8")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x61DEDE0", Offset = "0x61DDDE0", VA = "0x61DEDE0", Slot = "5")]
		private void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x10")]
	private readonly Group _group;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _capcount;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x20")]
	private Capture[] _captures;

	[Token(Token = "0x17000090")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x61DDFF0", Offset = "0x61DCFF0", VA = "0x61DDFF0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000091")]
	public int Count
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x61DE000", Offset = "0x61DD000", VA = "0x61DE000", Slot = "32")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000092")]
	public Capture this[int i]
	{
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x61DE010", Offset = "0x61DD010", VA = "0x61DE010", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000093")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x61DE380", Offset = "0x61DD380", VA = "0x61DE380", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000094")]
	public object SyncRoot
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x61DE390", Offset = "0x61DD390", VA = "0x61DE390", Slot = "33")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<System.Text.RegularExpressions.Capture>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000095")]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x61DE710", Offset = "0x61DD710", VA = "0x61DE710", Slot = "4")]
	private Capture System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x61DE720", Offset = "0x61DD720", VA = "0x61DE720", Slot = "5")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002Eset_Item(int index, Capture value)
	{
	}

	[Token(Token = "0x17000096")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x61DEBE0", Offset = "0x61DDBE0", VA = "0x61DEBE0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000097")]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x61DEC90", Offset = "0x61DDC90", VA = "0x61DEC90", Slot = "20")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x61DECA0", Offset = "0x61DDCA0", VA = "0x61DECA0", Slot = "21")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x61DE0D0", Offset = "0x61DD0D0", VA = "0x61DE0D0", Slot = "17")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x61DE170", Offset = "0x61DD170", VA = "0x61DE170", Slot = "16")]
	private IEnumerator<Capture> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x61DE020", Offset = "0x61DD020", VA = "0x61DE020")]
	private Capture GetCapture(int i)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x61DE1E0", Offset = "0x61DD1E0", VA = "0x61DE1E0")]
	internal void ForceInitialized()
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x61DE3A0", Offset = "0x61DD3A0", VA = "0x61DE3A0", Slot = "31")]
	public void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x61DE440", Offset = "0x61DD440", VA = "0x61DE440", Slot = "14")]
	public void CopyTo(Capture[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x61DE5C0", Offset = "0x61DD5C0", VA = "0x61DE5C0", Slot = "6")]
	private int System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EIndexOf(Capture item)
	{
		return default(int);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x61DE670", Offset = "0x61DD670", VA = "0x61DE670", Slot = "7")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EInsert(int index, Capture item)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x61DE6C0", Offset = "0x61DD6C0", VA = "0x61DE6C0", Slot = "8")]
	private void System_002ECollections_002EGeneric_002EIList_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x61DE770", Offset = "0x61DD770", VA = "0x61DE770", Slot = "11")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EAdd(Capture item)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x61DE7C0", Offset = "0x61DD7C0", VA = "0x61DE7C0", Slot = "12")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EClear()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x61DE810", Offset = "0x61DD810", VA = "0x61DE810", Slot = "13")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002EContains(Capture item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x61DE8C0", Offset = "0x61DD8C0", VA = "0x61DE8C0", Slot = "15")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002EText_002ERegularExpressions_002ECapture_003E_002ERemove(Capture item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x61DE910", Offset = "0x61DD910", VA = "0x61DE910", Slot = "22")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x61DE960", Offset = "0x61DD960", VA = "0x61DE960", Slot = "24")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x61DE9B0", Offset = "0x61DD9B0", VA = "0x61DE9B0", Slot = "23")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x61DEAA0", Offset = "0x61DDAA0", VA = "0x61DEAA0", Slot = "27")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x61DEB90", Offset = "0x61DDB90", VA = "0x61DEB90", Slot = "28")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x61DEBF0", Offset = "0x61DDBF0", VA = "0x61DEBF0", Slot = "29")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x61DEC40", Offset = "0x61DDC40", VA = "0x61DEC40", Slot = "30")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x61DECF0", Offset = "0x61DDCF0", VA = "0x61DECF0")]
	internal CaptureCollection()
	{
	}
}
