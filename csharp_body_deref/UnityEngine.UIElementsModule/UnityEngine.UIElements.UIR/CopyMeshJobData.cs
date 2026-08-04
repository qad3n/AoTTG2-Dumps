// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CopyMeshJobData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A6")]
internal struct CopyMeshJobData
{
	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr vertSrc;

	[Token(Token = "0x4000E6E")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr vertDst;

	[Token(Token = "0x4000E6F")]
	[FieldOffset(Offset = "0x10")]
	public int vertCount;

	[Token(Token = "0x4000E70")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr indexSrc;

	[Token(Token = "0x4000E71")]
	[FieldOffset(Offset = "0x20")]
	public IntPtr indexDst;

	[Token(Token = "0x4000E72")]
	[FieldOffset(Offset = "0x28")]
	public int indexCount;

	[Token(Token = "0x4000E73")]
	[FieldOffset(Offset = "0x2C")]
	public int indexOffset;
}
