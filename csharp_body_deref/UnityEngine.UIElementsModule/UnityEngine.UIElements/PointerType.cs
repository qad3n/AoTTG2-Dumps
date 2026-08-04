// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D3")]
public static class PointerType
{
	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string mouse;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string touch;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string pen;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string unknown;

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x50375B0", Offset = "0x50375B0", VA = "0x50375B0")]
	internal static string GetPointerType(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x50376B0", Offset = "0x50376B0", VA = "0x50376B0")]
	internal static bool IsDirectManipulationDevice(string pointerType)
	{
		return default(bool);
	}
}
