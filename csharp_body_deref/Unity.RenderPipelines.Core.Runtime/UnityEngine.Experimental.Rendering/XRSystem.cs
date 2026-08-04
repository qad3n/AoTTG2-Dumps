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
		[Address(RVA = "0x4B73790", Offset = "0x4B73790", VA = "0x4B73790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool isHDRDisplayOutputActive
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x4B78B50", Offset = "0x4B78B50", VA = "0x4B78B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public static bool singlePassAllowed
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x4B78C00", Offset = "0x4B78C00", VA = "0x4B78C00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x4B78C70", Offset = "0x4B78C70", VA = "0x4B78C70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public static FoveatedRenderingCaps foveatedRenderingCaps
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x4B78CC0", Offset = "0x4B78CC0", VA = "0x4B78CC0")]
		[CompilerGenerated]
		get
		{
			return default(FoveatedRenderingCaps);
		}
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x4B78D30", Offset = "0x4B78D30", VA = "0x4B78D30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public static bool dumpDebugInfo
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x4B78D80", Offset = "0x4B78D80", VA = "0x4B78D80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x4B78DF0", Offset = "0x4B78DF0", VA = "0x4B78DF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4B78AE0", Offset = "0x4B78AE0", VA = "0x4B78AE0")]
	public static XRDisplaySubsystem GetActiveDisplay()
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4B78E40", Offset = "0x4B78E40", VA = "0x4B78E40")]
	public static void Initialize(Func<XRPassCreateInfo, XRPass> passAllocator, Shader occlusionMeshPS, Shader mirrorViewPS)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4B79550", Offset = "0x4B79550", VA = "0x4B79550")]
	public static void SetDisplayMSAASamples(MSAASamples msaaSamples)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4B797A0", Offset = "0x4B797A0", VA = "0x4B797A0")]
	public static MSAASamples GetDisplayMSAASamples()
	{
		return default(MSAASamples);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4B79810", Offset = "0x4B79810", VA = "0x4B79810")]
	public static void SetRenderScale(float renderScale)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4B79A00", Offset = "0x4B79A00", VA = "0x4B79A00")]
	public static XRLayout NewLayout()
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4B79AF0", Offset = "0x4B79AF0", VA = "0x4B79AF0")]
	public static void EndLayout()
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4B79C20", Offset = "0x4B79C20", VA = "0x4B79C20")]
	public static void RenderMirrorView(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4B79CC0", Offset = "0x4B79CC0", VA = "0x4B79CC0")]
	public static void Dispose()
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x4B73830", Offset = "0x4B73830", VA = "0x4B73830")]
	internal static void SetDisplayZRange(float zNear, float zFar)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x4B79D50", Offset = "0x4B79D50", VA = "0x4B79D50")]
	private static void SetLayoutOverride(Action<XRLayout, Camera> action)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4B79DB0", Offset = "0x4B79DB0", VA = "0x4B79DB0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSplashScreen)]
	private static void XRSystemInit()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4B79200", Offset = "0x4B79200", VA = "0x4B79200")]
	private static void RefreshDeviceInfo()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4B73930", Offset = "0x4B73930", VA = "0x4B73930")]
	internal static void CreateDefaultLayout(Camera camera)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4B74250", Offset = "0x4B74250", VA = "0x4B74250")]
	internal static void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4B79E40", Offset = "0x4B79E40", VA = "0x4B79E40")]
	private static bool CanUseSinglePass(Camera camera, XRDisplaySubsystem.XRRenderPass renderPass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4B7A370", Offset = "0x4B7A370", VA = "0x4B7A370")]
	private static XRView BuildView(XRDisplaySubsystem.XRRenderPass renderPass, XRDisplaySubsystem.XRRenderParameter renderParameter)
	{
		return default(XRView);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4B7A0C0", Offset = "0x4B7A0C0", VA = "0x4B7A0C0")]
	private static XRPassCreateInfo BuildPass(XRDisplaySubsystem.XRRenderPass xrRenderPass, ScriptableCullingParameters cullingParameters)
	{
		return default(XRPassCreateInfo);
	}
}
