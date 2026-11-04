// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderDepthPyramidConstants
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C5")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\OccluderDepthPyramidConstants.cs", needAccessors = false, generateCBuffer = true)]
internal struct OccluderDepthPyramidConstants
{
	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x0")]
	[HLSLArray(6, typeof(Matrix4x4))]
	public unsafe fixed float _InvViewProjMatrix[96];

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x180")]
	[HLSLArray(6, typeof(Vector4))]
	public unsafe fixed float _SilhouettePlanes[24];

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x1E0")]
	[HLSLArray(6, typeof(ShaderGenUInt4))]
	public unsafe fixed uint _SrcOffset[24];

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x240")]
	[HLSLArray(5, typeof(ShaderGenUInt4))]
	public unsafe fixed uint _MipOffsetAndSize[20];

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x290")]
	public uint _OccluderMipLayoutSizeX;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x294")]
	public uint _OccluderMipLayoutSizeY;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x298")]
	public uint _OccluderDepthPyramidPad0;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x29C")]
	public uint _OccluderDepthPyramidPad1;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x2A0")]
	public uint _SrcSliceIndices;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x2A4")]
	public uint _DstSubviewIndices;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x2A8")]
	public uint _MipCount;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x2AC")]
	public uint _SilhouettePlaneCount;
}
