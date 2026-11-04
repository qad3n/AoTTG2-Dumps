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
	[Token(Token = "0x400008B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x400008C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly object target;

	[Token(Token = "0x400008D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly object tag;

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x2DA6170", Offset = "0x2DA4770", VA = "0x182DA6170")]
	public EventHook(string name, [Optional] object target, [Optional] object tag)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x2DA6020", Offset = "0x2DA4620", VA = "0x182DA6020", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2DA5FC0", Offset = "0x2DA45C0", VA = "0x182DA5FC0")]
	public bool Equals(EventHook other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x2DA6120", Offset = "0x2DA4720", VA = "0x182DA6120", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2DA5FC0", Offset = "0x2DA45C0", VA = "0x182DA5FC0")]
	public static bool operator ==(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x2DA6330", Offset = "0x2DA4930", VA = "0x182DA6330")]
	public static bool operator !=(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2DA6300", Offset = "0x2DA4900", VA = "0x182DA6300")]
	public static implicit operator EventHook(string name)
	{
		return default(EventHook);
	}
}
