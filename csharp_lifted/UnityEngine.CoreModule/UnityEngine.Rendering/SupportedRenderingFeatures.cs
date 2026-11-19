// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SupportedRenderingFeatures
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003A2")]
public class SupportedRenderingFeatures
{
	[Token(Token = "0x20003A3")]
	[Flags]
	public enum ReflectionProbeModes
	{
		[Token(Token = "0x4000B50")]
		None = 0,
		[Token(Token = "0x4000B51")]
		Rotation = 1
	}

	[Token(Token = "0x20003A4")]
	[Flags]
	public enum LightmapMixedBakeModes
	{
		[Token(Token = "0x4000B53")]
		None = 0,
		[Token(Token = "0x4000B54")]
		IndirectOnly = 1,
		[Token(Token = "0x4000B55")]
		Subtractive = 2,
		[Token(Token = "0x4000B56")]
		Shadowmask = 4
	}

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x0")]
	private static SupportedRenderingFeatures s_Active;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x24")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CenlightenLightmapper_003Ek__BackingField;

	[Token(Token = "0x4000B37")]
	[FieldOffset(Offset = "0x27")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003ClightProbeProxyVolumes_003Ek__BackingField;

	[Token(Token = "0x4000B38")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CmotionVectors_003Ek__BackingField;

	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x29")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CreceiveShadows_003Ek__BackingField;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x2A")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CreflectionProbes_003Ek__BackingField;

	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x2B")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CreflectionProbesBlendDistance_003Ek__BackingField;

	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x2C")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CrendererPriority_003Ek__BackingField;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x2E")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesEnvironmentLighting_003Ek__BackingField;

	[Token(Token = "0x4000B3F")]
	[FieldOffset(Offset = "0x2F")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesFog_003Ek__BackingField;

	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesRealtimeReflectionProbes_003Ek__BackingField;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x31")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesOtherLightingSettings_003Ek__BackingField;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x32")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CeditableMaterialRenderQueue_003Ek__BackingField;

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x33")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesLODBias_003Ek__BackingField;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x34")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesMaximumLODLevel_003Ek__BackingField;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x35")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesEnableLODCrossFade_003Ek__BackingField;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0x36")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CrendererProbes_003Ek__BackingField;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x37")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CparticleSystemInstancing_003Ek__BackingField;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x3A")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesShadowmask_003Ek__BackingField;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x3D")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CsupportsClouds_003Ek__BackingField;

	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private string _003CoverridesLightProbeSystemWarningMessage_003Ek__BackingField;

	[Token(Token = "0x17000399")]
	public static SupportedRenderingFeatures active
	{
		[Token(Token = "0x60016E3")]
		[Address(RVA = "0x6962FD0", Offset = "0x6961FD0", VA = "0x6962FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016E4")]
		[Address(RVA = "0x695D540", Offset = "0x695C540", VA = "0x695D540")]
		set
		{
		}
	}

	[Token(Token = "0x1700039A")]
	public ReflectionProbeModes reflectionProbeModes
	{
		[Token(Token = "0x60016E5")]
		[Address(RVA = "0x69631C0", Offset = "0x69621C0", VA = "0x69631C0")]
		[CompilerGenerated]
		get
		{
			return default(ReflectionProbeModes);
		}
		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x69631D0", Offset = "0x69621D0", VA = "0x69631D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700039B")]
	public LightmapMixedBakeModes defaultMixedLightingModes
	{
		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x69631E0", Offset = "0x69621E0", VA = "0x69631E0")]
		[CompilerGenerated]
		get
		{
			return default(LightmapMixedBakeModes);
		}
	}

	[Token(Token = "0x1700039C")]
	public LightmapMixedBakeModes mixedLightingModes
	{
		[Token(Token = "0x60016E8")]
		[Address(RVA = "0x69631F0", Offset = "0x69621F0", VA = "0x69631F0")]
		[CompilerGenerated]
		get
		{
			return default(LightmapMixedBakeModes);
		}
	}

	[Token(Token = "0x1700039D")]
	public LightmapBakeType lightmapBakeTypes
	{
		[Token(Token = "0x60016E9")]
		[Address(RVA = "0x6963200", Offset = "0x6962200", VA = "0x6963200")]
		[CompilerGenerated]
		get
		{
			return default(LightmapBakeType);
		}
	}

	[Token(Token = "0x1700039E")]
	public LightmapsMode lightmapsModes
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x6963210", Offset = "0x6962210", VA = "0x6963210")]
		[CompilerGenerated]
		get
		{
			return default(LightmapsMode);
		}
	}

	[Token(Token = "0x1700039F")]
	public bool enlighten
	{
		[Token(Token = "0x60016EB")]
		[Address(RVA = "0x6963220", Offset = "0x6962220", VA = "0x6963220")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A0")]
	public bool skyOcclusion
	{
		[Token(Token = "0x60016EC")]
		[Address(RVA = "0x6963230", Offset = "0x6962230", VA = "0x6963230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A1")]
	public bool rendersUIOverlay
	{
		[Token(Token = "0x60016ED")]
		[Address(RVA = "0x6963240", Offset = "0x6962240", VA = "0x6963240")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016EE")]
		[Address(RVA = "0x6963250", Offset = "0x6962250", VA = "0x6963250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A2")]
	public bool ambientProbeBaking
	{
		[Token(Token = "0x60016EF")]
		[Address(RVA = "0x6963260", Offset = "0x6962260", VA = "0x6963260")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A3")]
	public bool defaultReflectionProbeBaking
	{
		[Token(Token = "0x60016F0")]
		[Address(RVA = "0x6963270", Offset = "0x6962270", VA = "0x6963270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A4")]
	public bool overridesLightProbeSystem
	{
		[Token(Token = "0x60016F1")]
		[Address(RVA = "0x6963280", Offset = "0x6962280", VA = "0x6963280")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016F2")]
		[Address(RVA = "0x6963290", Offset = "0x6962290", VA = "0x6963290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	public bool supportsHDR
	{
		[Token(Token = "0x60016F3")]
		[Address(RVA = "0x69632A0", Offset = "0x69622A0", VA = "0x69632A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x69632B0", Offset = "0x69622B0", VA = "0x69632B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FallbackMixedLightingModeByRef(IntPtr fallbackModePtr)
	{
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x69634D0", Offset = "0x69624D0", VA = "0x69634D0")]
	internal static bool IsMixedLightingModeSupported(MixedLightingMode mixedMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x6963530", Offset = "0x6962530", VA = "0x6963530")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsMixedLightingModeSupportedByRef(MixedLightingMode mixedMode, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x69636B0", Offset = "0x69626B0", VA = "0x69636B0")]
	internal static bool IsLightmapBakeTypeSupported(LightmapBakeType bakeType)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x6963710", Offset = "0x6962710", VA = "0x6963710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapBakeTypeSupportedByRef(LightmapBakeType bakeType, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x69638D0", Offset = "0x69628D0", VA = "0x69638D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapsModeSupportedByRef(LightmapsMode mode, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x6963940", Offset = "0x6962940", VA = "0x6963940")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapperSupportedByRef(int lightmapper, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x6963960", Offset = "0x6962960", VA = "0x6963960")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsUIOverlayRenderedBySRP(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x69639C0", Offset = "0x69629C0", VA = "0x69639C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsAmbientProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x6963A20", Offset = "0x6962A20", VA = "0x6963A20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsDefaultReflectionProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x6963A80", Offset = "0x6962A80", VA = "0x6963A80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OverridesLightProbeSystem(IntPtr overridesPtr)
	{
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x6963AE0", Offset = "0x6962AE0", VA = "0x6963AE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FallbackLightmapperByRef(IntPtr lightmapperPtr)
	{
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x6963AF0", Offset = "0x6962AF0", VA = "0x6963AF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsRotatingReflectionProbesSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x6963130", Offset = "0x6962130", VA = "0x6963130")]
	public SupportedRenderingFeatures()
	{
	}
}
