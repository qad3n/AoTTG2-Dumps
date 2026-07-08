using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200001E")]
public static class GisketchSurfaceMaterial
{
	[Token(Token = "0x4000077")]
	public const string ShaderName = "Gisketch/AoTTG2 UI Surface";

	[Token(Token = "0x4000078")]
	public const float DefaultFineScale = 205f;

	[Token(Token = "0x4000079")]
	public const float DefaultFineStrength = 0.0147f;

	[Token(Token = "0x400007A")]
	public const float DefaultCoarseScale = 72f;

	[Token(Token = "0x400007B")]
	public const float DefaultCoarseStrength = 0.0014f;

	[Token(Token = "0x400007C")]
	public const float DefaultGradientStrength = 0.0089f;

	[Token(Token = "0x400007D")]
	public const float DefaultLightFineScale = 263f;

	[Token(Token = "0x400007E")]
	public const float DefaultLightFineStrength = 0.04f;

	[Token(Token = "0x400007F")]
	public const float DefaultLightCoarseScale = 120f;

	[Token(Token = "0x4000080")]
	public const float DefaultLightCoarseStrength = 0.007f;

	[Token(Token = "0x4000081")]
	public const float DefaultLightGradientStrength = 0.018f;

	[Token(Token = "0x4000082")]
	public const float DefaultReliefLightAngle = 225f;

	[Token(Token = "0x4000083")]
	public const float DefaultReliefShadowSize = 4f;

	[Token(Token = "0x4000084")]
	public const float DefaultWearStrength = 0.18f;

	[Token(Token = "0x4000085")]
	public const float DefaultChipStrength = 0.34f;

	[Token(Token = "0x4000086")]
	public const float DefaultStainScale = 18f;

	[Token(Token = "0x4000087")]
	public const float DefaultBrushReveal = 1f;

	[Token(Token = "0x4000088")]
	public const float DefaultBrushRevealDirection = 1f;

	[Token(Token = "0x4000089")]
	public const float DefaultBrushStreakStrength = 0.46f;

	[Token(Token = "0x400008A")]
	public const float DefaultBrushStreakScale = 42f;

	[Token(Token = "0x400008B")]
	public const float DefaultVerticalLightGradient = 0f;

	[Token(Token = "0x400008C")]
	public const float DefaultHorizontalBlur = 0f;

	[Token(Token = "0x400008D")]
	public const string WornKeyword = "AOTTG_WORN";

	[Token(Token = "0x400008E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int FineScaleId;

	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int FineStrengthId;

	[Token(Token = "0x4000090")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly int CoarseScaleId;

	[Token(Token = "0x4000091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly int CoarseStrengthId;

	[Token(Token = "0x4000092")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly int GradientStrengthId;

	[Token(Token = "0x4000093")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static readonly int LightFineScaleId;

	[Token(Token = "0x4000094")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly int LightFineStrengthId;

	[Token(Token = "0x4000095")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static readonly int LightCoarseScaleId;

	[Token(Token = "0x4000096")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly int LightCoarseStrengthId;

	[Token(Token = "0x4000097")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static readonly int LightGradientStrengthId;

	[Token(Token = "0x4000098")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly int ReliefId;

	[Token(Token = "0x4000099")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public static readonly int ReliefGradientId;

	[Token(Token = "0x400009A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly int ReliefLightAngleId;

	[Token(Token = "0x400009B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public static readonly int ReliefShadowSizeId;

	[Token(Token = "0x400009C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static readonly int WornId;

	[Token(Token = "0x400009D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public static readonly int WearStrengthId;

	[Token(Token = "0x400009E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static readonly int ChipStrengthId;

	[Token(Token = "0x400009F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public static readonly int StainScaleId;

	[Token(Token = "0x40000A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static readonly int BrushRevealId;

	[Token(Token = "0x40000A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public static readonly int BrushRevealDirectionId;

	[Token(Token = "0x40000A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static readonly int BrushStreakId;

	[Token(Token = "0x40000A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public static readonly int BrushStreakStrengthId;

	[Token(Token = "0x40000A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static readonly int BrushStreakScaleId;

	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public static readonly int VerticalLightGradientId;

	[Token(Token = "0x40000A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static readonly int HorizontalBlurId;

	[Token(Token = "0x40000A7")]
	private const string MaterialPath = "GisketchUI/Materials/AottgUiSurface";

	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static Material _material;

	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly List<Material> _instances;

	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static readonly Dictionary<Material, float> _stainScaleOverrides;

	[Token(Token = "0x17000010")]
	public static Material Shared
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x39CC3A0", Offset = "0x39CC3A0", VA = "0x39CC3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x39CC5D0", Offset = "0x39CC5D0", VA = "0x39CC5D0")]
	public static void ApplyDefaults(Material material)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x39CCE80", Offset = "0x39CCE80", VA = "0x39CCE80")]
	public static Material Instance(float relief, [Optional][DefaultParameterValue(false)] bool reliefGradient, [Optional][DefaultParameterValue(false)] bool worn, [Optional] float? stainScaleOverride, bool brushStreak = false, bool verticalLightGradient = false)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x39CD340", Offset = "0x39CD340", VA = "0x39CD340")]
	public static void ApplyReliefLightAngle(float angle)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x39CCBB0", Offset = "0x39CCBB0", VA = "0x39CCBB0")]
	public static void ApplyReliefSettings(float angle, float shadowSize)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x39CD440", Offset = "0x39CD440", VA = "0x39CD440")]
	public static void ApplyWearSettings(float wearStrength, float chipStrength, float stainScale)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x39CC830", Offset = "0x39CC830", VA = "0x39CC830")]
	public static void ApplyPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x39CC970", Offset = "0x39CC970", VA = "0x39CC970")]
	public static void ApplyLightPreset(Material material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x39CCAB0", Offset = "0x39CCAB0", VA = "0x39CCAB0")]
	public static void ApplyWearPreset(Material material, float wearStrength, float chipStrength, float stainScale)
	{
	}
}
