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
	[Address(RVA = "0x45C1700", Offset = "0x45C1700", VA = "0x45C1700")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action)
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x45C18C0", Offset = "0x45C18C0", VA = "0x45C18C0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem, int index)
	{
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x45C1BD0", Offset = "0x45C1BD0", VA = "0x45C1BD0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object newItem, object oldItem, int index)
	{
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x45C1ED0", Offset = "0x45C1ED0", VA = "0x45C1ED0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex)
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x45C1AC0", Offset = "0x45C1AC0", VA = "0x45C1AC0")]
	private void InitializeAddOrRemove(NotifyCollectionChangedAction action, IList changedItems, int startingIndex)
	{
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x45C1830", Offset = "0x45C1830", VA = "0x45C1830")]
	private void InitializeAdd(NotifyCollectionChangedAction action, IList newItems, int newStartingIndex)
	{
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x45C2060", Offset = "0x45C2060", VA = "0x45C2060")]
	private void InitializeRemove(NotifyCollectionChangedAction action, IList oldItems, int oldStartingIndex)
	{
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x45C1DC0", Offset = "0x45C1DC0", VA = "0x45C1DC0")]
	private void InitializeMoveOrReplace(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex, int oldStartingIndex)
	{
	}
}
