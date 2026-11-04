// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.NotifyCollectionChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x200024B")]
public class NotifyCollectionChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x10")]
	private NotifyCollectionChangedAction _action;

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x18")]
	private IList _newItems;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x20")]
	private IList _oldItems;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x28")]
	private int _newStartingIndex;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x2C")]
	private int _oldStartingIndex;

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x28D8430", Offset = "0x28D6A30", VA = "0x1828D8430")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action)
	{
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x28D80F0", Offset = "0x28D66F0", VA = "0x1828D80F0")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object changedItem, int index)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x28D8720", Offset = "0x28D6D20", VA = "0x1828D8720")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, object newItem, object oldItem, int index)
	{
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x28D8560", Offset = "0x28D6B60", VA = "0x1828D8560")]
	public NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex)
	{
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x28D7DD0", Offset = "0x28D63D0", VA = "0x1828D7DD0")]
	private void InitializeAddOrRemove(NotifyCollectionChangedAction action, IList changedItems, int startingIndex)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x28D7ED0", Offset = "0x28D64D0", VA = "0x1828D7ED0")]
	private void InitializeAdd(NotifyCollectionChangedAction action, IList newItems, int newStartingIndex)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x28D8060", Offset = "0x28D6660", VA = "0x1828D8060")]
	private void InitializeRemove(NotifyCollectionChangedAction action, IList oldItems, int oldStartingIndex)
	{
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x28D7F60", Offset = "0x28D6560", VA = "0x1828D7F60")]
	private void InitializeMoveOrReplace(NotifyCollectionChangedAction action, IList newItems, IList oldItems, int startingIndex, int oldStartingIndex)
	{
	}
}
