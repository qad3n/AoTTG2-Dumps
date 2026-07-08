using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000744")]
internal class ResourceManager : MonoBehaviour
{
	[Token(Token = "0x4002344")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Object> _cache;

	[Token(Token = "0x4002345")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Texture2D> _externalTextureCache;

	[Token(Token = "0x4002346")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static HashSet<string> _persistentTextures;

	[Token(Token = "0x60046C5")]
	[Address(RVA = "0x40A5CC0", Offset = "0x40A5CC0", VA = "0x40A5CC0")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x60046C6")]
	[Address(RVA = "0x40A5D50", Offset = "0x40A5D50", VA = "0x40A5D50")]
	public static string LoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x60046C7")]
	[Address(RVA = "0x40A11B0", Offset = "0x40A11B0", VA = "0x40A11B0")]
	public static string TryLoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x60046C8")]
	[Address(RVA = "0x40A2DC0", Offset = "0x40A2DC0", VA = "0x40A2DC0")]
	public static Object LoadAsset(string path, string name, bool cached = false)
	{
		return null;
	}

	[Token(Token = "0x60046C9")]
	public static T InstantiateAsset<T>(string path, string name, bool cached = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x60046CA")]
	public static T InstantiateAsset<T>(string path, string name, Vector3 position, Quaternion rotation, bool cached = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x60046CB")]
	[Address(RVA = "0x40A5E00", Offset = "0x40A5E00", VA = "0x40A5E00")]
	public static Texture2D GetExternalTexture(string key)
	{
		return null;
	}

	[Token(Token = "0x60046CC")]
	[Address(RVA = "0x40A5EF0", Offset = "0x40A5EF0", VA = "0x40A5EF0")]
	public static void SetExternalTexture(string key, Texture2D texture, bool persistent = true)
	{
	}

	[Token(Token = "0x60046CD")]
	[Address(RVA = "0x40A6050", Offset = "0x40A6050", VA = "0x40A6050")]
	public static void RemoveExternalTexture(string key)
	{
	}

	[Token(Token = "0x60046CE")]
	[Address(RVA = "0x40A6180", Offset = "0x40A6180", VA = "0x40A6180")]
	public static Texture2D LoadExternalTexture(string filePath, [Optional] string cacheKey, bool persistent = true)
	{
		return null;
	}

	[Token(Token = "0x60046CF")]
	[Address(RVA = "0x40A6440", Offset = "0x40A6440", VA = "0x40A6440")]
	public static void ClearExternalTextureCache()
	{
	}

	[Token(Token = "0x60046D0")]
	[Address(RVA = "0x40A66C0", Offset = "0x40A66C0", VA = "0x40A66C0")]
	public static void ClearNonPersistentTextures()
	{
	}

	[Token(Token = "0x60046D1")]
	[Address(RVA = "0x40A6D00", Offset = "0x40A6D00", VA = "0x40A6D00")]
	public static int GetExternalTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x60046D2")]
	[Address(RVA = "0x40A6D90", Offset = "0x40A6D90", VA = "0x40A6D90")]
	public static int GetPersistentTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x60046D3")]
	[Address(RVA = "0x40A6E20", Offset = "0x40A6E20", VA = "0x40A6E20")]
	public ResourceManager()
	{
	}
}
