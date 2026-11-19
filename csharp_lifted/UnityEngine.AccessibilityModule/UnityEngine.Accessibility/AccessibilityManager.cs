// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityManager
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6878960", Offset = "0x6877960", VA = "0x6878960")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x600001F")]
			[Address(RVA = "0x6878970", Offset = "0x6877970", VA = "0x6878970")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000004")]
		public float fontScale
		{
			[Token(Token = "0x6000020")]
			[Address(RVA = "0x6878980", Offset = "0x6877980", VA = "0x6878980")]
			[CompilerGenerated]
			readonly get
			{
				return default(float);
			}
			[Token(Token = "0x6000021")]
			[Address(RVA = "0x6878990", Offset = "0x6877990", VA = "0x6878990")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000005")]
		public bool isBoldTextEnabled
		{
			[Token(Token = "0x6000022")]
			[Address(RVA = "0x68789A0", Offset = "0x68779A0", VA = "0x68789A0")]
			[CompilerGenerated]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x6000023")]
			[Address(RVA = "0x68789B0", Offset = "0x68779B0", VA = "0x68789B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000006")]
		public bool isClosedCaptioningEnabled
		{
			[Token(Token = "0x6000024")]
			[Address(RVA = "0x68789C0", Offset = "0x68779C0", VA = "0x68789C0")]
			[CompilerGenerated]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x6000025")]
			[Address(RVA = "0x68789D0", Offset = "0x68779D0", VA = "0x68789D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000007")]
		public bool isScreenReaderEnabled
		{
			[Token(Token = "0x6000026")]
			[Address(RVA = "0x68789E0", Offset = "0x68779E0", VA = "0x68789E0")]
			[CompilerGenerated]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x6000027")]
			[Address(RVA = "0x68789F0", Offset = "0x68779F0", VA = "0x68789F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000008")]
		public Notification notification
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x6878A00", Offset = "0x6877A00", VA = "0x6878A00")]
			[CompilerGenerated]
			readonly get
			{
				return default(Notification);
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x6878A10", Offset = "0x6877A10", VA = "0x6878A10")]
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
		[Address(RVA = "0x6878A20", Offset = "0x6877A20", VA = "0x6878A20")]
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
		[Address(RVA = "0x6878800", Offset = "0x6877800", VA = "0x6878800")]
		public ExclusiveLock()
		{
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x6878A90", Offset = "0x6877A90", VA = "0x6878A90", Slot = "1")]
		~ExclusiveLock()
		{
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x6878B80", Offset = "0x6877B80", VA = "0x6878B80")]
		private void InternalDispose()
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x6878C10", Offset = "0x6877C10", VA = "0x6878C10", Slot = "4")]
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
		[Address(RVA = "0x6875850", Offset = "0x6874850", VA = "0x6875850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public static bool isSupportedPlatform
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x6875C80", Offset = "0x6874C80", VA = "0x6875C80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<bool> screenReaderStatusChanged
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x68758C0", Offset = "0x68748C0", VA = "0x68758C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x68759B0", Offset = "0x68749B0", VA = "0x68759B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Action<AccessibilityNode> nodeFocusChanged
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x6875AA0", Offset = "0x6874AA0", VA = "0x6875AA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x6875B90", Offset = "0x6874B90", VA = "0x6875B90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x6875840", Offset = "0x6874840", VA = "0x6875840")]
	private AccessibilityManager()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6875CE0", Offset = "0x6874CE0", VA = "0x6875CE0")]
	internal static extern bool IsScreenReaderEnabled();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6875D10", Offset = "0x6874D10", VA = "0x6875D10")]
	internal static extern void SendScreenChangedNotification(int nodeId = -1);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x6875D40", Offset = "0x6874D40", VA = "0x6875D40")]
	internal static extern void SendLayoutChangedNotification(int nodeId = -1);

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6875D70", Offset = "0x6874D70", VA = "0x6875D70")]
	[ExcludeFromCodeCoverage]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AccessibilityModule" })]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_Initialize()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x6875EA0", Offset = "0x6874EA0", VA = "0x6875EA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_Update()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6875F60", Offset = "0x6874F60", VA = "0x6875F60")]
	private void Internal_Update_Impl()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6876720", Offset = "0x6875720", VA = "0x6876720")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_LateUpdate()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6876DF0", Offset = "0x6875DF0", VA = "0x6876DF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static int[] Internal_GetRootNodeIds()
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6877370", Offset = "0x6876370", VA = "0x6877370")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetNode(int nodeId, ref AccessibilityNodeData nodeData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x68779E0", Offset = "0x68769E0", VA = "0x68779E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static int Internal_GetNodeIdAt(float x, float y)
	{
		return default(int);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6877AF0", Offset = "0x6876AF0", VA = "0x6877AF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetFirstOrLastRootNodeId(bool first, out int managedRootId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x6877D70", Offset = "0x6876D70", VA = "0x6877D70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetFirstOrLastChildId(int nodeId, bool first, out int childId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x6878090", Offset = "0x6877090", VA = "0x6878090")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool Internal_GetNextOrPreviousSiblingId(int nodeId, bool next, out int siblingId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x68784C0", Offset = "0x68774C0", VA = "0x68784C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnScreenReaderStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x68785F0", Offset = "0x68775F0", VA = "0x68785F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnWindowGeometryChanged()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6878510", Offset = "0x6877510", VA = "0x6878510")]
	internal static void QueueNotification(NotificationContext notification)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x68786C0", Offset = "0x68776C0", VA = "0x68786C0")]
	internal void QueueNotification_Impl(NotificationContext notification)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x6876540", Offset = "0x6875540", VA = "0x6876540")]
	internal static IDisposable GetExclusiveLock()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x6878880", Offset = "0x6877880", VA = "0x6878880")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void Lock();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x68788B0", Offset = "0x68778B0", VA = "0x68788B0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void Unlock();
}
