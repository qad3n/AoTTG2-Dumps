using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000254")]
public sealed class EventHandlerList : IDisposable
{
	[Token(Token = "0x2000255")]
	private sealed class ListEntry
	{
		[Token(Token = "0x4000CE6")]
		[FieldOffset(Offset = "0x10")]
		internal ListEntry _next;

		[Token(Token = "0x4000CE7")]
		[FieldOffset(Offset = "0x18")]
		internal object _key;

		[Token(Token = "0x4000CE8")]
		[FieldOffset(Offset = "0x20")]
		internal Delegate _handler;

		[Token(Token = "0x6000E9F")]
		[Address(RVA = "0x455D580", Offset = "0x455D580", VA = "0x455D580")]
		public ListEntry(object key, Delegate handler, ListEntry next)
		{
		}
	}

	[Token(Token = "0x4000CE4")]
	[FieldOffset(Offset = "0x10")]
	private ListEntry _head;

	[Token(Token = "0x4000CE5")]
	[FieldOffset(Offset = "0x18")]
	private Component _parent;

	[Token(Token = "0x17000340")]
	public Delegate this[object key]
	{
		[Token(Token = "0x6000E98")]
		[Address(RVA = "0x455D430", Offset = "0x455D430", VA = "0x455D430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x455D4B0", Offset = "0x455D4B0", VA = "0x455D4B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x455D3F0", Offset = "0x455D3F0", VA = "0x455D3F0")]
	internal EventHandlerList(Component parent)
	{
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x455D420", Offset = "0x455D420", VA = "0x455D420")]
	public EventHandlerList()
	{
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x455D5E0", Offset = "0x455D5E0", VA = "0x455D5E0")]
	public void AddHandler(object key, Delegate value)
	{
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x455D6C0", Offset = "0x455D6C0", VA = "0x455D6C0")]
	public void AddHandlers(EventHandlerList listToAddFrom)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x455D710", Offset = "0x455D710", VA = "0x455D710", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x455D480", Offset = "0x455D480", VA = "0x455D480")]
	private ListEntry Find(object key)
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x455D730", Offset = "0x455D730", VA = "0x455D730")]
	public void RemoveHandler(object key, Delegate value)
	{
	}
}
