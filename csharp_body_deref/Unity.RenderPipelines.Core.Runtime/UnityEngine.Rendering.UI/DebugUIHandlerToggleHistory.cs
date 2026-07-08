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
			[Address(RVA = "0x48F26F0", Offset = "0x48F26F0", VA = "0x48F26F0", Slot = "4")]
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
			[Address(RVA = "0x48F2740", Offset = "0x48F2740", VA = "0x48F2740", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F13")]
		[Address(RVA = "0x48F25F0", Offset = "0x48F25F0", VA = "0x48F25F0")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x48F2630", Offset = "0x48F2630", VA = "0x48F2630", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x48F2640", Offset = "0x48F2640", VA = "0x48F2640", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F17")]
		[Address(RVA = "0x48F2700", Offset = "0x48F2700", VA = "0x48F2700", Slot = "8")]
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
	[Address(RVA = "0x48F1FF0", Offset = "0x48F1FF0", VA = "0x48F1FF0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x48F2390", Offset = "0x48F2390", VA = "0x48F2390", Slot = "13")]
	protected internal override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x48F2580", Offset = "0x48F2580", VA = "0x48F2580")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x48F2610", Offset = "0x48F2610", VA = "0x48F2610")]
	public DebugUIHandlerToggleHistory()
	{
	}
}
