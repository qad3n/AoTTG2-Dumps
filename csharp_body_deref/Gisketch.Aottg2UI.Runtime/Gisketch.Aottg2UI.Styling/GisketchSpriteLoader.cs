// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchSpriteLoader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002D")]
public static class GisketchSpriteLoader
{
	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Sprite> Cache;

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x5233110", Offset = "0x5232110", VA = "0x5233110")]
	public static Sprite Load(string resourcePath)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x5233430", Offset = "0x5232430", VA = "0x5233430")]
	public static bool TryGetCached(string resourcePath, out Sprite sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x5233510", Offset = "0x5232510", VA = "0x5233510")]
	public static void Store(string resourcePath, Sprite sprite)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x52335E0", Offset = "0x52325E0", VA = "0x52335E0")]
	public static void Release(IEnumerable<string> resourcePaths)
	{
	}
}
