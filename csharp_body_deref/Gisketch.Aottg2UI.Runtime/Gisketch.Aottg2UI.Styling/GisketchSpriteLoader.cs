// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000026")]
public static class GisketchSpriteLoader
{
	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Sprite> Cache;

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x188A710", Offset = "0x1888D10", VA = "0x18188A710")]
	public static Sprite Load(string resourcePath)
	{
		return null;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x188AC50", Offset = "0x1889250", VA = "0x18188AC50")]
	public static bool TryGetCached(string resourcePath, out Sprite sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x188AB80", Offset = "0x1889180", VA = "0x18188AB80")]
	public static void Store(string resourcePath, Sprite sprite)
	{
	}
}
