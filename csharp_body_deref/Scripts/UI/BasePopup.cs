// ==================== AoTTG2 cross-reference ====================
// Type: UI.BasePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/BasePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePopup.cs
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

[Token(Token = "0x20006DA")]
internal class BasePopup : HeadedPanel
{
	[Serializable]
	[Token(Token = "0x20006DB")]
	public struct AnimationKeyframe
	{
		[Token(Token = "0x4002276")]
		[FieldOffset(Offset = "0x0")]
		public float time;

		[Token(Token = "0x4002277")]
		[FieldOffset(Offset = "0x4")]
		public float scale;

		[Token(Token = "0x6004394")]
		[Address(RVA = "0x1028C00", Offset = "0x1027200", VA = "0x181028C00")]
		public AnimationKeyframe(float time, float scale)
		{
		}
	}

	[Token(Token = "0x20006DC")]
	[CompilerGenerated]
	private sealed class _003CFadeIn_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002278")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002279")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400227A")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000BE1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004398")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600439A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004395")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFadeIn_003Ed__44(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004396")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004397")]
		[Address(RVA = "0x21CFA30", Offset = "0x21CE030", VA = "0x1821CFA30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004399")]
		[Address(RVA = "0x21CFBB0", Offset = "0x21CE1B0", VA = "0x1821CFBB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006DD")]
	[CompilerGenerated]
	private sealed class _003CFadeOut_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400227B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400227C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400227D")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000BE3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600439E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043A0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600439B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFadeOut_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600439C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600439D")]
		[Address(RVA = "0x21CFBF0", Offset = "0x21CE1F0", VA = "0x1821CFBF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600439F")]
		[Address(RVA = "0x21CFD80", Offset = "0x21CE380", VA = "0x1821CFD80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006DE")]
	[CompilerGenerated]
	private sealed class _003CKillPopupIn_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400227E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400227F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002280")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x4002281")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x4002282")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000BE5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60043A4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043A6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60043A1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CKillPopupIn_003Ed__42(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60043A2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60043A3")]
		[Address(RVA = "0x21CFDC0", Offset = "0x21CE3C0", VA = "0x1821CFDC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60043A5")]
		[Address(RVA = "0x21CFEC0", Offset = "0x21CE4C0", VA = "0x1821CFEC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006DF")]
	[CompilerGenerated]
	private sealed class _003CKillPopupOut_003Ed__43 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002283")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002284")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002285")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x4002286")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x4002287")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000BE7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60043AA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043AC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60043A7")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CKillPopupOut_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60043A8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60043A9")]
		[Address(RVA = "0x21CFF00", Offset = "0x21CE500", VA = "0x1821CFF00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60043AB")]
		[Address(RVA = "0x21D0020", Offset = "0x21CE620", VA = "0x1821D0020", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006E0")]
	[CompilerGenerated]
	private sealed class _003CTweenIn_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002288")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002289")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400228A")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000BE9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60043B0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BEA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043B2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60043AD")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTweenIn_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60043AE")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60043AF")]
		[Address(RVA = "0x21D0490", Offset = "0x21CEA90", VA = "0x1821D0490", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60043B1")]
		[Address(RVA = "0x21D0610", Offset = "0x21CEC10", VA = "0x1821D0610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006E1")]
	[CompilerGenerated]
	private sealed class _003CTweenOut_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400228B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400228C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400228D")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000BEB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60043B6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BEC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043B8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60043B3")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTweenOut_003Ed__37(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60043B4")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60043B5")]
		[Address(RVA = "0x21D0650", Offset = "0x21CEC50", VA = "0x1821D0650", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60043B7")]
		[Address(RVA = "0x21D07E0", Offset = "0x21CEDE0", VA = "0x1821D07E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002271")]
	[FieldOffset(Offset = "0x80")]
	public float _currentAnimationValue;

	[Token(Token = "0x4002272")]
	[FieldOffset(Offset = "0x88")]
	protected HashSet<Transform> _staticTransforms;

	[Token(Token = "0x4002273")]
	[FieldOffset(Offset = "0x90")]
	public bool IsActive;

	[Token(Token = "0x4002274")]
	[FieldOffset(Offset = "0x98")]
	private readonly List<AnimationKeyframe> killPopupKeyframesIn;

	[Token(Token = "0x4002275")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<AnimationKeyframe> killPopupKeyframesOut;

	[Token(Token = "0x17000BD5")]
	protected virtual float MinTweenScale
	{
		[Token(Token = "0x6004373")]
		[Address(RVA = "0x210FB70", Offset = "0x210E170", VA = "0x18210FB70", Slot = "45")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD6")]
	protected virtual float MaxTweenScale
	{
		[Token(Token = "0x6004374")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "46")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD7")]
	protected virtual float MinFadeAlpha
	{
		[Token(Token = "0x6004375")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD8")]
	protected virtual float MaxFadeAlpha
	{
		[Token(Token = "0x6004376")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "48")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD9")]
	protected virtual float SpringDamping
	{
		[Token(Token = "0x6004377")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDA")]
	protected virtual float SpringStiffness
	{
		[Token(Token = "0x6004378")]
		[Address(RVA = "0x21BC890", Offset = "0x21BAE90", VA = "0x1821BC890", Slot = "50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDB")]
	protected virtual float AnimationTime
	{
		[Token(Token = "0x6004379")]
		[Address(RVA = "0x21BC890", Offset = "0x21BAE90", VA = "0x1821BC890", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDC")]
	protected virtual bool ShowOnTop
	{
		[Token(Token = "0x600437A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BDD")]
	protected virtual bool UseSound
	{
		[Token(Token = "0x600437B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BDE")]
	protected virtual PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600437C")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BDF")]
	public virtual PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x600437D")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000BE0")]
	public virtual bool PlayEscapeSound
	{
		[Token(Token = "0x600437E")]
		[Address(RVA = "0x21BC8A0", Offset = "0x21BAEA0", VA = "0x1821BC8A0", Slot = "56")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600437F")]
	[Address(RVA = "0x21BB450", Offset = "0x21B9A50", VA = "0x1821BB450", Slot = "57")]
	public virtual bool DismissFromEscape()
	{
		return default(bool);
	}

	[Token(Token = "0x6004380")]
	[Address(RVA = "0x21BC290", Offset = "0x21BA890", VA = "0x1821BC290", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004381")]
	[Address(RVA = "0x21BC140", Offset = "0x21BA740", VA = "0x1821BC140")]
	public void ShowImmediate()
	{
	}

	[Token(Token = "0x6004382")]
	[Address(RVA = "0x21BB8D0", Offset = "0x21B9ED0", VA = "0x1821BB8D0", Slot = "26")]
	protected override void HideAllPopups()
	{
	}

	[Token(Token = "0x6004383")]
	[Address(RVA = "0x21BBB40", Offset = "0x21BA140", VA = "0x1821BBB40", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6004384")]
	[Address(RVA = "0x21BB9F0", Offset = "0x21B9FF0", VA = "0x1821BB9F0", Slot = "58")]
	public virtual void HideImmediate()
	{
	}

	[Token(Token = "0x6004385")]
	[Address(RVA = "0x21BBE00", Offset = "0x21BA400", VA = "0x1821BBE00", Slot = "59")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6004386")]
	[Address(RVA = "0x21BBA70", Offset = "0x21BA070", VA = "0x1821BBA70")]
	private void HideTooltips()
	{
	}

	[Token(Token = "0x6004387")]
	[Address(RVA = "0x21BB840", Offset = "0x21B9E40", VA = "0x1821BB840", Slot = "60")]
	protected virtual void FinishHide()
	{
	}

	[Token(Token = "0x6004388")]
	[Address(RVA = "0x21BC470", Offset = "0x21BAA70", VA = "0x1821BC470")]
	[IteratorStateMachine(typeof(_003CTweenIn_003Ed__36))]
	protected IEnumerator TweenIn()
	{
		return null;
	}

	[Token(Token = "0x6004389")]
	[Address(RVA = "0x21BC4E0", Offset = "0x21BAAE0", VA = "0x1821BC4E0")]
	[IteratorStateMachine(typeof(_003CTweenOut_003Ed__37))]
	protected IEnumerator TweenOut()
	{
		return null;
	}

	[Token(Token = "0x600438A")]
	[Address(RVA = "0x21BB4A0", Offset = "0x21B9AA0", VA = "0x1821BB4A0")]
	protected float EvaluateKeyframes(float timePercentage, List<AnimationKeyframe> keyframes)
	{
		return default(float);
	}

	[Token(Token = "0x600438B")]
	[Address(RVA = "0x21BBD20", Offset = "0x21BA320", VA = "0x1821BBD20")]
	[IteratorStateMachine(typeof(_003CKillPopupIn_003Ed__42))]
	protected IEnumerator KillPopupIn()
	{
		return null;
	}

	[Token(Token = "0x600438C")]
	[Address(RVA = "0x21BBD90", Offset = "0x21BA390", VA = "0x1821BBD90")]
	[IteratorStateMachine(typeof(_003CKillPopupOut_003Ed__43))]
	protected IEnumerator KillPopupOut()
	{
		return null;
	}

	[Token(Token = "0x600438D")]
	[Address(RVA = "0x21BB760", Offset = "0x21B9D60", VA = "0x1821BB760")]
	[IteratorStateMachine(typeof(_003CFadeIn_003Ed__44))]
	protected IEnumerator FadeIn()
	{
		return null;
	}

	[Token(Token = "0x600438E")]
	[Address(RVA = "0x21BB7D0", Offset = "0x21B9DD0", VA = "0x1821BB7D0")]
	[IteratorStateMachine(typeof(_003CFadeOut_003Ed__45))]
	protected IEnumerator FadeOut()
	{
		return null;
	}

	[Token(Token = "0x600438F")]
	[Address(RVA = "0x21BBE80", Offset = "0x21BA480", VA = "0x1821BBE80")]
	protected void SetTransformScale(float scale)
	{
	}

	[Token(Token = "0x6004390")]
	[Address(RVA = "0x21BBE10", Offset = "0x21BA410", VA = "0x1821BBE10")]
	protected void SetTransformAlpha(float alpha)
	{
	}

	[Token(Token = "0x6004391")]
	[Address(RVA = "0x21BB8B0", Offset = "0x21B9EB0", VA = "0x1821BB8B0")]
	private Vector3 GetVectorFromScale(float scale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004392")]
	[Address(RVA = "0x21BB870", Offset = "0x21B9E70", VA = "0x1821BB870", Slot = "61")]
	protected virtual float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6004393")]
	[Address(RVA = "0x21BC550", Offset = "0x21BAB50", VA = "0x1821BC550")]
	public BasePopup()
	{
	}
}
