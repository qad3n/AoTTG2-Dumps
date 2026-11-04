// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SupportedRenderingFeatures
// Update status: CHANGED in this game update
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

[Token(Token = "0x20003CE")]
public class SupportedRenderingFeatures
{
	[Token(Token = "0x20003CF")]
	[Flags]
	public enum ReflectionProbeModes
	{
		[Token(Token = "0x4000C70")]
		None = 0,
		[Token(Token = "0x4000C71")]
		Rotation = 1
	}

	[Token(Token = "0x20003D0")]
	[Flags]
	public enum LightmapMixedBakeModes
	{
		[Token(Token = "0x4000C73")]
		None = 0,
		[Token(Token = "0x4000C74")]
		IndirectOnly = 1,
		[Token(Token = "0x4000C75")]
		Subtractive = 2,
		[Token(Token = "0x4000C76")]
		Shadowmask = 4
	}

	[Token(Token = "0x4000C4E")]
	[FieldOffset(Offset = "0x0")]
	private static SupportedRenderingFeatures s_Active;

	[Token(Token = "0x4000C54")]
	[FieldOffset(Offset = "0x24")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CenlightenLightmapper_003Ek__BackingField;

	[Token(Token = "0x4000C57")]
	[FieldOffset(Offset = "0x27")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003ClightProbeProxyVolumes_003Ek__BackingField;

	[Token(Token = "0x4000C58")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CmotionVectors_003Ek__BackingField;

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x29")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CreceiveShadows_003Ek__BackingField;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x2A")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CreflectionProbes_003Ek__BackingField;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x2B")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CreflectionProbesBlendDistance_003Ek__BackingField;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x2C")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CrendererPriority_003Ek__BackingField;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x2E")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesEnvironmentLighting_003Ek__BackingField;

	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x2F")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesFog_003Ek__BackingField;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesRealtimeReflectionProbes_003Ek__BackingField;

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x31")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesOtherLightingSettings_003Ek__BackingField;

	[Token(Token = "0x4000C62")]
	[FieldOffset(Offset = "0x32")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CeditableMaterialRenderQueue_003Ek__BackingField;

	[Token(Token = "0x4000C63")]
	[FieldOffset(Offset = "0x33")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesLODBias_003Ek__BackingField;

	[Token(Token = "0x4000C64")]
	[FieldOffset(Offset = "0x34")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesMaximumLODLevel_003Ek__BackingField;

	[Token(Token = "0x4000C65")]
	[FieldOffset(Offset = "0x35")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesEnableLODCrossFade_003Ek__BackingField;

	[Token(Token = "0x4000C66")]
	[FieldOffset(Offset = "0x36")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CrendererProbes_003Ek__BackingField;

	[Token(Token = "0x4000C67")]
	[FieldOffset(Offset = "0x37")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CparticleSystemInstancing_003Ek__BackingField;

	[Token(Token = "0x4000C6A")]
	[FieldOffset(Offset = "0x3A")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesShadowmask_003Ek__BackingField;

	[Token(Token = "0x4000C6D")]
	[FieldOffset(Offset = "0x3D")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CsupportsClouds_003Ek__BackingField;

	[Token(Token = "0x4000C6E")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private string _003CoverridesLightProbeSystemWarningMessage_003Ek__BackingField;

	[Token(Token = "0x170003AB")]
	public static SupportedRenderingFeatures active
	{
		[Token(Token = "0x600173E")]
		[Address(RVA = "0x2F74F10", Offset = "0x2F73510", VA = "0x182F74F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600173F")]
		[Address(RVA = "0x2F75000", Offset = "0x2F73600", VA = "0x182F75000")]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public ReflectionProbeModes reflectionProbeModes
	{
		[Token(Token = "0x6001740")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(ReflectionProbeModes);
		}
		[Token(Token = "0x6001741")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003AD")]
	public LightmapMixedBakeModes defaultMixedLightingModes
	{
		[Token(Token = "0x6001742")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(LightmapMixedBakeModes);
		}
	}

	[Token(Token = "0x170003AE")]
	public LightmapMixedBakeModes mixedLightingModes
	{
		[Token(Token = "0x6001743")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(LightmapMixedBakeModes);
		}
	}

	[Token(Token = "0x170003AF")]
	public LightmapBakeType lightmapBakeTypes
	{
		[Token(Token = "0x6001744")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(LightmapBakeType);
		}
	}

	[Token(Token = "0x170003B0")]
	public LightmapsMode lightmapsModes
	{
		[Token(Token = "0x6001745")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(LightmapsMode);
		}
	}

	[Token(Token = "0x170003B1")]
	public bool enlighten
	{
		[Token(Token = "0x6001746")]
		[Address(RVA = "0x1C3C7E0", Offset = "0x1C3ADE0", VA = "0x181C3C7E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B2")]
	public bool skyOcclusion
	{
		[Token(Token = "0x6001747")]
		[Address(RVA = "0x1C3C850", Offset = "0x1C3AE50", VA = "0x181C3C850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003B3")]
	public bool rendersUIOverlay
	{
		[Token(Token = "0x6001748")]
		[Address(RVA = "0x2809E90", Offset = "0x2808490", VA = "0x182809E90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001749")]
		[Address(RVA = "0x2809EA0", Offset = "0x28084A0", VA = "0x182809EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003B4")]
	public bool ambientProbeBaking
	{
		[Token(Token = "0x600174A")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B5")]
	public bool defaultReflectionProbeBaking
	{
		[Token(Token = "0x600174B")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B6")]
	public bool overridesLightProbeSystem
	{
		[Token(Token = "0x600174C")]
		[Address(RVA = "0x2F74FF0", Offset = "0x2F735F0", VA = "0x182F74FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600174D")]
		[Address(RVA = "0x2E7E500", Offset = "0x2E7CB00", VA = "0x182E7E500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003B7")]
	public bool supportsHDR
	{
		[Token(Token = "0x600174E")]
		[Address(RVA = "0xDA7C80", Offset = "0xDA6280", VA = "0x180DA7C80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x2F743E0", Offset = "0x2F729E0", VA = "0x182F743E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FallbackMixedLightingModeByRef(IntPtr fallbackModePtr)
	{
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x2F74B60", Offset = "0x2F73160", VA = "0x182F74B60")]
	internal static bool IsMixedLightingModeSupported(MixedLightingMode mixedMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x2F74A00", Offset = "0x2F73000", VA = "0x182F74A00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsMixedLightingModeSupportedByRef(MixedLightingMode mixedMode, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x2F74810", Offset = "0x2F72E10", VA = "0x182F74810")]
	internal static bool IsLightmapBakeTypeSupported(LightmapBakeType bakeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x2F74710", Offset = "0x2F72D10", VA = "0x182F74710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapBakeTypeSupportedByRef(LightmapBakeType bakeType, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x2F74980", Offset = "0x2F72F80", VA = "0x182F74980")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapsModeSupportedByRef(LightmapsMode mode, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x2F74950", Offset = "0x2F72F50", VA = "0x182F74950")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapperSupportedByRef(int lightmapper, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001756")]
	[Address(RVA = "0x2F74D20", Offset = "0x2F73320", VA = "0x182F74D20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsUIOverlayRenderedBySRP(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001757")]
	[Address(RVA = "0x2F74630", Offset = "0x2F72C30", VA = "0x182F74630")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsAmbientProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001758")]
	[Address(RVA = "0x2F746A0", Offset = "0x2F72CA0", VA = "0x182F746A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsDefaultReflectionProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x2F74D90", Offset = "0x2F73390", VA = "0x182F74D90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OverridesLightProbeSystem(IntPtr overridesPtr)
	{
	}

	[Token(Token = "0x600175A")]
	[Address(RVA = "0x2F743C0", Offset = "0x2F729C0", VA = "0x182F743C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FallbackLightmapperByRef(IntPtr lightmapperPtr)
	{
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x2F74CB0", Offset = "0x2F732B0", VA = "0x182F74CB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsRotatingReflectionProbesSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x2F74E70", Offset = "0x2F73470", VA = "0x182F74E70")]
	public SupportedRenderingFeatures()
	{
	}
}
