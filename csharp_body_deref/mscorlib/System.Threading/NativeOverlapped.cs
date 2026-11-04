// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.NativeOverlapped
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000207")]
public struct NativeOverlapped
{
	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr InternalLow;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr InternalHigh;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x10")]
	public int OffsetLow;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x14")]
	public int OffsetHigh;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr EventHandle;
}
