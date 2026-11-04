// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceListenerCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x200010C")]
[DefaultMember("Item")]
public class TraceListenerCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList list;

	[Token(Token = "0x17000104")]
	public int Count
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000105")]
	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2876540", Offset = "0x2874B40", VA = "0x182876540", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x2876570", Offset = "0x2874B70", VA = "0x182876570", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x17000106")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x600067D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000107")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000684")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000685")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x2876680", Offset = "0x2874C80", VA = "0x182876680")]
	internal TraceListenerCollection()
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x2875B80", Offset = "0x2874180", VA = "0x182875B80")]
	public int Add(TraceListener listener)
	{
		return default(int);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x2875CB0", Offset = "0x28742B0", VA = "0x182875CB0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2875D10", Offset = "0x2874310", VA = "0x182875D10")]
	internal void InitializeListener(TraceListener listener)
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x2875E50", Offset = "0x2874450", VA = "0x182875E50", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x2876080", Offset = "0x2874680", VA = "0x182876080", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x1AB8620", Offset = "0x1AB6C20", VA = "0x181AB8620", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x1AB8650", Offset = "0x1AB6C50", VA = "0x181AB8650", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x2876260", Offset = "0x2874860", VA = "0x182876260", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x2876430", Offset = "0x2874A30", VA = "0x182876430", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x2875F60", Offset = "0x2874560", VA = "0x182875F60", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
