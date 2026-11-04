// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalShadowData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000DB")]
public class UniversalShadowData : ContextItem
{
	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x10")]
	public bool supportsMainLightShadows;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x11")]
	internal bool mainLightShadowsEnabled;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x14")]
	public int mainLightShadowmapWidth;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x18")]
	public int mainLightShadowmapHeight;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x1C")]
	public int mainLightShadowCascadesCount;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x20")]
	public Vector3 mainLightShadowCascadesSplit;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x2C")]
	public float mainLightShadowCascadeBorder;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x30")]
	public bool supportsAdditionalLightShadows;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x31")]
	internal bool additionalLightShadowsEnabled;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x34")]
	public int additionalLightsShadowmapWidth;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x38")]
	public int additionalLightsShadowmapHeight;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x3C")]
	public bool supportsSoftShadows;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x40")]
	public int shadowmapDepthBufferBits;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x48")]
	public List<Vector4> bias;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x50")]
	public List<int> resolution;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x58")]
	internal bool isKeywordAdditionalLightShadowsEnabled;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x59")]
	internal bool isKeywordSoftShadowsEnabled;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x5C")]
	internal int mainLightShadowResolution;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x60")]
	internal int mainLightRenderTargetWidth;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x64")]
	internal int mainLightRenderTargetHeight;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x68")]
	internal NativeArray<URPLightShadowCullingInfos> visibleLightsShadowCullingInfos;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x78")]
	internal AdditionalLightsShadowAtlasLayout shadowAtlasLayout;

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x2C51B00", Offset = "0x2C50100", VA = "0x182C51B00", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UniversalShadowData()
	{
	}
}
