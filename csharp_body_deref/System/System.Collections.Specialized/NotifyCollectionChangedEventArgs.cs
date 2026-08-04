// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.NotifyCollectionChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x2000340")]
public class NotifyCollectionChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000F01")]
	[FieldOffset(Offset = "0x10")]
	private NotifyCollectionChangedAction _action;

	[Token(Token = "0x4000F02")]
	[FieldOffset(Offset = "0x18")]
	private IList _newItems;

	[Token(Token = "0x4000F03")]
	[FieldOffset(Offset = "0x20")]
	private IList _oldItems;

	[Token(Token = "0x4000F04")]
	[FieldOffset(Offset = "0x28")]
	private int _newStartingIndex;

	[Token(Token = "0x4000F05")]
	[FieldOffset(Offset = "0x2C")]
	private int _oldStartingIndex;

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x48E6800", Offset = "0x48E6800", VA = "0x48E6800")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action)
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x48E69C0", Offset = "0x48E69C0", VA = "0x48E69C0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem, int index)
	{
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x48E6CD0", Offset = "0x48E6CD0", VA = "0x48E6CD0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object newItem, object oldItem, int index)
	{
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x48E6FD0", Offset = "0x48E6FD0", VA = "0x48E6FD0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex)
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x48E6BC0", Offset = "0x48E6BC0", VA = "0x48E6BC0")]
	private void InitializeAddOrRemove(NotifyCollectionChangedAction action, IList changedItems, int startingIndex)
	{
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x48E6930", Offset = "0x48E6930", VA = "0x48E6930")]
	private void InitializeAdd(NotifyCollectionChangedAction action, IList newItems, int newStartingIndex)
	{
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x48E7160", Offset = "0x48E7160", VA = "0x48E7160")]
	private void InitializeRemove(NotifyCollectionChangedAction action, IList oldItems, int oldStartingIndex)
	{
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x48E6EC0", Offset = "0x48E6EC0", VA = "0x48E6EC0")]
	private void InitializeMoveOrReplace(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex, int oldStartingIndex)
	{
	}
}
