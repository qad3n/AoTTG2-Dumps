using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001DC")]
public struct NativeOverlapped
{
	[Token(Token = "0x4000952")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr InternalLow;

	[Token(Token = "0x4000953")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr InternalHigh;

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x10")]
	public int OffsetLow;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0x14")]
	public int OffsetHigh;

	[Token(Token = "0x4000956")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr EventHandle;
}
