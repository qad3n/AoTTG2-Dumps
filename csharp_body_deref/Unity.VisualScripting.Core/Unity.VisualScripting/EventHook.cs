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
	[Address(RVA = "0x6797400", Offset = "0x6796400", VA = "0x6797400")]
	public EventHook(string name, [Optional] object target, [Optional] object tag)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x6797570", Offset = "0x6796570", VA = "0x6797570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x6797600", Offset = "0x6796600", VA = "0x6797600")]
	public bool Equals(EventHook other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x6797660", Offset = "0x6796660", VA = "0x6797660", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x67976A0", Offset = "0x67966A0", VA = "0x67976A0")]
	public static bool operator ==(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x6797700", Offset = "0x6796700", VA = "0x6797700")]
	public static bool operator !=(EventHook a, EventHook b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x6797770", Offset = "0x6796770", VA = "0x6797770")]
	public static implicit operator EventHook(string name)
	{
		return default(EventHook);
	}
}
