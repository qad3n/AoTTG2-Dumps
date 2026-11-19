// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EventBus
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6797110", Offset = "0x6796110", VA = "0x6797110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x6797040", Offset = "0x6796040", VA = "0x6797040")]
	static EventBus()
	{
	}

	[Token(Token = "0x6000289")]
	public static void Register<TArgs>(EventHook hook, Action<TArgs> handler)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x6797180", Offset = "0x6796180", VA = "0x6797180")]
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
	[Address(RVA = "0x67972C0", Offset = "0x67962C0", VA = "0x67972C0")]
	public static void Trigger(EventHook hook)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x6797320", Offset = "0x6796320", VA = "0x6797320")]
	public static void Trigger(string name, GameObject target)
	{
	}
}
