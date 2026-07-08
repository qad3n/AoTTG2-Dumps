using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200005B")]
public struct EventHook
{
	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x4000090")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly object target;

	[Token(Token = "0x4000091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly object tag;

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x4983680", Offset = "0x4983680", VA = "0x4983680")]
	public EventHook(string name, [Optional] object target, [Optional] object tag)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x49837F0", Offset = "0x49837F0", VA = "0x49837F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4983880", Offset = "0x4983880", VA = "0x4983880")]
	public bool Equals(EventHook other)
	{
		return default(bool);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x49838E0", Offset = "0x49838E0", VA = "0x49838E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4983920", Offset = "0x4983920", VA = "0x4983920")]
	public static bool operator ==(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4983980", Offset = "0x4983980", VA = "0x4983980")]
	public static bool operator !=(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x49839F0", Offset = "0x49839F0", VA = "0x49839F0")]
	public static implicit operator EventHook(string name)
	{
		return default(EventHook);
	}
}
