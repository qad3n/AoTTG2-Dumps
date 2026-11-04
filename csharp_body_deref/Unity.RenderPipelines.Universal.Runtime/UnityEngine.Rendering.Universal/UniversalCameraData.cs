// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalCameraData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000BA")]
public class UniversalCameraData : ContextItem
{
	[Token(Token = "0x40003CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Matrix4x4 m_ViewMatrix;

	[Token(Token = "0x40003CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Matrix4x4 m_ProjectionMatrix;

	[Token(Token = "0x40003D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Matrix4x4 m_JitterMatrix;

	[Token(Token = "0x40003D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool m_CachedRenderIntoTextureXR;

	[Token(Token = "0x40003D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD1")]
	private bool m_InitBuiltinXRConstants;

	[Token(Token = "0x40003D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public Camera camera;

	[Token(Token = "0x40003D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public int scaledWidth;

	[Token(Token = "0x40003D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	public int scaledHeight;

	[Token(Token = "0x40003D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	internal UniversalCameraHistory m_HistoryManager;

	[Token(Token = "0x40003D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public CameraRenderType renderType;

	[Token(Token = "0x40003D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public RenderTexture targetTexture;

	[Token(Token = "0x40003D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public RenderTextureDescriptor cameraTargetDescriptor;

	[Token(Token = "0x40003DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	internal Rect pixelRect;

	[Token(Token = "0x40003DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	internal bool useScreenCoordOverride;

	[Token(Token = "0x40003DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	internal Vector4 screenSizeOverride;

	[Token(Token = "0x40003DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	internal Vector4 screenCoordScaleBias;

	[Token(Token = "0x40003DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	internal int pixelWidth;

	[Token(Token = "0x40003DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x16C")]
	internal int pixelHeight;

	[Token(Token = "0x40003E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	internal float aspectRatio;

	[Token(Token = "0x40003E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x174")]
	public float renderScale;

	[Token(Token = "0x40003E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	internal ImageScalingMode imageScalingMode;

	[Token(Token = "0x40003E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x17C")]
	internal ImageUpscalingFilter upscalingFilter;

	[Token(Token = "0x40003E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	internal bool fsrOverrideSharpness;

	[Token(Token = "0x40003E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x184")]
	internal float fsrSharpness;

	[Token(Token = "0x40003E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	internal HDRColorBufferPrecision hdrColorBufferPrecision;

	[Token(Token = "0x40003E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18C")]
	public bool clearDepth;

	[Token(Token = "0x40003E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	public CameraType cameraType;

	[Token(Token = "0x40003E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x194")]
	public bool isDefaultViewport;

	[Token(Token = "0x40003EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x195")]
	public bool isHdrEnabled;

	[Token(Token = "0x40003EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x196")]
	public bool allowHDROutput;

	[Token(Token = "0x40003EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x197")]
	public bool isAlphaOutputEnabled;

	[Token(Token = "0x40003ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	public bool requiresDepthTexture;

	[Token(Token = "0x40003EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x199")]
	public bool requiresOpaqueTexture;

	[Token(Token = "0x40003EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19A")]
	public bool postProcessingRequiresDepthTexture;

	[Token(Token = "0x40003F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19B")]
	public bool xrRendering;

	[Token(Token = "0x40003F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19C")]
	internal bool useGPUOcclusionCulling;

	[Token(Token = "0x40003F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19D")]
	internal bool stackLastCameraOutputToHDR;

	[Token(Token = "0x40003F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19E")]
	internal bool rendersOffscreenUI;

	[Token(Token = "0x40003F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19F")]
	internal bool blitsOffscreenUICover;

	[Token(Token = "0x40003F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	public SortingCriteria defaultOpaqueSortFlags;

	[Token(Token = "0x40003F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	public float maxShadowDistance;

	[Token(Token = "0x40003F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B4")]
	public bool postProcessEnabled;

	[Token(Token = "0x40003F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B5")]
	internal bool stackAnyPostProcessingEnabled;

	[Token(Token = "0x40003FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	public IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> captureActions;

	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	public LayerMask volumeLayerMask;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public Transform volumeTrigger;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	public bool isStopNaNEnabled;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D1")]
	public bool isDitheringEnabled;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D4")]
	public AntialiasingMode antialiasing;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	public AntialiasingQuality antialiasingQuality;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	public ScriptableRenderer renderer;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	public bool resolveFinalTarget;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EC")]
	public Vector3 worldSpaceCameraPos;

	[Token(Token = "0x4000404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	public Color backgroundColor;

	[Token(Token = "0x4000405")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	internal TaaHistory taaHistory;

	[Token(Token = "0x4000406")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	internal StpHistory stpHistory;

	[Token(Token = "0x4000407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	internal TemporalAA.Settings taaSettings;

	[Token(Token = "0x4000408")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	public Camera baseCamera;

	[Token(Token = "0x4000409")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	internal bool isLastBaseCamera;

	[Token(Token = "0x1700011E")]
	public UniversalCameraHistory historyManager
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x1BD53E0", Offset = "0x1BD39E0", VA = "0x181BD53E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	internal bool requireSrgbConversion
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x2C32B20", Offset = "0x2C31120", VA = "0x182C32B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000120")]
	public bool isGameCamera
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x2C329B0", Offset = "0x2C30FB0", VA = "0x182C329B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000121")]
	public bool isSceneViewCamera
	{
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x2C32AA0", Offset = "0x2C310A0", VA = "0x182C32AA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000122")]
	public bool isPreviewCamera
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x2C32A70", Offset = "0x2C31070", VA = "0x182C32A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000123")]
	internal bool isRenderPassSupportedCamera
	{
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x2C32A80", Offset = "0x2C31080", VA = "0x182C32A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000124")]
	internal bool resolveToScreen
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x2C32D00", Offset = "0x2C31300", VA = "0x182C32D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000125")]
	public bool isHDROutputActive
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x2C329C0", Offset = "0x2C30FC0", VA = "0x182C329C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000126")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayInformation
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x2C32880", Offset = "0x2C30E80", VA = "0x182C32880")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x17000127")]
	public ColorGamut hdrDisplayColorGamut
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x2C327F0", Offset = "0x2C30DF0", VA = "0x182C327F0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000128")]
	public bool rendersOverlayUI
	{
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x2C32AB0", Offset = "0x2C310B0", VA = "0x182C32AB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000129")]
	public XRPass xr
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x2C32E30", Offset = "0x2C31430", VA = "0x182C32E30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x2C32E40", Offset = "0x2C31440", VA = "0x182C32E40")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	internal XRPassUniversal xrUniversal
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x2C32DB0", Offset = "0x2C313B0", VA = "0x182C32DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	internal bool resetHistory
	{
		[Token(Token = "0x6000489")]
		[Address(RVA = "0x2C32CF0", Offset = "0x2C312F0", VA = "0x182C32CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x2C312E0", Offset = "0x2C2F8E0", VA = "0x182C312E0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Matrix4x4 GetGPUProjectionMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x2C312E0", Offset = "0x2C2F8E0", VA = "0x182C312E0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Matrix4x4 GetGPUProjectionMatrixNoJitter(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool IsCameraProjectionMatrixFlipped()
	{
		return default(bool);
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x2C326C0", Offset = "0x2C30CC0", VA = "0x182C326C0")]
	internal void SetViewAndProjectionMatrix(Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x2C32770", Offset = "0x2C30D70", VA = "0x182C32770")]
	internal void SetViewProjectionAndJitterMatrix(Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, Matrix4x4 jitterMatrix)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x2C31CD0", Offset = "0x2C302D0", VA = "0x182C31CD0")]
	internal void PushBuiltinShaderConstantsXR(RasterCommandBuffer cmd, bool renderIntoTexture)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x2C31650", Offset = "0x2C2FC50", VA = "0x182C31650")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x2C31450", Offset = "0x2C2FA50", VA = "0x182C31450")]
	public Matrix4x4 GetProjectionMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x2C313A0", Offset = "0x2C2F9A0", VA = "0x182C313A0")]
	internal Matrix4x4 GetProjectionMatrixNoJitter(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x2C31300", Offset = "0x2C2F900", VA = "0x182C31300")]
	internal Matrix4x4 GetGPUProjectionMatrix(bool renderIntoTexture, int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x2C316F0", Offset = "0x2C2FCF0", VA = "0x182C316F0")]
	public bool IsHandleYFlipped(RTHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x2C319F0", Offset = "0x2C2FFF0", VA = "0x182C319F0")]
	public bool IsRenderTargetProjectionMatrixFlipped(RTHandle color, [Optional] RTHandle depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x2C31CC0", Offset = "0x2C302C0", VA = "0x182C31CC0")]
	internal bool IsTemporalAARequested()
	{
		return default(bool);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x2C31BD0", Offset = "0x2C301D0", VA = "0x182C31BD0")]
	internal bool IsTemporalAAEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x2C31BB0", Offset = "0x2C301B0", VA = "0x182C31BB0")]
	internal bool IsSTPRequested()
	{
		return default(bool);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x2C31AA0", Offset = "0x2C300A0", VA = "0x182C31AA0")]
	internal bool IsSTPEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x2C32480", Offset = "0x2C30A80", VA = "0x182C32480", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UniversalCameraData()
	{
	}
}
