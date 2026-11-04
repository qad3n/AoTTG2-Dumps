// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerType
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200021E")]
public static class PointerType
{
	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string mouse;

	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string touch;

	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string pen;

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string tracked;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string unknown;

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x326D340", Offset = "0x326B940", VA = "0x18326D340")]
	internal static string GetPointerType(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x326D4F0", Offset = "0x326BAF0", VA = "0x18326D4F0")]
	internal static bool IsDirectManipulationDevice(string pointerType)
	{
		return default(bool);
	}
}
