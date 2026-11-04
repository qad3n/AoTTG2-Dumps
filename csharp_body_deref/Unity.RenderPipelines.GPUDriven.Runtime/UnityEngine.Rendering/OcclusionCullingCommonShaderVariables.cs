// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OcclusionCullingCommonShaderVariables
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000D8")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\OcclusionCullingCommonShaderVariables.cs", needAccessors = false, generateCBuffer = true)]
internal struct OcclusionCullingCommonShaderVariables
{
	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x0")]
	[HLSLArray(8, typeof(ShaderGenUInt4))]
	public unsafe fixed uint _OccluderMipBounds[32];

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x80")]
	[HLSLArray(6, typeof(Matrix4x4))]
	public unsafe fixed float _ViewProjMatrix[96];

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x200")]
	[HLSLArray(6, typeof(Vector4))]
	public unsafe fixed float _ViewOriginWorldSpace[24];

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x260")]
	[HLSLArray(6, typeof(Vector4))]
	public unsafe fixed float _FacingDirWorldSpace[24];

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x2C0")]
	[HLSLArray(6, typeof(Vector4))]
	public unsafe fixed float _RadialDirWorldSpace[24];

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x320")]
	public Vector4 _DepthSizeInOccluderPixels;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x330")]
	public Vector4 _OccluderDepthPyramidSize;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x340")]
	public uint _OccluderMipLayoutSizeX;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x344")]
	public uint _OccluderMipLayoutSizeY;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x348")]
	public uint _OcclusionTestDebugFlags;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x34C")]
	public uint _OcclusionCullingCommonPad0;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x350")]
	public int _OcclusionTestCount;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x354")]
	public int _OccluderSubviewIndices;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x358")]
	public int _CullingSplitIndices;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x35C")]
	public int _CullingSplitMask;

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x2BF4380", Offset = "0x2BF2980", VA = "0x182BF4380")]
	internal OcclusionCullingCommonShaderVariables(in OccluderContext occluderCtx, in InstanceOcclusionTestSubviewSettings subviewSettings, bool occlusionOverlayCountVisible, bool overrideOcclusionTestToAlwaysPass)
	{
	}
}
