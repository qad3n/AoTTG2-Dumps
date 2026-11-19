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
			[Address(RVA = "0x64D7E60", Offset = "0x64D6E60", VA = "0x64D7E60", Slot = "4")]
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
			[Address(RVA = "0x64D7EB0", Offset = "0x64D6EB0", VA = "0x64D7EB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000766")]
		[Address(RVA = "0x64D7690", Offset = "0x64D6690", VA = "0x64D7690")]
		[DebuggerHidden]
		public _003CDoAfterInputModuleUpdated_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000767")]
		[Address(RVA = "0x64D7D60", Offset = "0x64D6D60", VA = "0x64D7D60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000768")]
		[Address(RVA = "0x64D7D70", Offset = "0x64D6D70", VA = "0x64D7D70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600076A")]
		[Address(RVA = "0x64D7E70", Offset = "0x64D6E70", VA = "0x64D7E70", Slot = "8")]
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
			[Address(RVA = "0x64D7FF0", Offset = "0x64D6FF0", VA = "0x64D7FF0", Slot = "4")]
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
			[Address(RVA = "0x64D8040", Offset = "0x64D7040", VA = "0x64D8040", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x64D7D30", Offset = "0x64D6D30", VA = "0x64D7D30")]
		[DebuggerHidden]
		public _003CRefreshRuntimeUINextFrame_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600076D")]
		[Address(RVA = "0x64D7EC0", Offset = "0x64D6EC0", VA = "0x64D7EC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600076E")]
		[Address(RVA = "0x64D7ED0", Offset = "0x64D6ED0", VA = "0x64D7ED0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000770")]
		[Address(RVA = "0x64D8000", Offset = "0x64D7000", VA = "0x64D8000", Slot = "8")]
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
	[Address(RVA = "0x64D6E60", Offset = "0x64D5E60", VA = "0x64D6E60")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	private static void RuntimeInit()
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x64CD7C0", Offset = "0x64CC7C0", VA = "0x64CD7C0")]
	internal static void SetEnabled(bool enabled)
	{
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x64D6E70", Offset = "0x64D5E70", VA = "0x64D6E70")]
	private static void EnableRuntime()
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x64D7070", Offset = "0x64D6070", VA = "0x64D7070")]
	private static void DisableRuntime()
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x64CDB60", Offset = "0x64CCB60", VA = "0x64CDB60")]
	internal static void HandleInternalEventSystemComponents(bool uiEnabled)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x64D72D0", Offset = "0x64D62D0", VA = "0x64D72D0")]
	private void EnsureExactlyOneEventSystem()
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x64D7620", Offset = "0x64D6620", VA = "0x64D7620")]
	[IteratorStateMachine(typeof(_003CDoAfterInputModuleUpdated_003Ed__9))]
	private IEnumerator DoAfterInputModuleUpdated(Action action)
	{
		return null;
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x64D76B0", Offset = "0x64D66B0", VA = "0x64D76B0")]
	private void CheckInputModuleExists()
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x64D75A0", Offset = "0x64D65A0", VA = "0x64D75A0")]
	private void CreateDebugEventSystem()
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x64D74E0", Offset = "0x64D64E0", VA = "0x64D74E0")]
	private void DestroyDebugEventSystem()
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x64D77C0", Offset = "0x64D67C0", VA = "0x64D77C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x64D7CE0", Offset = "0x64D6CE0", VA = "0x64D7CE0")]
	[IteratorStateMachine(typeof(_003CRefreshRuntimeUINextFrame_003Ed__14))]
	private static IEnumerator RefreshRuntimeUINextFrame()
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x64D7D50", Offset = "0x64D6D50", VA = "0x64D7D50")]
	public DebugUpdater()
	{
	}
}
