// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C4")]
internal class DebugUpdater : MonoBehaviour
{
	[Token(Token = "0x20000C5")]
	[CompilerGenerated]
	private sealed class _003CDoAfterInputModuleUpdated_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000289")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400028A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400028B")]
		[FieldOffset(Offset = "0x20")]
		public Action action;

		[Token(Token = "0x170000A8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000769")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600076B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000766")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDoAfterInputModuleUpdated_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000767")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000768")]
		[Address(RVA = "0x2AE8720", Offset = "0x2AE6D20", VA = "0x182AE8720", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600076A")]
		[Address(RVA = "0x2AE8820", Offset = "0x2AE6E20", VA = "0x182AE8820", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000C6")]
	[CompilerGenerated]
	private sealed class _003CRefreshRuntimeUINextFrame_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400028C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400028D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x170000AA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600076F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000AB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000771")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRefreshRuntimeUINextFrame_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600076D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600076E")]
		[Address(RVA = "0x2AE8860", Offset = "0x2AE6E60", VA = "0x182AE8860", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000770")]
		[Address(RVA = "0x2AE8920", Offset = "0x2AE6F20", VA = "0x182AE8920", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x0")]
	private static DebugUpdater s_Instance;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x20")]
	private ScreenOrientation m_Orientation;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x24")]
	private bool m_RuntimeUiWasVisibleLastFrame;

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	private static void RuntimeInit()
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x2AE0D50", Offset = "0x2ADF350", VA = "0x182AE0D50")]
	internal static void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x2AE0860", Offset = "0x2ADEE60", VA = "0x182AE0860")]
	private static void EnableRuntime()
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x2AE0650", Offset = "0x2ADEC50", VA = "0x182AE0650")]
	private static void DisableRuntime()
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x2AE0C40", Offset = "0x2ADF240", VA = "0x182AE0C40")]
	internal static void HandleInternalEventSystemComponents(bool uiEnabled)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x2AE09E0", Offset = "0x2ADEFE0", VA = "0x182AE09E0")]
	private void EnsureExactlyOneEventSystem()
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x2AE07F0", Offset = "0x2ADEDF0", VA = "0x182AE07F0")]
	[IteratorStateMachine(typeof(_003CDoAfterInputModuleUpdated_003Ed__9))]
	private IEnumerator DoAfterInputModuleUpdated(Action action)
	{
		return null;
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x2AE03F0", Offset = "0x2ADE9F0", VA = "0x182AE03F0")]
	private void CheckInputModuleExists()
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x2AE0500", Offset = "0x2ADEB00", VA = "0x182AE0500")]
	private void CreateDebugEventSystem()
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x2AE0580", Offset = "0x2ADEB80", VA = "0x182AE0580")]
	private void DestroyDebugEventSystem()
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x2AE1060", Offset = "0x2ADF660", VA = "0x182AE1060")]
	private void Update()
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x2AE0D00", Offset = "0x2ADF300", VA = "0x182AE0D00")]
	[IteratorStateMachine(typeof(_003CRefreshRuntimeUINextFrame_003Ed__14))]
	private static IEnumerator RefreshRuntimeUINextFrame()
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugUpdater()
	{
	}
}
