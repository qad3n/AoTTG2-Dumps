// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventHandlerList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015F")]
public sealed class EventHandlerList : IDisposable
{
	[Token(Token = "0x2000160")]
	private sealed class ListEntry
	{
		[Token(Token = "0x400061D")]
		[FieldOffset(Offset = "0x10")]
		internal ListEntry _next;

		[Token(Token = "0x400061E")]
		[FieldOffset(Offset = "0x18")]
		internal object _key;

		[Token(Token = "0x400061F")]
		[FieldOffset(Offset = "0x20")]
		internal Delegate _handler;

		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x287E190", Offset = "0x287C790", VA = "0x18287E190")]
		public ListEntry(object key, Delegate handler, ListEntry next)
		{
		}
	}

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x10")]
	private ListEntry _head;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x18")]
	private Component _parent;

	[Token(Token = "0x170001AF")]
	public Delegate this[object key]
	{
		[Token(Token = "0x60008E0")]
		[Address(RVA = "0x287DD00", Offset = "0x287C300", VA = "0x18287DD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E1")]
		[Address(RVA = "0x287DD60", Offset = "0x287C360", VA = "0x18287DD60")]
		set
		{
		}
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x19FFAE0", Offset = "0x19FE0E0", VA = "0x1819FFAE0")]
	internal EventHandlerList(Component parent)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EventHandlerList()
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x287DA60", Offset = "0x287C060", VA = "0x18287DA60")]
	public void AddHandler(object key, Delegate value)
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x287DB40", Offset = "0x287C140", VA = "0x18287DB40")]
	public void AddHandlers(EventHandlerList listToAddFrom)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x1A5E5A0", Offset = "0x1A5CBA0", VA = "0x181A5E5A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x287DC80", Offset = "0x287C280", VA = "0x18287DC80")]
	private ListEntry Find(object key)
	{
		return null;
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x287DCA0", Offset = "0x287C2A0", VA = "0x18287DCA0")]
	public void RemoveHandler(object key, Delegate value)
	{
	}
}
