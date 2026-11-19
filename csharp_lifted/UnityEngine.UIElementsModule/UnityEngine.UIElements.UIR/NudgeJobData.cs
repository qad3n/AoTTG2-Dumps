// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.NudgeJobData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000588")]
internal struct NudgeJobData
{
	[Token(Token = "0x400132D")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr headSrc;

	[Token(Token = "0x400132E")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr headDst;

	[Token(Token = "0x400132F")]
	[FieldOffset(Offset = "0x10")]
	public int headCount;

	[Token(Token = "0x4001330")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr tailSrc;

	[Token(Token = "0x4001331")]
	[FieldOffset(Offset = "0x20")]
	public IntPtr tailDst;

	[Token(Token = "0x4001332")]
	[FieldOffset(Offset = "0x28")]
	public int tailCount;

	[Token(Token = "0x4001333")]
	[FieldOffset(Offset = "0x2C")]
	public Matrix4x4 transform;

	[Token(Token = "0x4001334")]
	[FieldOffset(Offset = "0x6C")]
	public int keepZ;
}
