// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CameraData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x662BD40", Offset = "0x662AD40", VA = "0x662BD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000134")]
	public unsafe ref Camera camera
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x662B520", Offset = "0x662A520", VA = "0x662B520")]
		get
		{
			return ref *(Camera*)null;
		}
	}

	[Token(Token = "0x17000135")]
	public unsafe ref UniversalCameraHistory historyManager
	{
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x662C0D0", Offset = "0x662B0D0", VA = "0x662C0D0")]
		get
		{
			return ref *(UniversalCameraHistory*)null;
		}
	}

	[Token(Token = "0x17000136")]
	public unsafe ref CameraRenderType renderType
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x662C120", Offset = "0x662B120", VA = "0x662C120")]
		get
		{
			return ref *(CameraRenderType*)null;
		}
	}

	[Token(Token = "0x17000137")]
	public unsafe ref RenderTexture targetTexture
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x662C170", Offset = "0x662B170", VA = "0x662C170")]
		get
		{
			return ref *(RenderTexture*)null;
		}
	}

	[Token(Token = "0x17000138")]
	public unsafe ref RenderTextureDescriptor cameraTargetDescriptor
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x662C1C0", Offset = "0x662B1C0", VA = "0x662C1C0")]
		get
		{
			return ref *(RenderTextureDescriptor*)null;
		}
	}

	[Token(Token = "0x17000139")]
	internal unsafe ref Rect pixelRect
	{
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x662C210", Offset = "0x662B210", VA = "0x662C210")]
		get
		{
			return ref *(Rect*)null;
		}
	}

	[Token(Token = "0x1700013A")]
	internal unsafe ref bool useScreenCoordOverride
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x662C260", Offset = "0x662B260", VA = "0x662C260")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700013B")]
	internal unsafe ref Vector4 screenSizeOverride
	{
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x662C2B0", Offset = "0x662B2B0", VA = "0x662C2B0")]
		get
		{
			return ref *(Vector4*)null;
		}
	}

	[Token(Token = "0x1700013C")]
	internal unsafe ref Vector4 screenCoordScaleBias
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x662C300", Offset = "0x662B300", VA = "0x662C300")]
		get
		{
			return ref *(Vector4*)null;
		}
	}

	[Token(Token = "0x1700013D")]
	internal unsafe ref int pixelWidth
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x662C350", Offset = "0x662B350", VA = "0x662C350")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700013E")]
	internal unsafe ref int pixelHeight
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x662C3A0", Offset = "0x662B3A0", VA = "0x662C3A0")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700013F")]
	internal unsafe ref float aspectRatio
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x662C3F0", Offset = "0x662B3F0", VA = "0x662C3F0")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000140")]
	public unsafe ref float renderScale
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x662C440", Offset = "0x662B440", VA = "0x662C440")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000141")]
	internal unsafe ref ImageScalingMode imageScalingMode
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x662C490", Offset = "0x662B490", VA = "0x662C490")]
		get
		{
			return ref *(ImageScalingMode*)null;
		}
	}

	[Token(Token = "0x17000142")]
	internal unsafe ref ImageUpscalingFilter upscalingFilter
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x662C4E0", Offset = "0x662B4E0", VA = "0x662C4E0")]
		get
		{
			return ref *(ImageUpscalingFilter*)null;
		}
	}

	[Token(Token = "0x17000143")]
	internal unsafe ref bool fsrOverrideSharpness
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x662C530", Offset = "0x662B530", VA = "0x662C530")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000144")]
	internal unsafe ref float fsrSharpness
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x662C580", Offset = "0x662B580", VA = "0x662C580")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000145")]
	internal unsafe ref HDRColorBufferPrecision hdrColorBufferPrecision
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x662C5D0", Offset = "0x662B5D0", VA = "0x662C5D0")]
		get
		{
			return ref *(HDRColorBufferPrecision*)null;
		}
	}

	[Token(Token = "0x17000146")]
	public unsafe ref bool clearDepth
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x662C620", Offset = "0x662B620", VA = "0x662C620")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000147")]
	public unsafe ref CameraType cameraType
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x662B3E0", Offset = "0x662A3E0", VA = "0x662B3E0")]
		get
		{
			return ref *(CameraType*)null;
		}
	}

	[Token(Token = "0x17000148")]
	public unsafe ref bool isDefaultViewport
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x662C670", Offset = "0x662B670", VA = "0x662C670")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000149")]
	public unsafe ref bool isHdrEnabled
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x662C6C0", Offset = "0x662B6C0", VA = "0x662C6C0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014A")]
	public unsafe ref bool allowHDROutput
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x662C710", Offset = "0x662B710", VA = "0x662C710")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014B")]
	public unsafe ref bool isAlphaOutputEnabled
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x662C760", Offset = "0x662B760", VA = "0x662C760")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014C")]
	public unsafe ref bool requiresDepthTexture
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x662C7B0", Offset = "0x662B7B0", VA = "0x662C7B0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014D")]
	public unsafe ref bool requiresOpaqueTexture
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x662C800", Offset = "0x662B800", VA = "0x662C800")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014E")]
	public unsafe ref bool postProcessingRequiresDepthTexture
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x662C850", Offset = "0x662B850", VA = "0x662C850")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700014F")]
	public unsafe ref bool xrRendering
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x662C8A0", Offset = "0x662B8A0", VA = "0x662C8A0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000150")]
	internal bool requireSrgbConversion
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x662C8F0", Offset = "0x662B8F0", VA = "0x662C8F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000151")]
	public bool isSceneViewCamera
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x662C940", Offset = "0x662B940", VA = "0x662C940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000152")]
	public bool isPreviewCamera
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x662C990", Offset = "0x662B990", VA = "0x662C990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000153")]
	internal bool isRenderPassSupportedCamera
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x662C9E0", Offset = "0x662B9E0", VA = "0x662C9E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000154")]
	internal bool resolveToScreen
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x662CA30", Offset = "0x662BA30", VA = "0x662CA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000155")]
	public bool isHDROutputActive
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x662CA80", Offset = "0x662BA80", VA = "0x662CA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000156")]
	public HDROutputUtils.HDRDisplayInformation hdrDisplayInformation
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x662CAD0", Offset = "0x662BAD0", VA = "0x662CAD0")]
		get
		{
			return default(HDROutputUtils.HDRDisplayInformation);
		}
	}

	[Token(Token = "0x17000157")]
	public ColorGamut hdrDisplayColorGamut
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x662CB20", Offset = "0x662BB20", VA = "0x662CB20")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x17000158")]
	public bool rendersOverlayUI
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x662CB70", Offset = "0x662BB70", VA = "0x662CB70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public unsafe ref SortingCriteria defaultOpaqueSortFlags
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x662CCD0", Offset = "0x662BCD0", VA = "0x662CCD0")]
		get
		{
			return ref *(SortingCriteria*)null;
		}
	}

	[Token(Token = "0x1700015A")]
	public XRPass xr
	{
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x662CD20", Offset = "0x662BD20", VA = "0x662CD20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x662CD70", Offset = "0x662BD70", VA = "0x662CD70")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	internal XRPassUniversal xrUniversal
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x662CDE0", Offset = "0x662BDE0", VA = "0x662CDE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	public unsafe ref float maxShadowDistance
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x662CE30", Offset = "0x662BE30", VA = "0x662CE30")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x1700015D")]
	public unsafe ref bool postProcessEnabled
	{
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x662CE80", Offset = "0x662BE80", VA = "0x662CE80")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x1700015E")]
	public unsafe ref IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> captureActions
	{
		[Token(Token = "0x60004EF")]
		[Address(RVA = "0x662CED0", Offset = "0x662BED0", VA = "0x662CED0")]
		get
		{
			return ref *(IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>>*)null;
		}
	}

	[Token(Token = "0x1700015F")]
	public unsafe ref LayerMask volumeLayerMask
	{
		[Token(Token = "0x60004F0")]
		[Address(RVA = "0x662CF20", Offset = "0x662BF20", VA = "0x662CF20")]
		get
		{
			return ref *(LayerMask*)null;
		}
	}

	[Token(Token = "0x17000160")]
	public unsafe ref Transform volumeTrigger
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x662CF70", Offset = "0x662BF70", VA = "0x662CF70")]
		get
		{
			return ref *(Transform*)null;
		}
	}

	[Token(Token = "0x17000161")]
	public unsafe ref bool isStopNaNEnabled
	{
		[Token(Token = "0x60004F2")]
		[Address(RVA = "0x662CFC0", Offset = "0x662BFC0", VA = "0x662CFC0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000162")]
	public unsafe ref bool isDitheringEnabled
	{
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x662D010", Offset = "0x662C010", VA = "0x662D010")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000163")]
	public unsafe ref AntialiasingMode antialiasing
	{
		[Token(Token = "0x60004F4")]
		[Address(RVA = "0x662D060", Offset = "0x662C060", VA = "0x662D060")]
		get
		{
			return ref *(AntialiasingMode*)null;
		}
	}

	[Token(Token = "0x17000164")]
	public unsafe ref AntialiasingQuality antialiasingQuality
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0x662D0B0", Offset = "0x662C0B0", VA = "0x662D0B0")]
		get
		{
			return ref *(AntialiasingQuality*)null;
		}
	}

	[Token(Token = "0x17000165")]
	public unsafe ref ScriptableRenderer renderer
	{
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x662D100", Offset = "0x662C100", VA = "0x662D100")]
		get
		{
			return ref *(ScriptableRenderer*)null;
		}
	}

	[Token(Token = "0x17000166")]
	public unsafe ref bool resolveFinalTarget
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x662D150", Offset = "0x662C150", VA = "0x662D150")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000167")]
	public unsafe ref Vector3 worldSpaceCameraPos
	{
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x662D1A0", Offset = "0x662C1A0", VA = "0x662D1A0")]
		get
		{
			return ref *(Vector3*)null;
		}
	}

	[Token(Token = "0x17000168")]
	public unsafe ref Color backgroundColor
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x662D1F0", Offset = "0x662C1F0", VA = "0x662D1F0")]
		get
		{
			return ref *(Color*)null;
		}
	}

	[Token(Token = "0x17000169")]
	internal unsafe ref TaaHistory taaHistory
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x662D240", Offset = "0x662C240", VA = "0x662D240")]
		get
		{
			return ref *(TaaHistory*)null;
		}
	}

	[Token(Token = "0x1700016A")]
	internal unsafe ref TemporalAA.Settings taaSettings
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x662D290", Offset = "0x662C290", VA = "0x662D290")]
		get
		{
			return ref *(TemporalAA.Settings*)null;
		}
	}

	[Token(Token = "0x1700016B")]
	internal bool resetHistory
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x662D2E0", Offset = "0x662C2E0", VA = "0x662D2E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016C")]
	public unsafe ref Camera baseCamera
	{
		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x662D330", Offset = "0x662C330", VA = "0x662D330")]
		get
		{
			return ref *(Camera*)null;
		}
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x662BCE0", Offset = "0x662ACE0", VA = "0x662BCE0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Matrix4x4 GetGPUProjectionMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x662BD00", Offset = "0x662AD00", VA = "0x662BD00")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public Matrix4x4 GetGPUProjectionMatrixNoJitter(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x662BD20", Offset = "0x662AD20", VA = "0x662BD20")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public bool IsCameraProjectionMatrixFlipped()
	{
		return default(bool);
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x662BD30", Offset = "0x662AD30", VA = "0x662BD30")]
	internal CameraData(ContextContainer frameData)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x662BD80", Offset = "0x662AD80", VA = "0x662BD80")]
	internal void SetViewAndProjectionMatrix(Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x662BDD0", Offset = "0x662ADD0", VA = "0x662BDD0")]
	internal void SetViewProjectionAndJitterMatrix(Matrix4x4 viewMatrix, Matrix4x4 projectionMatrix, Matrix4x4 jitterMatrix)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x662BE20", Offset = "0x662AE20", VA = "0x662BE20")]
	internal void PushBuiltinShaderConstantsXR(RasterCommandBuffer cmd, bool renderIntoTexture)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x662BE80", Offset = "0x662AE80", VA = "0x662BE80")]
	public Matrix4x4 GetViewMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x662BF10", Offset = "0x662AF10", VA = "0x662BF10")]
	public Matrix4x4 GetProjectionMatrix(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x662BFA0", Offset = "0x662AFA0", VA = "0x662BFA0")]
	internal Matrix4x4 GetProjectionMatrixNoJitter(int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x662C030", Offset = "0x662B030", VA = "0x662C030")]
	internal Matrix4x4 GetGPUProjectionMatrix(bool renderIntoTexture, int viewIndex = 0)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x662CBC0", Offset = "0x662BBC0", VA = "0x662CBC0")]
	public bool IsHandleYFlipped(RTHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x662CC20", Offset = "0x662BC20", VA = "0x662CC20")]
	public bool IsRenderTargetProjectionMatrixFlipped(RTHandle color, [Optional] RTHandle depth)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x662CC80", Offset = "0x662BC80", VA = "0x662CC80")]
	internal bool IsTemporalAAEnabled()
	{
		return default(bool);
	}
}
