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

[Token(Token = "0x200002E")]
public static class GisketchSurfaceMaterial
{
	[Token(Token = "0x40000BF")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Surface";

	[Token(Token = "0x40000C0")]
	public const float DefaultFineScale = 205f;

	[Token(Token = "0x40000C1")]
	public const float DefaultFineStrength = 0.0147f;

	[Token(Token = "0x40000C2")]
	public const float DefaultCoarseScale = 72f;

	[Token(Token = "0x40000C3")]
	public const float DefaultCoarseStrength = 0.0014f;

	[Token(Token = "0x40000C4")]
	public const float DefaultGradientStrength = 0.0089f;

	[Token(Token = "0x40000C5")]
	public const float DefaultLightFineScale = 263f;

	[Token(Token = "0x40000C6")]
	public const float DefaultLightFineStrength = 0.04f;

	[Token(Token = "0x40000C7")]
	public const float DefaultLightCoarseScale = 120f;

	[Token(Token = "0x40000C8")]
	public const float DefaultLightCoarseStrength = 0.007f;

	[Token(Token = "0x40000C9")]
	public const float DefaultLightGradientStrength = 0.018f;

	[Token(Token = "0x40000CA")]
	public const float DefaultReliefLightAngle = 225f;

	[Token(Token = "0x40000CB")]
	public const float DefaultReliefShadowSize = 4f;

	[Token(Token = "0x40000CC")]
	public const float DefaultWearStrength = 0.18f;

	[Token(Token = "0x40000CD")]
	public const float DefaultChipStrength = 0.34f;

	[Token(Token = "0x40000CE")]
	public const float DefaultStainScale = 18f;

	[Token(Token = "0x40000CF")]
	public const float DefaultBrushReveal = 1f;

	[Token(Token = "0x40000D0")]
	public const float DefaultBrushRevealDirection = 1f;

	[Token(Token = "0x40000D1")]
	public const float DefaultBrushStreakStrength = 0.46f;

	[Token(Token = "0x40000D2")]
	public const float DefaultBrushStreakScale = 42f;

	[Token(Token = "0x40000D3")]
	public const float DefaultVerticalLightGradient = 0f;

	[Token(Token = "0x40000D4")]
	public const float DefaultHorizontalBlur = 0f;

	[Token(Token = "0x40000D5")]
	public const string WornKeyword = "AOTTG_WORN";

	[Token(Token = "0x40000D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int FineScaleId;

	[Token(Token = "0x40000D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int FineStrengthId;

	[Token(Token = "0x40000D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly int CoarseScaleId;

	[Token(Token = "0x40000D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly int CoarseStrengthId;

	[Token(Token = "0x40000DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly int GradientStrengthId;

	[Token(Token = "0x40000DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static readonly int LightFineScaleId;

	[Token(Token = "0x40000DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly int LightFineStrengthId;

	[Token(Token = "0x40000DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static readonly int LightCoarseScaleId;

	[Token(Token = "0x40000DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly int LightCoarseStrengthId;

	[Token(Token = "0x40000DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static readonly int LightGradientStrengthId;

	[Token(Token = "0x40000E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly int ReliefId;

	[Token(Token = "0x40000E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public static readonly int ReliefGradientId;

	[Token(Token = "0x40000E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly int ReliefLightAngleId;

	[Token(Token = "0x40000E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public static readonly int ReliefShadowSizeId;

	[Token(Token = "0x40000E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static readonly int WornId;

	[Token(Token = "0x40000E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public static readonly int WearStrengthId;

	[Token(Token = "0x40000E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static readonly int ChipStrengthId;

	[Token(Token = "0x40000E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public static readonly int StainScaleId;

	[Token(Token = "0x40000E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static readonly int BrushRevealId;

	[Token(Token = "0x40000E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public static readonly int BrushRevealDirectionId;

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static readonly int BrushStreakId;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public static readonly int BrushStreakStrengthId;

	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static readonly int BrushStreakScaleId;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public static readonly int VerticalLightGradientId;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static readonly int HorizontalBlurId;

	[Token(Token = "0x40000EF")]
	private const string MaterialPath = "GisketchUI/Materials/AottgUiSurface";

	[Token(Token = "0x40000F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static Material _material;

	[Token(Token = "0x40000F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly List<Material> _instances;

	[Token(Token = "0x40000F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static readonly Dictionary<Material, float> _stainScaleOverrides;

	[Token(Token = "0x1700001E")]
	public static Material Shared
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x5233980", Offset = "0x5232980", VA = "0x5233980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x5233BB0", Offset = "0x5232BB0", VA = "0x5233BB0")]
	public static void ApplyDefaults(Material material)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x5222EA0", Offset = "0x5221EA0", VA = "0x5222EA0")]
	public static Material Instance(float relief, [Optional][DefaultParameterValue(false)] bool reliefGradient, [Optional][DefaultParameterValue(false)] bool worn, [Optional] float? stainScaleOverride, bool brushStreak = false, bool verticalLightGradient = false)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x5234440", Offset = "0x5233440", VA = "0x5234440")]
	public static void ApplyReliefLightAngle(float angle)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x5234190", Offset = "0x5233190", VA = "0x5234190")]
	public static void ApplyReliefSettings(float angle, float shadowSize)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x5234540", Offset = "0x5233540", VA = "0x5234540")]
	public static void ApplyWearSettings(float wearStrength, float chipStrength, float stainScale)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x5233E10", Offset = "0x5232E10", VA = "0x5233E10")]
	public static void ApplyPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x5233F50", Offset = "0x5232F50", VA = "0x5233F50")]
	public static void ApplyLightPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x5234090", Offset = "0x5233090", VA = "0x5234090")]
	public static void ApplyWearPreset(Material material, float wearStrength, float chipStrength, float stainScale)
	{
	}
}
