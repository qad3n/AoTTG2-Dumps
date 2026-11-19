// ==================== AoTTG2 cross-reference ====================
// Type: UI.BasePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BasePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.AnimationKeyframe$$.ctor): clean
			this.time = time;
			this.scale = scale;
			return;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeIn>d__44$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeIn>d__44$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60048BA")]
		[Address(RVA = "0x5BB7110", Offset = "0x5BB6110", VA = "0x5BB7110")]
		[DebuggerHidden]
		public _003CFadeIn_003Ed__44(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeIn>d__44$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60048BB")]
		[Address(RVA = "0x5BB7760", Offset = "0x5BB6760", VA = "0x5BB7760", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeIn>d__44$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60048BC")]
		[Address(RVA = "0x5BB7770", Offset = "0x5BB6770", VA = "0x5BB7770", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeIn>d__44$$MoveNext): clean
			int iVar1;
			BasePopup __this_00;
			Transform pUVar2;
			CanvasGroup pUVar3;
			float fVar4;
			float fVar5;
			float fVar6;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05cb796c;
				fVar4 = __this_00._currentAnimationValue;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) goto label_05cb796c;
				fVar4 = __this_00.get_MinFadeAlpha();
				__this_00._currentAnimationValue = fVar4;
			}
			fVar5 = __this_00.get_MaxFadeAlpha();
			if (fVar5 <= fVar4) {
				fVar4 = __this_00.get_MaxFadeAlpha();
				pUVar2 = __this_00.transform;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.GetComponent<CanvasGroup>(), pUVar3 != null)) {
					pUVar3.alpha = fVar4;
					return false;
				}
			}
			else {
				fVar4 = __this_00._currentAnimationValue;
				pUVar2 = __this_00.transform;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.GetComponent<CanvasGroup>(), pUVar3 != null)) {
					pUVar3.alpha = fVar4;
					fVar4 = __this_00._currentAnimationValue;
					fVar5 = __this_00.get_MinFadeAlpha();
					fVar6 = __this_00.get_MaxFadeAlpha();
					fVar5 = __this_00.GetAnimationSpeed(fVar5, fVar6);
					fVar6 = Time.unscaledDeltaTime;
					__this_00._currentAnimationValue = fVar6 * fVar5 + fVar4;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
		label_05cb796c: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60048BE")]
		[Address(RVA = "0x5BB7990", Offset = "0x5BB6990", VA = "0x5BB7990", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeIn>d__44$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BasePopup_FadeIn_d__44_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeOut>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeOut>d__45$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60048C0")]
		[Address(RVA = "0x5BB7130", Offset = "0x5BB6130", VA = "0x5BB7130")]
		[DebuggerHidden]
		public _003CFadeOut_003Ed__45(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeOut>d__45$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60048C1")]
		[Address(RVA = "0x5BB79E0", Offset = "0x5BB69E0", VA = "0x5BB79E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeOut>d__45$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60048C2")]
		[Address(RVA = "0x5BB79F0", Offset = "0x5BB69F0", VA = "0x5BB79F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeOut>d__45$$MoveNext): clean
			int iVar1;
			BasePopup __this_00;
			Transform pUVar2;
			CanvasGroup pUVar3;
			float fVar4;
			float fVar5;
			float fVar6;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05cb7c0e;
				fVar4 = __this_00._currentAnimationValue;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) goto label_05cb7c0e;
				fVar4 = __this_00.get_MaxFadeAlpha();
				__this_00._currentAnimationValue = fVar4;
			}
			fVar5 = __this_00.get_MinFadeAlpha();
			if (fVar4 <= fVar5) {
				fVar4 = __this_00.get_MinFadeAlpha();
				pUVar2 = __this_00.transform;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.GetComponent<CanvasGroup>(), pUVar3 != null)) {
					pUVar3.alpha = fVar4;
					__this_00.FinishHide();
					return false;
				}
			}
			else {
				fVar4 = __this_00._currentAnimationValue;
				pUVar2 = __this_00.transform;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.GetComponent<CanvasGroup>(), pUVar3 != null)) {
					pUVar3.alpha = fVar4;
					fVar4 = __this_00._currentAnimationValue;
					fVar5 = __this_00.get_MinFadeAlpha();
					fVar6 = __this_00.get_MaxFadeAlpha();
					fVar5 = __this_00.GetAnimationSpeed(fVar5, fVar6);
					fVar6 = Time.unscaledDeltaTime;
					__this_00._currentAnimationValue = fVar4 - fVar6 * fVar5;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
		label_05cb7c0e: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60048C4")]
		[Address(RVA = "0x5BB7C30", Offset = "0x5BB6C30", VA = "0x5BB7C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<FadeOut>d__45$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BasePopup_FadeOut_d__45_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupIn>d__42$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupIn>d__42$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60048C6")]
		[Address(RVA = "0x5BB70D0", Offset = "0x5BB60D0", VA = "0x5BB70D0")]
		[DebuggerHidden]
		public _003CKillPopupIn_003Ed__42(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupIn>d__42$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60048C7")]
		[Address(RVA = "0x5BB7C80", Offset = "0x5BB6C80", VA = "0x5BB7C80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupIn>d__42$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60048C8")]
		[Address(RVA = "0x5BB7C90", Offset = "0x5BB6C90", VA = "0x5BB7C90", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupIn>d__42$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			BasePopup __this_00;
			MethodInfo pMVar2;
			float fVar3;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				fVar3 = Time.time;
				this._startTime_5__2 = fVar3;
				this._endTime_5__3 = fVar3 + 0.6;
			}
			fVar3 = Time.time;
			if (this._endTime_5__3 <= fVar3) {
				if (__this_00 != null) {
					pMVar2 = (__this_00.klass.vtable)._46_get_MaxTweenScale.method;
					fVar3 = __this_00.get_MaxTweenScale();
					__this_00.SetTransformScale(fVar3);
					return false;
				}
			}
			else {
				fVar3 = Time.time;
				if (__this_00 != null) {
					pMVar2 = (MethodInfo)__this_00.killPopupKeyframesIn;
					fVar3 = __this_00.EvaluateKeyframes((fVar3 - this._startTime_5__2) / 0.6, (List<BasePopup.AnimationKeyframe>)pMVar2);
					__this_00.SetTransformScale(fVar3);
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60048CA")]
		[Address(RVA = "0x5BB7D80", Offset = "0x5BB6D80", VA = "0x5BB7D80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupIn>d__42$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BasePopup_KillPopupIn_d__42_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupOut>d__43$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupOut>d__43$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60048CC")]
		[Address(RVA = "0x5BB70F0", Offset = "0x5BB60F0", VA = "0x5BB70F0")]
		[DebuggerHidden]
		public _003CKillPopupOut_003Ed__43(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupOut>d__43$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60048CD")]
		[Address(RVA = "0x5BB7DD0", Offset = "0x5BB6DD0", VA = "0x5BB7DD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupOut>d__43$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60048CE")]
		[Address(RVA = "0x5BB7DE0", Offset = "0x5BB6DE0", VA = "0x5BB7DE0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupOut>d__43$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			BasePopup __this_00;
			MethodInfo pMVar2;
			float fVar3;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				fVar3 = Time.time;
				this._startTime_5__2 = fVar3;
				this._endTime_5__3 = fVar3 + 1.0;
			}
			fVar3 = Time.time;
			if (this._endTime_5__3 <= fVar3) {
				if (__this_00 != null) {
					pMVar2 = (__this_00.klass.vtable)._45_get_MinTweenScale.method;
					fVar3 = __this_00.get_MinTweenScale();
					__this_00.SetTransformScale(fVar3);
					__this_00.FinishHide();
					return false;
				}
			}
			else {
				fVar3 = Time.time;
				if (__this_00 != null) {
					pMVar2 = (MethodInfo)__this_00.killPopupKeyframesOut;
					fVar3 = __this_00.EvaluateKeyframes((this._startTime_5__2 - fVar3) + 1.0, (List<BasePopup.AnimationKeyframe>)pMVar2);
					__this_00.SetTransformScale(fVar3);
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60048D0")]
		[Address(RVA = "0x5BB7EF0", Offset = "0x5BB6EF0", VA = "0x5BB7EF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<KillPopupOut>d__43$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BasePopup_KillPopupOut_d__43_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenIn>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenIn>d__36$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60048D2")]
		[Address(RVA = "0x5BB6E70", Offset = "0x5BB5E70", VA = "0x5BB6E70")]
		[DebuggerHidden]
		public _003CTweenIn_003Ed__36(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenIn>d__36$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60048D3")]
		[Address(RVA = "0x5BB7F40", Offset = "0x5BB6F40", VA = "0x5BB7F40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenIn>d__36$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60048D4")]
		[Address(RVA = "0x5BB7F50", Offset = "0x5BB6F50", VA = "0x5BB7F50", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenIn>d__36$$MoveNext): clean
			int iVar1;
			BasePopup __this_00;
			float fVar3;
			float fVar4;
			float fVar5;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05cb80a8;
				fVar3 = __this_00._currentAnimationValue;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05cb80a8: ;
					throw new NullReferenceException();
				}
				fVar3 = __this_00.get_MinTweenScale();
				__this_00._currentAnimationValue = fVar3;
			}
			fVar4 = __this_00.get_MaxTweenScale();
			if (fVar4 <= fVar3) {
				fVar3 = __this_00.get_MaxTweenScale();
				__this_00.SetTransformScale(fVar3);
				return false;
			}
			__this_00.SetTransformScale(__this_00._currentAnimationValue);
			fVar3 = __this_00._currentAnimationValue;
			fVar4 = __this_00.get_MinTweenScale();
			fVar5 = __this_00.get_MaxTweenScale();
			fVar4 = __this_00.GetAnimationSpeed(fVar4, fVar5);
			fVar5 = Time.unscaledDeltaTime;
			__this_00._currentAnimationValue = fVar5 * fVar4 + fVar3;
			this.__2__current = null;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x60048D6")]
		[Address(RVA = "0x5BB80C0", Offset = "0x5BB70C0", VA = "0x5BB80C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenIn>d__36$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BasePopup_TweenIn_d__36_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenOut>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenOut>d__37$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60048D8")]
		[Address(RVA = "0x5BB6E90", Offset = "0x5BB5E90", VA = "0x5BB6E90")]
		[DebuggerHidden]
		public _003CTweenOut_003Ed__37(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenOut>d__37$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60048D9")]
		[Address(RVA = "0x5BB8110", Offset = "0x5BB7110", VA = "0x5BB8110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenOut>d__37$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60048DA")]
		[Address(RVA = "0x5BB8120", Offset = "0x5BB7120", VA = "0x5BB8120", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenOut>d__37$$MoveNext): clean
			int iVar1;
			BasePopup __this_00;
			float fVar3;
			float fVar4;
			float fVar5;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05cb8293;
				fVar3 = __this_00._currentAnimationValue;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05cb8293: ;
					throw new NullReferenceException();
				}
				fVar3 = __this_00.get_MaxTweenScale();
				__this_00._currentAnimationValue = fVar3;
			}
			fVar4 = __this_00.get_MinTweenScale();
			if (fVar3 <= fVar4) {
				fVar3 = __this_00.get_MinTweenScale();
				__this_00.SetTransformScale(fVar3);
				__this_00.FinishHide();
				return false;
			}
			__this_00.SetTransformScale(__this_00._currentAnimationValue);
			fVar3 = __this_00._currentAnimationValue;
			fVar4 = __this_00.get_MinTweenScale();
			fVar5 = __this_00.get_MaxTweenScale();
			fVar4 = __this_00.GetAnimationSpeed(fVar4, fVar5);
			fVar5 = Time.unscaledDeltaTime;
			__this_00._currentAnimationValue = fVar3 - fVar5 * fVar4;
			this.__2__current = null;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x60048DC")]
		[Address(RVA = "0x5BB82B0", Offset = "0x5BB72B0", VA = "0x5BB82B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup.<TweenOut>d__37$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_BasePopup_TweenOut_d__37_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_MinTweenScale): clean
			return 0.3;
		}
	}

	[Token(Token = "0x17000C5A")]
	protected virtual float MaxTweenScale
	{
		[Token(Token = "0x6004899")]
		[Address(RVA = "0x5BB5E10", Offset = "0x5BB4E10", VA = "0x5BB5E10", Slot = "46")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_MaxTweenScale): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000C5B")]
	protected virtual float MinFadeAlpha
	{
		[Token(Token = "0x600489A")]
		[Address(RVA = "0x5BB5E20", Offset = "0x5BB4E20", VA = "0x5BB5E20", Slot = "47")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_MinFadeAlpha): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000C5C")]
	protected virtual float MaxFadeAlpha
	{
		[Token(Token = "0x600489B")]
		[Address(RVA = "0x5BB5E30", Offset = "0x5BB4E30", VA = "0x5BB5E30", Slot = "48")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_MaxFadeAlpha): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000C5D")]
	protected virtual float SpringDamping
	{
		[Token(Token = "0x600489C")]
		[Address(RVA = "0x5BB5E40", Offset = "0x5BB4E40", VA = "0x5BB5E40", Slot = "49")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_SpringDamping): clean
			return 0.5;
		}
	}

	[Token(Token = "0x17000C5E")]
	protected virtual float SpringStiffness
	{
		[Token(Token = "0x600489D")]
		[Address(RVA = "0x5BB5E50", Offset = "0x5BB4E50", VA = "0x5BB5E50", Slot = "50")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_SpringStiffness): clean
			return 0.1;
		}
	}

	[Token(Token = "0x17000C5F")]
	protected virtual float AnimationTime
	{
		[Token(Token = "0x600489E")]
		[Address(RVA = "0x5BB5E60", Offset = "0x5BB4E60", VA = "0x5BB5E60", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_AnimationTime): clean
			return 0.1;
		}
	}

	[Token(Token = "0x17000C60")]
	protected virtual bool ShowOnTop
	{
		[Token(Token = "0x600489F")]
		[Address(RVA = "0x5BB5E70", Offset = "0x5BB4E70", VA = "0x5BB5E70", Slot = "52")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_ShowOnTop): clean
			return true;
		}
	}

	[Token(Token = "0x17000C61")]
	protected virtual bool UseSound
	{
		[Token(Token = "0x60048A0")]
		[Address(RVA = "0x5BB5E80", Offset = "0x5BB4E80", VA = "0x5BB5E80", Slot = "53")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_UseSound): clean
			return false;
		}
	}

	[Token(Token = "0x17000C62")]
	protected virtual PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60048A1")]
		[Address(RVA = "0x5BB5E90", Offset = "0x5BB4E90", VA = "0x5BB5E90", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_PopupAnimationType): clean
			return 2;
		}
	}

	[Token(Token = "0x17000C63")]
	public virtual PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60048A2")]
		[Address(RVA = "0x5BB5EA0", Offset = "0x5BB4EA0", VA = "0x5BB5EA0", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_EscapeBehavior): clean
			return 0;
		}
	}

	[Token(Token = "0x17000C64")]
	public virtual bool PlayEscapeSound
	{
		[Token(Token = "0x60048A3")]
		[Address(RVA = "0x5BB5EB0", Offset = "0x5BB4EB0", VA = "0x5BB5EB0", Slot = "56")]
		get
		{
			// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$get_PlayEscapeSound): clean
			bool bVar1;

			bVar1 = this.get_UseSound();
			return !bVar1;
		}
	}

	[Token(Token = "0x60048A4")]
	[Address(RVA = "0x5BB5ED0", Offset = "0x5BB4ED0", VA = "0x5BB5ED0", Slot = "57")]
	public virtual bool DismissFromEscape()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$DismissFromEscape): clean
		int iVar1;

		iVar1 = this.get_EscapeBehavior();
		if (iVar1 == 0) {
			this.Hide();
		}
		iVar1 = this.get_EscapeBehavior();
		return iVar1 != 3;
	}

	[Token(Token = "0x60048A5")]
	[Address(RVA = "0x5BB5F20", Offset = "0x5BB4F20", VA = "0x5BB5F20", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$Show): 6 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		GameObject __this_00;
		Transform __this_01;
		BasePopup.d__36<TweenIn>* ppUVar3;
		object __this_02;

		if (this.IsActive != false) {
			return;
		}
		this.IsActive = true;
		bVar1 = this.get_UseSound();
		if (bVar1) {
			UIManager.PlaySound(0);
		}
		__this_00 = this.gameObject;
		if (__this_00 == null) {
	label_05cb60f0: ;
			throw new NullReferenceException();
		}
		__this_00.SetActive(true);
		bVar1 = this.get_ShowOnTop();
		if (bVar1) {
			__this_01 = this.transform;
			if (__this_01 == null) goto label_05cb60f0;
			__this_01.SetAsLastSibling();
		}
		this.StopAllCoroutines();
		iVar2 = this.get_PopupAnimationType();
		if (iVar2 == 2) {
			ppUVar3 = &typeof(BasePopup.d__36<TweenIn>);
		}
		else {
			iVar2 = this.get_PopupAnimationType();
			if (iVar2 == 1) {
				ppUVar3 = (BasePopup.d__36<TweenIn>*)&typeof(BasePopup.d__44<FadeIn>);
			}
			else {
				iVar2 = this.get_PopupAnimationType();
				if (iVar2 != 3) {
					return;
				}
				ppUVar3 = (BasePopup.d__36<TweenIn>*)&typeof(BasePopup.d__42<KillPopupIn>);
			}
		}
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)*ppUVar3);
		__this_02 = new Object();
		*(uint)&__this_02[1].klass = 0;
		__this_02[2].klass = (Il2CppClass)this;
		this.StartCoroutine((IEnumerator)__this_02);
		return;
	}

	[Token(Token = "0x60048A6")]
	[Address(RVA = "0x5BB6250", Offset = "0x5BB5250", VA = "0x5BB6250")]
	public void ShowImmediate()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$ShowImmediate): clean
		bool bVar2;
		int iVar3;
		GameObject __this_00;
		Transform pUVar4;
		CanvasGroup __this_01;
		float fVar5;

		if (this.IsActive != false) {
			return;
		}
		this.IsActive = true;
		bVar2 = this.get_UseSound();
		if (bVar2) {
			UIManager.PlaySound(0);
		}
		__this_00 = this.gameObject;
		if (__this_00 != null) {
			__this_00.SetActive(true);
			bVar2 = this.get_ShowOnTop();
			if (bVar2) {
				pUVar4 = this.transform;
				if (pUVar4 == null) goto label_05cb63e3;
				pUVar4.SetAsLastSibling();
			}
			this.StopAllCoroutines();
			iVar3 = this.get_PopupAnimationType();
			if (iVar3 == 2) {
				fVar5 = this.get_MaxTweenScale();
				this.SetTransformScale(fVar5);
				return;
			}
			iVar3 = this.get_PopupAnimationType();
			if (iVar3 != 1) {
				return;
			}
			fVar5 = this.get_MaxFadeAlpha();
			pUVar4 = this.transform;
			if ((pUVar4 != null) &&(__this_01 = pUVar4.GetComponent<CanvasGroup>(), __this_01 != null)) {
				__this_01.alpha = fVar5;
				return;
			}
		}
	label_05cb63e3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048A7")]
	[Address(RVA = "0x5BB66F0", Offset = "0x5BB56F0", VA = "0x5BB66F0", Slot = "26")]
	protected override void HideAllPopups()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$HideAllPopups): 3 lines keep C-only constructs
		List<BasePopup> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		__this_00 = this._popups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar1 = SStack_38.MoveNext();
			if (!bVar1) {
				SStack_38.Dispose();
				return;
			}
			if (SStack_38._current == null) break;
			(*(SStack_38._current).klass.vtable[0x3a].methodPtr)(SStack_38._current,(SStack_38._current).klass.vtable[0x3a].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048A8")]
	[Address(RVA = "0x5BB6830", Offset = "0x5BB5830", VA = "0x5BB6830", Slot = "22")]
	public override void Hide()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$Hide): 6 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		BasePopup.d__37<TweenOut>* ppUVar3;
		object __this_00;

		if (this.IsActive == false) {
			return;
		}
		this.IsActive = false;
		this.HideTooltips();
		bVar1 = this.get_UseSound();
		if (bVar1) {
			UIManager.PlaySound(1);
		}
		this.HideAllPopups();
		this.StopAllCoroutines();
		iVar2 = this.get_PopupAnimationType();
		if (iVar2 == 2) {
			ppUVar3 = &typeof(BasePopup.d__37<TweenOut>);
		}
		else {
			iVar2 = this.get_PopupAnimationType();
			if (iVar2 == 1) {
				ppUVar3 = (BasePopup.d__37<TweenOut>*)&typeof(BasePopup.d__45<FadeOut>);
			}
			else {
				iVar2 = this.get_PopupAnimationType();
				if (iVar2 != 3) {
					iVar2 = this.get_PopupAnimationType();
					if (iVar2 == 0) {
						this.FinishHide();
						return;
					}
					return;
				}
				ppUVar3 = (BasePopup.d__37<TweenOut>*)&typeof(BasePopup.d__43<KillPopupOut>);
			}
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)*ppUVar3);
		__this_00 = new Object();
		*(uint)&__this_00[1].klass = 0;
		__this_00[2].klass = (Il2CppClass)this;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x60048A9")]
	[Address(RVA = "0x5BB6C10", Offset = "0x5BB5C10", VA = "0x5BB6C10", Slot = "58")]
	public virtual void HideImmediate()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$HideImmediate): clean
		bool bVar1;
		GameObject __this_00;

		this.IsActive = false;
		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.activeSelf;
		if (bVar1) {
			this.HideTooltips();
			this.HideAllPopups();
			this.StopAllCoroutines();
			this.FinishHide();
			return;
		}
		return;
	}

	[Token(Token = "0x60048AA")]
	[Address(RVA = "0x5BB6C80", Offset = "0x5BB5C80", VA = "0x5BB6C80", Slot = "59")]
	protected virtual void OnDisable()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$OnDisable): clean
		this.IsActive = false;
		this.HideTooltips();
		return;
	}

	[Token(Token = "0x60048AB")]
	[Address(RVA = "0x5BB6A00", Offset = "0x5BB5A00", VA = "0x5BB6A00")]
	private void HideTooltips()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$HideTooltips): 1 lines keep C-only constructs
		byte bVar1;
		Transform pUVar2;

		if (this != null) {
			bVar1 = (typeof(TooltipPopup)._2).typeHierarchyDepth;
			if ((bVar1 <= (this.klass._2).typeHierarchyDepth) &&((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(TooltipPopup))) {
				return;
			}
		}
		pUVar2 = this.transform;
		TooltipPopup.HideWithin(pUVar2);
		pUVar2 = this.transform;
		GisketchTooltipTrigger.HideWithin(pUVar2);
		return;
	}

	[Token(Token = "0x60048AC")]
	[Address(RVA = "0x5BB6E50", Offset = "0x5BB5E50", VA = "0x5BB6E50", Slot = "60")]
	protected virtual void FinishHide()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$FinishHide): clean
		GameObject __this_00;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(false);
		return;
	}

	[Token(Token = "0x60048AD")]
	[Address(RVA = "0x5BB6100", Offset = "0x5BB5100", VA = "0x5BB6100")]
	[IteratorStateMachine(typeof(_003CTweenIn_003Ed__36))]
	protected IEnumerator TweenIn()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$TweenIn): clean
		BasePopup.d__36<TweenIn> __this_00;

		__this_00 = new BasePopup.d__36<TweenIn>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60048AE")]
	[Address(RVA = "0x5BB6AC0", Offset = "0x5BB5AC0", VA = "0x5BB6AC0")]
	[IteratorStateMachine(typeof(_003CTweenOut_003Ed__37))]
	protected IEnumerator TweenOut()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$TweenOut): clean
		BasePopup.d__37<TweenOut> __this_00;

		__this_00 = new BasePopup.d__37<TweenOut>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60048AF")]
	[Address(RVA = "0x5BB6EB0", Offset = "0x5BB5EB0", VA = "0x5BB6EB0")]
	protected float EvaluateKeyframes(float timePercentage, List<AnimationKeyframe> keyframes)
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$EvaluateKeyframes): 18 lines keep C-only constructs
		BasePopup.AnimationKeyframe UVar1;
		bool bVar2;
		float fVar3;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float local_78;
		float fStack_74;
		byte[] local_68 = new byte[32];
		System_Collections_Generic_List_Enumerator_T__o local_48;
		System_Collections_Generic_List_Enumerator_T__o local_20;

		if (Il2CppMethodInitialized_07547ad1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_get_Current) ;
			Il2CppMethodInitialized_07547ad1 = true;
		}
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if ((keyframes == null) ||(keyframes._size == 0)) {
			fVar3 = this.get_MinTweenScale();
			return fVar3;
		}
		UVar1 = keyframes.get_Item(0);
		local_68._8_4_ = extraout_XMM0_Dc;
		local_68._0_4_ = UVar1.time;
		local_68._4_4_ = UVar1.scale;
		local_68._12_4_ = extraout_XMM0_Dd;
		UVar1 = keyframes.get_Item(keyframes._size + -1);
		local_48 = keyframes.GetEnumerator();
		local_20 = &local_48;
		do {
			while(true) {
				bVar2 = local_48.MoveNext();
				if (!bVar2) {
					local_78 = UVar1.time;
					fStack_74 = UVar1.scale;
					goto label_05cb6ff7;
				}
				local_78 = SUB84(local_48._current, 0);
				fStack_74 = (float)((ulong)local_48._current >> 0x20);
				if ((timePercentage <= local_78) || (local_78 <= (float)local_68._0_4_)) break;
				local_68._8_8_ = 0;
				local_68._0_8_ = local_48._current;
			}
		} while (local_78 < timePercentage);
	label_05cb6ff7: ;
		local_48.Dispose();
		local_78 = local_78 - (float)local_68._0_4_;
		if ((local_78 != 0.0) || (NAN(local_78))) {
			local_78 = (timePercentage - (float)local_68._0_4_) / local_78;
			fVar3 = 1.0;
			if (local_78 <= 1.0) {
				fVar3 = local_78;
			}
			local_68._4_4_ =(float)local_68._4_4_ +(fStack_74 - (float)local_68._4_4_) * (float)(-(uint)(0.0 <= local_78) & (uint)fVar3);
		}
		return (float)local_68._4_4_;
	}

	[Token(Token = "0x60048B0")]
	[Address(RVA = "0x5BB61E0", Offset = "0x5BB51E0", VA = "0x5BB61E0")]
	[IteratorStateMachine(typeof(_003CKillPopupIn_003Ed__42))]
	protected IEnumerator KillPopupIn()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$KillPopupIn): clean
		BasePopup.d__42<KillPopupIn> __this_00;

		__this_00 = new BasePopup.d__42<KillPopupIn>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60048B1")]
	[Address(RVA = "0x5BB6BA0", Offset = "0x5BB5BA0", VA = "0x5BB6BA0")]
	[IteratorStateMachine(typeof(_003CKillPopupOut_003Ed__43))]
	protected IEnumerator KillPopupOut()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$KillPopupOut): clean
		BasePopup.d__43<KillPopupOut> __this_00;

		__this_00 = new BasePopup.d__43<KillPopupOut>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60048B2")]
	[Address(RVA = "0x5BB6170", Offset = "0x5BB5170", VA = "0x5BB6170")]
	[IteratorStateMachine(typeof(_003CFadeIn_003Ed__44))]
	protected IEnumerator FadeIn()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$FadeIn): clean
		BasePopup.d__44<FadeIn> __this_00;

		__this_00 = new BasePopup.d__44<FadeIn>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60048B3")]
	[Address(RVA = "0x5BB6B30", Offset = "0x5BB5B30", VA = "0x5BB6B30")]
	[IteratorStateMachine(typeof(_003CFadeOut_003Ed__45))]
	protected IEnumerator FadeOut()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$FadeOut): clean
		BasePopup.d__45<FadeOut> __this_00;

		__this_00 = new BasePopup.d__45<FadeOut>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60048B4")]
	[Address(RVA = "0x5BB63F0", Offset = "0x5BB53F0", VA = "0x5BB63F0")]
	protected void SetTransformScale(float scale)
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$SetTransformScale): 6 lines keep C-only constructs
		HashSet<object> __this_00;
		object __this_01;
		bool bVar1;
		Transform pUVar2;
		IgnoreScaler pUVar3;
		float fVar4;
		Vector3 value;
		Vector3 value_00;
		byte[] local_60 = new byte[16];
		Transform local_50;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			pUVar3 = pUVar2.GetComponent<IgnoreScaler>();
			bVar1 = ((Object)pUVar3 != null);
			pUVar2 = this.transform;
			if (bVar1) {
				if ((pUVar3 == null) || (pUVar2 == null)) goto label_05cb6613;
				fVar4 = pUVar3.Scale * scale;
			}
			else {
				fVar4 = scale;
				if (pUVar2 == null) goto label_05cb6613;
			}
			value.y = fVar4;
			value.x = fVar4;
			value.z = fVar4;
			pUVar2.localScale = value;
			__this_00 = (HashSet<object>)this._staticTransforms;
			if (__this_00 != null) {
				local_60.GetEnumerator(__this_00);
				local_48._current = (object)local_50;
				local_48._set = (HashSet<T>)local_60._0_8_;
				local_48._index = local_60._8_4_;
				local_48._version = local_60._12_4_;
				local_60._0_8_ = null;
				local_60._8_8_ = &local_48;
				if (scale <= 0.1) {
					scale = 0.1;
				}
				while(true) {
					bVar1 = local_48.MoveNext();
					__this_01 = local_48._current;
					if (!bVar1) {
						local_48.Dispose();
						return;
					}
					if ((Transform)local_48._current == null) break;
					pUVar3 = local_48._current.GetComponent<IgnoreScaler>();
					bVar1 = ((Object)pUVar3 != null);
					fVar4 = 1.0;
					if (bVar1) {
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						fVar4 = pUVar3.Scale;
					}
					value_00.z = fVar4 / scale;
					value_00.y = value_00.z;
					value_00.x = value_00.z;
					__this_01.localScale = value_00 ;
				}
				throw new NullReferenceException();
			}
		}
	label_05cb6613: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048B5")]
	[Address(RVA = "0x5BB6680", Offset = "0x5BB5680", VA = "0x5BB6680")]
	protected void SetTransformAlpha(float alpha)
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$SetTransformAlpha): clean
		Transform __this_00;
		CanvasGroup __this_01;

		__this_00 = this.transform;
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<CanvasGroup>();
			if (__this_01 != null) {
				__this_01.alpha = alpha;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60048B6")]
	[Address(RVA = "0x5BB7150", Offset = "0x5BB6150", VA = "0x5BB7150")]
	private Vector3 GetVectorFromScale(float scale)
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$GetVectorFromScale): clean
		Vector3 UVar1;

		UVar1.y = scale;
		UVar1.x = scale;
		UVar1.z = scale;
		return (Vector3)UVar1;
	}

	[Token(Token = "0x60048B7")]
	[Address(RVA = "0x5BB7160", Offset = "0x5BB6160", VA = "0x5BB7160", Slot = "61")]
	protected virtual float GetAnimationSpeed(float min, float max)
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$GetAnimationSpeed): clean
		float fVar1;

		fVar1 = this.get_AnimationTime();
		return (max - min) / fVar1;
	}

	[Token(Token = "0x60048B8")]
	[Address(RVA = "0x5BB7190", Offset = "0x5BB6190", VA = "0x5BB7190")]
	public BasePopup()
	{
		// Lifted from source/cpp/UI/BasePopup.c (UI.BasePopup$$.ctor): 38 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		BasePopup.AnimationKeyframe[] pUVar3;
		HashSet<Transform> __this_00;
		List<BasePopup.AnimationKeyframe> pSVar4;
		MethodInfo pMVar5;

		__this_00 = new HashSet<Transform>();
		this._staticTransforms = __this_00;
		pSVar4 = new List<BasePopup.AnimationKeyframe>();
		pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			pUVar3 = pSVar4._items;
			if (pUVar3 != null) {
				uVar2 = pSVar4._size;
				if (uVar2 < (uint)pUVar3.Length) {
					pSVar4._size = uVar2 + 1;
					pUVar3[(int)uVar2].time = 0.0;
					pUVar3[(int)uVar2].scale = 0.0;
				}
				else {
					pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x0);
				}
				pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = pSVar4._items;
				if (pUVar3 != null) {
					uVar2 = pSVar4._size;
					if (uVar2 < (uint)pUVar3.Length) {
						pSVar4._size = uVar2 + 1;
						pUVar3[(int)uVar2].time = 0.15;
						pUVar3[(int)uVar2].scale = 1.3;
					}
					else {
						pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3fa666663e19999a);
					}
					pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = pSVar4._items;
					if (pUVar3 != null) {
						uVar2 = pSVar4._size;
						if (uVar2 < (uint)pUVar3.Length) {
							pSVar4._size = uVar2 + 1;
							pUVar3[(int)uVar2].time = 0.3;
							pUVar3[(int)uVar2].scale = 0.8;
						}
						else {
							pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f4ccccd3e99999a);
						}
						pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = pSVar4._items;
						if (pUVar3 != null) {
							uVar2 = pSVar4._size;
							if (uVar2 < (uint)pUVar3.Length) {
								pSVar4._size = uVar2 + 1;
								pUVar3[(int)uVar2].time = 0.45;
								pUVar3[(int)uVar2].scale = 1.1;
							}
							else {
								pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f8ccccd3ee66666);
							}
							pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
							piVar1 = &pSVar4._version;
							*piVar1 = *piVar1 + 1;
							pUVar3 = pSVar4._items;
							if (pUVar3 != null) {
								uVar2 = pSVar4._size;
								if (uVar2 < (uint)pUVar3.Length) {
									pSVar4._size = uVar2 + 1;
									pUVar3[(int)uVar2].time = 0.6;
									pUVar3[(int)uVar2].scale = 0.95;
								}
								else {
									pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f7333333f19999a);
								}
								pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pUVar3 = pSVar4._items;
								if (pUVar3 != null) {
									uVar2 = pSVar4._size;
									if (uVar2 < (uint)pUVar3.Length) {
										pSVar4._size = uVar2 + 1;
										pUVar3[(int)uVar2].time = 0.75;
										pUVar3[(int)uVar2].scale = 1.05;
									}
									else {
										pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f8666663f400000);
									}
									pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
									piVar1 = &pSVar4._version;
									*piVar1 = *piVar1 + 1;
									pUVar3 = pSVar4._items;
									if (pUVar3 != null) {
										uVar2 = pSVar4._size;
										if (uVar2 < (uint)pUVar3.Length) {
											pSVar4._size = uVar2 + 1;
											pUVar3[(int)uVar2].time = 1.0;
											pUVar3[(int)uVar2].scale = 1.0;
										}
										else {
											pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f8000003f800000);
										}
										this.killPopupKeyframesIn = pSVar4;
										pSVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<BasePopup.AnimationKeyframe>));
										pSVar4 = new List<BasePopup.AnimationKeyframe>();
										pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
										if (pSVar4 != null) {
											piVar1 = &pSVar4._version;
											*piVar1 = *piVar1 + 1;
											pUVar3 = pSVar4._items;
											if (pUVar3 != null) {
												uVar2 = pSVar4._size;
												if (uVar2 < (uint)pUVar3.Length) {
													pSVar4._size = uVar2 + 1;
													pUVar3[(int)uVar2].time = 0.0;
													pUVar3[(int)uVar2].scale = 0.0;
												}
												else {
													pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x0);
												}
												pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
												piVar1 = &pSVar4._version;
												*piVar1 = *piVar1 + 1;
												pUVar3 = pSVar4._items;
												if (pUVar3 != null) {
													uVar2 = pSVar4._size;
													if (uVar2 < (uint)pUVar3.Length) {
														pSVar4._size = uVar2 + 1;
														pUVar3[(int)uVar2].time = 0.6;
														pUVar3[(int)uVar2].scale = 0.0;
													}
													else {
														pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f19999a);
													}
													pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
													piVar1 = &pSVar4._version;
													*piVar1 = *piVar1 + 1;
													pUVar3 = pSVar4._items;
													if (pUVar3 != null) {
														uVar2 = pSVar4._size;
														if (uVar2 < (uint)pUVar3.Length) {
															pSVar4._size = uVar2 + 1;
															pUVar3[(int)uVar2].time = 0.7;
															pUVar3[(int)uVar2].scale = 0.85;
														}
														else {
															pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f59999a3f333333);
														}
														pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
														piVar1 = &pSVar4._version;
														*piVar1 = *piVar1 + 1;
														pUVar3 = pSVar4._items;
														if (pUVar3 != null) {
															uVar2 = pSVar4._size;
															if (uVar2 < (uint)pUVar3.Length) {
																pSVar4._size = uVar2 + 1;
																pUVar3[(int)uVar2].time = 0.85;
																pUVar3[(int)uVar2].scale = 0.8;
															}
															else {
																pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f4ccccd3f59999a);
															}
															pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
															piVar1 = &pSVar4._version;
															*piVar1 = *piVar1 + 1;
															pUVar3 = pSVar4._items;
															if (pUVar3 != null) {
																uVar2 = pSVar4._size;
																if (uVar2 < (uint)pUVar3.Length) {
																	pSVar4._size = uVar2 + 1;
																	pUVar3[(int)uVar2].time = 1.0;
																	pUVar3[(int)uVar2].scale = 1.0;
																}
																else {
																	pSVar4.AddWithResize((BasePopup.AnimationKeyframe)0x3f8000003f800000);
																}
																this.killPopupKeyframesOut = pSVar4;
																pMVar5 = (MethodInfo)il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Button>));
																pMVar5 = new Dictionary<object, object>();
																this._topButtons =(Dictionary<string, Button>)pMVar5;
																base();
																return;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
