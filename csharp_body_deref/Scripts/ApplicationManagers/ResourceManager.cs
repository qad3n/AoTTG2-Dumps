// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ResourceManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ResourceManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000985")]
internal class ResourceManager : MonoBehaviour
{
	[Token(Token = "0x400301D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Object> _cache;

	[Token(Token = "0x400301E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Object> _persistentCache;

	[Token(Token = "0x400301F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Texture2D> _externalTextureCache;

	[Token(Token = "0x4003020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static HashSet<string> _persistentTextures;

	[Token(Token = "0x4003021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly HashSet<int> _meshParticlesChecked;

	[Token(Token = "0x60058FE")]
	[Address(RVA = "0x5D1BBB0", Offset = "0x5D1ABB0", VA = "0x5D1BBB0")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x60058FF")]
	[Address(RVA = "0x5D1BC40", Offset = "0x5D1AC40", VA = "0x5D1BC40")]
	public static string LoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x6005900")]
	[Address(RVA = "0x5D18410", Offset = "0x5D17410", VA = "0x5D18410")]
	public static string TryLoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x6005901")]
	[Address(RVA = "0x5D0CBD0", Offset = "0x5D0BBD0", VA = "0x5D0CBD0")]
	public static Object LoadAsset(string path, string name, bool cached = false, bool persistent = false)
	{
		return null;
	}

	[Token(Token = "0x6005902")]
	[Address(RVA = "0x5D1BDE0", Offset = "0x5D1ADE0", VA = "0x5D1BDE0")]
	private static Object LoadCached(Dictionary<string, Object> cache, string name)
	{
		return null;
	}

	[Token(Token = "0x6005903")]
	[Address(RVA = "0x5D1BF20", Offset = "0x5D1AF20", VA = "0x5D1BF20")]
	private static Object Load(string name)
	{
		return null;
	}

	[Token(Token = "0x6005904")]
	[Address(RVA = "0x5D0C580", Offset = "0x5D0B580", VA = "0x5D0C580")]
	public static void HideUnsupportedMeshParticles(GameObject prefab)
	{
	}

	[Token(Token = "0x6005905")]
	[Address(RVA = "0x5D1BFB0", Offset = "0x5D1AFB0", VA = "0x5D1BFB0")]
	private static void HideMeshParticles(GameObject root)
	{
	}

	[Token(Token = "0x6005906")]
	public static T InstantiateAsset<T>(string path, string name, bool cached = false, bool persistent = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6005907")]
	public static T InstantiateAsset<T>(string path, string name, Vector3 position, Quaternion rotation, bool cached = false, bool persistent = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6005908")]
	[Address(RVA = "0x5D1BCF0", Offset = "0x5D1ACF0", VA = "0x5D1BCF0")]
	public static Texture2D GetExternalTexture(string key)
	{
		return null;
	}

	[Token(Token = "0x6005909")]
	[Address(RVA = "0x5D1C0E0", Offset = "0x5D1B0E0", VA = "0x5D1C0E0")]
	public static void SetExternalTexture(string key, Texture2D texture, bool persistent = true)
	{
	}

	[Token(Token = "0x600590A")]
	[Address(RVA = "0x5D1C240", Offset = "0x5D1B240", VA = "0x5D1C240")]
	public static void RemoveExternalTexture(string key)
	{
	}

	[Token(Token = "0x600590B")]
	[Address(RVA = "0x5D1C370", Offset = "0x5D1B370", VA = "0x5D1C370")]
	public static Texture2D LoadExternalTexture(string filePath, [Optional] string cacheKey, bool persistent = true)
	{
		return null;
	}

	[Token(Token = "0x600590C")]
	[Address(RVA = "0x5D1C600", Offset = "0x5D1B600", VA = "0x5D1C600")]
	public static void ClearExternalTextureCache()
	{
	}

	[Token(Token = "0x600590D")]
	[Address(RVA = "0x5D1C860", Offset = "0x5D1B860", VA = "0x5D1C860")]
	public static void ClearNonPersistentTextures()
	{
	}

	[Token(Token = "0x600590E")]
	[Address(RVA = "0x5D1CD70", Offset = "0x5D1BD70", VA = "0x5D1CD70")]
	public static int GetExternalTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x600590F")]
	[Address(RVA = "0x5D1CE00", Offset = "0x5D1BE00", VA = "0x5D1CE00")]
	public static int GetPersistentTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x6005910")]
	[Address(RVA = "0x5D1CE90", Offset = "0x5D1BE90", VA = "0x5D1CE90")]
	public ResourceManager()
	{
	}
}
