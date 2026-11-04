// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.MaterialCache
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/MaterialCache.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/MaterialCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000376")]
internal class MaterialCache
{
	[Token(Token = "0x40011F5")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Material> _IdToMaterial;

	[Token(Token = "0x40011F6")]
	[FieldOffset(Offset = "0x8")]
	private static List<string> _ids;

	[Token(Token = "0x40011F7")]
	[FieldOffset(Offset = "0x10")]
	private static int MaxItems;

	[Token(Token = "0x40011F8")]
	[FieldOffset(Offset = "0x18")]
	public static Material TransparentMaterial;

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x1E93590", Offset = "0x1E91B90", VA = "0x181E93590")]
	public static void Init()
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x1E93240", Offset = "0x1E91840", VA = "0x181E93240")]
	public static void Clear()
	{
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x1E93300", Offset = "0x1E91900", VA = "0x181E93300")]
	public static bool ContainsKey(string rendererId, string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x1E934C0", Offset = "0x1E91AC0", VA = "0x181E934C0")]
	public static Material GetMaterial(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x1E93740", Offset = "0x1E91D40", VA = "0x181E93740")]
	public static void SetMaterial(string rendererId, string url, Material material)
	{
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x1E93690", Offset = "0x1E91C90", VA = "0x181E93690")]
	private static void Remove(string id)
	{
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x1E93470", Offset = "0x1E91A70", VA = "0x181E93470")]
	private static string GetId(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MaterialCache()
	{
	}
}
