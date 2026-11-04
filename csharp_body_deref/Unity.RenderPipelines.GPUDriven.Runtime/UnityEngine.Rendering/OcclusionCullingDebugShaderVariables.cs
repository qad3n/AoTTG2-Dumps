// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OcclusionCullingDebugShaderVariables
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000DE")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\OcclusionCullingDebugShaderVariables.cs", needAccessors = false, generateCBuffer = true)]
internal struct OcclusionCullingDebugShaderVariables
{
	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 _DepthSizeInOccluderPixels;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x10")]
	[HLSLArray(8, typeof(ShaderGenUInt4))]
	public unsafe fixed uint _OccluderMipBounds[32];

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x90")]
	public uint _OccluderMipLayoutSizeX;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x94")]
	public uint _OccluderMipLayoutSizeY;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x98")]
	public uint _OcclusionCullingDebugPad0;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x9C")]
	public uint _OcclusionCullingDebugPad1;
}
