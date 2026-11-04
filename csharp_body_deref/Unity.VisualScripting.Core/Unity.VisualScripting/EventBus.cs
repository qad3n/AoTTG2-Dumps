// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EventBus
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200005A")]
public static class EventBus
{
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<EventHook, HashSet<Delegate>> events;

	[Token(Token = "0x1700009B")]
	internal static Dictionary<EventHook, HashSet<Delegate>> testAccessEvents
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x2DA5EC0", Offset = "0x2DA44C0", VA = "0x182DA5EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x2DA5E00", Offset = "0x2DA4400", VA = "0x182DA5E00")]
	static EventBus()
	{
	}

	[Token(Token = "0x6000289")]
	public static void Register<TArgs>(EventHook hook, Action<TArgs> handler)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x2DA5CA0", Offset = "0x2DA42A0", VA = "0x182DA5CA0")]
	public static void Unregister(EventHook hook, Delegate handler)
	{
	}

	[Token(Token = "0x600028B")]
	public static void Trigger<TArgs>(EventHook hook, TArgs args)
	{
	}

	[Token(Token = "0x600028C")]
	public static void Trigger<TArgs>(string name, GameObject target, TArgs args)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2DA5C20", Offset = "0x2DA4220", VA = "0x182DA5C20")]
	public static void Trigger(EventHook hook)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x2DA5B20", Offset = "0x2DA4120", VA = "0x182DA5B20")]
	public static void Trigger(string name, GameObject target)
	{
	}
}
