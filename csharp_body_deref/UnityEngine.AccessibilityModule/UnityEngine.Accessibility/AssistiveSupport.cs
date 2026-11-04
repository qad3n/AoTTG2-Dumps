// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AssistiveSupport
// Update status: NEW in this game update
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
		[Address(RVA = "0x2E80A00", Offset = "0x2E7F000", VA = "0x182E80A00", Slot = "4")]
		public void SendScreenChanged([Optional] AccessibilityNode nodeToFocus)
		{
		}

		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2E80980", Offset = "0x2E7EF80", VA = "0x182E80980", Slot = "5")]
		public void SendLayoutChanged([Optional] AccessibilityNode nodeToFocus)
		{
		}

		[Token(Token = "0x600005C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2E805B0", Offset = "0x2E7EBB0", VA = "0x182E805B0")]
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
		[Address(RVA = "0x2E80490", Offset = "0x2E7EA90", VA = "0x182E80490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public static bool isScreenReaderEnabled
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2E804D0", Offset = "0x2E7EAD0", VA = "0x182E804D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public static ScreenReaderStatusOverride screenReaderStatusOverride
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x2E80600", Offset = "0x2E7EC00", VA = "0x182E80600")]
		get
		{
			return default(ScreenReaderStatusOverride);
		}
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2E7FE80", Offset = "0x2E7E480", VA = "0x182E7FE80")]
	[ExcludeFromCodeCoverage]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2E80180", Offset = "0x2E7E780", VA = "0x182E80180")]
	internal static void ScreenReaderStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2E80110", Offset = "0x2E7E710", VA = "0x182E80110")]
	private static void NodeFocusChanged(AccessibilityNode currentNode)
	{
	}
}
