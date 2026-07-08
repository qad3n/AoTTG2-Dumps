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
	[Address(RVA = "0x49832B0", Offset = "0x49832B0", VA = "0x49832B0")]
	static EventBus()
	{
	}

	[Token(Token = "0x6000284")]
	public static void Register<TArgs>(EventHook hook, Action<TArgs> handler)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4983380", Offset = "0x4983380", VA = "0x4983380")]
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
	[Address(RVA = "0x49834F0", Offset = "0x49834F0", VA = "0x49834F0")]
	public static void Trigger(EventHook hook)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x4983580", Offset = "0x4983580", VA = "0x4983580")]
	public static void Trigger(string name, GameObject target)
	{
	}
}
