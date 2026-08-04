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

[Token(Token = "0x2000793")]
internal class ResourceManager : MonoBehaviour
{
	[Token(Token = "0x40024A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Object> _cache;

	[Token(Token = "0x40024A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Texture2D> _externalTextureCache;

	[Token(Token = "0x40024A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static HashSet<string> _persistentTextures;

	[Token(Token = "0x6004934")]
	[Address(RVA = "0x43BEC80", Offset = "0x43BEC80", VA = "0x43BEC80")]
	public static void ClearCache()
	{
	}

	[Token(Token = "0x6004935")]
	[Address(RVA = "0x43BED10", Offset = "0x43BED10", VA = "0x43BED10")]
	public static string LoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x6004936")]
	[Address(RVA = "0x43BA330", Offset = "0x43BA330", VA = "0x43BA330")]
	public static string TryLoadText(string path, string name)
	{
		return null;
	}

	[Token(Token = "0x6004937")]
	[Address(RVA = "0x43BBF40", Offset = "0x43BBF40", VA = "0x43BBF40")]
	public static Object LoadAsset(string path, string name, bool cached = false)
	{
		return null;
	}

	[Token(Token = "0x6004938")]
	public static T InstantiateAsset<T>(string path, string name, bool cached = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6004939")]
	public static T InstantiateAsset<T>(string path, string name, Vector3 position, Quaternion rotation, bool cached = false) where T : Object
	{
		return null;
	}

	[Token(Token = "0x600493A")]
	[Address(RVA = "0x43BEDC0", Offset = "0x43BEDC0", VA = "0x43BEDC0")]
	public static Texture2D GetExternalTexture(string key)
	{
		return null;
	}

	[Token(Token = "0x600493B")]
	[Address(RVA = "0x43BEEB0", Offset = "0x43BEEB0", VA = "0x43BEEB0")]
	public static void SetExternalTexture(string key, Texture2D texture, bool persistent = true)
	{
	}

	[Token(Token = "0x600493C")]
	[Address(RVA = "0x43BF010", Offset = "0x43BF010", VA = "0x43BF010")]
	public static void RemoveExternalTexture(string key)
	{
	}

	[Token(Token = "0x600493D")]
	[Address(RVA = "0x43BF140", Offset = "0x43BF140", VA = "0x43BF140")]
	public static Texture2D LoadExternalTexture(string filePath, [Optional] string cacheKey, bool persistent = true)
	{
		return null;
	}

	[Token(Token = "0x600493E")]
	[Address(RVA = "0x43BF400", Offset = "0x43BF400", VA = "0x43BF400")]
	public static void ClearExternalTextureCache()
	{
	}

	[Token(Token = "0x600493F")]
	[Address(RVA = "0x43BF680", Offset = "0x43BF680", VA = "0x43BF680")]
	public static void ClearNonPersistentTextures()
	{
	}

	[Token(Token = "0x6004940")]
	[Address(RVA = "0x43BFCC0", Offset = "0x43BFCC0", VA = "0x43BFCC0")]
	public static int GetExternalTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x6004941")]
	[Address(RVA = "0x43BFD50", Offset = "0x43BFD50", VA = "0x43BFD50")]
	public static int GetPersistentTextureCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x6004942")]
	[Address(RVA = "0x43BFDE0", Offset = "0x43BFDE0", VA = "0x43BFDE0")]
	public ResourceManager()
	{
	}
}
