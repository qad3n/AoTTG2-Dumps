// ==================== AoTTG2 cross-reference ====================
// Type: UI.IntroPanelAnimator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IntroPanelAnimator.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/IntroPanelAnimator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000691")]
public class IntroPanelAnimator : MonoBehaviour
{
	[Token(Token = "0x2000692")]
	[CompilerGenerated]
	private sealed class _003CAnimateButtons_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002035")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002036")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002037")]
		[FieldOffset(Offset = "0x20")]
		public IntroPanelAnimator _003C_003E4__this;

		[Token(Token = "0x4002038")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 endPos;

		[Token(Token = "0x4002039")]
		[FieldOffset(Offset = "0x30")]
		private Vector2 _003CstartPos_003E5__2;

		[Token(Token = "0x400203A")]
		[FieldOffset(Offset = "0x38")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000C94")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041B3")]
			[Address(RVA = "0x43025B0", Offset = "0x43025B0", VA = "0x43025B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C95")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041B5")]
			[Address(RVA = "0x4302600", Offset = "0x4302600", VA = "0x4302600", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041B0")]
		[Address(RVA = "0x43023E0", Offset = "0x43023E0", VA = "0x43023E0")]
		[DebuggerHidden]
		public _003CAnimateButtons_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041B1")]
		[Address(RVA = "0x4302450", Offset = "0x4302450", VA = "0x4302450", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041B2")]
		[Address(RVA = "0x4302460", Offset = "0x4302460", VA = "0x4302460", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041B4")]
		[Address(RVA = "0x43025C0", Offset = "0x43025C0", VA = "0x43025C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000693")]
	[CompilerGenerated]
	private sealed class _003CAnimatePanelAndButtons_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400203B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400203C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400203D")]
		[FieldOffset(Offset = "0x20")]
		public IntroPanelAnimator _003C_003E4__this;

		[Token(Token = "0x400203E")]
		[FieldOffset(Offset = "0x28")]
		private Vector2 _003CbuttonsStartPos_003E5__2;

		[Token(Token = "0x400203F")]
		[FieldOffset(Offset = "0x30")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x4002040")]
		[FieldOffset(Offset = "0x34")]
		private bool _003CbuttonAnimationStarted_003E5__4;

		[Token(Token = "0x17000C96")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041B9")]
			[Address(RVA = "0x43029D0", Offset = "0x43029D0", VA = "0x43029D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C97")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041BB")]
			[Address(RVA = "0x4302A20", Offset = "0x4302A20", VA = "0x4302A20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041B6")]
		[Address(RVA = "0x4302340", Offset = "0x4302340", VA = "0x4302340")]
		[DebuggerHidden]
		public _003CAnimatePanelAndButtons_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041B7")]
		[Address(RVA = "0x4302610", Offset = "0x4302610", VA = "0x4302610", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041B8")]
		[Address(RVA = "0x4302620", Offset = "0x4302620", VA = "0x4302620", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041BA")]
		[Address(RVA = "0x43029E0", Offset = "0x43029E0", VA = "0x43029E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002030")]
	[FieldOffset(Offset = "0x20")]
	public float panelSlideDuration;

	[Token(Token = "0x4002031")]
	[FieldOffset(Offset = "0x24")]
	public float buttonsSlideDuration;

	[Token(Token = "0x4002032")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform panelRect;

	[Token(Token = "0x4002033")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform buttonsContainer;

	[Token(Token = "0x4002034")]
	[FieldOffset(Offset = "0x38")]
	private float buttonsSlideOffset;

	[Token(Token = "0x60041AA")]
	[Address(RVA = "0x43021A0", Offset = "0x43021A0", VA = "0x43021A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60041AB")]
	[Address(RVA = "0x4302250", Offset = "0x4302250", VA = "0x4302250")]
	public void StartAnimation()
	{
	}

	[Token(Token = "0x60041AC")]
	[Address(RVA = "0x43022D0", Offset = "0x43022D0", VA = "0x43022D0")]
	[IteratorStateMachine(typeof(_003CAnimatePanelAndButtons_003Ed__7))]
	private IEnumerator AnimatePanelAndButtons()
	{
		return null;
	}

	[Token(Token = "0x60041AD")]
	[Address(RVA = "0x4302360", Offset = "0x4302360", VA = "0x4302360")]
	[IteratorStateMachine(typeof(_003CAnimateButtons_003Ed__8))]
	private IEnumerator AnimateButtons(Vector2 endPos)
	{
		return null;
	}

	[Token(Token = "0x60041AE")]
	[Address(RVA = "0x4302400", Offset = "0x4302400", VA = "0x4302400")]
	private float EaseOutCubic(float t)
	{
		return default(float);
	}

	[Token(Token = "0x60041AF")]
	[Address(RVA = "0x4302430", Offset = "0x4302430", VA = "0x4302430")]
	public IntroPanelAnimator()
	{
	}
}
