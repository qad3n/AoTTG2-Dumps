// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.AottgUiScale
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/AottgUiScale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI;

[Token(Token = "0x2000008")]
public static class AottgUiScale
{
	[Token(Token = "0x4000031")]
	public const float UserMin = 0.5f;

	[Token(Token = "0x4000032")]
	public const float UserMax = 1.5f;

	[Token(Token = "0x4000033")]
	public const float AppliedMin = 0.8f;

	[Token(Token = "0x4000034")]
	public const float AppliedMax = 1.2f;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Labels;

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x521B150", Offset = "0x521A150", VA = "0x521B150")]
	public static float Value(AottgUiScalePreset preset)
	{
		return default(float);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x521E060", Offset = "0x521D060", VA = "0x521E060")]
	public static string Label(AottgUiScalePreset preset)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x521E0F0", Offset = "0x521D0F0", VA = "0x521E0F0")]
	public static bool TryParseLabel(string label, out AottgUiScalePreset preset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x521B270", Offset = "0x521A270", VA = "0x521B270")]
	public static float Clamp(float scale)
	{
		return default(float);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x521B040", Offset = "0x521A040", VA = "0x521B040")]
	public static float AppliedValue(float scale)
	{
		return default(float);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x521E1E0", Offset = "0x521D1E0", VA = "0x521E1E0")]
	internal static Vector2 ReferenceResolution(AottgUiScalePreset preset)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x521B3D0", Offset = "0x521A3D0", VA = "0x521B3D0")]
	internal static Vector2 ReferenceResolution(float scale)
	{
		return default(Vector2);
	}
}
