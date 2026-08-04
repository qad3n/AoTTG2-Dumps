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

[Token(Token = "0x20000EE")]
internal class DebugUpdater : MonoBehaviour
{
	[Token(Token = "0x20000EF")]
	[CompilerGenerated]
	private sealed class _003CDoAfterInputModuleUpdated_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400033E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400033F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000340")]
		[FieldOffset(Offset = "0x20")]
		public Action action;

		[Token(Token = "0x170000BF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600080A")]
			[Address(RVA = "0x4BABEF0", Offset = "0x4BABEF0", VA = "0x4BABEF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600080C")]
			[Address(RVA = "0x4BABF40", Offset = "0x4BABF40", VA = "0x4BABF40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000807")]
		[Address(RVA = "0x4BABA80", Offset = "0x4BABA80", VA = "0x4BABA80")]
		[DebuggerHidden]
		public _003CDoAfterInputModuleUpdated_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000808")]
		[Address(RVA = "0x4BABDF0", Offset = "0x4BABDF0", VA = "0x4BABDF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000809")]
		[Address(RVA = "0x4BABE00", Offset = "0x4BABE00", VA = "0x4BABE00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600080B")]
		[Address(RVA = "0x4BABF00", Offset = "0x4BABF00", VA = "0x4BABF00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000F0")]
	[CompilerGenerated]
	private sealed class _003CRefreshRuntimeUINextFrame_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000341")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000342")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x170000C1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000810")]
			[Address(RVA = "0x4BAC000", Offset = "0x4BAC000", VA = "0x4BAC000", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000812")]
			[Address(RVA = "0x4BAC050", Offset = "0x4BAC050", VA = "0x4BAC050", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600080D")]
		[Address(RVA = "0x4BABDC0", Offset = "0x4BABDC0", VA = "0x4BABDC0")]
		[DebuggerHidden]
		public _003CRefreshRuntimeUINextFrame_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600080E")]
		[Address(RVA = "0x4BABF50", Offset = "0x4BABF50", VA = "0x4BABF50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600080F")]
		[Address(RVA = "0x4BABF60", Offset = "0x4BABF60", VA = "0x4BABF60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000811")]
		[Address(RVA = "0x4BAC010", Offset = "0x4BAC010", VA = "0x4BAC010", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x0")]
	private static DebugUpdater s_Instance;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x20")]
	private ScreenOrientation m_Orientation;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x24")]
	private bool m_RuntimeUiWasVisibleLastFrame;

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x4BAB300", Offset = "0x4BAB300", VA = "0x4BAB300")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	private static void RuntimeInit()
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x4BAB310", Offset = "0x4BAB310", VA = "0x4BAB310")]
	internal static void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4BAB320", Offset = "0x4BAB320", VA = "0x4BAB320")]
	private static void EnableRuntime()
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x4BAB4B0", Offset = "0x4BAB4B0", VA = "0x4BAB4B0")]
	private static void DisableRuntime()
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4BAB610", Offset = "0x4BAB610", VA = "0x4BAB610")]
	internal static void HandleInternalEventSystemComponents(bool uiEnabled)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x4BAB6B0", Offset = "0x4BAB6B0", VA = "0x4BAB6B0")]
	private void EnsureExactlyOneEventSystem()
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4BABA10", Offset = "0x4BABA10", VA = "0x4BABA10")]
	[IteratorStateMachine(typeof(_003CDoAfterInputModuleUpdated_003Ed__9))]
	private IEnumerator DoAfterInputModuleUpdated(Action action)
	{
		return null;
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x4BABAA0", Offset = "0x4BABAA0", VA = "0x4BABAA0")]
	private void CheckInputModuleExists()
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x4BAB990", Offset = "0x4BAB990", VA = "0x4BAB990")]
	private void CreateDebugEventSystem()
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x4BAB8D0", Offset = "0x4BAB8D0", VA = "0x4BAB8D0")]
	private void DestroyDebugEventSystem()
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4BABBB0", Offset = "0x4BABBB0", VA = "0x4BABBB0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x4BABD70", Offset = "0x4BABD70", VA = "0x4BABD70")]
	[IteratorStateMachine(typeof(_003CRefreshRuntimeUINextFrame_003Ed__14))]
	private static IEnumerator RefreshRuntimeUINextFrame()
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x4BABDE0", Offset = "0x4BABDE0", VA = "0x4BABDE0")]
	public DebugUpdater()
	{
	}
}
