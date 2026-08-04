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

[Token(Token = "0x2000305")]
public class SupportedRenderingFeatures
{
	[Token(Token = "0x2000306")]
	[Flags]
	public enum ReflectionProbeModes
	{
		[Token(Token = "0x4000965")]
		None = 0,
		[Token(Token = "0x4000966")]
		Rotation = 1
	}

	[Token(Token = "0x2000307")]
	[Flags]
	public enum LightmapMixedBakeModes
	{
		[Token(Token = "0x4000968")]
		None = 0,
		[Token(Token = "0x4000969")]
		IndirectOnly = 1,
		[Token(Token = "0x400096A")]
		Subtractive = 2,
		[Token(Token = "0x400096B")]
		Shadowmask = 4
	}

	[Token(Token = "0x4000944")]
	[FieldOffset(Offset = "0x0")]
	private static SupportedRenderingFeatures s_Active;

	[Token(Token = "0x4000945")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private ReflectionProbeModes _003CreflectionProbeModes_003Ek__BackingField;

	[Token(Token = "0x400094A")]
	[FieldOffset(Offset = "0x24")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CenlightenLightmapper_003Ek__BackingField;

	[Token(Token = "0x400094C")]
	[FieldOffset(Offset = "0x26")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003ClightProbeProxyVolumes_003Ek__BackingField;

	[Token(Token = "0x400094D")]
	[FieldOffset(Offset = "0x27")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CmotionVectors_003Ek__BackingField;

	[Token(Token = "0x400094E")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CreceiveShadows_003Ek__BackingField;

	[Token(Token = "0x400094F")]
	[FieldOffset(Offset = "0x29")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CreflectionProbes_003Ek__BackingField;

	[Token(Token = "0x4000950")]
	[FieldOffset(Offset = "0x2A")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CreflectionProbesBlendDistance_003Ek__BackingField;

	[Token(Token = "0x4000951")]
	[FieldOffset(Offset = "0x2B")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CrendererPriority_003Ek__BackingField;

	[Token(Token = "0x4000953")]
	[FieldOffset(Offset = "0x2D")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesEnvironmentLighting_003Ek__BackingField;

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x2E")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesFog_003Ek__BackingField;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0x2F")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CoverridesRealtimeReflectionProbes_003Ek__BackingField;

	[Token(Token = "0x4000956")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesOtherLightingSettings_003Ek__BackingField;

	[Token(Token = "0x4000957")]
	[FieldOffset(Offset = "0x31")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CeditableMaterialRenderQueue_003Ek__BackingField;

	[Token(Token = "0x4000958")]
	[FieldOffset(Offset = "0x32")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesLODBias_003Ek__BackingField;

	[Token(Token = "0x4000959")]
	[FieldOffset(Offset = "0x33")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesMaximumLODLevel_003Ek__BackingField;

	[Token(Token = "0x400095A")]
	[FieldOffset(Offset = "0x34")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesEnableLODCrossFade_003Ek__BackingField;

	[Token(Token = "0x400095B")]
	[FieldOffset(Offset = "0x35")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CrendererProbes_003Ek__BackingField;

	[Token(Token = "0x400095C")]
	[FieldOffset(Offset = "0x36")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CparticleSystemInstancing_003Ek__BackingField;

	[Token(Token = "0x400095F")]
	[FieldOffset(Offset = "0x39")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CoverridesShadowmask_003Ek__BackingField;

	[Token(Token = "0x4000961")]
	[FieldOffset(Offset = "0x3B")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CsupportsHDR_003Ek__BackingField;

	[Token(Token = "0x4000962")]
	[FieldOffset(Offset = "0x3C")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CsupportsClouds_003Ek__BackingField;

	[Token(Token = "0x4000963")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private string _003CoverridesLightProbeSystemWarningMessage_003Ek__BackingField;

	[Token(Token = "0x170002AF")]
	public static SupportedRenderingFeatures active
	{
		[Token(Token = "0x60010DD")]
		[Address(RVA = "0x4E338B0", Offset = "0x4E338B0", VA = "0x4E338B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010DE")]
		[Address(RVA = "0x4E2FCD0", Offset = "0x4E2FCD0", VA = "0x4E2FCD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public LightmapMixedBakeModes defaultMixedLightingModes
	{
		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x4E33A10", Offset = "0x4E33A10", VA = "0x4E33A10")]
		[CompilerGenerated]
		get
		{
			return default(LightmapMixedBakeModes);
		}
	}

	[Token(Token = "0x170002B1")]
	public LightmapMixedBakeModes mixedLightingModes
	{
		[Token(Token = "0x60010E0")]
		[Address(RVA = "0x4E33A20", Offset = "0x4E33A20", VA = "0x4E33A20")]
		[CompilerGenerated]
		get
		{
			return default(LightmapMixedBakeModes);
		}
	}

	[Token(Token = "0x170002B2")]
	public LightmapBakeType lightmapBakeTypes
	{
		[Token(Token = "0x60010E1")]
		[Address(RVA = "0x4E33A30", Offset = "0x4E33A30", VA = "0x4E33A30")]
		[CompilerGenerated]
		get
		{
			return default(LightmapBakeType);
		}
	}

	[Token(Token = "0x170002B3")]
	public LightmapsMode lightmapsModes
	{
		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x4E33A40", Offset = "0x4E33A40", VA = "0x4E33A40")]
		[CompilerGenerated]
		get
		{
			return default(LightmapsMode);
		}
	}

	[Token(Token = "0x170002B4")]
	public bool enlighten
	{
		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x4E33A50", Offset = "0x4E33A50", VA = "0x4E33A50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B5")]
	public bool rendersUIOverlay
	{
		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x4E33A60", Offset = "0x4E33A60", VA = "0x4E33A60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public bool autoAmbientProbeBaking
	{
		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x4E33A70", Offset = "0x4E33A70", VA = "0x4E33A70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B7")]
	public bool autoDefaultReflectionProbeBaking
	{
		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x4E33A80", Offset = "0x4E33A80", VA = "0x4E33A80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B8")]
	public bool overridesLightProbeSystem
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x4E33A90", Offset = "0x4E33A90", VA = "0x4E33A90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x4E33AA0", Offset = "0x4E33AA0", VA = "0x4E33AA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FallbackMixedLightingModeByRef(IntPtr fallbackModePtr)
	{
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x4E33C70", Offset = "0x4E33C70", VA = "0x4E33C70")]
	internal static bool IsMixedLightingModeSupported(MixedLightingMode mixedMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x4E33CD0", Offset = "0x4E33CD0", VA = "0x4E33CD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsMixedLightingModeSupportedByRef(MixedLightingMode mixedMode, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x4E33E30", Offset = "0x4E33E30", VA = "0x4E33E30")]
	internal static bool IsLightmapBakeTypeSupported(LightmapBakeType bakeType)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x4E33E90", Offset = "0x4E33E90", VA = "0x4E33E90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapBakeTypeSupportedByRef(LightmapBakeType bakeType, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x4E34050", Offset = "0x4E34050", VA = "0x4E34050")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapsModeSupportedByRef(LightmapsMode mode, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x4E340C0", Offset = "0x4E340C0", VA = "0x4E340C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsLightmapperSupportedByRef(int lightmapper, IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x4E340E0", Offset = "0x4E340E0", VA = "0x4E340E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsUIOverlayRenderedBySRP(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x4E34140", Offset = "0x4E34140", VA = "0x4E34140")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsAutoAmbientProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x4E341A0", Offset = "0x4E341A0", VA = "0x4E341A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void IsAutoDefaultReflectionProbeBakingSupported(IntPtr isSupportedPtr)
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x4E34200", Offset = "0x4E34200", VA = "0x4E34200")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OverridesLightProbeSystem(IntPtr overridesPtr)
	{
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x4E34260", Offset = "0x4E34260", VA = "0x4E34260")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FallbackLightmapperByRef(IntPtr lightmapperPtr)
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x4E2FC40", Offset = "0x4E2FC40", VA = "0x4E2FC40")]
	public SupportedRenderingFeatures()
	{
	}
}
