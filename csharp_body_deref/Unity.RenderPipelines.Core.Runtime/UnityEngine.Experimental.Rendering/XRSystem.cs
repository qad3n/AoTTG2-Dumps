using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.XR;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000018")]
public static class XRSystem
{
	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x0")]
	private static XRLayout s_Layout;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x8")]
	private static Func<XRPassCreateInfo, XRPass> s_PassAllocator;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x10")]
	private static List<XRDisplaySubsystem> s_DisplayList;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x18")]
	private static XRDisplaySubsystem s_Display;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x20")]
	private static MSAASamples s_MSAASamples;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x28")]
	private static Material s_OcclusionMeshMaterial;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x30")]
	private static Material s_MirrorViewMaterial;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x38")]
	private static Action<XRLayout, Camera> s_LayoutOverride;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x40")]
	public static readonly XRPass emptyPass;

	[Token(Token = "0x1700001B")]
	public static bool displayActive
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x484E6A0", Offset = "0x484E6A0", VA = "0x484E6A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x4853A60", Offset = "0x4853A60", VA = "0x4853A60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public static bool singlePassAllowed
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x4853B10", Offset = "0x4853B10", VA = "0x4853B10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x4853B80", Offset = "0x4853B80", VA = "0x4853B80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x4853BD0", Offset = "0x4853BD0", VA = "0x4853BD0")]
		[CompilerGenerated]
		get
		{
			return default(FoveatedRenderingCaps);
		}
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x4853C40", Offset = "0x4853C40", VA = "0x4853C40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public static bool dumpDebugInfo
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x4853C90", Offset = "0x4853C90", VA = "0x4853C90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x4853D00", Offset = "0x4853D00", VA = "0x4853D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x48539F0", Offset = "0x48539F0", VA = "0x48539F0")]
	public static XRDisplaySubsystem GetActiveDisplay()
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4853D50", Offset = "0x4853D50", VA = "0x4853D50")]
	public static void Initialize(Func<XRPassCreateInfo, XRPass> passAllocator, Shader occlusionMeshPS, Shader mirrorViewPS)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4854460", Offset = "0x4854460", VA = "0x4854460")]
	public static void SetDisplayMSAASamples(MSAASamples msaaSamples)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x48546B0", Offset = "0x48546B0", VA = "0x48546B0")]
	public static MSAASamples GetDisplayMSAASamples()
	{
		return default(MSAASamples);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4854720", Offset = "0x4854720", VA = "0x4854720")]
	public static void SetRenderScale(float renderScale)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4854910", Offset = "0x4854910", VA = "0x4854910")]
	public static XRLayout NewLayout()
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4854A00", Offset = "0x4854A00", VA = "0x4854A00")]
	public static void EndLayout()
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4854B30", Offset = "0x4854B30", VA = "0x4854B30")]
	public static void RenderMirrorView(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4854BD0", Offset = "0x4854BD0", VA = "0x4854BD0")]
	public static void Dispose()
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x484E740", Offset = "0x484E740", VA = "0x484E740")]
	internal static void SetDisplayZRange(float zNear, float zFar)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x4854C60", Offset = "0x4854C60", VA = "0x4854C60")]
	private static void SetLayoutOverride(Action<XRLayout, Camera> action)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4854CC0", Offset = "0x4854CC0", VA = "0x4854CC0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSplashScreen)]
	private static void XRSystemInit()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4854110", Offset = "0x4854110", VA = "0x4854110")]
	private static void RefreshDeviceInfo()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x484E840", Offset = "0x484E840", VA = "0x484E840")]
	internal static void CreateDefaultLayout(Camera camera)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x484F160", Offset = "0x484F160", VA = "0x484F160")]
	internal static void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4854D50", Offset = "0x4854D50", VA = "0x4854D50")]
	private static bool CanUseSinglePass(Camera camera, XRDisplaySubsystem.XRRenderPass renderPass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4855280", Offset = "0x4855280", VA = "0x4855280")]
	private static XRView BuildView(XRDisplaySubsystem.XRRenderPass renderPass, XRDisplaySubsystem.XRRenderParameter renderParameter)
	{
		return default(XRView);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4854FD0", Offset = "0x4854FD0", VA = "0x4854FD0")]
	private static XRPassCreateInfo BuildPass(XRDisplaySubsystem.XRRenderPass xrRenderPass, ScriptableCullingParameters cullingParameters)
	{
		return default(XRPassCreateInfo);
	}
}
