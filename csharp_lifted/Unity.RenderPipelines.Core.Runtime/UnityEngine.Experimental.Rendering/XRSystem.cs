// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.XR;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000012")]
public static class XRSystem
{
	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x0")]
	private static XRLayoutStack s_Layout;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x8")]
	private static Func<XRPassCreateInfo, XRPass> s_PassAllocator;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x10")]
	private static List<XRDisplaySubsystem> s_DisplayList;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x18")]
	private static XRDisplaySubsystem s_Display;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x20")]
	private static MSAASamples s_MSAASamples;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x24")]
	private static float s_OcclusionMeshScaling;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x28")]
	private static bool s_UseVisibilityMesh;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x30")]
	private static Material s_OcclusionMeshMaterial;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x38")]
	private static Material s_MirrorViewMaterial;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x40")]
	private static Action<XRLayout, Camera> s_LayoutOverride;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x48")]
	public static readonly XRPass emptyPass;

	[Token(Token = "0x17000024")]
	public static bool displayActive
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x64A8E60", Offset = "0x64A7E60", VA = "0x64A8E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000025")]
	public static bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x64AF7A0", Offset = "0x64AE7A0", VA = "0x64AF7A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	public static bool singlePassAllowed
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x64AF850", Offset = "0x64AE850", VA = "0x64AF850")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x64AF8C0", Offset = "0x64AE8C0", VA = "0x64AF8C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x64AF910", Offset = "0x64AE910", VA = "0x64AF910")]
		[CompilerGenerated]
		get
		{
			return default(FoveatedRenderingCaps);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x64AF980", Offset = "0x64AE980", VA = "0x64AF980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public static bool dumpDebugInfo
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x64AF9D0", Offset = "0x64AE9D0", VA = "0x64AF9D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x64AFA40", Offset = "0x64AEA40", VA = "0x64AFA40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x64AF730", Offset = "0x64AE730", VA = "0x64AF730")]
	public static XRDisplaySubsystem GetActiveDisplay()
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x64AFA90", Offset = "0x64AEA90", VA = "0x64AFA90")]
	public static void Initialize(Func<XRPassCreateInfo, XRPass> passAllocator, Shader occlusionMeshPS, Shader mirrorViewPS)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x64B0260", Offset = "0x64AF260", VA = "0x64B0260")]
	public static void SetDisplayMSAASamples(MSAASamples msaaSamples)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x64B0480", Offset = "0x64AF480", VA = "0x64B0480")]
	public static MSAASamples GetDisplayMSAASamples()
	{
		return default(MSAASamples);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x64B04F0", Offset = "0x64AF4F0", VA = "0x64B04F0")]
	internal static void SetOcclusionMeshScale(float occlusionMeshScale)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x64B0560", Offset = "0x64AF560", VA = "0x64B0560")]
	internal static float GetOcclusionMeshScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x64B05D0", Offset = "0x64AF5D0", VA = "0x64B05D0")]
	internal static void SetUseVisibilityMesh(bool useVisibilityMesh)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x64B0620", Offset = "0x64AF620", VA = "0x64B0620")]
	internal static bool GetUseVisibilityMesh()
	{
		return default(bool);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x64B0690", Offset = "0x64AF690", VA = "0x64B0690")]
	internal static void SetMirrorViewMode(int mirrorBlitMode)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x64B0740", Offset = "0x64AF740", VA = "0x64B0740")]
	internal static int GetMirrorViewMode()
	{
		return default(int);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x64B07F0", Offset = "0x64AF7F0", VA = "0x64B07F0")]
	public static void SetRenderScale(float renderScale)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x64B09C0", Offset = "0x64AF9C0", VA = "0x64B09C0")]
	public static float GetRenderViewportScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x64B0A40", Offset = "0x64AFA40", VA = "0x64B0A40")]
	public static float GetDynamicResolutionScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x64B0AC0", Offset = "0x64AFAC0", VA = "0x64B0AC0")]
	public static int ScaleTextureWidthForXR(RenderTexture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x64B0B50", Offset = "0x64AFB50", VA = "0x64B0B50")]
	public static int ScaleTextureHeightForXR(RenderTexture texture)
	{
		return default(int);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x64B0BE0", Offset = "0x64AFBE0", VA = "0x64B0BE0")]
	public static XRLayout NewLayout()
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x64B0C40", Offset = "0x64AFC40", VA = "0x64B0C40")]
	public static void EndLayout()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x64B0DC0", Offset = "0x64AFDC0", VA = "0x64B0DC0")]
	public static void RenderMirrorView(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x64B0E60", Offset = "0x64AFE60", VA = "0x64B0E60")]
	public static void Dispose()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x64A8F00", Offset = "0x64A7F00", VA = "0x64A8F00")]
	internal static void SetDisplayZRange(float zNear, float zFar)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x64B0FF0", Offset = "0x64AFFF0", VA = "0x64B0FF0")]
	private static void SetLayoutOverride(Action<XRLayout, Camera> action)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x64B1050", Offset = "0x64B0050", VA = "0x64B1050")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSplashScreen)]
	private static void XRSystemInit()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x64AFF00", Offset = "0x64AEF00", VA = "0x64AFF00")]
	private static void RefreshDeviceInfo()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x64A9000", Offset = "0x64A8000", VA = "0x64A9000")]
	internal static void CreateDefaultLayout(Camera camera, XRLayout layout)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x64A9A90", Offset = "0x64A8A90", VA = "0x64A9A90")]
	internal static void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x64B1100", Offset = "0x64B0100", VA = "0x64B1100")]
	private static bool CanUseSinglePass(Camera camera, XRDisplaySubsystem.XRRenderPass renderPass)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x64B1A40", Offset = "0x64B0A40", VA = "0x64B1A40")]
	private static XRView BuildView(XRDisplaySubsystem.XRRenderPass renderPass, XRDisplaySubsystem.XRRenderParameter renderParameter)
	{
		return default(XRView);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x64B1F70", Offset = "0x64B0F70", VA = "0x64B1F70")]
	private static RenderTextureDescriptor XrRenderTextureDescToUnityRenderTextureDesc(RenderTextureDescriptor xrDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x64B13A0", Offset = "0x64B03A0", VA = "0x64B13A0")]
	private static XRPassCreateInfo BuildPass(XRDisplaySubsystem.XRRenderPass xrRenderPass, ScriptableCullingParameters cullingParameters, XRLayout layout, bool isLastPass)
	{
		return default(XRPassCreateInfo);
	}
}
