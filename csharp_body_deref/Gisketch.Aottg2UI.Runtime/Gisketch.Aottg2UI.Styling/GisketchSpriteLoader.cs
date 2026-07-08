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
	[Address(RVA = "0x39CBE50", Offset = "0x39CBE50", VA = "0x39CBE50")]
	public static Sprite Load(string resourcePath)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x39CC170", Offset = "0x39CC170", VA = "0x39CC170")]
	public static bool TryGetCached(string resourcePath, out Sprite sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x39CC250", Offset = "0x39CC250", VA = "0x39CC250")]
	public static void Store(string resourcePath, Sprite sprite)
	{
	}
}
