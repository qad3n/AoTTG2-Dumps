// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Singleton
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200019B")]
public static class Singleton<T> where T : MonoBehaviour, ISingleton
{
	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SingletonAttribute attribute;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object _lock;

	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T> awoken;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x0")]
	private static T _instance;

	[Token(Token = "0x170001C0")]
	private static bool persistent
	{
		[Token(Token = "0x6000FDF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C1")]
	private static bool automatic
	{
		[Token(Token = "0x6000FE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C2")]
	private static string name
	{
		[Token(Token = "0x6000FE1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	private static HideFlags hideFlags
	{
		[Token(Token = "0x6000FE2")]
		get
		{
			return default(HideFlags);
		}
	}

	[Token(Token = "0x170001C4")]
	public static bool instantiated
	{
		[Token(Token = "0x6000FE3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C5")]
	public static T instance
	{
		[Token(Token = "0x6000FE4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FDE")]
	static Singleton()
	{
	}

	[Token(Token = "0x6000FE5")]
	private static T[] FindInstances()
	{
		return null;
	}

	[Token(Token = "0x6000FE6")]
	public static T Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6000FE7")]
	public static void Awake(T instance)
	{
	}

	[Token(Token = "0x6000FE8")]
	public static void OnDestroy(T instance)
	{
	}
}
