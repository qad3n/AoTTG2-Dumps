// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventHandlerList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000120")]
public sealed class EventHandlerList : IDisposable
{
	[Token(Token = "0x2000121")]
	private sealed class ListEntry
	{
		[Token(Token = "0x400054E")]
		[FieldOffset(Offset = "0x10")]
		internal ListEntry _next;

		[Token(Token = "0x400054F")]
		[FieldOffset(Offset = "0x18")]
		internal object _key;

		[Token(Token = "0x4000550")]
		[FieldOffset(Offset = "0x20")]
		internal Delegate _handler;

		[Token(Token = "0x6000727")]
		[Address(RVA = "0x6223170", Offset = "0x6222170", VA = "0x6223170")]
		public ListEntry(object key, Delegate handler, ListEntry next)
		{
		}
	}

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x10")]
	private ListEntry _head;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x18")]
	private Component _parent;

	[Token(Token = "0x17000180")]
	public Delegate this[object key]
	{
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x6223020", Offset = "0x6222020", VA = "0x6223020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000721")]
		[Address(RVA = "0x62230A0", Offset = "0x62220A0", VA = "0x62230A0")]
		set
		{
		}
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x6222FE0", Offset = "0x6221FE0", VA = "0x6222FE0")]
	internal EventHandlerList(Component parent)
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x6223010", Offset = "0x6222010", VA = "0x6223010")]
	public EventHandlerList()
	{
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x62231D0", Offset = "0x62221D0", VA = "0x62231D0")]
	public void AddHandler(object key, Delegate value)
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x62232B0", Offset = "0x62222B0", VA = "0x62232B0")]
	public void AddHandlers(EventHandlerList listToAddFrom)
	{
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x6223300", Offset = "0x6222300", VA = "0x6223300", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x6223070", Offset = "0x6222070", VA = "0x6223070")]
	private ListEntry Find(object key)
	{
		return null;
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x6223320", Offset = "0x6222320", VA = "0x6223320")]
	public void RemoveHandler(object key, Delegate value)
	{
	}
}
