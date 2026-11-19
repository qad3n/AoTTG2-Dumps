// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.EventProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200001D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal static class EventProvider
{
	[Token(Token = "0x200001E")]
	private struct Registration
	{
		[Token(Token = "0x40000AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public EventConsumer handler;

		[Token(Token = "0x40000AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int priority;

		[Token(Token = "0x40000B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int? playerId;

		[Token(Token = "0x40000B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public HashSet<Event.Type> _types;
	}

	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static IEventProviderImpl s_impl;

	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static EventSanitizer s_sanitizer;

	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static IEventProviderImpl s_implMockBackup;

	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static bool s_focusChangedRegistered;

	[Token(Token = "0x40000AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private static bool m_IsEnabled;

	[Token(Token = "0x40000AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
	private static bool m_IsInitialized;

	[Token(Token = "0x40000AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static List<Registration> _registrations;

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x69B6CB0", Offset = "0x69B5CB0", VA = "0x69B6CB0")]
	public static void Subscribe(EventConsumer handler, [Optional][DefaultParameterValue(0)] int priority, [Optional] int? playerId, params Event.Type[] type)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x69B7080", Offset = "0x69B6080", VA = "0x69B7080")]
	public static void Unsubscribe(EventConsumer handler)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x69B7190", Offset = "0x69B6190", VA = "0x69B7190")]
	public static void SetEnabled(bool enable)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x69B7620", Offset = "0x69B6620", VA = "0x69B7620")]
	internal static void Dispatch(in Event ev)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x69B6FF0", Offset = "0x69B5FF0", VA = "0x69B6FF0")]
	private static void Bootstrap()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x69B7230", Offset = "0x69B6230", VA = "0x69B7230")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x69B7440", Offset = "0x69B6440", VA = "0x69B7440")]
	private static void Shutdown()
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x69B7AF0", Offset = "0x69B6AF0", VA = "0x69B7AF0")]
	private static void OnFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x69B7C00", Offset = "0x69B6C00", VA = "0x69B7C00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyUpdate()
	{
	}
}
