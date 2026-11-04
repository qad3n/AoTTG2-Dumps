// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CameraData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000C1")]
public struct CameraData
{
	[Token(Token = "0x400042E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private ContextContainer frameData;

	[Token(Token = "0x17000133")]
	internal UniversalCameraData universalCameraData
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x2C36DF0", Offset = "0x2C353F0", VA = "0x182C36DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000134")]
	public unsafe ref Camera camera
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x2C36070", Offset = "0x2C34670", VA = "0x182C36070")]
		get
		{
			return ref *(Camera*)null;
		}
	}

	[Token(Token = "0x17000135")]
	public unsafe ref UniversalCameraHistory historyManager
	{
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x2C36370", Offset = "0x2C34970", VA = "0x182C36370")]
		get
		{
			return ref *(UniversalCameraHistory*)null;
		}
	}

	[Token(Token = "0x17000136")]
	public unsafe ref CameraRenderType renderType
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x2C36950", Offset = "0x2C34F50", VA = "0x182C36950")]
		get
		{
			return ref *(CameraRenderType*)null;
		}
	}

	[Token(Token = "0x17000137")]
	public unsafe ref RenderTexture targetTexture
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x2C36DA0", Offset = "0x2C353A0", VA = "0x182C36DA0")]
		get
		{
			return ref *(RenderTexture*)null;
		}
	}

	[Token(Token = "0x17000138")]
	public unsafe ref RenderTextureDescriptor cameraTargetDescriptor
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x2C35FD0", Offset = "0x2C345D0", VA = "0x182C35FD0")]
		get
		{
			return ref *(RenderTextureDescriptor*)null;
		}
	}

	[Token(Token = "0x17000139")]
	internal unsafe ref Rect pixelRect
	{
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x2C367C0", Offset = "0x2C34DC0", VA = "0x182C367C0")]
		get
		{
			return ref *(Rect*)null;
		}
	}

	[Token(Token = "0x1700013A")]
	internal unsafe ref bool useScreenCoordOverride
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x2C36E90", Offset = "0x2C35490", VA = "0x182C36E90")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700013B")]
	internal unsafe ref Vector4 screenSizeOverride
	{
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x2C36CB0", Offset = "0x2C352B0", VA = "0x182C36CB0")]
		get
		{
			return ref *(Vector4*)null;
		}
	}

	[Token(Token = "0x1700013C")]
	internal unsafe ref Vector4 screenCoordScaleBias
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x2C36C60", Offset = "0x2C35260", VA = "0x182C36C60")]
		get
		{
			return ref *(Vector4*)null;
		}
	}

	[Token(Token = "0x1700013D")]
	internal unsafe ref int pixelWidth
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x2C36810", Offset = "0x2C34E10", VA = "0x182C36810")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700013E")]
	internal unsafe ref int pixelHeight
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x2C36770", Offset = "0x2C34D70", VA = "0x182C36770")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700013F")]
	internal unsafe ref float aspectRatio
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x2C35EE0", Offset = "0x2C344E0", VA = "0x182C35EE0")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000140")]
	public unsafe ref float renderScale
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x2C36900", Offset = "0x2C34F00", VA = "0x182C36900")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000141")]
	internal unsafe ref ImageScalingMode imageScalingMode
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x2C363C0", Offset = "0x2C349C0", VA = "0x182C363C0")]
		get
		{
			return ref *(ImageScalingMode*)null;
		}
	}

	[Token(Token = "0x17000142")]
	internal unsafe ref ImageUpscalingFilter upscalingFilter
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x2C36E40", Offset = "0x2C35440", VA = "0x182C36E40")]
		get
		{
			return ref *(ImageUpscalingFilter*)null;
		}
	}

	[Token(Token = "0x17000143")]
	internal unsafe ref bool fsrOverrideSharpness
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x2C361B0", Offset = "0x2C347B0", VA = "0x182C361B0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000144")]
	internal unsafe ref float fsrSharpness
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x2C36200", Offset = "0x2C34800", VA = "0x182C36200")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000145")]
	internal unsafe ref HDRColorBufferPrecision hdrColorBufferPrecision
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x2C36250", Offset = "0x2C34850", VA = "0x182C36250")]
		get
		{
			return ref *(HDRColorBufferPrecision*)null;
		}
	}

	[Token(Token = "0x17000146")]
	public unsafe ref bool clearDepth
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x2C36110", Offset = "0x2C34710", VA = "0x182C36110")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000147")]
	public unsafe ref CameraType cameraType
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x2C36020", Offset = "0x2C34620", VA = "0x182C36020")]
		get
		{
			return ref *(CameraType*)null;
		}
	}

	[Token(Token = "0x17000148")]
	public unsafe ref bool isDefaultViewport
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x2C36460", Offset = "0x2C34A60", VA = "0x182C36460")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000149")]
	public unsafe ref bool isHdrEnabled
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x2C36560", Offset = "0x2C34B60", VA = "0x182C36560")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014A")]
	public unsafe ref bool allowHDROutput
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x2C35DF0", Offset = "0x2C343F0", VA = "0x182C35DF0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014B")]
	public unsafe ref bool isAlphaOutputEnabled
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x2C36410", Offset = "0x2C34A10", VA = "0x182C36410")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014C")]
	public unsafe ref bool requiresDepthTexture
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x2C36AB0", Offset = "0x2C350B0", VA = "0x182C36AB0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014D")]
	public unsafe ref bool requiresOpaqueTexture
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x2C36B00", Offset = "0x2C35100", VA = "0x182C36B00")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014E")]
	public unsafe ref bool postProcessingRequiresDepthTexture
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x2C368B0", Offset = "0x2C34EB0", VA = "0x182C368B0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014F")]
	public unsafe ref bool xrRendering
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x2C36FD0", Offset = "0x2C355D0", VA = "0x182C36FD0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000150")]
	internal bool requireSrgbConversion
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x2C36A50", Offset = "0x2C35050", VA = "0x182C36A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000151")]
	public bool isSceneViewCamera
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x2C36670", Offset = "0x2C34C70", VA = "0x182C36670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000152")]
	public bool isPreviewCamera
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x2C365B0", Offset = "0x2C34BB0", VA = "0x182C365B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000153")]
	internal bool isRenderPassSupportedCamera
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x2C36610", Offset = "0x2C34C10", VA = "0x182C36610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000154")]
	internal bool resolveToScreen
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x2C36C00", Offset = "0x2C35200", VA = "0x182C36C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000155")]
	public bool isHDROutputActive
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x2C36500", Offset = "0x2C34B00", VA = "0x182C36500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000156")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayInformation
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x2C36300", Offset = "0x2C34900", VA = "0x182C36300")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x17000157")]
	public ColorGamut hdrDisplayColorGamut
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x2C362A0", Offset = "0x2C348A0", VA = "0x182C362A0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000158")]
	public bool rendersOverlayUI
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x2C369F0", Offset = "0x2C34FF0", VA = "0x182C369F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public unsafe ref SortingCriteria defaultOpaqueSortFlags
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x2C36160", Offset = "0x2C34760", VA = "0x182C36160")]
		get
		{
			return ref *(SortingCriteria*)null;
		}
	}

	[Token(Token = "0x1700015A")]
	public XRPass xr
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x2C37080", Offset = "0x2C35680", VA = "0x182C37080")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x2C370E0", Offset = "0x2C356E0", VA = "0x182C370E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	internal XRPassUniversal xrUniversal
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x2C37020", Offset = "0x2C35620", VA = "0x182C37020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	public unsafe ref float maxShadowDistance
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x2C36720", Offset = "0x2C34D20", VA = "0x182C36720")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x1700015D")]
	public unsafe ref bool postProcessEnabled
	{
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x2C36860", Offset = "0x2C34E60", VA = "0x182C36860")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700015E")]
	public unsafe ref IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> captureActions
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x2C360C0", Offset = "0x2C346C0", VA = "0x182C360C0")]
		get
		{
			return ref *(IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>>*)null;
		}
	}

	[Token(Token = "0x1700015F")]
	public unsafe ref LayerMask volumeLayerMask
	{
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x2C36EE0", Offset = "0x2C354E0", VA = "0x182C36EE0")]
		get
		{
			return ref *(LayerMask*)null;
		}
	}

	[Token(Token = "0x17000160")]
	public unsafe ref Transform volumeTrigger
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x2C36F30", Offset = "0x2C35530", VA = "0x182C36F30")]
		get
		{
			return ref *(Transform*)null;
		}
	}

	[Token(Token = "0x17000161")]
	public unsafe ref bool isStopNaNEnabled
	{
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x2C366D0", Offset = "0x2C34CD0", VA = "0x182C366D0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000162")]
	public unsafe ref bool isDitheringEnabled
	{
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x2C364B0", Offset = "0x2C34AB0", VA = "0x182C364B0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000163")]
	public unsafe ref AntialiasingMode antialiasing
	{
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x2C35E90", Offset = "0x2C34490", VA = "0x182C35E90")]
		get
		{
			return ref *(AntialiasingMode*)null;
		}
	}

	[Token(Token = "0x17000164")]
	public unsafe ref AntialiasingQuality antialiasingQuality
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x2C35E40", Offset = "0x2C34440", VA = "0x182C35E40")]
		get
		{
			return ref *(AntialiasingQuality*)null;
		}
	}

	[Token(Token = "0x17000165")]
	public unsafe ref ScriptableRenderer renderer
	{
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x2C369A0", Offset = "0x2C34FA0", VA = "0x182C369A0")]
		get
		{
			return ref *(ScriptableRenderer*)null;
		}
	}

	[Token(Token = "0x17000166")]
	public unsafe ref bool resolveFinalTarget
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x2C36BB0", Offset = "0x2C351B0", VA = "0x182C36BB0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000167")]
	public unsafe ref Vector3 worldSpaceCameraPos
	{
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x2C36F80", Offset = "0x2C35580", VA = "0x182C36F80")]
		get
		{
			return ref *(Vector3*)null;
		}
	}

	[Token(Token = "0x17000168")]
	public unsafe ref Color backgroundColor
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x2C35F30", Offset = "0x2C34530", VA = "0x182C35F30")]
		get
		{
			return ref *(Color*)null;
		}
	}

	[Token(Token = "0x17000169")]
	internal unsafe ref TaaHistory taaHistory
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x2C36D00", Offset = "0x2C35300", VA = "0x182C36D00")]
		get
		{
			return ref *(TaaHistory*)null;
		}
	}

	[Token(Token = "0x1700016A")]
	internal unsafe ref TemporalAA.Settings taaSettings
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x2C36D50", Offset = "0x2C35350", VA = "0x182C36D50")]
		get
		{
			return ref *(TemporalAA.Settings*)null;
		}
	}

	[Token(Token = "0x1700016B")]
	internal bool resetHistory
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x2C36B50", Offset = "0x2C35150", VA = "0x182C36B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016C")]
	public unsafe ref Camera baseCamera
	{
		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x2C35F80", Offset = "0x2C34580", VA = "0x182C35F80")]
		get
		{
			return ref *(Camera*)null;
		}
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x2C312E0", Offset = "0x2C2F8E0", VA = "0x182C312E0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Matrix4x4 GetGPUProjectionMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x2C312E0", Offset = "0x2C2F8E0", VA = "0x182C312E0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Matrix4x4 GetGPUProjectionMatrixNoJitter(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool IsCameraProjectionMatrixFlipped()
	{
		return default(bool);
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal CameraData(ContextContainer frameData)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x2C35C10", Offset = "0x2C34210", VA = "0x182C35C10")]
	internal void SetViewAndProjectionMatrix(Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x2C35CE0", Offset = "0x2C342E0", VA = "0x182C35CE0")]
	internal void SetViewProjectionAndJitterMatrix(Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, Matrix4x4 jitterMatrix)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x2C35B90", Offset = "0x2C34190", VA = "0x182C35B90")]
	internal void PushBuiltinShaderConstantsXR(RasterCommandBuffer cmd, bool renderIntoTexture)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x2C359A0", Offset = "0x2C33FA0", VA = "0x182C359A0")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x2C35900", Offset = "0x2C33F00", VA = "0x182C35900")]
	public Matrix4x4 GetProjectionMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x2C35860", Offset = "0x2C33E60", VA = "0x182C35860")]
	internal Matrix4x4 GetProjectionMatrixNoJitter(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x2C357C0", Offset = "0x2C33DC0", VA = "0x182C357C0")]
	internal Matrix4x4 GetGPUProjectionMatrix(bool renderIntoTexture, int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x2C35A40", Offset = "0x2C34040", VA = "0x182C35A40")]
	public bool IsHandleYFlipped(RTHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x2C35AB0", Offset = "0x2C340B0", VA = "0x182C35AB0")]
	public bool IsRenderTargetProjectionMatrixFlipped(RTHandle color, [Optional] RTHandle depth)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x2C35B30", Offset = "0x2C34130", VA = "0x182C35B30")]
	internal bool IsTemporalAAEnabled()
	{
		return default(bool);
	}
}
