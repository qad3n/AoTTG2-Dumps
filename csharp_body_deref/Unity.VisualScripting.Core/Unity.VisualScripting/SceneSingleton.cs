// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SceneSingleton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Unity.VisualScripting;

[Token(Token = "0x2000199")]
public static class SceneSingleton<T> where T : MonoBehaviour, ISingleton
{
	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Scene, T> instances;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SingletonAttribute attribute;

	[Token(Token = "0x170001BC")]
	private static bool persistent
	{
		[Token(Token = "0x6000FD1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BD")]
	private static bool automatic
	{
		[Token(Token = "0x6000FD2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BE")]
	private static string name
	{
		[Token(Token = "0x6000FD3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	private static HideFlags hideFlags
	{
		[Token(Token = "0x6000FD4")]
		get
		{
			return default(HideFlags);
		}
	}

	[Token(Token = "0x6000FD0")]
	static SceneSingleton()
	{
	}

	[Token(Token = "0x6000FD5")]
	private static void EnsureSceneValid(Scene scene)
	{
	}

	[Token(Token = "0x6000FD6")]
	public static bool InstantiatedIn(Scene scene)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD7")]
	public static T InstanceIn(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000FD8")]
	private static T[] FindInstances(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000FD9")]
	private static T FindOrCreateInstance(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000FDA")]
	public static void Awake(T instance)
	{
	}

	[Token(Token = "0x6000FDB")]
	public static void OnDestroy(T instance)
	{
	}
}
