// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalRendererFeature
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.Universal.Internal;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000BE")]
[SupportedOnRenderer(typeof(UniversalRendererData))]
[DisallowMultipleRendererFeature("Decal")]
[Tooltip("With this Renderer Feature, Unity can project specific Materials (decals) onto other objects in the Scene.")]
public class DecalRendererFeature : ScriptableRendererFeature
{
	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private DecalSettings m_Settings;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x28")]
	private DecalTechnique m_Technique;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x30")]
	private DBufferSettings m_DBufferSettings;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x38")]
	private DecalScreenSpaceSettings m_ScreenSpaceSettings;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x40")]
	private bool m_RecreateSystems;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x48")]
	private DecalPreviewPass m_DecalPreviewPass;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x50")]
	private DecalEntityManager m_DecalEntityManager;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x58")]
	private DecalUpdateCachedSystem m_DecalUpdateCachedSystem;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x60")]
	private DecalUpdateCullingGroupSystem m_DecalUpdateCullingGroupSystem;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x68")]
	private DecalUpdateCulledSystem m_DecalUpdateCulledSystem;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x70")]
	private DecalCreateDrawCallSystem m_DecalCreateDrawCallSystem;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x78")]
	private DecalDrawErrorSystem m_DrawErrorSystem;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x80")]
	private DBufferCopyDepthPass m_CopyDepthPass;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x88")]
	private DBufferRenderPass m_DBufferRenderPass;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x90")]
	private DecalForwardEmissivePass m_ForwardEmissivePass;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x98")]
	private DecalDrawDBufferSystem m_DecalDrawDBufferSystem;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0xA0")]
	private DecalDrawFowardEmissiveSystem m_DecalDrawForwardEmissiveSystem;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0xA8")]
	private Material m_DBufferClearMaterial;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0xB0")]
	private DecalScreenSpaceRenderPass m_ScreenSpaceDecalRenderPass;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0xB8")]
	private DecalDrawScreenSpaceSystem m_DecalDrawScreenSpaceSystem;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0xC0")]
	private DecalSkipCulledSystem m_DecalSkipCulledSystem;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0xC8")]
	private DecalGBufferRenderPass m_GBufferRenderPass;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0xD0")]
	private DecalDrawGBufferSystem m_DrawGBufferSystem;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0xD8")]
	private DeferredLights m_DeferredLights;

	[Token(Token = "0x1700012C")]
	private static SharedDecalEntityManager sharedDecalEntityManager
	{
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x2C38960", Offset = "0x2C36F60", VA = "0x182C38960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	internal unsafe ref DecalSettings settings
	{
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x2C38950", Offset = "0x2C36F50", VA = "0x182C38950")]
		get
		{
			return ref *(DecalSettings*)null;
		}
	}

	[Token(Token = "0x1700012E")]
	internal bool intermediateRendering
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x2C388F0", Offset = "0x2C36EF0", VA = "0x182C388F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012F")]
	internal bool requiresDecalLayers
	{
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x2C38930", Offset = "0x2C36F30", VA = "0x182C38930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000130")]
	internal static bool isGLDevice
	{
		[Token(Token = "0x6000498")]
		[Address(RVA = "0x2C38900", Offset = "0x2C36F00", VA = "0x182C38900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void SetupRenderPasses(ScriptableRenderer renderer, in RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x2C37580", Offset = "0x2C35B80", VA = "0x182C37580", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x2C38760", Offset = "0x2C36D60", VA = "0x182C38760", Slot = "10")]
	internal override bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, out RenderingLayerUtils.Event atEvent, out RenderingLayerUtils.MaskSize maskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x2C37700", Offset = "0x2C35D00", VA = "0x182C37700")]
	internal DBufferSettings GetDBufferSettings()
	{
		return null;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x2C37780", Offset = "0x2C35D80", VA = "0x182C37780")]
	internal DecalScreenSpaceSettings GetScreenSpaceSettings()
	{
		return null;
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x2C37B50", Offset = "0x2C36150", VA = "0x182C37B50")]
	internal DecalTechnique GetTechnique(ScriptableRendererData renderer)
	{
		return default(DecalTechnique);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x2C37A50", Offset = "0x2C36050", VA = "0x182C37A50")]
	internal DecalTechnique GetTechnique(ScriptableRenderer renderer)
	{
		return default(DecalTechnique);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x2C37800", Offset = "0x2C35E00", VA = "0x182C37800")]
	internal DecalTechnique GetTechnique(bool isDeferred, bool needsGBufferAccurateNormals, bool checkForInvalidTechniques = true)
	{
		return default(DecalTechnique);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x2C37C90", Offset = "0x2C36290", VA = "0x182C37C90")]
	private bool IsAutomaticDBuffer()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x2C37F00", Offset = "0x2C36500", VA = "0x182C37F00")]
	private bool RecreateSystemsIfNeeded(ScriptableRenderer renderer, in CameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x2C37D10", Offset = "0x2C36310", VA = "0x182C37D10", Slot = "8")]
	public override void OnCameraPreCull(ScriptableRenderer renderer, in CameraData cameraData)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x2C37160", Offset = "0x2C35760", VA = "0x182C37160", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x2C375F0", Offset = "0x2C35BF0", VA = "0x182C375F0", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x2C374A0", Offset = "0x2C35AA0", VA = "0x182C374A0")]
	[Conditional("ENABLE_ADAPTIVE_PERFORMANCE")]
	private void ChangeAdaptivePerformanceDrawDistances()
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x2C38880", Offset = "0x2C36E80", VA = "0x182C38880")]
	public DecalRendererFeature()
	{
	}
}
