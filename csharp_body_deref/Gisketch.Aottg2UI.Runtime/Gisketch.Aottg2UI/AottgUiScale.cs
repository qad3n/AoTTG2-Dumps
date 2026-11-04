// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.AottgUiScale
// Update status: CHANGED in this game update
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
	[Token(Token = "0x4000030")]
	public const float UserMin = 0.5f;

	[Token(Token = "0x4000031")]
	public const float UserMax = 1.5f;

	[Token(Token = "0x4000032")]
	public const float AppliedMin = 0.8f;

	[Token(Token = "0x4000033")]
	public const float AppliedMax = 1.2f;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Labels;

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x18831A0", Offset = "0x18817A0", VA = "0x1818831A0")]
	public static float Value(AottgUiScalePreset preset)
	{
		return default(float);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1882EF0", Offset = "0x18814F0", VA = "0x181882EF0")]
	public static string Label(AottgUiScalePreset preset)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x18830A0", Offset = "0x18816A0", VA = "0x1818830A0")]
	public static bool TryParseLabel(string label, out AottgUiScalePreset preset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1882ED0", Offset = "0x18814D0", VA = "0x181882ED0")]
	public static float Clamp(float scale)
	{
		return default(float);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x1882E20", Offset = "0x1881420", VA = "0x181882E20")]
	public static float AppliedValue(float scale)
	{
		return default(float);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1882FE0", Offset = "0x18815E0", VA = "0x181882FE0")]
	internal static Vector2 ReferenceResolution(AottgUiScalePreset preset)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x1882F60", Offset = "0x1881560", VA = "0x181882F60")]
	internal static Vector2 ReferenceResolution(float scale)
	{
		return default(Vector2);
	}
}
