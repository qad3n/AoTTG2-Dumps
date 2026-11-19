// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenLODGroupDataNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003CF")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GPUDrivenLODGroupDataNative
{
	[Token(Token = "0x4000C4F")]
	[FieldOffset(Offset = "0x0")]
	public unsafe EntityId* lodGroupID;

	[Token(Token = "0x4000C50")]
	[FieldOffset(Offset = "0x8")]
	public unsafe int* lodOffset;

	[Token(Token = "0x4000C51")]
	[FieldOffset(Offset = "0x10")]
	public unsafe int* lodCount;

	[Token(Token = "0x4000C52")]
	[FieldOffset(Offset = "0x18")]
	public unsafe LODFadeMode* fadeMode;

	[Token(Token = "0x4000C53")]
	[FieldOffset(Offset = "0x20")]
	public unsafe Vector3* worldSpaceReferencePoint;

	[Token(Token = "0x4000C54")]
	[FieldOffset(Offset = "0x28")]
	public unsafe float* worldSpaceSize;

	[Token(Token = "0x4000C55")]
	[FieldOffset(Offset = "0x30")]
	public unsafe short* renderersCount;

	[Token(Token = "0x4000C56")]
	[FieldOffset(Offset = "0x38")]
	public unsafe bool* lastLODIsBillboard;

	[Token(Token = "0x4000C57")]
	[FieldOffset(Offset = "0x40")]
	public unsafe byte* forceLODMask;

	[Token(Token = "0x4000C58")]
	[FieldOffset(Offset = "0x48")]
	public int lodGroupCount;

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x50")]
	public unsafe EntityId* invalidLODGroupID;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x58")]
	public int invalidLODGroupCount;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x60")]
	public unsafe short* lodRenderersCount;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x68")]
	public unsafe float* lodScreenRelativeTransitionHeight;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x70")]
	public unsafe float* lodFadeTransitionWidth;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x78")]
	public int lodDataCount;
}
