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
			[Address(RVA = "0x4886E00", Offset = "0x4886E00", VA = "0x4886E00", Slot = "4")]
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
			[Address(RVA = "0x4886E50", Offset = "0x4886E50", VA = "0x4886E50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000807")]
		[Address(RVA = "0x4886990", Offset = "0x4886990", VA = "0x4886990")]
		[DebuggerHidden]
		public _003CDoAfterInputModuleUpdated_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000808")]
		[Address(RVA = "0x4886D00", Offset = "0x4886D00", VA = "0x4886D00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000809")]
		[Address(RVA = "0x4886D10", Offset = "0x4886D10", VA = "0x4886D10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600080B")]
		[Address(RVA = "0x4886E10", Offset = "0x4886E10", VA = "0x4886E10", Slot = "8")]
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
			[Address(RVA = "0x4886F10", Offset = "0x4886F10", VA = "0x4886F10", Slot = "4")]
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
			[Address(RVA = "0x4886F60", Offset = "0x4886F60", VA = "0x4886F60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600080D")]
		[Address(RVA = "0x4886CD0", Offset = "0x4886CD0", VA = "0x4886CD0")]
		[DebuggerHidden]
		public _003CRefreshRuntimeUINextFrame_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600080E")]
		[Address(RVA = "0x4886E60", Offset = "0x4886E60", VA = "0x4886E60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600080F")]
		[Address(RVA = "0x4886E70", Offset = "0x4886E70", VA = "0x4886E70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000811")]
		[Address(RVA = "0x4886F20", Offset = "0x4886F20", VA = "0x4886F20", Slot = "8")]
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
	[Address(RVA = "0x4886210", Offset = "0x4886210", VA = "0x4886210")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	private static void RuntimeInit()
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x4886220", Offset = "0x4886220", VA = "0x4886220")]
	internal static void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4886230", Offset = "0x4886230", VA = "0x4886230")]
	private static void EnableRuntime()
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x48863C0", Offset = "0x48863C0", VA = "0x48863C0")]
	private static void DisableRuntime()
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4886520", Offset = "0x4886520", VA = "0x4886520")]
	internal static void HandleInternalEventSystemComponents(bool uiEnabled)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x48865C0", Offset = "0x48865C0", VA = "0x48865C0")]
	private void EnsureExactlyOneEventSystem()
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4886920", Offset = "0x4886920", VA = "0x4886920")]
	[IteratorStateMachine(typeof(_003CDoAfterInputModuleUpdated_003Ed__9))]
	private IEnumerator DoAfterInputModuleUpdated(Action action)
	{
		return null;
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x48869B0", Offset = "0x48869B0", VA = "0x48869B0")]
	private void CheckInputModuleExists()
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x48868A0", Offset = "0x48868A0", VA = "0x48868A0")]
	private void CreateDebugEventSystem()
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x48867E0", Offset = "0x48867E0", VA = "0x48867E0")]
	private void DestroyDebugEventSystem()
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4886AC0", Offset = "0x4886AC0", VA = "0x4886AC0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x4886C80", Offset = "0x4886C80", VA = "0x4886C80")]
	[IteratorStateMachine(typeof(_003CRefreshRuntimeUINextFrame_003Ed__14))]
	private static IEnumerator RefreshRuntimeUINextFrame()
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x4886CF0", Offset = "0x4886CF0", VA = "0x4886CF0")]
	public DebugUpdater()
	{
	}
}
