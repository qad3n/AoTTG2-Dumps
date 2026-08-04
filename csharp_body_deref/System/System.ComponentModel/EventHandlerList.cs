// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventHandlerList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4882680", Offset = "0x4882680", VA = "0x4882680")]
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
		[Address(RVA = "0x4882530", Offset = "0x4882530", VA = "0x4882530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x48825B0", Offset = "0x48825B0", VA = "0x48825B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x48824F0", Offset = "0x48824F0", VA = "0x48824F0")]
	internal EventHandlerList(Component parent)
	{
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x4882520", Offset = "0x4882520", VA = "0x4882520")]
	public EventHandlerList()
	{
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x48826E0", Offset = "0x48826E0", VA = "0x48826E0")]
	public void AddHandler(object key, Delegate value)
	{
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x48827C0", Offset = "0x48827C0", VA = "0x48827C0")]
	public void AddHandlers(EventHandlerList listToAddFrom)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x4882810", Offset = "0x4882810", VA = "0x4882810", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x4882580", Offset = "0x4882580", VA = "0x4882580")]
	private ListEntry Find(object key)
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x4882830", Offset = "0x4882830", VA = "0x4882830")]
	public void RemoveHandler(object key, Delegate value)
	{
	}
}
