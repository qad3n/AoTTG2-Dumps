using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A4")]
internal struct NudgeJobData
{
	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr headSrc;

	[Token(Token = "0x4000E53")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr headDst;

	[Token(Token = "0x4000E54")]
	[FieldOffset(Offset = "0x10")]
	public int headCount;

	[Token(Token = "0x4000E55")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr tailSrc;

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x20")]
	public IntPtr tailDst;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0x28")]
	public int tailCount;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0x2C")]
	public Matrix4x4 transform;
}
