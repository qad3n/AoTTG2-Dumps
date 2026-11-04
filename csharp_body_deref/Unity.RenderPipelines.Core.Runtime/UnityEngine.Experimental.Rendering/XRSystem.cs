// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRSystem
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2AD1A40", Offset = "0x2AD0040", VA = "0x182AD1A40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000025")]
	public static bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x2AD1B70", Offset = "0x2AD0170", VA = "0x182AD1B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	public static bool singlePassAllowed
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x2AD1C30", Offset = "0x2AD0230", VA = "0x182AD1C30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x2AD1D40", Offset = "0x2AD0340", VA = "0x182AD1D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x2AD1B20", Offset = "0x2AD0120", VA = "0x182AD1B20")]
		[CompilerGenerated]
		get
		{
			return default(FoveatedRenderingCaps);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x2AD1CE0", Offset = "0x2AD02E0", VA = "0x182AD1CE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public static bool dumpDebugInfo
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x2AD1AD0", Offset = "0x2AD00D0", VA = "0x182AD1AD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x2AD1C80", Offset = "0x2AD0280", VA = "0x182AD1C80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2ACF670", Offset = "0x2ACDC70", VA = "0x182ACF670")]
	public static XRDisplaySubsystem GetActiveDisplay()
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2ACF900", Offset = "0x2ACDF00", VA = "0x182ACF900")]
	public static void Initialize(Func<XRPassCreateInfo, XRPass> passAllocator, Shader occlusionMeshPS, Shader mirrorViewPS)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2AD0B60", Offset = "0x2ACF160", VA = "0x182AD0B60")]
	public static void SetDisplayMSAASamples(MSAASamples msaaSamples)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2ACF6C0", Offset = "0x2ACDCC0", VA = "0x182ACF6C0")]
	public static MSAASamples GetDisplayMSAASamples()
	{
		return default(MSAASamples);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2AD0F30", Offset = "0x2ACF530", VA = "0x182AD0F30")]
	internal static void SetOcclusionMeshScale(float occlusionMeshScale)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2ACF800", Offset = "0x2ACDE00", VA = "0x182ACF800")]
	internal static float GetOcclusionMeshScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2AD1130", Offset = "0x2ACF730", VA = "0x182AD1130")]
	internal static void SetUseVisibilityMesh(bool useVisibilityMesh)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2ACF8B0", Offset = "0x2ACDEB0", VA = "0x182ACF8B0")]
	internal static bool GetUseVisibilityMesh()
	{
		return default(bool);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2AD0EA0", Offset = "0x2ACF4A0", VA = "0x182AD0EA0")]
	internal static void SetMirrorViewMode(int mirrorBlitMode)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2ACF770", Offset = "0x2ACDD70", VA = "0x182ACF770")]
	internal static int GetMirrorViewMode()
	{
		return default(int);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2AD0F90", Offset = "0x2ACF590", VA = "0x182AD0F90")]
	public static void SetRenderScale(float renderScale)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2ACF850", Offset = "0x2ACDE50", VA = "0x182ACF850")]
	public static float GetRenderViewportScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2ACF710", Offset = "0x2ACDD10", VA = "0x182ACF710")]
	public static float GetDynamicResolutionScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2AD0AF0", Offset = "0x2ACF0F0", VA = "0x182AD0AF0")]
	public static int ScaleTextureWidthForXR(RenderTexture texture)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2AD0A80", Offset = "0x2ACF080", VA = "0x182AD0A80")]
	public static int ScaleTextureHeightForXR(RenderTexture texture)
	{
		return default(int);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2ACFD80", Offset = "0x2ACE380", VA = "0x182ACFD80")]
	public static XRLayout NewLayout()
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2ACF540", Offset = "0x2ACDB40", VA = "0x182ACF540")]
	public static void EndLayout()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2AD09E0", Offset = "0x2ACEFE0", VA = "0x182AD09E0")]
	public static void RenderMirrorView(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2ACF360", Offset = "0x2ACD960", VA = "0x182ACF360")]
	public static void Dispose()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2AD0D60", Offset = "0x2ACF360", VA = "0x182AD0D60")]
	internal static void SetDisplayZRange(float zNear, float zFar)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2AD0E30", Offset = "0x2ACF430", VA = "0x182AD0E30")]
	private static void SetLayoutOverride(Action<XRLayout, Camera> action)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2AD15C0", Offset = "0x2ACFBC0", VA = "0x182AD15C0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSplashScreen)]
	private static void XRSystemInit()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2AD0690", Offset = "0x2ACEC90", VA = "0x182AD0690")]
	private static void RefreshDeviceInfo()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2ACE7F0", Offset = "0x2ACCDF0", VA = "0x182ACE7F0")]
	internal static void CreateDefaultLayout(Camera camera, XRLayout layout)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2ACFE80", Offset = "0x2ACE480", VA = "0x182ACFE80")]
	internal static void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2ACE5C0", Offset = "0x2ACCBC0", VA = "0x182ACE5C0")]
	private static bool CanUseSinglePass(Camera camera, XRDisplaySubsystem.XRRenderPass renderPass)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2ACE110", Offset = "0x2ACC710", VA = "0x182ACE110")]
	private static XRView BuildView(XRDisplaySubsystem.XRRenderPass renderPass, XRDisplaySubsystem.XRRenderParameter renderParameter)
	{
		return default(XRView);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2AD1670", Offset = "0x2ACFC70", VA = "0x182AD1670")]
	private static RenderTextureDescriptor XrRenderTextureDescToUnityRenderTextureDesc(RenderTextureDescriptor xrDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2ACDBC0", Offset = "0x2ACC1C0", VA = "0x182ACDBC0")]
	private static XRPassCreateInfo BuildPass(XRDisplaySubsystem.XRRenderPass xrRenderPass, ScriptableCullingParameters cullingParameters, XRLayout layout, bool isLastPass)
	{
		return default(XRPassCreateInfo);
	}
}
