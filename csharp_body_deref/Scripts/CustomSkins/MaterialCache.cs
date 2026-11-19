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

[Token(Token = "0x20003D1")]
internal class MaterialCache
{
	[Token(Token = "0x4001382")]
	private const long MaxBytes = 536870912L;

	[Token(Token = "0x4001383")]
	private const int BytesPerPixel = 4;

	[Token(Token = "0x4001384")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Material> _idToMaterial;

	[Token(Token = "0x4001385")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, long> _idToBytes;

	[Token(Token = "0x4001386")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, MonoBehaviour> _idToDownloadOwner;

	[Token(Token = "0x4001387")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<string> _ids;

	[Token(Token = "0x4001388")]
	[FieldOffset(Offset = "0x20")]
	private static long _totalBytes;

	[Token(Token = "0x4001389")]
	[FieldOffset(Offset = "0x28")]
	public static Material TransparentMaterial;

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x58656A0", Offset = "0x58646A0", VA = "0x58656A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x5865790", Offset = "0x5864790", VA = "0x5865790")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x58632B0", Offset = "0x58622B0", VA = "0x58632B0")]
	public static string GetId(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x5863300", Offset = "0x5862300", VA = "0x5863300")]
	public static bool ContainsKey(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001837")]
	[Address(RVA = "0x58633F0", Offset = "0x58623F0", VA = "0x58633F0")]
	public static Material GetMaterial(string id)
	{
		return null;
	}

	[Token(Token = "0x6001838")]
	[Address(RVA = "0x58649E0", Offset = "0x58639E0", VA = "0x58649E0")]
	public static void SetMaterial(string id, Material material, Texture texture)
	{
	}

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x5864740", Offset = "0x5863740", VA = "0x5864740")]
	public static bool IsDownloading(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x5864820", Offset = "0x5863820", VA = "0x5864820")]
	public static void SetDownloading(string id, MonoBehaviour owner)
	{
	}

	[Token(Token = "0x600183B")]
	[Address(RVA = "0x5864940", Offset = "0x5863940", VA = "0x5864940")]
	public static void ClearDownloading(string id)
	{
	}

	[Token(Token = "0x600183C")]
	[Address(RVA = "0x5865A10", Offset = "0x5864A10", VA = "0x5865A10")]
	private static long GetTextureBytes(Texture texture)
	{
		return default(long);
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x58658D0", Offset = "0x58648D0", VA = "0x58658D0")]
	private static void Remove(string id)
	{
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x5865AE0", Offset = "0x5864AE0", VA = "0x5865AE0")]
	public MaterialCache()
	{
	}
}
