// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ForwardRendererData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000D2")]
[Obsolete("ForwardRendererData has been deprecated #from(2021.2) #breakingFrom(2021.2) (UnityUpgradable) -> UniversalRendererData", true)]
[ReloadGroup]
[ExcludeFromPreset]
public class ForwardRendererData : ScriptableRendererData
{
	[Serializable]
	[Token(Token = "0x20000D3")]
	[ReloadGroup]
	public sealed class ShaderResources
	{
		[Token(Token = "0x40004C0")]
		[FieldOffset(Offset = "0x10")]
		[Reload("Shaders/Utils/Blit.shader", ReloadAttribute.Package.Root)]
		public Shader blitPS;

		[Token(Token = "0x40004C1")]
		[FieldOffset(Offset = "0x18")]
		[Reload("Shaders/Utils/CopyDepth.shader", ReloadAttribute.Package.Root)]
		public Shader copyDepthPS;

		[Token(Token = "0x40004C2")]
		[FieldOffset(Offset = "0x20")]
		[Obsolete("Obsolete, this feature will be supported by new 'ScreenSpaceShadows' renderer feature. #from(2021.1) #breakingFrom(2023.1)", true)]
		public Shader screenSpaceShadowPS;

		[Token(Token = "0x40004C3")]
		[FieldOffset(Offset = "0x28")]
		[Reload("Shaders/Utils/Sampling.shader", ReloadAttribute.Package.Root)]
		public Shader samplingPS;

		[Token(Token = "0x40004C4")]
		[FieldOffset(Offset = "0x30")]
		[Reload("Shaders/Utils/StencilDeferred.shader", ReloadAttribute.Package.Root)]
		public Shader stencilDeferredPS;

		[Token(Token = "0x40004C5")]
		[FieldOffset(Offset = "0x38")]
		[Reload("Shaders/Utils/FallbackError.shader", ReloadAttribute.Package.Root)]
		public Shader fallbackErrorPS;

		[Token(Token = "0x40004C6")]
		[FieldOffset(Offset = "0x40")]
		[Reload("Shaders/Utils/FallbackLoading.shader", ReloadAttribute.Package.Root)]
		public Shader fallbackLoadingPS;

		[Token(Token = "0x40004C7")]
		[FieldOffset(Offset = "0x48")]
		[Obsolete("Use fallbackErrorPS instead. #from(2022.2) #breakingFrom(2023.1)", true)]
		[Reload("Shaders/Utils/MaterialError.shader", ReloadAttribute.Package.Root)]
		public Shader materialErrorPS;

		[Token(Token = "0x40004C8")]
		[FieldOffset(Offset = "0x50")]
		[Reload("Shaders/Utils/CoreBlit.shader", ReloadAttribute.Package.Root)]
		[SerializeField]
		internal Shader coreBlitPS;

		[Token(Token = "0x40004C9")]
		[FieldOffset(Offset = "0x58")]
		[Reload("Shaders/Utils/CoreBlitColorAndDepth.shader", ReloadAttribute.Package.Root)]
		[SerializeField]
		internal Shader coreBlitColorAndDepthPS;

		[Token(Token = "0x40004CA")]
		[FieldOffset(Offset = "0x60")]
		[Reload("Shaders/CameraMotionVectors.shader", ReloadAttribute.Package.Root)]
		public Shader cameraMotionVector;

		[Token(Token = "0x40004CB")]
		[FieldOffset(Offset = "0x68")]
		[Reload("Shaders/ObjectMotionVectors.shader", ReloadAttribute.Package.Root)]
		public Shader objectMotionVector;

		[Token(Token = "0x600059B")]
		[Address(RVA = "0x6640B40", Offset = "0x663FB40", VA = "0x6640B40")]
		public ShaderResources()
		{
		}
	}

	[Token(Token = "0x40004B3")]
	private const string k_ErrorMessage = "ForwardRendererData has been deprecated. Use UniversalRendererData instead";

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x48")]
	public ShaderResources shaders;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x50")]
	public PostProcessData postProcessData;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x58")]
	public XRSystemData xrSystemData;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private LayerMask m_OpaqueLayerMask;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private LayerMask m_TransparentLayerMask;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private StencilStateData m_DefaultStencilState;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private bool m_ShadowTransparentReceive;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private RenderingMode m_RenderingMode;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private DepthPrimingMode m_DepthPrimingMode;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private bool m_AccurateGbufferNormals;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x7D")]
	[SerializeField]
	private bool m_ClusteredRendering;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private TileSize m_TileSize;

	[Token(Token = "0x17000185")]
	public LayerMask opaqueLayerMask
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x6640770", Offset = "0x663F770", VA = "0x6640770")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x66407C0", Offset = "0x663F7C0", VA = "0x66407C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public LayerMask transparentLayerMask
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x6640810", Offset = "0x663F810", VA = "0x6640810")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x6640860", Offset = "0x663F860", VA = "0x6640860")]
		set
		{
		}
	}

	[Token(Token = "0x17000187")]
	public StencilStateData defaultStencilState
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x66408B0", Offset = "0x663F8B0", VA = "0x66408B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x6640900", Offset = "0x663F900", VA = "0x6640900")]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	public bool shadowTransparentReceive
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x6640950", Offset = "0x663F950", VA = "0x6640950")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x66409A0", Offset = "0x663F9A0", VA = "0x66409A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public RenderingMode renderingMode
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x66409F0", Offset = "0x663F9F0", VA = "0x66409F0")]
		get
		{
			return default(RenderingMode);
		}
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x6640A40", Offset = "0x663FA40", VA = "0x6640A40")]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public bool accurateGbufferNormals
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x6640A90", Offset = "0x663FA90", VA = "0x6640A90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x6640AE0", Offset = "0x663FAE0", VA = "0x6640AE0")]
		set
		{
		}
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x66406E0", Offset = "0x663F6E0", VA = "0x66406E0", Slot = "8")]
	protected override ScriptableRenderer Create()
	{
		return null;
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x6640B30", Offset = "0x663FB30", VA = "0x6640B30")]
	public ForwardRendererData()
	{
	}
}
