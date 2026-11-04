// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.EventProvider
// Update status: NEW in this game update
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
	[Address(RVA = "0x2FBB110", Offset = "0x2FB9710", VA = "0x182FBB110")]
	public static void Subscribe(EventConsumer handler, [Optional][DefaultParameterValue(0)] int priority, [Optional] int? playerId, params Event.Type[] type)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2FBB400", Offset = "0x2FB9A00", VA = "0x182FBB400")]
	public static void Unsubscribe(EventConsumer handler)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2FBADB0", Offset = "0x2FB93B0", VA = "0x182FBADB0")]
	public static void SetEnabled(bool enable)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2FBA770", Offset = "0x2FB8D70", VA = "0x182FBA770")]
	internal static void Dispatch(in Event ev)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2FBA700", Offset = "0x2FB8D00", VA = "0x182FBA700")]
	private static void Bootstrap()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2FBA9C0", Offset = "0x2FB8FC0", VA = "0x182FBA9C0")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2FBAFA0", Offset = "0x2FB95A0", VA = "0x182FBAFA0")]
	private static void Shutdown()
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2FBACC0", Offset = "0x2FB92C0", VA = "0x182FBACC0")]
	private static void OnFocusChanged(bool focus)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2FBAB60", Offset = "0x2FB9160", VA = "0x182FBAB60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void NotifyUpdate()
	{
	}
}
