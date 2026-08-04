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

[Token(Token = "0x200001D")]
public static class GisketchSpriteLoader
{
	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Sprite> Cache;

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3A35050", Offset = "0x3A35050", VA = "0x3A35050")]
	public static Sprite Load(string resourcePath)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3A35370", Offset = "0x3A35370", VA = "0x3A35370")]
	public static bool TryGetCached(string resourcePath, out Sprite sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3A35450", Offset = "0x3A35450", VA = "0x3A35450")]
	public static void Store(string resourcePath, Sprite sprite)
	{
	}
}
