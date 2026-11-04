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

[Token(Token = "0x20007EC")]
public class IntroPanelAnimator : MonoBehaviour
{
	[Token(Token = "0x20007ED")]
	[CompilerGenerated]
	private sealed class _003CAnimateButtons_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400280D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400280E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400280F")]
		[FieldOffset(Offset = "0x20")]
		public IntroPanelAnimator _003C_003E4__this;

		[Token(Token = "0x4002810")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 endPos;

		[Token(Token = "0x4002811")]
		[FieldOffset(Offset = "0x30")]
		private Vector2 _003CstartPos_003E5__2;

		[Token(Token = "0x4002812")]
		[FieldOffset(Offset = "0x38")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000DDA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004CA8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DDB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004CAA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004CA5")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CAnimateButtons_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004CA6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004CA7")]
		[Address(RVA = "0x229C350", Offset = "0x229A950", VA = "0x18229C350", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004CA9")]
		[Address(RVA = "0x229C4D0", Offset = "0x229AAD0", VA = "0x18229C4D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20007EE")]
	[CompilerGenerated]
	private sealed class _003CAnimatePanelAndButtons_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002813")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002814")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002815")]
		[FieldOffset(Offset = "0x20")]
		public IntroPanelAnimator _003C_003E4__this;

		[Token(Token = "0x4002816")]
		[FieldOffset(Offset = "0x28")]
		private Vector2 _003CbuttonsStartPos_003E5__2;

		[Token(Token = "0x4002817")]
		[FieldOffset(Offset = "0x30")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x4002818")]
		[FieldOffset(Offset = "0x34")]
		private bool _003CbuttonAnimationStarted_003E5__4;

		[Token(Token = "0x17000DDC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004CAE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DDD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004CB0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004CAB")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CAnimatePanelAndButtons_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004CAC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004CAD")]
		[Address(RVA = "0x229C510", Offset = "0x229AB10", VA = "0x18229C510", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004CAF")]
		[Address(RVA = "0x229C8D0", Offset = "0x229AED0", VA = "0x18229C8D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002808")]
	[FieldOffset(Offset = "0x20")]
	public float panelSlideDuration;

	[Token(Token = "0x4002809")]
	[FieldOffset(Offset = "0x24")]
	public float buttonsSlideDuration;

	[Token(Token = "0x400280A")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform panelRect;

	[Token(Token = "0x400280B")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform buttonsContainer;

	[Token(Token = "0x400280C")]
	[FieldOffset(Offset = "0x38")]
	private float buttonsSlideOffset;

	[Token(Token = "0x6004C9F")]
	[Address(RVA = "0x228A940", Offset = "0x2288F40", VA = "0x18228A940")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004CA0")]
	[Address(RVA = "0x228AA30", Offset = "0x2289030", VA = "0x18228AA30")]
	public void StartAnimation()
	{
	}

	[Token(Token = "0x6004CA1")]
	[Address(RVA = "0x228A8D0", Offset = "0x2288ED0", VA = "0x18228A8D0")]
	[IteratorStateMachine(typeof(_003CAnimatePanelAndButtons_003Ed__7))]
	private IEnumerator AnimatePanelAndButtons()
	{
		return null;
	}

	[Token(Token = "0x6004CA2")]
	[Address(RVA = "0x228A840", Offset = "0x2288E40", VA = "0x18228A840")]
	[IteratorStateMachine(typeof(_003CAnimateButtons_003Ed__8))]
	private IEnumerator AnimateButtons(Vector2 endPos)
	{
		return null;
	}

	[Token(Token = "0x6004CA3")]
	[Address(RVA = "0x228A9F0", Offset = "0x2288FF0", VA = "0x18228A9F0")]
	private float EaseOutCubic(float t)
	{
		return default(float);
	}

	[Token(Token = "0x6004CA4")]
	[Address(RVA = "0x228AAB0", Offset = "0x22890B0", VA = "0x18228AAB0")]
	public IntroPanelAnimator()
	{
	}
}
