// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreUtils
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2B56A60", Offset = "0x2B55060", VA = "0x182B56A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public static Cubemap magentaCubeTexture
	{
		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x2B57310", Offset = "0x2B55910", VA = "0x182B57310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public static CubemapArray magentaCubeTextureArray
	{
		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x2B570E0", Offset = "0x2B556E0", VA = "0x182B570E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public static Cubemap whiteCubeTexture
	{
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x2B574F0", Offset = "0x2B55AF0", VA = "0x182B574F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public static RenderTexture emptyUAV
	{
		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x2B56F60", Offset = "0x2B55560", VA = "0x182B56F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	public static GraphicsBuffer emptyBuffer
	{
		[Token(Token = "0x6000DAB")]
		[Address(RVA = "0x2B56E20", Offset = "0x2B55420", VA = "0x182B56E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public static Texture3D blackVolumeTexture
	{
		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x2B56C40", Offset = "0x2B55240", VA = "0x182B56C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	internal static Texture3D whiteVolumeTexture
	{
		[Token(Token = "0x6000DAD")]
		[Address(RVA = "0x2B576D0", Offset = "0x2B55CD0", VA = "0x182B576D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x2B51610", Offset = "0x2B4FC10", VA = "0x182B51610")]
	public static void ClearRenderTarget(CommandBuffer cmd, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x2B52790", Offset = "0x2B50D90", VA = "0x182B52790")]
	private static int FixupDepthSlice(int depthSlice, RTHandle buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x2B52770", Offset = "0x2B50D70", VA = "0x182B52770")]
	private static int FixupDepthSlice(int depthSlice, CubemapFace cubemapFace)
	{
		return default(int);
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x2B54930", Offset = "0x2B52F30", VA = "0x182B54930")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x2B54B80", Offset = "0x2B53180", VA = "0x182B54B80")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, ClearFlag clearFlag = ClearFlag.None, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x2B56410", Offset = "0x2B54A10", VA = "0x182B56410")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x2B54A20", Offset = "0x2B53020", VA = "0x182B54A20")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x2B559F0", Offset = "0x2B53FF0", VA = "0x182B559F0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x2B54850", Offset = "0x2B52E50", VA = "0x182B54850")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x2B54740", Offset = "0x2B52D40", VA = "0x182B54740")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag = ClearFlag.None)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x2B55B20", Offset = "0x2B54120", VA = "0x182B55B20")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x2B56530", Offset = "0x2B54B30", VA = "0x182B56530")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x2B54D90", Offset = "0x2B53390", VA = "0x182B54D90")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x2B54140", Offset = "0x2B52740", VA = "0x182B54140")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x2B56050", Offset = "0x2B54650", VA = "0x182B56050")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x2B562E0", Offset = "0x2B548E0", VA = "0x182B562E0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x2B53F50", Offset = "0x2B52550", VA = "0x182B53F50")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x2B55C00", Offset = "0x2B54200", VA = "0x182B55C00")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x2B54CA0", Offset = "0x2B532A0", VA = "0x182B54CA0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x2B55250", Offset = "0x2B53850", VA = "0x182B55250")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x2B566F0", Offset = "0x2B54CF0", VA = "0x182B566F0")]
	private static void SetViewportAndClear(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x2B55E80", Offset = "0x2B54480", VA = "0x182B55E80")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x2B55100", Offset = "0x2B53700", VA = "0x182B55100")]
	public static void SetRenderTarget(ComputeCommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x2B56600", Offset = "0x2B54C00", VA = "0x182B56600")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag = ClearFlag.None, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x2B551B0", Offset = "0x2B537B0", VA = "0x182B551B0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x2B53EB0", Offset = "0x2B524B0", VA = "0x182B53EB0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, ClearFlag clearFlag, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x2B553A0", Offset = "0x2B539A0", VA = "0x182B553A0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x2B544A0", Offset = "0x2B52AA0", VA = "0x182B544A0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x2B55650", Offset = "0x2B53C50", VA = "0x182B55650")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RTHandle depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x2B566B0", Offset = "0x2B54CB0", VA = "0x182B566B0")]
	public static void SetShadingRateFragmentSize(CommandBuffer cmd, ShadingRateFragmentSize baseShadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x2B56690", Offset = "0x2B54C90", VA = "0x182B56690")]
	public static void SetShadingRateCombiner(CommandBuffer cmd, ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x2B566D0", Offset = "0x2B54CD0", VA = "0x182B566D0")]
	public static void SetShadingRateImage(CommandBuffer cmd, in RenderTargetIdentifier shadingRateImage)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x2B54300", Offset = "0x2B52900", VA = "0x182B54300")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x2B54EE0", Offset = "0x2B534E0", VA = "0x182B54EE0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer, ClearFlag clearFlag = ClearFlag.None)
	{
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x2B56150", Offset = "0x2B54750", VA = "0x182B56150")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x2B56800", Offset = "0x2B54E00", VA = "0x182B56800")]
	public static void SetViewport(CommandBuffer cmd, RTHandle target)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x2B52F90", Offset = "0x2B51590", VA = "0x182B52F90")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, RenderTextureFormat format, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None)
	{
		return null;
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x2B52EB0", Offset = "0x2B514B0", VA = "0x182B52EB0")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, GraphicsFormat format, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None)
	{
		return null;
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x2B52DB0", Offset = "0x2B513B0", VA = "0x182B52DB0")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, GraphicsFormat format, TextureDimension dim, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None, bool dynamicRes = false, bool dynamicResExplicit = false)
	{
		return null;
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x2B52B60", Offset = "0x2B51160", VA = "0x182B52B60")]
	private static string GetRenderTargetAutoName(int width, int height, int depth, string format, TextureDimension dim, string name, bool mips, bool enableMSAA, MSAASamples msaaSamples, bool dynamicRes, bool dynamicResExplicit)
	{
		return null;
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x2B53130", Offset = "0x2B51730", VA = "0x182B53130")]
	public static string GetTextureAutoName(int width, int height, TextureFormat format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x2B53070", Offset = "0x2B51670", VA = "0x182B53070")]
	public static string GetTextureAutoName(int width, int height, GraphicsFormat format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x2B531F0", Offset = "0x2B517F0", VA = "0x182B531F0")]
	private static string GetTextureAutoName(int width, int height, string format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x2B51390", Offset = "0x2B4F990", VA = "0x182B51390")]
	public static void ClearCubemap(CommandBuffer cmd, RenderTexture renderTexture, Color clearColor, bool clearMips = false)
	{
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x2B52300", Offset = "0x2B50900", VA = "0x182B52300")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x2B51F50", Offset = "0x2B50550", VA = "0x182B51F50")]
	public static void DrawFullScreen(RasterCommandBuffer commandBuffer, Material material, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x2B523C0", Offset = "0x2B509C0", VA = "0x182B523C0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier colorBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x2B524D0", Offset = "0x2B50AD0", VA = "0x182B524D0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthStencilBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x2B52050", Offset = "0x2B50650", VA = "0x182B52050")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthStencilBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x2B52170", Offset = "0x2B50770", VA = "0x182B52170")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier[] colorBuffers, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x2B516E0", Offset = "0x2B4FCE0", VA = "0x182B516E0")]
	public static Color ConvertSRGBToActiveColorSpace(Color color)
	{
		return default(Color);
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x2B51650", Offset = "0x2B4FC50", VA = "0x182B51650")]
	public static Color ConvertLinearToActiveColorSpace(Color color)
	{
		return default(Color);
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x2B51BB0", Offset = "0x2B501B0", VA = "0x182B51BB0")]
	public static Material CreateEngineMaterial(string shaderPath)
	{
		return null;
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x2B51DE0", Offset = "0x2B503E0", VA = "0x182B51DE0")]
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
	[Address(RVA = "0x2B53E80", Offset = "0x2B52480", VA = "0x182B53E80")]
	public static void SetKeyword(CommandBuffer cmd, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x2B53D30", Offset = "0x2B52330", VA = "0x182B53D30")]
	public static void SetKeyword(CommandBuffer cmd, ComputeShader cs, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x2B53E10", Offset = "0x2B52410", VA = "0x182B53E10")]
	public static void SetKeyword(BaseCommandBuffer cmd, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x2B53DE0", Offset = "0x2B523E0", VA = "0x182B53DE0")]
	public static void SetKeyword(Material material, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x2B53DB0", Offset = "0x2B523B0", VA = "0x182B53DB0")]
	public static void SetKeyword(Material material, LocalKeyword keyword, bool state)
	{
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x2B53E50", Offset = "0x2B52450", VA = "0x182B53E50")]
	public static void SetKeyword(ComputeShader cs, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x2B51ED0", Offset = "0x2B504D0", VA = "0x182B51ED0")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x2B527E0", Offset = "0x2B50DE0", VA = "0x182B527E0")]
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
	[Address(RVA = "0x2B53D20", Offset = "0x2B52320", VA = "0x182B53D20")]
	public static void SafeRelease(GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x2B53D10", Offset = "0x2B52310", VA = "0x182B53D10")]
	public static void SafeRelease(ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x2B51770", Offset = "0x2B4FD70", VA = "0x182B51770")]
	public static Mesh CreateCubeMesh(Vector3 min, Vector3 max)
	{
		return null;
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	public static bool ArePostProcessesEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	public static bool AreAnimatedMaterialsEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static bool IsSceneLightingDisabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static bool IsLightOverlapDebugEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	public static bool IsSceneViewFogEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static bool IsSceneFilteringEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static bool IsSceneViewPrefabStageContextHidden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x2B52650", Offset = "0x2B50C50", VA = "0x182B52650")]
	[Obsolete("Use DrawRendererList(CommandBuffer cmd, UnityEngine.Rendering.RendererList rendererList) instead. #from(6000.3) (UnityUpgradable) -> !0")]
	public static void DrawRendererList(ScriptableRenderContext renderContext, CommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x2B52610", Offset = "0x2B50C10", VA = "0x182B52610")]
	public static void DrawRendererList(CommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x2B52690", Offset = "0x2B50C90", VA = "0x182B52690")]
	public static void DrawRendererList(IRasterCommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x2B536C0", Offset = "0x2B51CC0", VA = "0x182B536C0")]
	public static int GetTextureHash(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x2B53CE0", Offset = "0x2B522E0", VA = "0x182B53CE0")]
	public static int PreviousPowerOfTwo(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x2B52A00", Offset = "0x2B51000", VA = "0x182B52A00")]
	public static int GetMipCount(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x2B52AB0", Offset = "0x2B510B0", VA = "0x182B52AB0")]
	public static int GetMipCount(float size)
	{
		return default(int);
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x2B107A0", Offset = "0x2B0EDA0", VA = "0x182B107A0")]
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
	[Address(RVA = "0x2B529B0", Offset = "0x2B50FB0", VA = "0x182B529B0")]
	internal static string GetCorePath()
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x2B50E50", Offset = "0x2B4F450", VA = "0x182B50E50")]
	public static Vector3[] CalculateViewSpaceCorners(Matrix4x4 proj, float z)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x2B529F0", Offset = "0x2B50FF0", VA = "0x182B529F0")]
	public static GraphicsFormat GetDefaultDepthStencilFormat()
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x2B529E0", Offset = "0x2B50FE0", VA = "0x182B529E0")]
	public static GraphicsFormat GetDefaultDepthOnlyFormat()
	{
		return default(GraphicsFormat);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x846F70", Offset = "0x845570", VA = "0x180846F70")]
	public static DepthBits GetDefaultDepthBufferBits()
	{
		return default(DepthBits);
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x2B53850", Offset = "0x2B51E50", VA = "0x182B53850")]
	public static bool IsScreenFullyCoveredByCameras(List<Camera> cameras)
	{
		return default(bool);
	}
}
