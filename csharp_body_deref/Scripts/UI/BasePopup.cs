// ==================== AoTTG2 cross-reference ====================
// Type: UI.BasePopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000569")]
internal class BasePopup : HeadedPanel
{
	[Serializable]
	[Token(Token = "0x200056A")]
	public struct AnimationKeyframe
	{
		[Token(Token = "0x4001AC6")]
		[FieldOffset(Offset = "0x0")]
		public float time;

		[Token(Token = "0x4001AC7")]
		[FieldOffset(Offset = "0x4")]
		public float scale;

		[Token(Token = "0x600386E")]
		[Address(RVA = "0x4245F10", Offset = "0x4245F10", VA = "0x4245F10")]
		public AnimationKeyframe(float time, float scale)
		{
		}
	}

	[Token(Token = "0x200056B")]
	[CompilerGenerated]
	private sealed class _003CFadeIn_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AC8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AC9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ACA")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A8C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003872")]
			[Address(RVA = "0x42461C0", Offset = "0x42461C0", VA = "0x42461C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A8D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003874")]
			[Address(RVA = "0x4246210", Offset = "0x4246210", VA = "0x4246210", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600386F")]
		[Address(RVA = "0x4245940", Offset = "0x4245940", VA = "0x4245940")]
		[DebuggerHidden]
		public _003CFadeIn_003Ed__38(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003870")]
		[Address(RVA = "0x4245FA0", Offset = "0x4245FA0", VA = "0x4245FA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003871")]
		[Address(RVA = "0x4245FB0", Offset = "0x4245FB0", VA = "0x4245FB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003873")]
		[Address(RVA = "0x42461D0", Offset = "0x42461D0", VA = "0x42461D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200056C")]
	[CompilerGenerated]
	private sealed class _003CFadeOut_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ACB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ACC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ACD")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A8E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003878")]
			[Address(RVA = "0x4246460", Offset = "0x4246460", VA = "0x4246460", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A8F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600387A")]
			[Address(RVA = "0x42464B0", Offset = "0x42464B0", VA = "0x42464B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003875")]
		[Address(RVA = "0x4245960", Offset = "0x4245960", VA = "0x4245960")]
		[DebuggerHidden]
		public _003CFadeOut_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003876")]
		[Address(RVA = "0x4246220", Offset = "0x4246220", VA = "0x4246220", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003877")]
		[Address(RVA = "0x4246230", Offset = "0x4246230", VA = "0x4246230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003879")]
		[Address(RVA = "0x4246470", Offset = "0x4246470", VA = "0x4246470", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200056D")]
	[CompilerGenerated]
	private sealed class _003CKillPopupIn_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ACE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ACF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AD0")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x4001AD1")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x4001AD2")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000A90")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600387E")]
			[Address(RVA = "0x42465B0", Offset = "0x42465B0", VA = "0x42465B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A91")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003880")]
			[Address(RVA = "0x4246600", Offset = "0x4246600", VA = "0x4246600", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600387B")]
		[Address(RVA = "0x4245900", Offset = "0x4245900", VA = "0x4245900")]
		[DebuggerHidden]
		public _003CKillPopupIn_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600387C")]
		[Address(RVA = "0x42464C0", Offset = "0x42464C0", VA = "0x42464C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600387D")]
		[Address(RVA = "0x42464D0", Offset = "0x42464D0", VA = "0x42464D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600387F")]
		[Address(RVA = "0x42465C0", Offset = "0x42465C0", VA = "0x42465C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200056E")]
	[CompilerGenerated]
	private sealed class _003CKillPopupOut_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AD3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AD4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AD5")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x4001AD6")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x4001AD7")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000A92")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003884")]
			[Address(RVA = "0x4246720", Offset = "0x4246720", VA = "0x4246720", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A93")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003886")]
			[Address(RVA = "0x4246770", Offset = "0x4246770", VA = "0x4246770", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003881")]
		[Address(RVA = "0x4245920", Offset = "0x4245920", VA = "0x4245920")]
		[DebuggerHidden]
		public _003CKillPopupOut_003Ed__37(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003882")]
		[Address(RVA = "0x4246610", Offset = "0x4246610", VA = "0x4246610", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003883")]
		[Address(RVA = "0x4246620", Offset = "0x4246620", VA = "0x4246620", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003885")]
		[Address(RVA = "0x4246730", Offset = "0x4246730", VA = "0x4246730", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200056F")]
	[CompilerGenerated]
	private sealed class _003CTweenIn_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AD8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AD9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ADA")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A94")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600388A")]
			[Address(RVA = "0x42468F0", Offset = "0x42468F0", VA = "0x42468F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A95")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600388C")]
			[Address(RVA = "0x4246940", Offset = "0x4246940", VA = "0x4246940", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003887")]
		[Address(RVA = "0x4245670", Offset = "0x4245670", VA = "0x4245670")]
		[DebuggerHidden]
		public _003CTweenIn_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003888")]
		[Address(RVA = "0x4246780", Offset = "0x4246780", VA = "0x4246780", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003889")]
		[Address(RVA = "0x4246790", Offset = "0x4246790", VA = "0x4246790", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600388B")]
		[Address(RVA = "0x4246900", Offset = "0x4246900", VA = "0x4246900", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000570")]
	[CompilerGenerated]
	private sealed class _003CTweenOut_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ADB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ADC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ADD")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A96")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003890")]
			[Address(RVA = "0x4246AD0", Offset = "0x4246AD0", VA = "0x4246AD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A97")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003892")]
			[Address(RVA = "0x4246B20", Offset = "0x4246B20", VA = "0x4246B20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600388D")]
		[Address(RVA = "0x4245690", Offset = "0x4245690", VA = "0x4245690")]
		[DebuggerHidden]
		public _003CTweenOut_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600388E")]
		[Address(RVA = "0x4246950", Offset = "0x4246950", VA = "0x4246950", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600388F")]
		[Address(RVA = "0x4246960", Offset = "0x4246960", VA = "0x4246960", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003891")]
		[Address(RVA = "0x4246AE0", Offset = "0x4246AE0", VA = "0x4246AE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AC1")]
	[FieldOffset(Offset = "0x80")]
	public float _currentAnimationValue;

	[Token(Token = "0x4001AC2")]
	[FieldOffset(Offset = "0x88")]
	protected HashSet<Transform> _staticTransforms;

	[Token(Token = "0x4001AC3")]
	[FieldOffset(Offset = "0x90")]
	public bool IsActive;

	[Token(Token = "0x4001AC4")]
	[FieldOffset(Offset = "0x98")]
	private readonly List<AnimationKeyframe> killPopupKeyframesIn;

	[Token(Token = "0x4001AC5")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<AnimationKeyframe> killPopupKeyframesOut;

	[Token(Token = "0x17000A82")]
	protected virtual float MinTweenScale
	{
		[Token(Token = "0x6003851")]
		[Address(RVA = "0x4244860", Offset = "0x4244860", VA = "0x4244860", Slot = "45")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A83")]
	protected virtual float MaxTweenScale
	{
		[Token(Token = "0x6003852")]
		[Address(RVA = "0x4244870", Offset = "0x4244870", VA = "0x4244870", Slot = "46")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A84")]
	protected virtual float MinFadeAlpha
	{
		[Token(Token = "0x6003853")]
		[Address(RVA = "0x4244880", Offset = "0x4244880", VA = "0x4244880", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A85")]
	protected virtual float MaxFadeAlpha
	{
		[Token(Token = "0x6003854")]
		[Address(RVA = "0x4244890", Offset = "0x4244890", VA = "0x4244890", Slot = "48")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A86")]
	protected virtual float SpringDamping
	{
		[Token(Token = "0x6003855")]
		[Address(RVA = "0x42448A0", Offset = "0x42448A0", VA = "0x42448A0", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A87")]
	protected virtual float SpringStiffness
	{
		[Token(Token = "0x6003856")]
		[Address(RVA = "0x42448B0", Offset = "0x42448B0", VA = "0x42448B0", Slot = "50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A88")]
	protected virtual float AnimationTime
	{
		[Token(Token = "0x6003857")]
		[Address(RVA = "0x42448C0", Offset = "0x42448C0", VA = "0x42448C0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A89")]
	protected virtual bool ShowOnTop
	{
		[Token(Token = "0x6003858")]
		[Address(RVA = "0x42448D0", Offset = "0x42448D0", VA = "0x42448D0", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A8A")]
	protected virtual bool UseSound
	{
		[Token(Token = "0x6003859")]
		[Address(RVA = "0x42448E0", Offset = "0x42448E0", VA = "0x42448E0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A8B")]
	protected virtual PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600385A")]
		[Address(RVA = "0x42448F0", Offset = "0x42448F0", VA = "0x42448F0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x600385B")]
	[Address(RVA = "0x4244900", Offset = "0x4244900", VA = "0x4244900", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600385C")]
	[Address(RVA = "0x4244C60", Offset = "0x4244C60", VA = "0x4244C60")]
	public void ShowImmediate()
	{
	}

	[Token(Token = "0x600385D")]
	[Address(RVA = "0x4245130", Offset = "0x4245130", VA = "0x4245130", Slot = "26")]
	protected override void HideAllPopups()
	{
	}

	[Token(Token = "0x600385E")]
	[Address(RVA = "0x4245280", Offset = "0x4245280", VA = "0x4245280", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x600385F")]
	[Address(RVA = "0x42455E0", Offset = "0x42455E0", VA = "0x42455E0", Slot = "55")]
	public virtual void HideImmediate()
	{
	}

	[Token(Token = "0x6003860")]
	[Address(RVA = "0x4245640", Offset = "0x4245640", VA = "0x4245640", Slot = "56")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6003861")]
	[Address(RVA = "0x4245650", Offset = "0x4245650", VA = "0x4245650", Slot = "57")]
	protected virtual void FinishHide()
	{
	}

	[Token(Token = "0x6003862")]
	[Address(RVA = "0x4244B10", Offset = "0x4244B10", VA = "0x4244B10")]
	[IteratorStateMachine(typeof(_003CTweenIn_003Ed__30))]
	protected IEnumerator TweenIn()
	{
		return null;
	}

	[Token(Token = "0x6003863")]
	[Address(RVA = "0x4245490", Offset = "0x4245490", VA = "0x4245490")]
	[IteratorStateMachine(typeof(_003CTweenOut_003Ed__31))]
	protected IEnumerator TweenOut()
	{
		return null;
	}

	[Token(Token = "0x6003864")]
	[Address(RVA = "0x42456B0", Offset = "0x42456B0", VA = "0x42456B0")]
	protected float EvaluateKeyframes(float timePercentage, List<AnimationKeyframe> keyframes)
	{
		return default(float);
	}

	[Token(Token = "0x6003865")]
	[Address(RVA = "0x4244BF0", Offset = "0x4244BF0", VA = "0x4244BF0")]
	[IteratorStateMachine(typeof(_003CKillPopupIn_003Ed__36))]
	protected IEnumerator KillPopupIn()
	{
		return null;
	}

	[Token(Token = "0x6003866")]
	[Address(RVA = "0x4245570", Offset = "0x4245570", VA = "0x4245570")]
	[IteratorStateMachine(typeof(_003CKillPopupOut_003Ed__37))]
	protected IEnumerator KillPopupOut()
	{
		return null;
	}

	[Token(Token = "0x6003867")]
	[Address(RVA = "0x4244B80", Offset = "0x4244B80", VA = "0x4244B80")]
	[IteratorStateMachine(typeof(_003CFadeIn_003Ed__38))]
	protected IEnumerator FadeIn()
	{
		return null;
	}

	[Token(Token = "0x6003868")]
	[Address(RVA = "0x4245500", Offset = "0x4245500", VA = "0x4245500")]
	[IteratorStateMachine(typeof(_003CFadeOut_003Ed__39))]
	protected IEnumerator FadeOut()
	{
		return null;
	}

	[Token(Token = "0x6003869")]
	[Address(RVA = "0x4244DE0", Offset = "0x4244DE0", VA = "0x4244DE0")]
	protected void SetTransformScale(float scale)
	{
	}

	[Token(Token = "0x600386A")]
	[Address(RVA = "0x42450C0", Offset = "0x42450C0", VA = "0x42450C0")]
	protected void SetTransformAlpha(float alpha)
	{
	}

	[Token(Token = "0x600386B")]
	[Address(RVA = "0x4245980", Offset = "0x4245980", VA = "0x4245980")]
	private Vector3 GetVectorFromScale(float scale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600386C")]
	[Address(RVA = "0x4245990", Offset = "0x4245990", VA = "0x4245990", Slot = "58")]
	protected virtual float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x600386D")]
	[Address(RVA = "0x42459C0", Offset = "0x42459C0", VA = "0x42459C0")]
	public BasePopup()
	{
	}
}
