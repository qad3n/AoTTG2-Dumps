using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000465")]
internal static class EventInterestReflectionUtils
{
	[Token(Token = "0x2000466")]
	private struct DefaultEventInterests
	{
		[Token(Token = "0x4000D2E")]
		[FieldOffset(Offset = "0x0")]
		public int DefaultActionCategories;

		[Token(Token = "0x4000D2F")]
		[FieldOffset(Offset = "0x4")]
		public int DefaultActionAtTargetCategories;
	}

	[Token(Token = "0x4000D2C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, DefaultEventInterests> s_DefaultEventInterests;

	[Token(Token = "0x4000D2D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<Type, EventCategory> s_EventCategories;

	[Token(Token = "0x6001B88")]
	[Address(RVA = "0x4C4DF30", Offset = "0x4C4DF30", VA = "0x4C4DF30")]
	internal static void GetDefaultEventInterests(Type elementType, out int defaultActionCategories, out int defaultActionAtTargetCategories)
	{
	}

	[Token(Token = "0x6001B89")]
	[Address(RVA = "0x4C4E130", Offset = "0x4C4E130", VA = "0x4C4E130")]
	private static int ComputeDefaultEventInterests(Type elementType, string methodName)
	{
		return default(int);
	}

	[Token(Token = "0x6001B8A")]
	[Address(RVA = "0x4C4E330", Offset = "0x4C4E330", VA = "0x4C4E330")]
	internal static EventCategory GetEventCategory(Type eventType)
	{
		return default(EventCategory);
	}
}
