// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSurfaceMaterial.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000027")]
public static class GisketchSurfaceMaterial
{
	[Token(Token = "0x40000A1")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Surface";

	[Token(Token = "0x40000A2")]
	public const float DefaultFineScale = 205f;

	[Token(Token = "0x40000A3")]
	public const float DefaultFineStrength = 0.0147f;

	[Token(Token = "0x40000A4")]
	public const float DefaultCoarseScale = 72f;

	[Token(Token = "0x40000A5")]
	public const float DefaultCoarseStrength = 0.0014f;

	[Token(Token = "0x40000A6")]
	public const float DefaultGradientStrength = 0.0089f;

	[Token(Token = "0x40000A7")]
	public const float DefaultLightFineScale = 263f;

	[Token(Token = "0x40000A8")]
	public const float DefaultLightFineStrength = 0.04f;

	[Token(Token = "0x40000A9")]
	public const float DefaultLightCoarseScale = 120f;

	[Token(Token = "0x40000AA")]
	public const float DefaultLightCoarseStrength = 0.007f;

	[Token(Token = "0x40000AB")]
	public const float DefaultLightGradientStrength = 0.018f;

	[Token(Token = "0x40000AC")]
	public const float DefaultReliefLightAngle = 225f;

	[Token(Token = "0x40000AD")]
	public const float DefaultReliefShadowSize = 4f;

	[Token(Token = "0x40000AE")]
	public const float DefaultWearStrength = 0.18f;

	[Token(Token = "0x40000AF")]
	public const float DefaultChipStrength = 0.34f;

	[Token(Token = "0x40000B0")]
	public const float DefaultStainScale = 18f;

	[Token(Token = "0x40000B1")]
	public const float DefaultBrushReveal = 1f;

	[Token(Token = "0x40000B2")]
	public const float DefaultBrushRevealDirection = 1f;

	[Token(Token = "0x40000B3")]
	public const float DefaultBrushStreakStrength = 0.46f;

	[Token(Token = "0x40000B4")]
	public const float DefaultBrushStreakScale = 42f;

	[Token(Token = "0x40000B5")]
	public const float DefaultVerticalLightGradient = 0f;

	[Token(Token = "0x40000B6")]
	public const float DefaultHorizontalBlur = 0f;

	[Token(Token = "0x40000B7")]
	public const string WornKeyword = "AOTTG_WORN";

	[Token(Token = "0x40000B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int FineScaleId;

	[Token(Token = "0x40000B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int FineStrengthId;

	[Token(Token = "0x40000BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly int CoarseScaleId;

	[Token(Token = "0x40000BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly int CoarseStrengthId;

	[Token(Token = "0x40000BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly int GradientStrengthId;

	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static readonly int LightFineScaleId;

	[Token(Token = "0x40000BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly int LightFineStrengthId;

	[Token(Token = "0x40000BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static readonly int LightCoarseScaleId;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly int LightCoarseStrengthId;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static readonly int LightGradientStrengthId;

	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly int ReliefId;

	[Token(Token = "0x40000C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public static readonly int ReliefGradientId;

	[Token(Token = "0x40000C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly int ReliefLightAngleId;

	[Token(Token = "0x40000C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public static readonly int ReliefShadowSizeId;

	[Token(Token = "0x40000C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static readonly int WornId;

	[Token(Token = "0x40000C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public static readonly int WearStrengthId;

	[Token(Token = "0x40000C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static readonly int ChipStrengthId;

	[Token(Token = "0x40000C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public static readonly int StainScaleId;

	[Token(Token = "0x40000CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static readonly int BrushRevealId;

	[Token(Token = "0x40000CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public static readonly int BrushRevealDirectionId;

	[Token(Token = "0x40000CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static readonly int BrushStreakId;

	[Token(Token = "0x40000CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public static readonly int BrushStreakStrengthId;

	[Token(Token = "0x40000CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static readonly int BrushStreakScaleId;

	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public static readonly int VerticalLightGradientId;

	[Token(Token = "0x40000D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static readonly int HorizontalBlurId;

	[Token(Token = "0x40000D1")]
	private const string MaterialPath = "GisketchUI/Materials/AottgUiSurface";

	[Token(Token = "0x40000D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static Material _material;

	[Token(Token = "0x40000D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly List<Material> _instances;

	[Token(Token = "0x40000D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static readonly Dictionary<Material, float> _stainScaleOverrides;

	[Token(Token = "0x1700001E")]
	public static Material Shared
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x188C7F0", Offset = "0x188ADF0", VA = "0x18188C7F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x188AEA0", Offset = "0x18894A0", VA = "0x18188AEA0")]
	public static void ApplyDefaults(Material material)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x188BDA0", Offset = "0x188A3A0", VA = "0x18188BDA0")]
	public static Material Instance(float relief, [Optional][DefaultParameterValue(false)] bool reliefGradient, [Optional][DefaultParameterValue(false)] bool worn, [Optional] float? stainScaleOverride, bool brushStreak = false, bool verticalLightGradient = false)
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x188B5F0", Offset = "0x1889BF0", VA = "0x18188B5F0")]
	public static void ApplyReliefLightAngle(float angle)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x188B700", Offset = "0x1889D00", VA = "0x18188B700")]
	public static void ApplyReliefSettings(float angle, float shadowSize)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x188BAE0", Offset = "0x188A0E0", VA = "0x18188BAE0")]
	public static void ApplyWearSettings(float wearStrength, float chipStrength, float stainScale)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x188B490", Offset = "0x1889A90", VA = "0x18188B490")]
	public static void ApplyPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x188B330", Offset = "0x1889930", VA = "0x18188B330")]
	public static void ApplyLightPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x188B9D0", Offset = "0x1889FD0", VA = "0x18188B9D0")]
	public static void ApplyWearPreset(Material material, float wearStrength, float chipStrength, float stainScale)
	{
	}
}
