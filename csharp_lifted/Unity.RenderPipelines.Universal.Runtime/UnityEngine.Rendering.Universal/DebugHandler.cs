// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000065")]
internal class DebugHandler : IDebugDisplaySettingsQuery
{
	[Token(Token = "0x2000066")]
	private class DebugFinalValidationPassData
	{
		[Token(Token = "0x40001F1")]
		[FieldOffset(Offset = "0x10")]
		public bool isFinalPass;

		[Token(Token = "0x40001F2")]
		[FieldOffset(Offset = "0x11")]
		public bool resolveFinalTarget;

		[Token(Token = "0x40001F3")]
		[FieldOffset(Offset = "0x12")]
		public bool isActiveForCamera;

		[Token(Token = "0x40001F4")]
		[FieldOffset(Offset = "0x13")]
		public bool hasDebugRenderTarget;

		[Token(Token = "0x40001F5")]
		[FieldOffset(Offset = "0x14")]
		public TextureHandle debugRenderTargetHandle;

		[Token(Token = "0x40001F6")]
		[FieldOffset(Offset = "0x24")]
		public int debugTexturePropertyId;

		[Token(Token = "0x40001F7")]
		[FieldOffset(Offset = "0x28")]
		public Vector4 debugRenderTargetPixelRect;

		[Token(Token = "0x40001F8")]
		[FieldOffset(Offset = "0x38")]
		public int debugRenderTargetSupportsStereo;

		[Token(Token = "0x40001F9")]
		[FieldOffset(Offset = "0x3C")]
		public Vector4 debugRenderTargetRangeRemap;

		[Token(Token = "0x40001FA")]
		[FieldOffset(Offset = "0x4C")]
		public TextureHandle debugFontTextureHandle;

		[Token(Token = "0x40001FB")]
		[FieldOffset(Offset = "0x60")]
		public DebugDisplaySettingsRendering renderingSettings;

		[Token(Token = "0x600026C")]
		[Address(RVA = "0x66073D0", Offset = "0x66063D0", VA = "0x66073D0")]
		public DebugFinalValidationPassData()
		{
		}
	}

	[Token(Token = "0x2000067")]
	private class DebugSetupPassData
	{
		[Token(Token = "0x40001FC")]
		[FieldOffset(Offset = "0x10")]
		public bool isActiveForCamera;

		[Token(Token = "0x40001FD")]
		[FieldOffset(Offset = "0x18")]
		public DebugDisplaySettingsMaterial materialSettings;

		[Token(Token = "0x40001FE")]
		[FieldOffset(Offset = "0x20")]
		public DebugDisplaySettingsRendering renderingSettings;

		[Token(Token = "0x40001FF")]
		[FieldOffset(Offset = "0x28")]
		public DebugDisplaySettingsLighting lightingSettings;

		[Token(Token = "0x600026D")]
		[Address(RVA = "0x66073C0", Offset = "0x66063C0", VA = "0x66073C0")]
		public DebugSetupPassData()
		{
		}
	}

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int k_DebugColorInvalidModePropertyId;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int k_DebugCurrentRealTimeId;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int k_DebugColorPropertyId;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int k_DebugTexturePropertyId;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int k_DebugFontId;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int k_DebugTextureNoStereoPropertyId;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int k_DebugTextureDisplayRect;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int k_DebugRenderTargetSupportsStereo;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int k_DebugRenderTargetRangeRemap;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int k_DebugMaterialModeId;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int k_DebugVertexAttributeModeId;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int k_DebugMaterialValidationModeId;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int k_DebugMipInfoModeId;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int k_DebugMipMapStatusModeId;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int k_DebugMipMapShowStatusCodeId;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int k_DebugMipMapOpacityId;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int k_DebugMipMapRecentlyUpdatedCooldownId;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int k_DebugMipMapTerrainTextureModeId;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int k_DebugSceneOverrideModeId;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x4C")]
	private static readonly int k_DebugFullScreenModeId;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int k_DebugValidationModeId;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x54")]
	private static readonly int k_DebugValidateBelowMinThresholdColorPropertyId;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x58")]
	private static readonly int k_DebugValidateAboveMaxThresholdColorPropertyId;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x5C")]
	private static readonly int k_DebugMaxPixelCost;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x60")]
	private static readonly int k_DebugLightingModeId;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x64")]
	private static readonly int k_DebugLightingFeatureFlagsId;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x68")]
	private static readonly int k_DebugValidateAlbedoMinLuminanceId;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x6C")]
	private static readonly int k_DebugValidateAlbedoMaxLuminanceId;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x70")]
	private static readonly int k_DebugValidateAlbedoSaturationToleranceId;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x74")]
	private static readonly int k_DebugValidateAlbedoHueToleranceId;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x78")]
	private static readonly int k_DebugValidateAlbedoCompareColorId;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x7C")]
	private static readonly int k_DebugValidateMetallicMinValueId;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x80")]
	private static readonly int k_DebugValidateMetallicMaxValueId;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x84")]
	private static readonly int k_ValidationChannelsId;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x88")]
	private static readonly int k_RangeMinimumId;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x8C")]
	private static readonly int k_RangeMaximumId;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x90")]
	private static readonly ProfilingSampler s_DebugSetupSampler;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x98")]
	private static readonly ProfilingSampler s_DebugFinalValidationSampler;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x10")]
	private DebugSetupPassData s_DebugSetupPassData;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x18")]
	private DebugFinalValidationPassData s_DebugFinalValidationPassData;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x20")]
	private readonly Material m_ReplacementMaterial;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x28")]
	private readonly Material m_HDRDebugViewMaterial;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x30")]
	private HDRDebugViewPass m_HDRDebugViewPass;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x38")]
	private RTHandle m_DebugScreenColorHandle;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x40")]
	private RTHandle m_DebugScreenDepthHandle;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x48")]
	private readonly UniversalRenderPipelineRuntimeTextures m_RuntimeTextures;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x50")]
	private bool m_HasDebugRenderTarget;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x51")]
	private bool m_DebugRenderTargetSupportsStereo;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x54")]
	private Vector4 m_DebugRenderTargetPixelRect;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x64")]
	private Vector4 m_DebugRenderTargetRangeRemap;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x78")]
	private RTHandle m_DebugRenderTarget;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x80")]
	private RTHandle m_DebugFontTexture;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x88")]
	private GraphicsBuffer m_debugDisplayConstant;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x90")]
	private readonly UniversalRenderPipelineDebugDisplaySettings m_DebugDisplaySettings;

	[Token(Token = "0x170000A7")]
	private DebugDisplaySettingsLighting LightingSettings
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x6606CC0", Offset = "0x6605CC0", VA = "0x6606CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	private DebugDisplaySettingsMaterial MaterialSettings
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x6606CE0", Offset = "0x6605CE0", VA = "0x6606CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	private DebugDisplaySettingsRendering RenderingSettings
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x6606D00", Offset = "0x6605D00", VA = "0x6606D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x6000246")]
		[Address(RVA = "0x6606D20", Offset = "0x6605D20", VA = "0x6606D20", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AB")]
	public bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000247")]
		[Address(RVA = "0x6606D50", Offset = "0x6605D50", VA = "0x6606D50", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	public bool IsLightingActive
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x6606D80", Offset = "0x6605D80", VA = "0x6606D80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AD")]
	internal bool IsActiveModeUnsupportedForDeferred
	{
		[Token(Token = "0x6000249")]
		[Address(RVA = "0x6606DB0", Offset = "0x6605DB0", VA = "0x6606DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AE")]
	internal Material ReplacementMaterial
	{
		[Token(Token = "0x600024B")]
		[Address(RVA = "0x6606E40", Offset = "0x6605E40", VA = "0x6606E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	internal UniversalRenderPipelineDebugDisplaySettings DebugDisplaySettings
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x6606E50", Offset = "0x6605E50", VA = "0x6606E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B0")]
	internal unsafe ref RTHandle DebugScreenColorHandle
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x6606E60", Offset = "0x6605E60", VA = "0x6606E60")]
		get
		{
			return ref *(RTHandle*)null;
		}
	}

	[Token(Token = "0x170000B1")]
	internal unsafe ref RTHandle DebugScreenDepthHandle
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x6606E70", Offset = "0x6605E70", VA = "0x6606E70")]
		get
		{
			return ref *(RTHandle*)null;
		}
	}

	[Token(Token = "0x170000B2")]
	internal HDRDebugViewPass hdrDebugViewPass
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x6606E80", Offset = "0x6605E80", VA = "0x6606E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B3")]
	internal bool IsScreenClearNeeded
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x6606EF0", Offset = "0x6605EF0", VA = "0x6606EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B4")]
	internal bool IsRenderPassSupported
	{
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x6606F40", Offset = "0x6605F40", VA = "0x6606F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B5")]
	internal bool IsDepthPrimingCompatible
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x6606F70", Offset = "0x6605F70", VA = "0x6606F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B6")]
	internal int stpDebugViewIndex
	{
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x6606FA0", Offset = "0x6605FA0", VA = "0x6606FA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x6606E10", Offset = "0x6605E10", VA = "0x6606E10", Slot = "7")]
	public bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x6606E90", Offset = "0x6605E90", VA = "0x6606E90")]
	internal bool HDRDebugViewIsActive(bool resolveFinalTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x6606EC0", Offset = "0x6605EC0", VA = "0x6606EC0")]
	internal bool WriteToDebugScreenTexture(bool resolveFinalTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x6606FC0", Offset = "0x6605FC0", VA = "0x6606FC0")]
	internal DebugHandler()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x66073E0", Offset = "0x66063E0", VA = "0x66073E0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x66074A0", Offset = "0x66064A0", VA = "0x66074A0")]
	internal bool IsActiveForCamera(bool isPreviewCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x66074D0", Offset = "0x66064D0", VA = "0x66074D0")]
	internal bool TryGetFullscreenDebugMode(out DebugFullScreenMode debugFullScreenMode)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x6607500", Offset = "0x6606500", VA = "0x6607500")]
	internal bool TryGetFullscreenDebugMode(out DebugFullScreenMode debugFullScreenMode, out int textureHeightPercent)
	{
		return default(bool);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x6607530", Offset = "0x6606530", VA = "0x6607530")]
	internal static void ConfigureColorDescriptorForDebugScreen(ref RenderTextureDescriptor descriptor, int cameraWidth, int cameraHeight)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x6607570", Offset = "0x6606570", VA = "0x6607570")]
	internal static void ConfigureDepthDescriptorForDebugScreen(ref RenderTextureDescriptor descriptor, GraphicsFormat depthStencilFormat, int cameraWidth, int cameraHeight)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x66075C0", Offset = "0x66065C0", VA = "0x66075C0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void SetupShaderProperties(RasterCommandBuffer cmd, int passIndex = 0)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x6607BA0", Offset = "0x6606BA0", VA = "0x6607BA0")]
	internal void SetDebugRenderTarget(RTHandle renderTarget, Rect displayRect, bool supportsStereo, Vector4 dataRangeRemap)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x6607C40", Offset = "0x6606C40", VA = "0x6607C40")]
	internal void ResetDebugRenderTarget()
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x6607C50", Offset = "0x6606C50", VA = "0x6607C50")]
	private DebugFinalValidationPassData InitDebugFinalValidationPassData(DebugFinalValidationPassData passData, UniversalCameraData cameraData, bool isFinalPass)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x6607E60", Offset = "0x6606E60", VA = "0x6607E60")]
	private static void UpdateShaderGlobalPropertiesForFinalValidationPass(RasterCommandBuffer cmd, DebugFinalValidationPassData data)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x66081B0", Offset = "0x66071B0", VA = "0x66081B0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void UpdateShaderGlobalPropertiesForFinalValidationPass(CommandBuffer cmd, UniversalCameraData cameraData, bool isFinalPass)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x6608400", Offset = "0x6607400", VA = "0x6608400")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void UpdateShaderGlobalPropertiesForFinalValidationPass(RenderGraph renderGraph, UniversalCameraData cameraData, bool isFinalPass)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x6608CE0", Offset = "0x6607CE0", VA = "0x6608CE0")]
	private DebugSetupPassData InitDebugSetupPassData(DebugSetupPassData passData, bool isPreviewCamera)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x6608D80", Offset = "0x6607D80", VA = "0x6608D80")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private static void Setup(RasterCommandBuffer cmd, DebugSetupPassData passData)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x6609160", Offset = "0x6608160", VA = "0x6609160")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void Setup(CommandBuffer cmd, bool isPreviewCamera)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x6609170", Offset = "0x6608170", VA = "0x6609170")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void Setup(RenderGraph renderGraph, bool isPreviewCamera)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x6609530", Offset = "0x6608530", VA = "0x6609530")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	internal void Render(RenderGraph renderGraph, UniversalCameraData cameraData, TextureHandle srcColor, TextureHandle overlayTexture, TextureHandle dstColor)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x6609610", Offset = "0x6608610", VA = "0x6609610")]
	internal DebugRendererLists CreateRendererListsWithDebugRenderState(ScriptableRenderContext context, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x6609EF0", Offset = "0x6608EF0", VA = "0x6609EF0")]
	internal DebugRendererLists CreateRendererListsWithDebugRenderState(RenderGraph renderGraph, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock)
	{
		return null;
	}
}
