// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.MaterialCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/MaterialCache.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/MaterialCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x200025A")]
internal class MaterialCache
{
	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Material> _IdToMaterial;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0x8")]
	private static int MaxItems;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x10")]
	public static Material TransparentMaterial;

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x3F95430", Offset = "0x3F95430", VA = "0x3F95430")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x3F95520", Offset = "0x3F95520", VA = "0x3F95520")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x3F933A0", Offset = "0x3F933A0", VA = "0x3F933A0")]
	public static bool ContainsKey(string rendererId, string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x3F93490", Offset = "0x3F93490", VA = "0x3F93490")]
	public static Material GetMaterial(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x3F946C0", Offset = "0x3F946C0", VA = "0x3F946C0")]
	public static void SetMaterial(string rendererId, string url, Material material)
	{
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x3F955B0", Offset = "0x3F955B0", VA = "0x3F955B0")]
	private static string GetId(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x3F95600", Offset = "0x3F95600", VA = "0x3F95600")]
	public MaterialCache()
	{
	}
}
