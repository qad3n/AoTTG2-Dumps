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

[Token(Token = "0x200000A")]
public static class AottgUiScale
{
	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Labels;

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3A2C940", Offset = "0x3A2C940", VA = "0x3A2C940")]
	public static float Value(AottgUiScalePreset preset)
	{
		return default(float);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3A2D640", Offset = "0x3A2D640", VA = "0x3A2D640")]
	public static string Label(AottgUiScalePreset preset)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3A2D6D0", Offset = "0x3A2D6D0", VA = "0x3A2D6D0")]
	public static bool TryParseLabel(string label, out AottgUiScalePreset preset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3A2CA60", Offset = "0x3A2CA60", VA = "0x3A2CA60")]
	public static float Clamp(float scale)
	{
		return default(float);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3A2D7B0", Offset = "0x3A2D7B0", VA = "0x3A2D7B0")]
	internal static Vector2 ReferenceResolution(AottgUiScalePreset preset)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3A2CA90", Offset = "0x3A2CA90", VA = "0x3A2CA90")]
	internal static Vector2 ReferenceResolution(float scale)
	{
		return default(Vector2);
	}
}
