// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ResourceManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ResourceManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200091E")]
internal class ResourceManager : MonoBehaviour
{
	[Token(Token = "0x4002D71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Object> _cache;

	[Token(Token = "0x4002D72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Texture2D> _externalTextureCache;

	[Token(Token = "0x4002D73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static HashSet<string> _persistentTextures;

	[Token(Token = "0x60055AC")]
	[Address(RVA = "0x2355400", Offset = "0x2353A00", VA = "0x182355400")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x60055AD")]
	[Address(RVA = "0x23562D0", Offset = "0x23548D0", VA = "0x1823562D0")]
	public static string LoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x60055AE")]
	[Address(RVA = "0x23565E0", Offset = "0x2354BE0", VA = "0x1823565E0")]
	public static string TryLoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x60055AF")]
	[Address(RVA = "0x2355C20", Offset = "0x2354220", VA = "0x182355C20")]
	public static Object LoadAsset(string path, string name, bool cached = false)
	{
		return null;
	}

	[Token(Token = "0x60055B0")]
	public static T InstantiateAsset<T>(string path, string name, bool cached = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x60055B1")]
	public static T InstantiateAsset<T>(string path, string name, Vector3 position, Quaternion rotation, bool cached = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x60055B2")]
	[Address(RVA = "0x2355AE0", Offset = "0x23540E0", VA = "0x182355AE0")]
	public static Texture2D GetExternalTexture(string key)
	{
		return null;
	}

	[Token(Token = "0x60055B3")]
	[Address(RVA = "0x23564A0", Offset = "0x2354AA0", VA = "0x1823564A0")]
	public static void SetExternalTexture(string key, Texture2D texture, bool persistent = true)
	{
	}

	[Token(Token = "0x60055B4")]
	[Address(RVA = "0x2356390", Offset = "0x2354990", VA = "0x182356390")]
	public static void RemoveExternalTexture(string key)
	{
	}

	[Token(Token = "0x60055B5")]
	[Address(RVA = "0x2355F80", Offset = "0x2354580", VA = "0x182355F80")]
	public static Texture2D LoadExternalTexture(string filePath, [Optional] string cacheKey, bool persistent = true)
	{
		return null;
	}

	[Token(Token = "0x60055B6")]
	[Address(RVA = "0x2355470", Offset = "0x2353A70", VA = "0x182355470")]
	public static void ClearExternalTextureCache()
	{
	}

	[Token(Token = "0x60055B7")]
	[Address(RVA = "0x23556A0", Offset = "0x2353CA0", VA = "0x1823556A0")]
	public static void ClearNonPersistentTextures()
	{
	}

	[Token(Token = "0x60055B8")]
	[Address(RVA = "0x2355A60", Offset = "0x2354060", VA = "0x182355A60")]
	public static int GetExternalTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x60055B9")]
	[Address(RVA = "0x2355BB0", Offset = "0x23541B0", VA = "0x182355BB0")]
	public static int GetPersistentTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x60055BA")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ResourceManager()
	{
	}
}
