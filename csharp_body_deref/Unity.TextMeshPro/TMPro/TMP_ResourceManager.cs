using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200005C")]
public class TMP_ResourceManager
{
	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_ResourceManager s_instance;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x8")]
	private static TMP_Settings s_TextSettings;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<TMP_FontAsset> s_FontAssetReferences;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<int, TMP_FontAsset> s_FontAssetReferenceLookup;

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x493D070", Offset = "0x493D070", VA = "0x493D070")]
	static TMP_ResourceManager()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x493D190", Offset = "0x493D190", VA = "0x493D190")]
	internal static TMP_Settings GetTextSettings()
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x493D290", Offset = "0x493D290", VA = "0x493D290")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x493D3E0", Offset = "0x493D3E0", VA = "0x493D3E0")]
	public static bool TryGetFontAsset(int hashcode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x493D470", Offset = "0x493D470", VA = "0x493D470")]
	internal static void RebuildFontAssetCache(int instanceID)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x493D180", Offset = "0x493D180", VA = "0x493D180")]
	public TMP_ResourceManager()
	{
	}
}
