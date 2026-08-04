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
	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<EventHook, HashSet<Delegate>> events;

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4CA7E80", Offset = "0x4CA7E80", VA = "0x4CA7E80")]
	static EventBus()
	{
	}

	[Token(Token = "0x6000284")]
	public static void Register<TArgs>(EventHook hook, Action<TArgs> handler)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4CA7F50", Offset = "0x4CA7F50", VA = "0x4CA7F50")]
	public static void Unregister(EventHook hook, Delegate handler)
	{
	}

	[Token(Token = "0x6000286")]
	public static void Trigger<TArgs>(EventHook hook, TArgs args)
	{
	}

	[Token(Token = "0x6000287")]
	public static void Trigger<TArgs>(string name, GameObject target, TArgs args)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x4CA80C0", Offset = "0x4CA80C0", VA = "0x4CA80C0")]
	public static void Trigger(EventHook hook)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x4CA8150", Offset = "0x4CA8150", VA = "0x4CA8150")]
	public static void Trigger(string name, GameObject target)
	{
	}
}
