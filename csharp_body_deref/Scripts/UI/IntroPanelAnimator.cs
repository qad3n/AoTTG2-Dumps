using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000645")]
public class IntroPanelAnimator : MonoBehaviour
{
	[Token(Token = "0x2000646")]
	[CompilerGenerated]
	private sealed class _003CAnimateButtons_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EE1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EE2")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EE3")]
		[FieldOffset(Offset = "0x20")]
		public IntroPanelAnimator _003C_003E4__this;

		[Token(Token = "0x4001EE4")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 endPos;

		[Token(Token = "0x4001EE5")]
		[FieldOffset(Offset = "0x30")]
		private Vector2 _003CstartPos_003E5__2;

		[Token(Token = "0x4001EE6")]
		[FieldOffset(Offset = "0x38")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000C1A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F56")]
			[Address(RVA = "0x3FEE380", Offset = "0x3FEE380", VA = "0x3FEE380", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C1B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F58")]
			[Address(RVA = "0x3FEE3D0", Offset = "0x3FEE3D0", VA = "0x3FEE3D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F53")]
		[Address(RVA = "0x3FEE1B0", Offset = "0x3FEE1B0", VA = "0x3FEE1B0")]
		[DebuggerHidden]
		public _003CAnimateButtons_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F54")]
		[Address(RVA = "0x3FEE220", Offset = "0x3FEE220", VA = "0x3FEE220", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F55")]
		[Address(RVA = "0x3FEE230", Offset = "0x3FEE230", VA = "0x3FEE230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F57")]
		[Address(RVA = "0x3FEE390", Offset = "0x3FEE390", VA = "0x3FEE390", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000647")]
	[CompilerGenerated]
	private sealed class _003CAnimatePanelAndButtons_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EE7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EE8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EE9")]
		[FieldOffset(Offset = "0x20")]
		public IntroPanelAnimator _003C_003E4__this;

		[Token(Token = "0x4001EEA")]
		[FieldOffset(Offset = "0x28")]
		private Vector2 _003CbuttonsStartPos_003E5__2;

		[Token(Token = "0x4001EEB")]
		[FieldOffset(Offset = "0x30")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x4001EEC")]
		[FieldOffset(Offset = "0x34")]
		private bool _003CbuttonAnimationStarted_003E5__4;

		[Token(Token = "0x17000C1C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F5C")]
			[Address(RVA = "0x3FEE7A0", Offset = "0x3FEE7A0", VA = "0x3FEE7A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C1D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F5E")]
			[Address(RVA = "0x3FEE7F0", Offset = "0x3FEE7F0", VA = "0x3FEE7F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F59")]
		[Address(RVA = "0x3FEE110", Offset = "0x3FEE110", VA = "0x3FEE110")]
		[DebuggerHidden]
		public _003CAnimatePanelAndButtons_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F5A")]
		[Address(RVA = "0x3FEE3E0", Offset = "0x3FEE3E0", VA = "0x3FEE3E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F5B")]
		[Address(RVA = "0x3FEE3F0", Offset = "0x3FEE3F0", VA = "0x3FEE3F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F5D")]
		[Address(RVA = "0x3FEE7B0", Offset = "0x3FEE7B0", VA = "0x3FEE7B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001EDC")]
	[FieldOffset(Offset = "0x20")]
	public float panelSlideDuration;

	[Token(Token = "0x4001EDD")]
	[FieldOffset(Offset = "0x24")]
	public float buttonsSlideDuration;

	[Token(Token = "0x4001EDE")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform panelRect;

	[Token(Token = "0x4001EDF")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform buttonsContainer;

	[Token(Token = "0x4001EE0")]
	[FieldOffset(Offset = "0x38")]
	private float buttonsSlideOffset;

	[Token(Token = "0x6003F4D")]
	[Address(RVA = "0x3FEDF70", Offset = "0x3FEDF70", VA = "0x3FEDF70")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003F4E")]
	[Address(RVA = "0x3FEE020", Offset = "0x3FEE020", VA = "0x3FEE020")]
	public void StartAnimation()
	{
	}

	[Token(Token = "0x6003F4F")]
	[Address(RVA = "0x3FEE0A0", Offset = "0x3FEE0A0", VA = "0x3FEE0A0")]
	[IteratorStateMachine(typeof(_003CAnimatePanelAndButtons_003Ed__7))]
	private IEnumerator AnimatePanelAndButtons()
	{
		return null;
	}

	[Token(Token = "0x6003F50")]
	[Address(RVA = "0x3FEE130", Offset = "0x3FEE130", VA = "0x3FEE130")]
	[IteratorStateMachine(typeof(_003CAnimateButtons_003Ed__8))]
	private IEnumerator AnimateButtons(Vector2 endPos)
	{
		return null;
	}

	[Token(Token = "0x6003F51")]
	[Address(RVA = "0x3FEE1D0", Offset = "0x3FEE1D0", VA = "0x3FEE1D0")]
	private float EaseOutCubic(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6003F52")]
	[Address(RVA = "0x3FEE200", Offset = "0x3FEE200", VA = "0x3FEE200")]
	public IntroPanelAnimator()
	{
	}
}
