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

[Token(Token = "0x2000783")]
internal class BasePopup : HeadedPanel
{
	[Serializable]
	[Token(Token = "0x2000784")]
	public struct AnimationKeyframe
	{
		[Token(Token = "0x40025F0")]
		[FieldOffset(Offset = "0x0")]
		public float time;

		[Token(Token = "0x40025F1")]
		[FieldOffset(Offset = "0x4")]
		public float scale;

		[Token(Token = "0x60048B9")]
		[Address(RVA = "0x5BB76D0", Offset = "0x5BB66D0", VA = "0x5BB76D0")]
		public AnimationKeyframe(float time, float scale)
		{
		}
	}

	[Token(Token = "0x2000785")]
	[CompilerGenerated]
	private sealed class _003CFadeIn_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025F2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025F3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025F4")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000C65")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048BD")]
			[Address(RVA = "0x5BB7980", Offset = "0x5BB6980", VA = "0x5BB7980", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C66")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048BF")]
			[Address(RVA = "0x5BB79D0", Offset = "0x5BB69D0", VA = "0x5BB79D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048BA")]
		[Address(RVA = "0x5BB7110", Offset = "0x5BB6110", VA = "0x5BB7110")]
		[DebuggerHidden]
		public _003CFadeIn_003Ed__44(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048BB")]
		[Address(RVA = "0x5BB7760", Offset = "0x5BB6760", VA = "0x5BB7760", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048BC")]
		[Address(RVA = "0x5BB7770", Offset = "0x5BB6770", VA = "0x5BB7770", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048BE")]
		[Address(RVA = "0x5BB7990", Offset = "0x5BB6990", VA = "0x5BB7990", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000786")]
	[CompilerGenerated]
	private sealed class _003CFadeOut_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025F5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025F6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025F7")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000C67")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048C3")]
			[Address(RVA = "0x5BB7C20", Offset = "0x5BB6C20", VA = "0x5BB7C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C68")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048C5")]
			[Address(RVA = "0x5BB7C70", Offset = "0x5BB6C70", VA = "0x5BB7C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048C0")]
		[Address(RVA = "0x5BB7130", Offset = "0x5BB6130", VA = "0x5BB7130")]
		[DebuggerHidden]
		public _003CFadeOut_003Ed__45(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048C1")]
		[Address(RVA = "0x5BB79E0", Offset = "0x5BB69E0", VA = "0x5BB79E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048C2")]
		[Address(RVA = "0x5BB79F0", Offset = "0x5BB69F0", VA = "0x5BB79F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048C4")]
		[Address(RVA = "0x5BB7C30", Offset = "0x5BB6C30", VA = "0x5BB7C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000787")]
	[CompilerGenerated]
	private sealed class _003CKillPopupIn_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025F8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025F9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025FA")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x40025FB")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x40025FC")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000C69")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048C9")]
			[Address(RVA = "0x5BB7D70", Offset = "0x5BB6D70", VA = "0x5BB7D70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C6A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048CB")]
			[Address(RVA = "0x5BB7DC0", Offset = "0x5BB6DC0", VA = "0x5BB7DC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048C6")]
		[Address(RVA = "0x5BB70D0", Offset = "0x5BB60D0", VA = "0x5BB70D0")]
		[DebuggerHidden]
		public _003CKillPopupIn_003Ed__42(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048C7")]
		[Address(RVA = "0x5BB7C80", Offset = "0x5BB6C80", VA = "0x5BB7C80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048C8")]
		[Address(RVA = "0x5BB7C90", Offset = "0x5BB6C90", VA = "0x5BB7C90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048CA")]
		[Address(RVA = "0x5BB7D80", Offset = "0x5BB6D80", VA = "0x5BB7D80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000788")]
	[CompilerGenerated]
	private sealed class _003CKillPopupOut_003Ed__43 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025FD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025FE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025FF")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x4002600")]
		[FieldOffset(Offset = "0x28")]
		private float _003CstartTime_003E5__2;

		[Token(Token = "0x4002601")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CendTime_003E5__3;

		[Token(Token = "0x17000C6B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048CF")]
			[Address(RVA = "0x5BB7EE0", Offset = "0x5BB6EE0", VA = "0x5BB7EE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C6C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048D1")]
			[Address(RVA = "0x5BB7F30", Offset = "0x5BB6F30", VA = "0x5BB7F30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048CC")]
		[Address(RVA = "0x5BB70F0", Offset = "0x5BB60F0", VA = "0x5BB70F0")]
		[DebuggerHidden]
		public _003CKillPopupOut_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048CD")]
		[Address(RVA = "0x5BB7DD0", Offset = "0x5BB6DD0", VA = "0x5BB7DD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048CE")]
		[Address(RVA = "0x5BB7DE0", Offset = "0x5BB6DE0", VA = "0x5BB7DE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048D0")]
		[Address(RVA = "0x5BB7EF0", Offset = "0x5BB6EF0", VA = "0x5BB7EF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000789")]
	[CompilerGenerated]
	private sealed class _003CTweenIn_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002602")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002603")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002604")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000C6D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048D5")]
			[Address(RVA = "0x5BB80B0", Offset = "0x5BB70B0", VA = "0x5BB80B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C6E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048D7")]
			[Address(RVA = "0x5BB8100", Offset = "0x5BB7100", VA = "0x5BB8100", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048D2")]
		[Address(RVA = "0x5BB6E70", Offset = "0x5BB5E70", VA = "0x5BB6E70")]
		[DebuggerHidden]
		public _003CTweenIn_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048D3")]
		[Address(RVA = "0x5BB7F40", Offset = "0x5BB6F40", VA = "0x5BB7F40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048D4")]
		[Address(RVA = "0x5BB7F50", Offset = "0x5BB6F50", VA = "0x5BB7F50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048D6")]
		[Address(RVA = "0x5BB80C0", Offset = "0x5BB70C0", VA = "0x5BB80C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200078A")]
	[CompilerGenerated]
	private sealed class _003CTweenOut_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002605")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002606")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002607")]
		[FieldOffset(Offset = "0x20")]
		public BasePopup _003C_003E4__this;

		[Token(Token = "0x17000C6F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048DB")]
			[Address(RVA = "0x5BB82A0", Offset = "0x5BB72A0", VA = "0x5BB82A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C70")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048DD")]
			[Address(RVA = "0x5BB82F0", Offset = "0x5BB72F0", VA = "0x5BB82F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048D8")]
		[Address(RVA = "0x5BB6E90", Offset = "0x5BB5E90", VA = "0x5BB6E90")]
		[DebuggerHidden]
		public _003CTweenOut_003Ed__37(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048D9")]
		[Address(RVA = "0x5BB8110", Offset = "0x5BB7110", VA = "0x5BB8110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048DA")]
		[Address(RVA = "0x5BB8120", Offset = "0x5BB7120", VA = "0x5BB8120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048DC")]
		[Address(RVA = "0x5BB82B0", Offset = "0x5BB72B0", VA = "0x5BB82B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40025EB")]
	[FieldOffset(Offset = "0x80")]
	public float _currentAnimationValue;

	[Token(Token = "0x40025EC")]
	[FieldOffset(Offset = "0x88")]
	protected HashSet<Transform> _staticTransforms;

	[Token(Token = "0x40025ED")]
	[FieldOffset(Offset = "0x90")]
	public bool IsActive;

	[Token(Token = "0x40025EE")]
	[FieldOffset(Offset = "0x98")]
	private readonly List<AnimationKeyframe> killPopupKeyframesIn;

	[Token(Token = "0x40025EF")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<AnimationKeyframe> killPopupKeyframesOut;

	[Token(Token = "0x17000C59")]
	protected virtual float MinTweenScale
	{
		[Token(Token = "0x6004898")]
		[Address(RVA = "0x5BB5E00", Offset = "0x5BB4E00", VA = "0x5BB5E00", Slot = "45")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5A")]
	protected virtual float MaxTweenScale
	{
		[Token(Token = "0x6004899")]
		[Address(RVA = "0x5BB5E10", Offset = "0x5BB4E10", VA = "0x5BB5E10", Slot = "46")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5B")]
	protected virtual float MinFadeAlpha
	{
		[Token(Token = "0x600489A")]
		[Address(RVA = "0x5BB5E20", Offset = "0x5BB4E20", VA = "0x5BB5E20", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5C")]
	protected virtual float MaxFadeAlpha
	{
		[Token(Token = "0x600489B")]
		[Address(RVA = "0x5BB5E30", Offset = "0x5BB4E30", VA = "0x5BB5E30", Slot = "48")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5D")]
	protected virtual float SpringDamping
	{
		[Token(Token = "0x600489C")]
		[Address(RVA = "0x5BB5E40", Offset = "0x5BB4E40", VA = "0x5BB5E40", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5E")]
	protected virtual float SpringStiffness
	{
		[Token(Token = "0x600489D")]
		[Address(RVA = "0x5BB5E50", Offset = "0x5BB4E50", VA = "0x5BB5E50", Slot = "50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5F")]
	protected virtual float AnimationTime
	{
		[Token(Token = "0x600489E")]
		[Address(RVA = "0x5BB5E60", Offset = "0x5BB4E60", VA = "0x5BB5E60", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C60")]
	protected virtual bool ShowOnTop
	{
		[Token(Token = "0x600489F")]
		[Address(RVA = "0x5BB5E70", Offset = "0x5BB4E70", VA = "0x5BB5E70", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C61")]
	protected virtual bool UseSound
	{
		[Token(Token = "0x60048A0")]
		[Address(RVA = "0x5BB5E80", Offset = "0x5BB4E80", VA = "0x5BB5E80", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C62")]
	protected virtual PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60048A1")]
		[Address(RVA = "0x5BB5E90", Offset = "0x5BB4E90", VA = "0x5BB5E90", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C63")]
	public virtual PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60048A2")]
		[Address(RVA = "0x5BB5EA0", Offset = "0x5BB4EA0", VA = "0x5BB5EA0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000C64")]
	public virtual bool PlayEscapeSound
	{
		[Token(Token = "0x60048A3")]
		[Address(RVA = "0x5BB5EB0", Offset = "0x5BB4EB0", VA = "0x5BB5EB0", Slot = "56")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60048A4")]
	[Address(RVA = "0x5BB5ED0", Offset = "0x5BB4ED0", VA = "0x5BB5ED0", Slot = "57")]
	public virtual bool DismissFromEscape()
	{
		return default(bool);
	}

	[Token(Token = "0x60048A5")]
	[Address(RVA = "0x5BB5F20", Offset = "0x5BB4F20", VA = "0x5BB5F20", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60048A6")]
	[Address(RVA = "0x5BB6250", Offset = "0x5BB5250", VA = "0x5BB6250")]
	public void ShowImmediate()
	{
	}

	[Token(Token = "0x60048A7")]
	[Address(RVA = "0x5BB66F0", Offset = "0x5BB56F0", VA = "0x5BB66F0", Slot = "26")]
	protected override void HideAllPopups()
	{
	}

	[Token(Token = "0x60048A8")]
	[Address(RVA = "0x5BB6830", Offset = "0x5BB5830", VA = "0x5BB6830", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x60048A9")]
	[Address(RVA = "0x5BB6C10", Offset = "0x5BB5C10", VA = "0x5BB6C10", Slot = "58")]
	public virtual void HideImmediate()
	{
	}

	[Token(Token = "0x60048AA")]
	[Address(RVA = "0x5BB6C80", Offset = "0x5BB5C80", VA = "0x5BB6C80", Slot = "59")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x60048AB")]
	[Address(RVA = "0x5BB6A00", Offset = "0x5BB5A00", VA = "0x5BB6A00")]
	private void HideTooltips()
	{
	}

	[Token(Token = "0x60048AC")]
	[Address(RVA = "0x5BB6E50", Offset = "0x5BB5E50", VA = "0x5BB6E50", Slot = "60")]
	protected virtual void FinishHide()
	{
	}

	[Token(Token = "0x60048AD")]
	[Address(RVA = "0x5BB6100", Offset = "0x5BB5100", VA = "0x5BB6100")]
	[IteratorStateMachine(typeof(_003CTweenIn_003Ed__36))]
	protected IEnumerator TweenIn()
	{
		return null;
	}

	[Token(Token = "0x60048AE")]
	[Address(RVA = "0x5BB6AC0", Offset = "0x5BB5AC0", VA = "0x5BB6AC0")]
	[IteratorStateMachine(typeof(_003CTweenOut_003Ed__37))]
	protected IEnumerator TweenOut()
	{
		return null;
	}

	[Token(Token = "0x60048AF")]
	[Address(RVA = "0x5BB6EB0", Offset = "0x5BB5EB0", VA = "0x5BB6EB0")]
	protected float EvaluateKeyframes(float timePercentage, List<AnimationKeyframe> keyframes)
	{
		return default(float);
	}

	[Token(Token = "0x60048B0")]
	[Address(RVA = "0x5BB61E0", Offset = "0x5BB51E0", VA = "0x5BB61E0")]
	[IteratorStateMachine(typeof(_003CKillPopupIn_003Ed__42))]
	protected IEnumerator KillPopupIn()
	{
		return null;
	}

	[Token(Token = "0x60048B1")]
	[Address(RVA = "0x5BB6BA0", Offset = "0x5BB5BA0", VA = "0x5BB6BA0")]
	[IteratorStateMachine(typeof(_003CKillPopupOut_003Ed__43))]
	protected IEnumerator KillPopupOut()
	{
		return null;
	}

	[Token(Token = "0x60048B2")]
	[Address(RVA = "0x5BB6170", Offset = "0x5BB5170", VA = "0x5BB6170")]
	[IteratorStateMachine(typeof(_003CFadeIn_003Ed__44))]
	protected IEnumerator FadeIn()
	{
		return null;
	}

	[Token(Token = "0x60048B3")]
	[Address(RVA = "0x5BB6B30", Offset = "0x5BB5B30", VA = "0x5BB6B30")]
	[IteratorStateMachine(typeof(_003CFadeOut_003Ed__45))]
	protected IEnumerator FadeOut()
	{
		return null;
	}

	[Token(Token = "0x60048B4")]
	[Address(RVA = "0x5BB63F0", Offset = "0x5BB53F0", VA = "0x5BB63F0")]
	protected void SetTransformScale(float scale)
	{
	}

	[Token(Token = "0x60048B5")]
	[Address(RVA = "0x5BB6680", Offset = "0x5BB5680", VA = "0x5BB6680")]
	protected void SetTransformAlpha(float alpha)
	{
	}

	[Token(Token = "0x60048B6")]
	[Address(RVA = "0x5BB7150", Offset = "0x5BB6150", VA = "0x5BB7150")]
	private Vector3 GetVectorFromScale(float scale)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60048B7")]
	[Address(RVA = "0x5BB7160", Offset = "0x5BB6160", VA = "0x5BB7160", Slot = "61")]
	protected virtual float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x60048B8")]
	[Address(RVA = "0x5BB7190", Offset = "0x5BB6190", VA = "0x5BB7190")]
	public BasePopup()
	{
	}
}
