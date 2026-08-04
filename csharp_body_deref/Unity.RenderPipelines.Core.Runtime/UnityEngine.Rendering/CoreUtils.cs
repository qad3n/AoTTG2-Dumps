// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreUtils
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

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A6")]
public static class CoreUtils
{
	[Token(Token = "0x20001A7")]
	public static class Sections
	{
		[Token(Token = "0x4000752")]
		public const int section1 = 10000;

		[Token(Token = "0x4000753")]
		public const int section2 = 20000;

		[Token(Token = "0x4000754")]
		public const int section3 = 30000;

		[Token(Token = "0x4000755")]
		public const int section4 = 40000;

		[Token(Token = "0x4000756")]
		public const int section5 = 50000;

		[Token(Token = "0x4000757")]
		public const int section6 = 60000;

		[Token(Token = "0x4000758")]
		public const int section7 = 70000;

		[Token(Token = "0x4000759")]
		public const int section8 = 80000;
	}

	[Token(Token = "0x20001A8")]
	public static class Priorities
	{
		[Token(Token = "0x400075A")]
		public const int assetsCreateShaderMenuPriority = 83;

		[Token(Token = "0x400075B")]
		public const int assetsCreateRenderingMenuPriority = 308;

		[Token(Token = "0x400075C")]
		public const int editMenuPriority = 320;

		[Token(Token = "0x400075D")]
		public const int gameObjectMenuPriority = 10;

		[Token(Token = "0x400075E")]
		public const int srpLensFlareMenuPriority = 303;
	}

	[Token(Token = "0x4000740")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Vector3[] lookAtList;

	[Token(Token = "0x4000741")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly Vector3[] upVectorList;

	[Token(Token = "0x4000742")]
	private const string obsoletePriorityMessage = "Use CoreUtils.Priorities instead";

	[Token(Token = "0x4000743")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int editMenuPriority1 = 320;

	[Token(Token = "0x4000744")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int editMenuPriority2 = 331;

	[Token(Token = "0x4000745")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int editMenuPriority3 = 342;

	[Token(Token = "0x4000746")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int editMenuPriority4 = 353;

	[Token(Token = "0x4000747")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int assetCreateMenuPriority1 = 230;

	[Token(Token = "0x4000748")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int assetCreateMenuPriority2 = 241;

	[Token(Token = "0x4000749")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int assetCreateMenuPriority3 = 300;

	[Token(Token = "0x400074A")]
	[Obsolete("Use CoreUtils.Priorities instead", false)]
	public const int gameObjectMenuPriority = 10;

	[Token(Token = "0x400074B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Cubemap m_BlackCubeTexture;

	[Token(Token = "0x400074C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Cubemap m_MagentaCubeTexture;

	[Token(Token = "0x400074D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static CubemapArray m_MagentaCubeTextureArray;

	[Token(Token = "0x400074E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Cubemap m_WhiteCubeTexture;

	[Token(Token = "0x400074F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static RenderTexture m_EmptyUAV;

	[Token(Token = "0x4000750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Texture3D m_BlackVolumeTexture;

	[Token(Token = "0x4000751")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static IEnumerable<Type> m_AssemblyTypes;

	[Token(Token = "0x17000177")]
	public static Cubemap blackCubeTexture
	{
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x4BF84D0", Offset = "0x4BF84D0", VA = "0x4BF84D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public static Cubemap magentaCubeTexture
	{
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x4BF8640", Offset = "0x4BF8640", VA = "0x4BF8640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public static CubemapArray magentaCubeTextureArray
	{
		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x4BF87C0", Offset = "0x4BF87C0", VA = "0x4BF87C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017A")]
	public static Cubemap whiteCubeTexture
	{
		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x4BF8B90", Offset = "0x4BF8B90", VA = "0x4BF8B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public static RenderTexture emptyUAV
	{
		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x4BF8D00", Offset = "0x4BF8D00", VA = "0x4BF8D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	public static Texture3D blackVolumeTexture
	{
		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x4BF8E50", Offset = "0x4BF8E50", VA = "0x4BF8E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x4BF9000", Offset = "0x4BF9000", VA = "0x4BF9000")]
	public static void ClearRenderTarget(CommandBuffer cmd, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x4BF9030", Offset = "0x4BF9030", VA = "0x4BF9030")]
	private static int FixupDepthSlice(int depthSlice, RTHandle buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x4BF9070", Offset = "0x4BF9070", VA = "0x4BF9070")]
	private static int FixupDepthSlice(int depthSlice, CubemapFace cubemapFace)
	{
		return default(int);
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x4BF9090", Offset = "0x4BF9090", VA = "0x4BF9090")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x4BF91A0", Offset = "0x4BF91A0", VA = "0x4BF91A0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, ClearFlag clearFlag = ClearFlag.None, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4BF9320", Offset = "0x4BF9320", VA = "0x4BF9320")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x4BF96C0", Offset = "0x4BF96C0", VA = "0x4BF96C0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x4BF9540", Offset = "0x4BF9540", VA = "0x4BF9540")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x4BF9900", Offset = "0x4BF9900", VA = "0x4BF9900")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x4BF9B40", Offset = "0x4BF9B40", VA = "0x4BF9B40")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag = ClearFlag.None)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x4BF9A40", Offset = "0x4BF9A40", VA = "0x4BF9A40")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthBuffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x4BF9CB0", Offset = "0x4BF9CB0", VA = "0x4BF9CB0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4BF9DA0", Offset = "0x4BF9DA0", VA = "0x4BF9DA0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4BF9EA0", Offset = "0x4BF9EA0", VA = "0x4BF9EA0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x4BFA050", Offset = "0x4BFA050", VA = "0x4BFA050")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x4BFA1C0", Offset = "0x4BFA1C0", VA = "0x4BFA1C0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x4BFA330", Offset = "0x4BFA330", VA = "0x4BFA330")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x4BFA4F0", Offset = "0x4BFA4F0", VA = "0x4BFA4F0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x4BFA790", Offset = "0x4BFA790", VA = "0x4BFA790")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier buffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x4BFA890", Offset = "0x4BFA890", VA = "0x4BFA890")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag)
	{
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x4BFAAD0", Offset = "0x4BFAAD0", VA = "0x4BFAAD0")]
	private static void SetViewportAndClear(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x4BFAC50", Offset = "0x4BFAC50", VA = "0x4BFAC50")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x4BF4C30", Offset = "0x4BF4C30", VA = "0x4BF4C30")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, ClearFlag clearFlag = ClearFlag.None, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x4BFAD90", Offset = "0x4BFAD90", VA = "0x4BFAD90")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x4BFB380", Offset = "0x4BFB380", VA = "0x4BFB380")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, ClearFlag clearFlag, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x4BFAF10", Offset = "0x4BFAF10", VA = "0x4BFAF10")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RTHandle depthBuffer, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x4BF51B0", Offset = "0x4BF51B0", VA = "0x4BF51B0")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle buffer, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x4BFB500", Offset = "0x4BFB500", VA = "0x4BFB500")]
	public static void SetRenderTarget(CommandBuffer cmd, RTHandle colorBuffer, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RTHandle depthBuffer, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, ClearFlag clearFlag, Color clearColor, int miplevel = 0, CubemapFace cubemapFace = CubemapFace.Unknown, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x4BFB910", Offset = "0x4BFB910", VA = "0x4BFB910")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer)
	{
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x4BFBAA0", Offset = "0x4BFBAA0", VA = "0x4BFBAA0")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer, ClearFlag clearFlag = ClearFlag.None)
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x4BFBB60", Offset = "0x4BFBB60", VA = "0x4BFBB60")]
	public static void SetRenderTarget(CommandBuffer cmd, RenderTargetIdentifier[] colorBuffers, RTHandle depthBuffer, ClearFlag clearFlag, Color clearColor)
	{
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x4BFABE0", Offset = "0x4BFABE0", VA = "0x4BFABE0")]
	public static void SetViewport(CommandBuffer cmd, RTHandle target)
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x4BE6450", Offset = "0x4BE6450", VA = "0x4BE6450")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, RenderTextureFormat format, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None)
	{
		return null;
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x4BFBE50", Offset = "0x4BFBE50", VA = "0x4BFBE50")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, GraphicsFormat format, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None)
	{
		return null;
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x4BE6350", Offset = "0x4BE6350", VA = "0x4BE6350")]
	public static string GetRenderTargetAutoName(int width, int height, int depth, GraphicsFormat format, TextureDimension dim, string name, bool mips = false, bool enableMSAA = false, MSAASamples msaaSamples = MSAASamples.None, bool dynamicRes = false)
	{
		return null;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x4BFBC50", Offset = "0x4BFBC50", VA = "0x4BFBC50")]
	private static string GetRenderTargetAutoName(int width, int height, int depth, string format, TextureDimension dim, string name, bool mips, bool enableMSAA, MSAASamples msaaSamples, bool dynamicRes)
	{
		return null;
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x4BFBF30", Offset = "0x4BFBF30", VA = "0x4BFBF30")]
	public static string GetTextureAutoName(int width, int height, TextureFormat format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x4BFC460", Offset = "0x4BFC460", VA = "0x4BFC460")]
	public static string GetTextureAutoName(int width, int height, GraphicsFormat format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x4BFBFF0", Offset = "0x4BFBFF0", VA = "0x4BFBFF0")]
	private static string GetTextureAutoName(int width, int height, string format, TextureDimension dim = TextureDimension.None, string name = "", bool mips = false, int depth = 0)
	{
		return null;
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x4BFC520", Offset = "0x4BFC520", VA = "0x4BFC520")]
	public static void ClearCubemap(CommandBuffer cmd, RenderTexture renderTexture, Color clearColor, bool clearMips = false)
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4BFC7F0", Offset = "0x4BFC7F0", VA = "0x4BFC7F0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4BFC8D0", Offset = "0x4BFC8D0", VA = "0x4BFC8D0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier colorBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4BFCA20", Offset = "0x4BFCA20", VA = "0x4BFCA20")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthStencilBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4BFCBC0", Offset = "0x4BFCBC0", VA = "0x4BFCBC0")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier[] colorBuffers, RenderTargetIdentifier depthStencilBuffer, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4BFCD10", Offset = "0x4BFCD10", VA = "0x4BFCD10")]
	public static void DrawFullScreen(CommandBuffer commandBuffer, Material material, RenderTargetIdentifier[] colorBuffers, [Optional] MaterialPropertyBlock properties, int shaderPassId = 0)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x4BFCEE0", Offset = "0x4BFCEE0", VA = "0x4BFCEE0")]
	public static Color ConvertSRGBToActiveColorSpace(Color color)
	{
		return default(Color);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4BFCF60", Offset = "0x4BFCF60", VA = "0x4BFCF60")]
	public static Color ConvertLinearToActiveColorSpace(Color color)
	{
		return default(Color);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x4BFCFE0", Offset = "0x4BFCFE0", VA = "0x4BFCFE0")]
	public static Material CreateEngineMaterial(string shaderPath)
	{
		return null;
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x4BF3000", Offset = "0x4BF3000", VA = "0x4BF3000")]
	public static Material CreateEngineMaterial(Shader shader)
	{
		return null;
	}

	[Token(Token = "0x6000CB5")]
	public static bool HasFlag<T>(T mask, T flag) where T : IConvertible
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB6")]
	public static void Swap<T>(ref T a, ref T b)
	{
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x4BFD100", Offset = "0x4BFD100", VA = "0x4BFD100")]
	public static void SetKeyword(CommandBuffer cmd, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x4BFD120", Offset = "0x4BFD120", VA = "0x4BFD120")]
	public static void SetKeyword(BaseCommandBuffer cmd, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x4BFD150", Offset = "0x4BFD150", VA = "0x4BFD150")]
	public static void SetKeyword(Material material, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x4BFD170", Offset = "0x4BFD170", VA = "0x4BFD170")]
	public static void SetKeyword(ComputeShader cs, string keyword, bool state)
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x4BF3610", Offset = "0x4BF3610", VA = "0x4BF3610")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x4BFD190", Offset = "0x4BFD190", VA = "0x4BFD190")]
	public static IEnumerable<Type> GetAllAssemblyTypes()
	{
		return null;
	}

	[Token(Token = "0x6000CBD")]
	public static IEnumerable<Type> GetAllTypesDerivedFrom<T>()
	{
		return null;
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x4BFD390", Offset = "0x4BFD390", VA = "0x4BFD390")]
	public static void SafeRelease(GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4BFD3A0", Offset = "0x4BFD3A0", VA = "0x4BFD3A0")]
	public static void SafeRelease(ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4BFD3B0", Offset = "0x4BFD3B0", VA = "0x4BFD3B0")]
	public static Mesh CreateCubeMesh(Vector3 min, Vector3 max)
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x4BFD7B0", Offset = "0x4BFD7B0", VA = "0x4BFD7B0")]
	public static bool ArePostProcessesEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4BFD7C0", Offset = "0x4BFD7C0", VA = "0x4BFD7C0")]
	public static bool AreAnimatedMaterialsEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4BFD7D0", Offset = "0x4BFD7D0", VA = "0x4BFD7D0")]
	public static bool IsSceneLightingDisabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4BFD7E0", Offset = "0x4BFD7E0", VA = "0x4BFD7E0")]
	public static bool IsLightOverlapDebugEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4BFD7F0", Offset = "0x4BFD7F0", VA = "0x4BFD7F0")]
	public static bool IsSceneViewFogEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4BFD800", Offset = "0x4BFD800", VA = "0x4BFD800")]
	public static bool IsSceneFilteringEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x4BFD810", Offset = "0x4BFD810", VA = "0x4BFD810")]
	public static bool IsSceneViewPrefabStageContextHidden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x4BFD820", Offset = "0x4BFD820", VA = "0x4BFD820")]
	public static void DrawRendererList(ScriptableRenderContext renderContext, CommandBuffer cmd, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x4BE9150", Offset = "0x4BE9150", VA = "0x4BE9150")]
	public static int GetTextureHash(Texture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x4BFD900", Offset = "0x4BFD900", VA = "0x4BFD900")]
	public static int PreviousPowerOfTwo(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x4BFD930", Offset = "0x4BFD930", VA = "0x4BFD930")]
	public static int GetMipCount(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4BE7FE0", Offset = "0x4BE7FE0", VA = "0x4BE7FE0")]
	public static int GetMipCount(float size)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCD")]
	public static T GetLastEnumValue<T>() where T : Enum
	{
		return (T)null;
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4BFDA00", Offset = "0x4BFDA00", VA = "0x4BFDA00")]
	internal static string GetCorePath()
	{
		return null;
	}
}
