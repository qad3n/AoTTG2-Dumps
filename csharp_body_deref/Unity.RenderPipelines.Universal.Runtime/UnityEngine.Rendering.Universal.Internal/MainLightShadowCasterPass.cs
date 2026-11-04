// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.MainLightShadowCasterPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x200022B")]
public class MainLightShadowCasterPass : ScriptableRenderPass
{
	[Token(Token = "0x200022C")]
	private static class MainLightShadowConstantBuffer
	{
		[Token(Token = "0x4000D82")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _WorldToShadow;

		[Token(Token = "0x4000D83")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _ShadowParams;

		[Token(Token = "0x4000D84")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _CascadeShadowSplitSpheres0;

		[Token(Token = "0x4000D85")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _CascadeShadowSplitSpheres1;

		[Token(Token = "0x4000D86")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _CascadeShadowSplitSpheres2;

		[Token(Token = "0x4000D87")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _CascadeShadowSplitSpheres3;

		[Token(Token = "0x4000D88")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _CascadeShadowSplitSphereRadii;

		[Token(Token = "0x4000D89")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _ShadowOffset0;

		[Token(Token = "0x4000D8A")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _ShadowOffset1;

		[Token(Token = "0x4000D8B")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _ShadowmapSize;

		[Token(Token = "0x4000D8C")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _MainLightShadowmapID;
	}

	[Token(Token = "0x200022D")]
	private class PassData
	{
		[Token(Token = "0x4000D8D")]
		[FieldOffset(Offset = "0x10")]
		internal bool emptyShadowmap;

		[Token(Token = "0x4000D8E")]
		[FieldOffset(Offset = "0x11")]
		internal bool setKeywordForEmptyShadowmap;

		[Token(Token = "0x4000D8F")]
		[FieldOffset(Offset = "0x18")]
		internal UniversalRenderingData renderingData;

		[Token(Token = "0x4000D90")]
		[FieldOffset(Offset = "0x20")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000D91")]
		[FieldOffset(Offset = "0x28")]
		internal UniversalLightData lightData;

		[Token(Token = "0x4000D92")]
		[FieldOffset(Offset = "0x30")]
		internal UniversalShadowData shadowData;

		[Token(Token = "0x4000D93")]
		[FieldOffset(Offset = "0x38")]
		internal MainLightShadowCasterPass pass;

		[Token(Token = "0x4000D94")]
		[FieldOffset(Offset = "0x40")]
		internal TextureHandle shadowmapTexture;

		[Token(Token = "0x4000D95")]
		[FieldOffset(Offset = "0x50")]
		internal readonly RendererList[] shadowRendererLists;

		[Token(Token = "0x4000D96")]
		[FieldOffset(Offset = "0x58")]
		internal readonly RendererListHandle[] shadowRendererListsHandle;

		[Token(Token = "0x6000C07")]
		[Address(RVA = "0x2CDAEE0", Offset = "0x2CD94E0", VA = "0x182CDAEE0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x60")]
	internal RTHandle m_MainLightShadowmapTexture;

	[Token(Token = "0x4000D70")]
	[FieldOffset(Offset = "0x68")]
	private int m_RenderTargetWidth;

	[Token(Token = "0x4000D71")]
	[FieldOffset(Offset = "0x6C")]
	private int m_RenderTargetHeight;

	[Token(Token = "0x4000D72")]
	[FieldOffset(Offset = "0x70")]
	private int m_ShadowCasterCascadesCount;

	[Token(Token = "0x4000D73")]
	[FieldOffset(Offset = "0x74")]
	private bool m_CreateEmptyShadowmap;

	[Token(Token = "0x4000D74")]
	[FieldOffset(Offset = "0x75")]
	private bool m_SetKeywordForEmptyShadowmap;

	[Token(Token = "0x4000D75")]
	[FieldOffset(Offset = "0x78")]
	private float m_CascadeBorder;

	[Token(Token = "0x4000D76")]
	[FieldOffset(Offset = "0x7C")]
	private float m_MaxShadowDistanceSq;

	[Token(Token = "0x4000D77")]
	[FieldOffset(Offset = "0x80")]
	private RenderTextureDescriptor m_MainLightShadowDescriptor;

	[Token(Token = "0x4000D78")]
	[FieldOffset(Offset = "0xB8")]
	private readonly Vector4[] m_CascadeSplitDistances;

	[Token(Token = "0x4000D79")]
	[FieldOffset(Offset = "0xC0")]
	private readonly Matrix4x4[] m_MainLightShadowMatrices;

	[Token(Token = "0x4000D7A")]
	[FieldOffset(Offset = "0xC8")]
	private readonly ProfilingSampler m_ProfilingSetupSampler;

	[Token(Token = "0x4000D7B")]
	[FieldOffset(Offset = "0xD0")]
	private readonly ShadowSliceData[] m_CascadeSlices;

	[Token(Token = "0x4000D7C")]
	private const int k_EmptyShadowMapDimensions = 1;

	[Token(Token = "0x4000D7D")]
	private const int k_MaxCascades = 4;

	[Token(Token = "0x4000D7E")]
	private const int k_ShadowmapBufferBits = 16;

	[Token(Token = "0x4000D7F")]
	private const string k_MainLightShadowMapTextureName = "_MainLightShadowmapTexture";

	[Token(Token = "0x4000D80")]
	[FieldOffset(Offset = "0x0")]
	private static Vector4 s_EmptyShadowParams;

	[Token(Token = "0x4000D81")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 s_EmptyShadowmapSize;

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x2CDA480", Offset = "0x2CD8A80", VA = "0x182CDA480")]
	public MainLightShadowCasterPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x2C582D0", Offset = "0x2C568D0", VA = "0x182C582D0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x2CD9700", Offset = "0x2CD7D00", VA = "0x182CD9700")]
	public bool Setup(ref RenderingData renderingData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x2CD9800", Offset = "0x2CD7E00", VA = "0x182CD9800")]
	public bool Setup(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x2CDA350", Offset = "0x2CD8950", VA = "0x182CDA350")]
	private void UpdateTextureDescriptorIfNeeded()
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x2CD8E50", Offset = "0x2CD7450", VA = "0x182CD8E50")]
	private bool SetupForEmptyRendering(bool stripShadowsOffVariants, bool shadowsEnabled, Light light, UniversalCameraData cameraData, UniversalShadowData shadowData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x2CD7670", Offset = "0x2CD5C70", VA = "0x182CD7670")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x2CD8D60", Offset = "0x2CD7360", VA = "0x182CD8D60")]
	internal static void SetShadowParamsForEmptyShadowmap(RasterCommandBuffer rasterCommandBuffer)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x2CD7B60", Offset = "0x2CD6160", VA = "0x182CD7B60")]
	private void RenderMainLightCascadeShadowmap(RasterCommandBuffer cmd, ref PassData data, bool isRenderGraph)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x2CD9070", Offset = "0x2CD7670", VA = "0x182CD9070")]
	private void SetupMainLightShadowReceiverConstants(RasterCommandBuffer cmd, ref VisibleLight shadowLight, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x2CD77E0", Offset = "0x2CD5DE0", VA = "0x182CD77E0")]
	private void InitPassData(ref PassData passData, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x2CD78B0", Offset = "0x2CD5EB0", VA = "0x182CD78B0")]
	private void InitRendererLists(ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph)
	{
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x2CD8380", Offset = "0x2CD6980", VA = "0x182CD8380")]
	internal TextureHandle Render(RenderGraph graph, ContextContainer frameData)
	{
		return default(TextureHandle);
	}
}
