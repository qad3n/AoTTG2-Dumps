using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000524")]
internal class BasePopup : HeadedPanel
{
	[Serializable]
	[Token(Token = "0x2000525")]
	public struct AnimationKeyframe
	{
		[Token(Token = "0x40019B3")]
		[FieldOffset(Offset = "0x0")]
		public float time;

		[Token(Token = "0x40019B4")]
		[FieldOffset(Offset = "0x4")]
		public float scale;

		[Token(Token = "0x6003660")]
		[Address(RVA = "0x3F1C840", Offset = "0x3F1C840", VA = "0x3F1C840")]
		public AnimationKeyframe(float time, float scale)
		{
		}
	}

	[Token(Token = "0x2000526")]
	[CompilerGenerated]
	private sealed class _003CFadeIn_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019B5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019B6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019B7")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A22")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003664")]
			[Address(RVA = "0x3F1CAF0", Offset = "0x3F1CAF0", VA = "0x3F1CAF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A23")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003666")]
			[Address(RVA = "0x3F1CB40", Offset = "0x3F1CB40", VA = "0x3F1CB40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003661")]
		[Address(RVA = "0x3F1C270", Offset = "0x3F1C270", VA = "0x3F1C270")]
		[DebuggerHidden]
		public _003CFadeIn_003Ed__38(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003662")]
		[Address(RVA = "0x3F1C8D0", Offset = "0x3F1C8D0", VA = "0x3F1C8D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003663")]
		[Address(RVA = "0x3F1C8E0", Offset = "0x3F1C8E0", VA = "0x3F1C8E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003665")]
		[Address(RVA = "0x3F1CB00", Offset = "0x3F1CB00", VA = "0x3F1CB00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000527")]
	[CompilerGenerated]
	private sealed class _003CFadeOut_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019B8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019B9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019BA")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A24")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600366A")]
			[Address(RVA = "0x3F1CD90", Offset = "0x3F1CD90", VA = "0x3F1CD90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A25")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600366C")]
			[Address(RVA = "0x3F1CDE0", Offset = "0x3F1CDE0", VA = "0x3F1CDE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003667")]
		[Address(RVA = "0x3F1C290", Offset = "0x3F1C290", VA = "0x3F1C290")]
		[DebuggerHidden]
		public _003CFadeOut_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003668")]
		[Address(RVA = "0x3F1CB50", Offset = "0x3F1CB50", VA = "0x3F1CB50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003669")]
		[Address(RVA = "0x3F1CB60", Offset = "0x3F1CB60", VA = "0x3F1CB60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600366B")]
		[Address(RVA = "0x3F1CDA0", Offset = "0x3F1CDA0", VA = "0x3F1CDA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000528")]
	[CompilerGenerated]
	private sealed class _003CKillPopupIn_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019BB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019BC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019BD")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x40019BE")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x40019BF")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000A26")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003670")]
			[Address(RVA = "0x3F1CEE0", Offset = "0x3F1CEE0", VA = "0x3F1CEE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A27")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003672")]
			[Address(RVA = "0x3F1CF30", Offset = "0x3F1CF30", VA = "0x3F1CF30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600366D")]
		[Address(RVA = "0x3F1C230", Offset = "0x3F1C230", VA = "0x3F1C230")]
		[DebuggerHidden]
		public _003CKillPopupIn_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600366E")]
		[Address(RVA = "0x3F1CDF0", Offset = "0x3F1CDF0", VA = "0x3F1CDF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600366F")]
		[Address(RVA = "0x3F1CE00", Offset = "0x3F1CE00", VA = "0x3F1CE00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003671")]
		[Address(RVA = "0x3F1CEF0", Offset = "0x3F1CEF0", VA = "0x3F1CEF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000529")]
	[CompilerGenerated]
	private sealed class _003CKillPopupOut_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019C0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019C1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019C2")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x40019C3")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x40019C4")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000A28")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003676")]
			[Address(RVA = "0x3F1D050", Offset = "0x3F1D050", VA = "0x3F1D050", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A29")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003678")]
			[Address(RVA = "0x3F1D0A0", Offset = "0x3F1D0A0", VA = "0x3F1D0A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003673")]
		[Address(RVA = "0x3F1C250", Offset = "0x3F1C250", VA = "0x3F1C250")]
		[DebuggerHidden]
		public _003CKillPopupOut_003Ed__37(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003674")]
		[Address(RVA = "0x3F1CF40", Offset = "0x3F1CF40", VA = "0x3F1CF40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003675")]
		[Address(RVA = "0x3F1CF50", Offset = "0x3F1CF50", VA = "0x3F1CF50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003677")]
		[Address(RVA = "0x3F1D060", Offset = "0x3F1D060", VA = "0x3F1D060", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200052A")]
	[CompilerGenerated]
	private sealed class _003CTweenIn_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019C5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019C6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019C7")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A2A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600367C")]
			[Address(RVA = "0x3F1D220", Offset = "0x3F1D220", VA = "0x3F1D220", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A2B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600367E")]
			[Address(RVA = "0x3F1D270", Offset = "0x3F1D270", VA = "0x3F1D270", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003679")]
		[Address(RVA = "0x3F1BFA0", Offset = "0x3F1BFA0", VA = "0x3F1BFA0")]
		[DebuggerHidden]
		public _003CTweenIn_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600367A")]
		[Address(RVA = "0x3F1D0B0", Offset = "0x3F1D0B0", VA = "0x3F1D0B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600367B")]
		[Address(RVA = "0x3F1D0C0", Offset = "0x3F1D0C0", VA = "0x3F1D0C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600367D")]
		[Address(RVA = "0x3F1D230", Offset = "0x3F1D230", VA = "0x3F1D230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200052B")]
	[CompilerGenerated]
	private sealed class _003CTweenOut_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019C8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019C9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019CA")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000A2C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003682")]
			[Address(RVA = "0x3F1D400", Offset = "0x3F1D400", VA = "0x3F1D400", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A2D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003684")]
			[Address(RVA = "0x3F1D450", Offset = "0x3F1D450", VA = "0x3F1D450", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600367F")]
		[Address(RVA = "0x3F1BFC0", Offset = "0x3F1BFC0", VA = "0x3F1BFC0")]
		[DebuggerHidden]
		public _003CTweenOut_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003680")]
		[Address(RVA = "0x3F1D280", Offset = "0x3F1D280", VA = "0x3F1D280", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003681")]
		[Address(RVA = "0x3F1D290", Offset = "0x3F1D290", VA = "0x3F1D290", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003683")]
		[Address(RVA = "0x3F1D410", Offset = "0x3F1D410", VA = "0x3F1D410", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40019AE")]
	[FieldOffset(Offset = "0x80")]
	public float _currentAnimationValue;

	[Token(Token = "0x40019AF")]
	[FieldOffset(Offset = "0x88")]
	protected HashSet<Transform> _staticTransforms;

	[Token(Token = "0x40019B0")]
	[FieldOffset(Offset = "0x90")]
	public bool IsActive;

	[Token(Token = "0x40019B1")]
	[FieldOffset(Offset = "0x98")]
	private readonly List<AnimationKeyframe> killPopupKeyframesIn;

	[Token(Token = "0x40019B2")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<AnimationKeyframe> killPopupKeyframesOut;

	[Token(Token = "0x17000A18")]
	protected virtual float MinTweenScale
	{
		[Token(Token = "0x6003643")]
		[Address(RVA = "0x3F1B190", Offset = "0x3F1B190", VA = "0x3F1B190", Slot = "45")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A19")]
	protected virtual float MaxTweenScale
	{
		[Token(Token = "0x6003644")]
		[Address(RVA = "0x3F1B1A0", Offset = "0x3F1B1A0", VA = "0x3F1B1A0", Slot = "46")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1A")]
	protected virtual float MinFadeAlpha
	{
		[Token(Token = "0x6003645")]
		[Address(RVA = "0x3F1B1B0", Offset = "0x3F1B1B0", VA = "0x3F1B1B0", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1B")]
	protected virtual float MaxFadeAlpha
	{
		[Token(Token = "0x6003646")]
		[Address(RVA = "0x3F1B1C0", Offset = "0x3F1B1C0", VA = "0x3F1B1C0", Slot = "48")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1C")]
	protected virtual float SpringDamping
	{
		[Token(Token = "0x6003647")]
		[Address(RVA = "0x3F1B1D0", Offset = "0x3F1B1D0", VA = "0x3F1B1D0", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1D")]
	protected virtual float SpringStiffness
	{
		[Token(Token = "0x6003648")]
		[Address(RVA = "0x3F1B1E0", Offset = "0x3F1B1E0", VA = "0x3F1B1E0", Slot = "50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1E")]
	protected virtual float AnimationTime
	{
		[Token(Token = "0x6003649")]
		[Address(RVA = "0x3F1B1F0", Offset = "0x3F1B1F0", VA = "0x3F1B1F0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A1F")]
	protected virtual bool ShowOnTop
	{
		[Token(Token = "0x600364A")]
		[Address(RVA = "0x3F1B200", Offset = "0x3F1B200", VA = "0x3F1B200", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A20")]
	protected virtual bool UseSound
	{
		[Token(Token = "0x600364B")]
		[Address(RVA = "0x3F1B210", Offset = "0x3F1B210", VA = "0x3F1B210", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A21")]
	protected virtual PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600364C")]
		[Address(RVA = "0x3F1B220", Offset = "0x3F1B220", VA = "0x3F1B220", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x600364D")]
	[Address(RVA = "0x3F1B230", Offset = "0x3F1B230", VA = "0x3F1B230", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600364E")]
	[Address(RVA = "0x3F1B590", Offset = "0x3F1B590", VA = "0x3F1B590")]
	public void ShowImmediate()
	{
	}

	[Token(Token = "0x600364F")]
	[Address(RVA = "0x3F1BA60", Offset = "0x3F1BA60", VA = "0x3F1BA60", Slot = "26")]
	protected override void HideAllPopups()
	{
	}

	[Token(Token = "0x6003650")]
	[Address(RVA = "0x3F1BBB0", Offset = "0x3F1BBB0", VA = "0x3F1BBB0", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6003651")]
	[Address(RVA = "0x3F1BF10", Offset = "0x3F1BF10", VA = "0x3F1BF10", Slot = "55")]
	public virtual void HideImmediate()
	{
	}

	[Token(Token = "0x6003652")]
	[Address(RVA = "0x3F1BF70", Offset = "0x3F1BF70", VA = "0x3F1BF70", Slot = "56")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6003653")]
	[Address(RVA = "0x3F1BF80", Offset = "0x3F1BF80", VA = "0x3F1BF80", Slot = "57")]
	protected virtual void FinishHide()
	{
	}

	[Token(Token = "0x6003654")]
	[Address(RVA = "0x3F1B440", Offset = "0x3F1B440", VA = "0x3F1B440")]
	[IteratorStateMachine(typeof(_003CTweenIn_003Ed__30))]
	protected IEnumerator TweenIn()
	{
		return null;
	}

	[Token(Token = "0x6003655")]
	[Address(RVA = "0x3F1BDC0", Offset = "0x3F1BDC0", VA = "0x3F1BDC0")]
	[IteratorStateMachine(typeof(_003CTweenOut_003Ed__31))]
	protected IEnumerator TweenOut()
	{
		return null;
	}

	[Token(Token = "0x6003656")]
	[Address(RVA = "0x3F1BFE0", Offset = "0x3F1BFE0", VA = "0x3F1BFE0")]
	protected float EvaluateKeyframes(float timePercentage, List<AnimationKeyframe> keyframes)
	{
		return default(float);
	}

	[Token(Token = "0x6003657")]
	[Address(RVA = "0x3F1B520", Offset = "0x3F1B520", VA = "0x3F1B520")]
	[IteratorStateMachine(typeof(_003CKillPopupIn_003Ed__36))]
	protected IEnumerator KillPopupIn()
	{
		return null;
	}

	[Token(Token = "0x6003658")]
	[Address(RVA = "0x3F1BEA0", Offset = "0x3F1BEA0", VA = "0x3F1BEA0")]
	[IteratorStateMachine(typeof(_003CKillPopupOut_003Ed__37))]
	protected IEnumerator KillPopupOut()
	{
		return null;
	}

	[Token(Token = "0x6003659")]
	[Address(RVA = "0x3F1B4B0", Offset = "0x3F1B4B0", VA = "0x3F1B4B0")]
	[IteratorStateMachine(typeof(_003CFadeIn_003Ed__38))]
	protected IEnumerator FadeIn()
	{
		return null;
	}

	[Token(Token = "0x600365A")]
	[Address(RVA = "0x3F1BE30", Offset = "0x3F1BE30", VA = "0x3F1BE30")]
	[IteratorStateMachine(typeof(_003CFadeOut_003Ed__39))]
	protected IEnumerator FadeOut()
	{
		return null;
	}

	[Token(Token = "0x600365B")]
	[Address(RVA = "0x3F1B710", Offset = "0x3F1B710", VA = "0x3F1B710")]
	protected void SetTransformScale(float scale)
	{
	}

	[Token(Token = "0x600365C")]
	[Address(RVA = "0x3F1B9F0", Offset = "0x3F1B9F0", VA = "0x3F1B9F0")]
	protected void SetTransformAlpha(float alpha)
	{
	}

	[Token(Token = "0x600365D")]
	[Address(RVA = "0x3F1C2B0", Offset = "0x3F1C2B0", VA = "0x3F1C2B0")]
	private Vector3 GetVectorFromScale(float scale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600365E")]
	[Address(RVA = "0x3F1C2C0", Offset = "0x3F1C2C0", VA = "0x3F1C2C0", Slot = "58")]
	protected virtual float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x600365F")]
	[Address(RVA = "0x3F1C2F0", Offset = "0x3F1C2F0", VA = "0x3F1C2F0")]
	public BasePopup()
	{
	}
}
