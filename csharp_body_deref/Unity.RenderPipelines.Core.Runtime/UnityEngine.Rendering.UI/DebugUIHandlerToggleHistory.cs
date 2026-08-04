// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerToggleHistory
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
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000230")]
public class DebugUIHandlerToggleHistory : DebugUIHandlerToggle
{
	[Token(Token = "0x2000231")]
	[CompilerGenerated]
	private sealed class _003CRefreshAfterSanitization_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40008BC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40008BD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40008BE")]
		[FieldOffset(Offset = "0x20")]
		public DebugUIHandlerToggleHistory _003C_003E4__this;

		[Token(Token = "0x170001B3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000F16")]
			[Address(RVA = "0x4C17760", Offset = "0x4C17760", VA = "0x4C17760", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001B4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F18")]
			[Address(RVA = "0x4C177B0", Offset = "0x4C177B0", VA = "0x4C177B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F13")]
		[Address(RVA = "0x4C17660", Offset = "0x4C17660", VA = "0x4C17660")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x4C176A0", Offset = "0x4C176A0", VA = "0x4C176A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x4C176B0", Offset = "0x4C176B0", VA = "0x4C176B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F17")]
		[Address(RVA = "0x4C17770", Offset = "0x4C17770", VA = "0x4C17770", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x80")]
	private Toggle[] historyToggles;

	[Token(Token = "0x40008BB")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4C17060", Offset = "0x4C17060", VA = "0x4C17060", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4C17400", Offset = "0x4C17400", VA = "0x4C17400", Slot = "13")]
	protected internal override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4C175F0", Offset = "0x4C175F0", VA = "0x4C175F0")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x4C17680", Offset = "0x4C17680", VA = "0x4C17680")]
	public DebugUIHandlerToggleHistory()
	{
	}
}
