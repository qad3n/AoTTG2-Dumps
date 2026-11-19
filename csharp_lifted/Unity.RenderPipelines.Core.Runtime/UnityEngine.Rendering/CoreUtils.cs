// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreUtils
// Update status: unchanged since the previous dump
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

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C0")]
public static class CoreUtils
{
	[Token(Token = "0x20001C1")]
	public static class Sections
	{
		[Token(Token = "0x40008C4")]
		public const int section1 = 10000;

		[Token(Token = "0x40008C5")]
		public const int section2 = 20000;

		[Token(Token = "0x40008C6")]
		public const int section3 = 30000;

		[Token(Token = "0x40008C7")]
		public const int section4 = 40000;

		[Token(Token = "0x40008C8")]
		public const int section5 = 50000;

		[Token(Token = "0x40008C9")]
		public const int section6 = 60000;

		[Token(Token = "0x40008CA")]
		public const int section7 = 70000;

		[Token(Token = "0x40008CB")]
		public const int section8 = 80000;
	}

	[Token(Token = "0x20001C2")]
	public static class Priorities
	{
		[Token(Token = "0x40008CC")]
		public const int assetsCreateShaderMenuPriority = 83;

		[Token(Token = "0x40008CD")]
		public const int assetsCreateRenderingMenuPriority = 308;

		[Token(Token = "0x40008CE")]
		public const int editMenuPriority = 320;

		[Token(Token = "0x40008CF")]
		public const int gameObjectMenuPriority = 10;

		[Token(Token = "0x40008D0")]
		public const int srpLensFlareMenuPriority = 9;

		[Token(Token = "0x40008D1")]
		public const int scriptingPriority = 40;
	}

	[Token(Token = "0x40008B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Vector3[] lookAtList;

	[Token(Token = "0x40008B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly Vector3[] upVectorList;

	[Token(Token = "0x40008B2")]
	private const string obsoletePriorityMessage = "Use CoreUtils.Priorities instead. #from(2021.2)";

	[Token(Token = "0x40008B3")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int editMenuPriority1 = 320;

	[Token(Token = "0x40008B4")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int editMenuPriority2 = 331;

	[Token(Token = "0x40008B5")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int editMenuPriority3 = 342;

	[Token(Token = "0x40008B6")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int editMenuPriority4 = 353;

	[Token(Token = "0x40008B7")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int assetCreateMenuPriority1 = 230;

	[Token(Token = "0x40008B8")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int assetCreateMenuPriority2 = 241;

	[Token(Token = "0x40008B9")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int assetCreateMenuPriority3 = 300;

	[Token(Token = "0x40008BA")]
	[Obsolete("Use CoreUtils.Priorities instead. #from(2021.2)")]
	public const int gameObjectMenuPriority = 10;

	[Token(Token = "0x40008BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Cubemap m_BlackCubeTexture;

	[Token(Token = "0x40008BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Cubemap m_MagentaCubeTexture;

	[Token(Token = "0x40008BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static CubemapArray m_MagentaCubeTextureArray;

	[Token(Token = "0x40008BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Cubemap m_WhiteCubeTexture;

	[Token(Token = "0x40008BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static RenderTexture m_EmptyUAV;

	[Token(Token = "0x40008C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static GraphicsBuffer m_EmptyBuffer;

	[Token(Token = "0x40008C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Texture3D m_BlackVolumeTexture;

	[Token(Token = "0x40008C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal static Texture3D m_WhiteVolumeTexture;

	[Token(Token = "0x40008C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static IEnumerable<Type> s_AssemblyTypes;

	[Token(Token = "0x170001C2")]
	public static Cubemap blackCubeTexture
	{
		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x6540D90", Offset = "0x653FD90", VA = "0x6540D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public static Cubemap magentaCubeTexture
	{
		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x6541050", Offset = "0x6540050", VA = "0x6541050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public static CubemapArray magentaCubeTextureArray
	{
		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x6541330", Offset = "0x6540330", VA = "0x6541330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public static Cubemap whiteCubeTexture
	{
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x6541700", Offset = "0x6540700", VA = "0x6541700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public static RenderTexture emptyUAV
	{
		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x65419C0", Offset = "0x65409C0", VA = "0x65419C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	public static GraphicsBuffer emptyBuffer
	{
		[Token(Token = "0x6000DAB")]
		[Address(RVA = "0x6541B10", Offset = "0x6540B10", VA = "0x6541B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public static Texture3D blackVolumeTexture
	{
		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x6541C50", Offset = "0x6540C50", VA = "0x6541C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	internal static Texture3D whiteVolumeTexture
	{
		[Token(Token = "0x6000DAD")]
		[Address(RVA = "0x6541E00", Offset = "0x6540E00", VA = "0x6541E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x6541FB0", Offset = "0x6540FB0", VA = "0x6541FB0")]
	public static void ClearRenderTarget(CommandBuffer cmd, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x6541FE0", Offset = "0x6540FE0", VA = "0x6541FE0")]
	private static int FixupDepthSlice(int depthSlice, RTHandle buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x6542020", Offset = "0x6541020", VA = "0x6542020")]
	private static int FixupDepthSlice(int depthSlice, CubemapFace cubemapFace)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x6542030", Offset = "0x6541030", VA = "0x6542030")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x6542140", Offset = "0x6541140", VA = "0x6542140")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, ClearFlag clearFlag = ClearFlag.None, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x65422A0", Offset = "0x65412A0", VA = "0x65422A0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x65424D0", Offset = "0x65414D0", VA = "0x65424D0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x6542390", Offset = "0x6541390", VA = "0x6542390")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x6542650", Offset = "0x6541650", VA = "0x6542650")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x6542830", Offset = "0x6541830", VA = "0x6542830")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag = ClearFlag.None)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x6542750", Offset = "0x6541750", VA = "0x6542750")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x6542970", Offset = "0x6541970", VA = "0x6542970")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x6542A50", Offset = "0x6541A50", VA = "0x6542A50")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x6542B80", Offset = "0x6541B80", VA = "0x6542B80")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x6542D60", Offset = "0x6541D60", VA = "0x6542D60")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x6542EA0", Offset = "0x6541EA0", VA = "0x6542EA0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x6542FB0", Offset = "0x6541FB0", VA = "0x6542FB0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x6543160", Offset = "0x6542160", VA = "0x6543160")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x65433F0", Offset = "0x65423F0", VA = "0x65433F0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x65434E0", Offset = "0x65424E0", VA = "0x65434E0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x6543660", Offset = "0x6542660", VA = "0x6543660")]
	private static void SetViewportAndClear(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x65437D0", Offset = "0x65427D0", VA = "0x65437D0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x65438E0", Offset = "0x65428E0", VA = "0x65438E0")]
	public static void SetRenderTarget(ComputeCommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x6543990", Offset = "0x6542990", VA = "0x6543990")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag = ClearFlag.None, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x6543A10", Offset = "0x6542A10", VA = "0x6543A10")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x6543CD0", Offset = "0x6542CD0", VA = "0x6543CD0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, ClearFlag clearFlag, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x6543AA0", Offset = "0x6542AA0", VA = "0x6543AA0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x6543D60", Offset = "0x6542D60", VA = "0x6543D60")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x6543E80", Offset = "0x6542E80", VA = "0x6543E80")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RTHandle depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x6544070", Offset = "0x6543070", VA = "0x6544070")]
	public static void SetShadingRateFragmentSize(CommandBuffer cmd, ShadingRateFragmentSize baseShadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x6544090", Offset = "0x6543090", VA = "0x6544090")]
	public static void SetShadingRateCombiner(CommandBuffer cmd, ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x65440B0", Offset = "0x65430B0", VA = "0x65440B0")]
	public static void SetShadingRateImage(CommandBuffer cmd, in RenderTargetIdentifier shadingRateImage)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x65440D0", Offset = "0x65430D0", VA = "0x65440D0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x6544230", Offset = "0x6543230", VA = "0x6544230")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer, ClearFlag clearFlag = ClearFlag.None)
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x65443B0", Offset = "0x65433B0", VA = "0x65443B0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x6543760", Offset = "0x6542760", VA = "0x6543760")]
	public static void SetViewport(CommandBuffer cmd, RTHandle target)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x6544470", Offset = "0x6543470", VA = "0x6544470")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, RenderTextureFormat format, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None)
	{
		return null;
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x65447B0", Offset = "0x65437B0", VA = "0x65447B0")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, GraphicsFormat format, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None)
	{
		return null;
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x6544890", Offset = "0x6543890", VA = "0x6544890")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, GraphicsFormat format, TextureDimension dim, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None, bool dynamicRes = false, bool dynamicResExplicit = false)
	{
		return null;
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x6544550", Offset = "0x6543550", VA = "0x6544550")]
	private static string GetRenderTargetAutoName(int width, int height, int depth, string format, TextureDimension dim, string name, bool mips, bool enableMSAA, MSAASamples msaaSamples, bool dynamicRes, bool dynamicResExplicit)
	{
		return null;
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x6544980", Offset = "0x6543980", VA = "0x6544980")]
	public static string GetTextureAutoName(int width, int height, TextureFormat format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x6544EB0", Offset = "0x6543EB0", VA = "0x6544EB0")]
	public static string GetTextureAutoName(int width, int height, GraphicsFormat format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x6544A40", Offset = "0x6543A40", VA = "0x6544A40")]
	private static string GetTextureAutoName(int width, int height, string format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x6544F70", Offset = "0x6543F70", VA = "0x6544F70")]
	public static void ClearCubemap(CommandBuffer cmd, RenderTexture renderTexture, Color clearColor, bool clearMips = false)
	{
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x6545780", Offset = "0x6544780", VA = "0x6545780")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x6545860", Offset = "0x6544860", VA = "0x6545860")]
	public static void DrawFullScreen(RasterCommandBuffer commandBuffer, Material material, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x65459A0", Offset = "0x65449A0", VA = "0x65459A0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier colorBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x6545AC0", Offset = "0x6544AC0", VA = "0x6545AC0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthStencilBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x6545C00", Offset = "0x6544C00", VA = "0x6545C00")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthStencilBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x6545D20", Offset = "0x6544D20", VA = "0x6545D20")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier[] colorBuffers, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x6545EC0", Offset = "0x6544EC0", VA = "0x6545EC0")]
	public static Color ConvertSRGBToActiveColorSpace(Color color)
	{
		return default(Color);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x6545F40", Offset = "0x6544F40", VA = "0x6545F40")]
	public static Color ConvertLinearToActiveColorSpace(Color color)
	{
		return default(Color);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x6545FC0", Offset = "0x6544FC0", VA = "0x6545FC0")]
	public static Material CreateEngineMaterial(string shaderPath)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x6546120", Offset = "0x6545120", VA = "0x6546120")]
	public static Material CreateEngineMaterial(Shader shader)
	{
		return null;
	}

	[Token(Token = "0x6000DE4")]
	public static bool HasFlag<T>(T mask, T flag) where T : IConvertible
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE5")]
	public static void Swap<T>(ref T a, ref T b)
	{
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x6546200", Offset = "0x6545200", VA = "0x6546200")]
	public static void SetKeyword(CommandBuffer cmd, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x6546230", Offset = "0x6545230", VA = "0x6546230")]
	public static void SetKeyword(CommandBuffer cmd, ComputeShader cs, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x65462A0", Offset = "0x65452A0", VA = "0x65462A0")]
	public static void SetKeyword(BaseCommandBuffer cmd, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x65462E0", Offset = "0x65452E0", VA = "0x65462E0")]
	public static void SetKeyword(Material material, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x6546310", Offset = "0x6545310", VA = "0x6546310")]
	public static void SetKeyword(Material material, LocalKeyword keyword, bool state)
	{
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x6546340", Offset = "0x6545340", VA = "0x6546340")]
	public static void SetKeyword(ComputeShader cs, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x6546370", Offset = "0x6545370", VA = "0x6546370")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x65463F0", Offset = "0x65453F0", VA = "0x65463F0")]
	public static IEnumerable<Type> GetAllAssemblyTypes()
	{
		return null;
	}

	[Token(Token = "0x6000DEE")]
	public static IEnumerable<Type> GetAllTypesDerivedFrom<T>()
	{
		return null;
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x65466D0", Offset = "0x65456D0", VA = "0x65466D0")]
	public static void SafeRelease(GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x65466E0", Offset = "0x65456E0", VA = "0x65466E0")]
	public static void SafeRelease(ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x65466F0", Offset = "0x65456F0", VA = "0x65466F0")]
	public static Mesh CreateCubeMesh(Vector3 min, Vector3 max)
	{
		return null;
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x6546AE0", Offset = "0x6545AE0", VA = "0x6546AE0")]
	public static bool ArePostProcessesEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x6546AF0", Offset = "0x6545AF0", VA = "0x6546AF0")]
	public static bool AreAnimatedMaterialsEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x6546B00", Offset = "0x6545B00", VA = "0x6546B00")]
	public static bool IsSceneLightingDisabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x6546B10", Offset = "0x6545B10", VA = "0x6546B10")]
	public static bool IsLightOverlapDebugEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x6546B20", Offset = "0x6545B20", VA = "0x6546B20")]
	public static bool IsSceneViewFogEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x6546B30", Offset = "0x6545B30", VA = "0x6546B30")]
	public static bool IsSceneFilteringEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x6546B40", Offset = "0x6545B40", VA = "0x6546B40")]
	public static bool IsSceneViewPrefabStageContextHidden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x6546B50", Offset = "0x6545B50", VA = "0x6546B50")]
	[Obsolete("Use DrawRendererList(CommandBuffer cmd, UnityEngine.Rendering.RendererList rendererList) instead. #from(6000.3) (UnityUpgradable) -> !0")]
	public static void DrawRendererList(ScriptableRenderContext renderContext, CommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x6546B70", Offset = "0x6545B70", VA = "0x6546B70")]
	public static void DrawRendererList(CommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x6546B90", Offset = "0x6545B90", VA = "0x6546B90")]
	public static void DrawRendererList(IRasterCommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x6546C30", Offset = "0x6545C30", VA = "0x6546C30")]
	public static int GetTextureHash(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x6546DF0", Offset = "0x6545DF0", VA = "0x6546DF0")]
	public static int PreviousPowerOfTwo(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x6546E20", Offset = "0x6545E20", VA = "0x6546E20")]
	public static int GetMipCount(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x6546EF0", Offset = "0x6545EF0", VA = "0x6546EF0")]
	public static int GetMipCount(float size)
	{
		return default(int);
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x6546FE0", Offset = "0x6545FE0", VA = "0x6546FE0")]
	public static int DivRoundUp(int value, int divisor)
	{
		return default(int);
	}

	[Token(Token = "0x6000E01")]
	public static T GetLastEnumValue<T>() where T : Enum
	{
		return (T)null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x6546FF0", Offset = "0x6545FF0", VA = "0x6546FF0")]
	internal static string GetCorePath()
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x6547020", Offset = "0x6546020", VA = "0x6547020")]
	public static Vector3[] CalculateViewSpaceCorners(Matrix4x4 proj, float z)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x6547380", Offset = "0x6546380", VA = "0x6547380")]
	public static GraphicsFormat GetDefaultDepthStencilFormat()
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x6547390", Offset = "0x6546390", VA = "0x6547390")]
	public static GraphicsFormat GetDefaultDepthOnlyFormat()
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x65473A0", Offset = "0x65463A0", VA = "0x65473A0")]
	public static DepthBits GetDefaultDepthBufferBits()
	{
		return default(DepthBits);
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x65473B0", Offset = "0x65463B0", VA = "0x65473B0")]
	public static bool IsScreenFullyCoveredByCameras(List<Camera> cameras)
	{
		return default(bool);
	}
}
