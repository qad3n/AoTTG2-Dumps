// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EventHook
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4CA8250", Offset = "0x4CA8250", VA = "0x4CA8250")]
	public EventHook(string name, [Optional] object target, [Optional] object tag)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x4CA83C0", Offset = "0x4CA83C0", VA = "0x4CA83C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4CA8450", Offset = "0x4CA8450", VA = "0x4CA8450")]
	public bool Equals(EventHook other)
	{
		return default(bool);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4CA84B0", Offset = "0x4CA84B0", VA = "0x4CA84B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4CA84F0", Offset = "0x4CA84F0", VA = "0x4CA84F0")]
	public static bool operator ==(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4CA8550", Offset = "0x4CA8550", VA = "0x4CA8550")]
	public static bool operator !=(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4CA85C0", Offset = "0x4CA85C0", VA = "0x4CA85C0")]
	public static implicit operator EventHook(string name)
	{
		return default(EventHook);
	}
}
