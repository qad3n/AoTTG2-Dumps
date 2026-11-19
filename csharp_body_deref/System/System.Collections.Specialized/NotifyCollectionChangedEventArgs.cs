// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.NotifyCollectionChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x200020C")]
public class NotifyCollectionChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000769")]
	[FieldOffset(Offset = "0x10")]
	private NotifyCollectionChangedAction _action;

	[Token(Token = "0x400076A")]
	[FieldOffset(Offset = "0x18")]
	private IList _newItems;

	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x20")]
	private IList _oldItems;

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x28")]
	private int _newStartingIndex;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x2C")]
	private int _oldStartingIndex;

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x6282E10", Offset = "0x6281E10", VA = "0x6282E10")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x6282FD0", Offset = "0x6281FD0", VA = "0x6282FD0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem, int index)
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x62832E0", Offset = "0x62822E0", VA = "0x62832E0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object newItem, object oldItem, int index)
	{
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x62835E0", Offset = "0x62825E0", VA = "0x62835E0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex)
	{
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x62831D0", Offset = "0x62821D0", VA = "0x62831D0")]
	private void InitializeAddOrRemove(NotifyCollectionChangedAction action, IList changedItems, int startingIndex)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x6282F40", Offset = "0x6281F40", VA = "0x6282F40")]
	private void InitializeAdd(NotifyCollectionChangedAction action, IList newItems, int newStartingIndex)
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x6283770", Offset = "0x6282770", VA = "0x6283770")]
	private void InitializeRemove(NotifyCollectionChangedAction action, IList oldItems, int oldStartingIndex)
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x62834D0", Offset = "0x62824D0", VA = "0x62834D0")]
	private void InitializeMoveOrReplace(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex, int oldStartingIndex)
	{
	}
}
