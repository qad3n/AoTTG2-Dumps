// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SceneSingleton
// Update status: CHANGED in this game update
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
	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Scene, T> instances;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SingletonAttribute attribute;

	[Token(Token = "0x170001BF")]
	private static bool persistent
	{
		[Token(Token = "0x6000FDC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C0")]
	private static bool automatic
	{
		[Token(Token = "0x6000FDD")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C1")]
	private static string name
	{
		[Token(Token = "0x6000FDE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	private static HideFlags hideFlags
	{
		[Token(Token = "0x6000FDF")]
		get
		{
			return default(HideFlags);
		}
	}

	[Token(Token = "0x6000FDB")]
	static SceneSingleton()
	{
	}

	[Token(Token = "0x6000FE0")]
	private static void EnsureSceneValid(Scene scene)
	{
	}

	[Token(Token = "0x6000FE1")]
	public static bool InstantiatedIn(Scene scene)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE2")]
	public static T InstanceIn(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000FE3")]
	private static T[] FindObjectsOfType()
	{
		return null;
	}

	[Token(Token = "0x6000FE4")]
	private static T[] FindInstances(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000FE5")]
	private static T FindOrCreateInstance(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000FE6")]
	public static void Awake(T instance)
	{
	}

	[Token(Token = "0x6000FE7")]
	public static void OnDestroy(T instance)
	{
	}
}
