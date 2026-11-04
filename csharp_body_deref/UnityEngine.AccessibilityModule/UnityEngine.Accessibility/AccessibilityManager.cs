// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Accessibility;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AccessibilityModule" })]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Native/AccessibilityManager.h")]
internal class AccessibilityManager
{
	[Token(Token = "0x2000003")]
	public enum Notification : byte
	{
		[Token(Token = "0x4000006")]
		None,
		[Token(Token = "0x4000007")]
		ScreenReaderStatusChanged,
		[Token(Token = "0x4000008")]
		ElementFocused,
		[Token(Token = "0x4000009")]
		ElementUnfocused,
		[Token(Token = "0x400000A")]
		FontScaleChanged,
		[Token(Token = "0x400000B")]
		BoldTextStatusChanged,
		[Token(Token = "0x400000C")]
		ClosedCaptioningStatusChanged
	}

	[Token(Token = "0x2000004")]
	public struct NotificationContext
	{
		[Token(Token = "0x17000003")]
		public AccessibilityNode focusedNode
		{
			[Token(Token = "0x600001E")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x600001F")]
			[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000004")]
		public float fontScale
		{
			[Token(Token = "0x6000020")]
			[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
			[CompilerGenerated]
			readonly get
			{
				return default(float);
			}
			[Token(Token = "0x6000021")]
			[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000005")]
		public bool isBoldTextEnabled
		{
			[Token(Token = "0x6000022")]
			[Address(RVA = "0x2BA6F90", Offset = "0x2BA5590", VA = "0x182BA6F90")]
			[CompilerGenerated]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x6000023")]
			[Address(RVA = "0x2E80940", Offset = "0x2E7EF40", VA = "0x182E80940")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000006")]
		public bool isClosedCaptioningEnabled
		{
			[Token(Token = "0x6000024")]
			[Address(RVA = "0x2E80910", Offset = "0x2E7EF10", VA = "0x182E80910")]
			[CompilerGenerated]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x6000025")]
			[Address(RVA = "0x2E80950", Offset = "0x2E7EF50", VA = "0x182E80950")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000007")]
		public bool isScreenReaderEnabled
		{
			[Token(Token = "0x6000026")]
			[Address(RVA = "0x2E80920", Offset = "0x2E7EF20", VA = "0x182E80920")]
			[CompilerGenerated]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x6000027")]
			[Address(RVA = "0x2E80960", Offset = "0x2E7EF60", VA = "0x182E80960")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000008")]
		public Notification notification
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x2E80930", Offset = "0x2E7EF30", VA = "0x182E80930")]
			[CompilerGenerated]
			readonly get
			{
				return default(Notification);
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x2E80970", Offset = "0x2E7EF70", VA = "0x182E80970")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x2000005")]
	private class Nested
	{
		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AccessibilityManager s_Instance;

		[Token(Token = "0x600002A")]
		[Address(RVA = "0x2E80890", Offset = "0x2E7EE90", VA = "0x182E80890")]
		static Nested()
		{
		}
	}

	[Token(Token = "0x2000006")]
	private sealed class ExclusiveLock : IDisposable
	{
		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x10")]
		private bool m_Disposed;

		[Token(Token = "0x600002B")]
		[Address(RVA = "0x2E80820", Offset = "0x2E7EE20", VA = "0x182E80820")]
		public ExclusiveLock()
		{
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2E80700", Offset = "0x2E7ED00", VA = "0x182E80700", Slot = "1")]
		~ExclusiveLock()
		{
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2E807B0", Offset = "0x2E7EDB0", VA = "0x182E807B0")]
		private void InternalDispose()
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2E80650", Offset = "0x2E7EC50", VA = "0x182E80650", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<bool> m_screenReaderStatusChanged;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<AccessibilityNode> m_nodeFocusChanged;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	internal static Queue<NotificationContext> asyncNotificationContexts;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x10")]
	private bool m_RefreshNodeFramesRequested;

	[Token(Token = "0x17000001")]
	public static AccessibilityManager instance
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x2E7DF20", Offset = "0x2E7C520", VA = "0x182E7DF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public static bool isSupportedPlatform
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x2E7DF70", Offset = "0x2E7C570", VA = "0x182E7DF70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<bool> screenReaderStatusChanged
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2E7DE10", Offset = "0x2E7C410", VA = "0x182E7DE10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2E7E0F0", Offset = "0x2E7C6F0", VA = "0x182E7E0F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Action<AccessibilityNode> nodeFocusChanged
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2E7DD00", Offset = "0x2E7C300", VA = "0x182E7DD00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x2E7DFE0", Offset = "0x2E7C5E0", VA = "0x182E7DFE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private AccessibilityManager()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2E7D960", Offset = "0x2E7BF60", VA = "0x182E7D960")]
	internal static extern bool IsScreenReaderEnabled();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2E7DC00", Offset = "0x2E7C200", VA = "0x182E7DC00")]
	internal static extern void SendScreenChangedNotification(int nodeId = -1);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2E7DBC0", Offset = "0x2E7C1C0", VA = "0x182E7DBC0")]
	internal static extern void SendLayoutChangedNotification(int nodeId = -1);

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2E7D0D0", Offset = "0x2E7B6D0", VA = "0x182E7D0D0")]
	[ExcludeFromCodeCoverage]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AccessibilityModule" })]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_Initialize()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2E7D8D0", Offset = "0x2E7BED0", VA = "0x182E7D8D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_Update()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2E7D3F0", Offset = "0x2E7B9F0", VA = "0x182E7D3F0")]
	private void Internal_Update_Impl()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2E7D110", Offset = "0x2E7B710", VA = "0x182E7D110")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_LateUpdate()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2E7CD10", Offset = "0x2E7B310", VA = "0x182E7CD10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static int[] Internal_GetRootNodeIds()
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2E7CBE0", Offset = "0x2E7B1E0", VA = "0x182E7CBE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetNode(int nodeId, ref AccessibilityNodeData nodeData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2E7CAD0", Offset = "0x2E7B0D0", VA = "0x182E7CAD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static int Internal_GetNodeIdAt(float x, float y)
	{
		return default(int);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2E7C780", Offset = "0x2E7AD80", VA = "0x182E7C780")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetFirstOrLastRootNodeId(bool first, out int managedRootId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2E7C660", Offset = "0x2E7AC60", VA = "0x182E7C660")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetFirstOrLastChildId(int nodeId, bool first, out int childId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2E7C880", Offset = "0x2E7AE80", VA = "0x182E7C880")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetNextOrPreviousSiblingId(int nodeId, bool next, out int siblingId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2E7D270", Offset = "0x2E7B870", VA = "0x182E7D270")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnScreenReaderStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2E7D360", Offset = "0x2E7B960", VA = "0x182E7D360")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnWindowGeometryChanged()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2E7DB10", Offset = "0x2E7C110", VA = "0x182E7DB10")]
	internal static void QueueNotification(NotificationContext notification)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2E7D9C0", Offset = "0x2E7BFC0", VA = "0x182E7D9C0")]
	internal void QueueNotification_Impl(NotificationContext notification)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2E7C5C0", Offset = "0x2E7ABC0", VA = "0x182E7C5C0")]
	internal static IDisposable GetExclusiveLock()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2E7D990", Offset = "0x2E7BF90", VA = "0x182E7D990")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void Lock();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2E7DC40", Offset = "0x2E7C240", VA = "0x182E7DC40")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void Unlock();
}
