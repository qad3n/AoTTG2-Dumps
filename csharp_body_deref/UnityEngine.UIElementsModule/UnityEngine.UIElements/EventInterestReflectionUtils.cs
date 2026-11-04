// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventInterestReflectionUtils
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200053F")]
internal static class EventInterestReflectionUtils
{
	[Token(Token = "0x2000540")]
	private struct DefaultEventInterests
	{
		[Token(Token = "0x40011C9")]
		[FieldOffset(Offset = "0x0")]
		public int DefaultActionCategories;

		[Token(Token = "0x40011CA")]
		[FieldOffset(Offset = "0x4")]
		public int DefaultActionAtTargetCategories;

		[Token(Token = "0x40011CB")]
		[FieldOffset(Offset = "0x8")]
		public int HandleEventTrickleDownCategories;

		[Token(Token = "0x40011CC")]
		[FieldOffset(Offset = "0xC")]
		public int HandleEventBubbleUpCategories;
	}

	[Token(Token = "0x40011C7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, DefaultEventInterests> s_DefaultEventInterests;

	[Token(Token = "0x40011C8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<Type, EventCategory> s_EventCategories;

	[Token(Token = "0x60027EB")]
	[Address(RVA = "0x315C700", Offset = "0x315AD00", VA = "0x18315C700")]
	internal static void GetDefaultEventInterests(Type elementType, out int defaultActionCategories, out int defaultActionAtTargetCategories, out int handleEventTrickleDownCategories, out int handleEventBubbleUpCategories)
	{
	}

	[Token(Token = "0x60027EC")]
	[Address(RVA = "0x315C4F0", Offset = "0x315AAF0", VA = "0x18315C4F0")]
	private static int ComputeDefaultEventInterests(Type elementType, string methodName)
	{
		return default(int);
	}

	[Token(Token = "0x60027ED")]
	[Address(RVA = "0x315C9F0", Offset = "0x315AFF0", VA = "0x18315C9F0")]
	internal static EventCategory GetEventCategory(Type eventType)
	{
		return default(EventCategory);
	}
}
