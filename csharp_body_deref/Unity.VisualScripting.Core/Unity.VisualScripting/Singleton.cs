// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Singleton
// Update status: CHANGED in this game update
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
	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SingletonAttribute attribute;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object _lock;

	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T> awoken;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x0")]
	private static T _instance;

	[Token(Token = "0x170001C3")]
	private static bool persistent
	{
		[Token(Token = "0x6000FEB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C4")]
	private static bool automatic
	{
		[Token(Token = "0x6000FEC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C5")]
	private static string name
	{
		[Token(Token = "0x6000FED")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	private static HideFlags hideFlags
	{
		[Token(Token = "0x6000FEE")]
		get
		{
			return default(HideFlags);
		}
	}

	[Token(Token = "0x170001C7")]
	public static bool instantiated
	{
		[Token(Token = "0x6000FEF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C8")]
	public static T instance
	{
		[Token(Token = "0x6000FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FEA")]
	static Singleton()
	{
	}

	[Token(Token = "0x6000FF1")]
	private static T[] FindObjectsOfType()
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	private static T[] FindInstances()
	{
		return null;
	}

	[Token(Token = "0x6000FF3")]
	public static T Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	public static void Awake(T instance)
	{
	}

	[Token(Token = "0x6000FF5")]
	public static void OnDestroy(T instance)
	{
	}
}
