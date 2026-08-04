// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessLayer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000067")]
[ExecuteAlways]
[DisallowMultipleComponent]
[ImageEffectAllowedInSceneView]
[AddComponentMenu("Rendering/Post-process Layer", 1000)]
[RequireComponent(typeof(Camera))]
public sealed class PostProcessLayer : MonoBehaviour
{
	[Token(Token = "0x2000068")]
	public enum Antialiasing
	{
		[Token(Token = "0x40001BC")]
		None,
		[Token(Token = "0x40001BD")]
		FastApproximateAntialiasing,
		[Token(Token = "0x40001BE")]
		SubpixelMorphologicalAntialiasing,
		[Token(Token = "0x40001BF")]
		TemporalAntialiasing
	}

	[Serializable]
	[Token(Token = "0x2000069")]
	public sealed class SerializedBundleRef
	{
		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x10")]
		public string assemblyQualifiedName;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x18")]
		public PostProcessBundle bundle;

		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4B50C70", Offset = "0x4B50C70", VA = "0x4B50C70")]
		public SerializedBundleRef()
		{
		}
	}

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x20")]
	public Transform volumeTrigger;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x28")]
	public LayerMask volumeLayer;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x2C")]
	public bool stopNaNPropagation;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x2D")]
	public bool finalBlitToCameraTarget;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x30")]
	public Antialiasing antialiasingMode;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x38")]
	public TemporalAntialiasing temporalAntialiasing;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x40")]
	public SubpixelMorphologicalAntialiasing subpixelMorphologicalAntialiasing;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x48")]
	public FastApproximateAntialiasing fastApproximateAntialiasing;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x50")]
	public Fog fog;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x58")]
	private Dithering dithering;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x60")]
	public PostProcessDebugLayer debugLayer;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private PostProcessResources m_Resources;

	[NonSerialized]
	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x70")]
	private PostProcessResources m_OldResources;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x78")]
	[Preserve]
	[SerializeField]
	private bool m_ShowToolkit;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x79")]
	[Preserve]
	[SerializeField]
	private bool m_ShowCustomSorter;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x7A")]
	public bool breakBeforeColorGrading;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private List<SerializedBundleRef> m_BeforeTransparentBundles;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private List<SerializedBundleRef> m_BeforeStackBundles;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private List<SerializedBundleRef> m_AfterStackBundles;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0xA8")]
	private Dictionary<Type, PostProcessBundle> m_Bundles;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0xB0")]
	private PropertySheetFactory m_PropertySheetFactory;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0xB8")]
	private CommandBuffer m_LegacyCmdBufferBeforeReflections;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0xC0")]
	private CommandBuffer m_LegacyCmdBufferBeforeLighting;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0xC8")]
	private CommandBuffer m_LegacyCmdBufferOpaque;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0xD0")]
	private CommandBuffer m_LegacyCmdBuffer;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0xD8")]
	private Camera m_Camera;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0xE0")]
	private PostProcessRenderContext m_CurrentContext;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0xE8")]
	private LogHistogram m_LogHistogram;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0xF0")]
	private bool m_SettingsUpdateNeeded;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0xF1")]
	private bool m_IsRenderingInSceneView;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0xF8")]
	private TargetPool m_TargetPool;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x100")]
	private bool m_NaNKilled;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x108")]
	private readonly List<PostProcessEffectRenderer> m_ActiveEffects;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x110")]
	private readonly List<RenderTargetIdentifier> m_Targets;

	[Token(Token = "0x1700000B")]
	public Dictionary<PostProcessEvent, List<SerializedBundleRef>> sortedBundles
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x4B4F4F0", Offset = "0x4B4F4F0", VA = "0x4B4F4F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4B4F500", Offset = "0x4B4F500", VA = "0x4B4F500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public DepthTextureMode cameraDepthFlags
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x4B4F520", Offset = "0x4B4F520", VA = "0x4B4F520")]
		[CompilerGenerated]
		get
		{
			return default(DepthTextureMode);
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x4B4F530", Offset = "0x4B4F530", VA = "0x4B4F530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool haveBundlesBeenInited
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x4B4F540", Offset = "0x4B4F540", VA = "0x4B4F540")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x4B4F550", Offset = "0x4B4F550", VA = "0x4B4F550")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4B4F560", Offset = "0x4B4F560", VA = "0x4B4F560")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4B4FE70", Offset = "0x4B4FE70", VA = "0x4B4FE70")]
	private void InitLegacy()
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4B50100", Offset = "0x4B50100", VA = "0x4B50100")]
	private bool DynamicResolutionAllowsFinalBlitToCameraTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4B50220", Offset = "0x4B50220", VA = "0x4B50220")]
	[ImageEffectUsesCommandBuffer]
	private void OnRenderImage(RenderTexture src, RenderTexture dst)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4B4F760", Offset = "0x4B4F760", VA = "0x4B4F760")]
	public void Init(PostProcessResources resources)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4B4F8B0", Offset = "0x4B4F8B0", VA = "0x4B4F8B0")]
	public void InitBundles()
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4B503C0", Offset = "0x4B503C0", VA = "0x4B503C0")]
	private void UpdateBundleSortList(List<SerializedBundleRef> sortedList, PostProcessEvent evt)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4B50C90", Offset = "0x4B50C90", VA = "0x4B50C90")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4B511A0", Offset = "0x4B511A0", VA = "0x4B511A0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4B511C0", Offset = "0x4B511C0", VA = "0x4B511C0")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4B52E50", Offset = "0x4B52E50", VA = "0x4B52E50")]
	private void OnPreRender()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4B52F40", Offset = "0x4B52F40", VA = "0x4B52F40")]
	private static bool RequiresInitialBlit(Camera camera, PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4B52F50", Offset = "0x4B52F50", VA = "0x4B52F50")]
	private void UpdateSrcDstForOpaqueOnly(ref int src, ref int dst, PostProcessRenderContext context, RenderTargetIdentifier cameraTarget, int opaqueOnlyEffectsRemaining)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4B519D0", Offset = "0x4B519D0", VA = "0x4B519D0")]
	private void BuildCommandBuffers()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4B556E0", Offset = "0x4B556E0", VA = "0x4B556E0")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x6000139")]
	public PostProcessBundle GetBundle<T>() where T : PostProcessEffectSettings
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4B55980", Offset = "0x4B55980", VA = "0x4B55980")]
	public PostProcessBundle GetBundle(Type settingsType)
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	public T GetSettings<T>() where T : PostProcessEffectSettings
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4B559D0", Offset = "0x4B559D0", VA = "0x4B559D0")]
	public void BakeMSVOMap(CommandBuffer cmd, Camera camera, RenderTargetIdentifier destination, RenderTargetIdentifier? depthMap, bool invert, bool isMSAA = false)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4B55AA0", Offset = "0x4B55AA0", VA = "0x4B55AA0")]
	internal void OverrideSettings(List<PostProcessEffectSettings> baseSettings, float interpFactor)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4B55E60", Offset = "0x4B55E60", VA = "0x4B55E60")]
	private void SetLegacyCameraFlags(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4B56170", Offset = "0x4B56170", VA = "0x4B56170")]
	public void ResetHistory()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4B53D20", Offset = "0x4B53D20", VA = "0x4B53D20")]
	public bool HasOpaqueOnlyEffects(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x4B56320", Offset = "0x4B56320", VA = "0x4B56320")]
	public bool HasActiveEffects(PostProcessEvent evt, PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4B537B0", Offset = "0x4B537B0", VA = "0x4B537B0")]
	private void SetupContext(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4B53A10", Offset = "0x4B53A10", VA = "0x4B53A10")]
	public void UpdateVolumeSystem(Camera cam, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4B54090", Offset = "0x4B54090", VA = "0x4B54090")]
	public void RenderOpaqueOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4B541F0", Offset = "0x4B541F0", VA = "0x4B541F0")]
	public void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4B58220", Offset = "0x4B58220", VA = "0x4B58220")]
	private int RenderInjectionPoint(PostProcessEvent evt, PostProcessRenderContext context, string marker, int releaseTargetAfterUse = -1)
	{
		return default(int);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4B57060", Offset = "0x4B57060", VA = "0x4B57060")]
	private void RenderList(List<SerializedBundleRef> list, PostProcessRenderContext context, string marker)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4B59FF0", Offset = "0x4B59FF0", VA = "0x4B59FF0")]
	private void ApplyFlip(PostProcessRenderContext context, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4B5A100", Offset = "0x4B5A100", VA = "0x4B5A100")]
	private void ApplyDefaultFlip(MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4B584F0", Offset = "0x4B584F0", VA = "0x4B584F0")]
	private int RenderBuiltins(PostProcessRenderContext context, bool isFinalPass, int releaseTargetAfterUse = -1, int eye = -1)
	{
		return default(int);
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4B59160", Offset = "0x4B59160", VA = "0x4B59160")]
	private void RenderFinalPass(PostProcessRenderContext context, int releaseTargetAfterUse = -1, int eye = -1)
	{
	}

	[Token(Token = "0x600014C")]
	private int RenderEffect<T>(PostProcessRenderContext context, bool useTempTarget = false) where T : PostProcessEffectSettings
	{
		return default(int);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4B5A370", Offset = "0x4B5A370", VA = "0x4B5A370")]
	private bool ShouldGenerateLogHistogram(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4B5ADE0", Offset = "0x4B5ADE0", VA = "0x4B5ADE0")]
	public PostProcessLayer()
	{
	}
}
