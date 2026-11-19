// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AssistiveSupport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Accessibility;

[Token(Token = "0x200000E")]
public static class AssistiveSupport
{
	[Token(Token = "0x200000F")]
	internal class NotificationDispatcher : IAccessibilityNotificationDispatcher
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x6879E50", Offset = "0x6878E50", VA = "0x6879E50", Slot = "4")]
		public void SendScreenChanged([Optional] AccessibilityNode nodeToFocus)
		{
		}

		[Token(Token = "0x600005B")]
		[Address(RVA = "0x6879EE0", Offset = "0x6878EE0", VA = "0x6879EE0", Slot = "5")]
		public void SendLayoutChanged([Optional] AccessibilityNode nodeToFocus)
		{
		}

		[Token(Token = "0x600005C")]
		[Address(RVA = "0x6879E40", Offset = "0x6878E40", VA = "0x6879E40")]
		public NotificationDispatcher()
		{
		}
	}

	[Token(Token = "0x2000010")]
	public enum ScreenReaderStatusOverride : byte
	{
		[Token(Token = "0x4000049")]
		OSDriven,
		[Token(Token = "0x400004A")]
		ForceEnabled,
		[Token(Token = "0x400004B")]
		ForceDisabled
	}

	[Token(Token = "0x4000045")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool> screenReaderStatusChanged;

	[Token(Token = "0x4000046")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<AccessibilityNode> nodeFocusChanged;

	[Token(Token = "0x4000047")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static ScreenReaderStatusOverride s_ScreenReaderStatusOverride;

	[Token(Token = "0x17000017")]
	public static IAccessibilityNotificationDispatcher notificationDispatcher
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x6879880", Offset = "0x6878880", VA = "0x6879880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public static AccessibilityHierarchy activeHierarchy
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x6876920", Offset = "0x6875920", VA = "0x6876920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public static bool isScreenReaderEnabled
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x68798F0", Offset = "0x68788F0", VA = "0x68798F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public static ScreenReaderStatusOverride screenReaderStatusOverride
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x6879A10", Offset = "0x6878A10", VA = "0x6879A10")]
		get
		{
			return default(ScreenReaderStatusOverride);
		}
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x6875DD0", Offset = "0x6874DD0", VA = "0x6875DD0")]
	[ExcludeFromCodeCoverage]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6879A80", Offset = "0x6878A80", VA = "0x6879A80")]
	internal static void ScreenReaderStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x6879D30", Offset = "0x6878D30", VA = "0x6879D30")]
	private static void NodeFocusChanged(AccessibilityNode currentNode)
	{
	}
}
