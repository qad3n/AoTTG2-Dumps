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
	[Address(RVA = "0x39C1500", Offset = "0x39C1500", VA = "0x39C1500")]
	public static float Value(AottgUiScalePreset preset)
	{
		return default(float);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x39C4440", Offset = "0x39C4440", VA = "0x39C4440")]
	public static string Label(AottgUiScalePreset preset)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x39C44D0", Offset = "0x39C44D0", VA = "0x39C44D0")]
	public static bool TryParseLabel(string label, out AottgUiScalePreset preset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x39C1620", Offset = "0x39C1620", VA = "0x39C1620")]
	public static float Clamp(float scale)
	{
		return default(float);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x39C45B0", Offset = "0x39C45B0", VA = "0x39C45B0")]
	internal static Vector2 ReferenceResolution(AottgUiScalePreset preset)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x39C1810", Offset = "0x39C1810", VA = "0x39C1810")]
	internal static Vector2 ReferenceResolution(float scale)
	{
		return default(Vector2);
	}
}
