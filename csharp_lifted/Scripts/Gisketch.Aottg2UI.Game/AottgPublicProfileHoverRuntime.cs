// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers.PublicProfiles;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000332")]
internal sealed class AottgPublicProfileHoverRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x2000333")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass22_0
	{
		[Token(Token = "0x4001005")]
		[FieldOffset(Offset = "0x10")]
		public int version;

		[Token(Token = "0x4001006")]
		[FieldOffset(Offset = "0x18")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x6001412")]
		[Address(RVA = "0x580CC80", Offset = "0x580BC80", VA = "0x580CC80")]
		public _003C_003Ec__DisplayClass22_0()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x6001413")]
		[Address(RVA = "0x580CC90", Offset = "0x580BC90", VA = "0x580CC90")]
		internal void _003CShowAfterDelay_003Eb__0(AottgPublicProfileFetchResponse response)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<>c__DisplayClass22_0$$<ShowAfterDelay>b__0): 4 lines keep C-only constructs
			AottgPublicProfileHoverRuntime pGVar1;
			MethodInfo pMVar2;
			bool bVar3;
			GisketchUIRoot root;
			String* ppSVar4;

			pGVar1 = this.__4__this;
			if (pGVar1 == null) {
		label_0590cda0: ;
				throw new NullReferenceException();
			}
			if (this.version == pGVar1._version) {
				bVar3 = ((Object)pGVar1 == null);
				if (!bVar3) {
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						bVar3 = pGVar1.isActiveAndEnabled;
						if (!bVar3) {
							return;
						}
						pGVar1 = this.__4__this;
						if (pGVar1 != null) {
							root = pGVar1.GetComponentInParent<GisketchUIRoot>();
							if ((response == null) ||(response._Success_k__BackingField == false)) {
								pMVar2 = (MethodInfo)this.__4__this;
								if (pMVar2 != null) {
									if (response == null) {
										ppSVar4 = &"unknown_error";
									}
									else {
										ppSVar4 = &response._Error_k__BackingField;
									}
									AottgPublicProfileHoverState.ShowError(root, (String)pMVar2.klass, *ppSVar4);
									return;
								}
							}
							else {
								pMVar2 = (MethodInfo)this.__4__this;
								if (pMVar2 != null) {
									AottgPublicProfileHoverState.ShowReady(root, (String)pMVar2.klass, response._Profile_k__BackingField);
									return;
								}
							}
						}
					}
					goto label_0590cda0;
				}
			}
			return;
		}
	}

	[Token(Token = "0x2000334")]
	[CompilerGenerated]
	private sealed class _003CCloseAfterGrace_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001007")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001008")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001009")]
		[FieldOffset(Offset = "0x20")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x17000230")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001417")]
			[Address(RVA = "0x580D3C0", Offset = "0x580C3C0", VA = "0x580D3C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000231")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001419")]
			[Address(RVA = "0x580D410", Offset = "0x580C410", VA = "0x580D410", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001414")]
		[Address(RVA = "0x580CAE0", Offset = "0x580BAE0", VA = "0x580CAE0")]
		[DebuggerHidden]
		public _003CCloseAfterGrace_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001415")]
		[Address(RVA = "0x580D2F0", Offset = "0x580C2F0", VA = "0x580D2F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001416")]
		[Address(RVA = "0x580D300", Offset = "0x580C300", VA = "0x580D300", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$MoveNext): clean
			int iVar1;
			AottgPublicProfileHoverRuntime __this_00;
			WaitForSecondsRealtime __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_01 = new WaitForSecondsRealtime(0.18);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00._pendingClose = null;
				if ((__this_00._anchorHover == false) && (__this_00._cardHover == false)) {
					__this_00.CloseNow();
				}
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6001418")]
		[Address(RVA = "0x580D3D0", Offset = "0x580C3D0", VA = "0x580D3D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<CloseAfterGrace>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_CloseAfterGrace_d__18_System_Collections_I);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000335")]
	[CompilerGenerated]
	private sealed class _003CShowAfterDelay_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400100A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400100B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400100C")]
		[FieldOffset(Offset = "0x20")]
		public int version;

		[Token(Token = "0x400100D")]
		[FieldOffset(Offset = "0x28")]
		public AottgPublicProfileHoverRuntime _003C_003E4__this;

		[Token(Token = "0x400100E")]
		[FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass22_0 _003C_003E8__1;

		[Token(Token = "0x17000232")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600141D")]
			[Address(RVA = "0x580DB70", Offset = "0x580CB70", VA = "0x580DB70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000233")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600141F")]
			[Address(RVA = "0x580DBC0", Offset = "0x580CBC0", VA = "0x580DBC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600141A")]
		[Address(RVA = "0x580CC10", Offset = "0x580BC10", VA = "0x580CC10")]
		[DebuggerHidden]
		public _003CShowAfterDelay_003Ed__22(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600141B")]
		[Address(RVA = "0x580D420", Offset = "0x580C420", VA = "0x580D420", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600141C")]
		[Address(RVA = "0x580D430", Offset = "0x580C430", VA = "0x580D430", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$MoveNext): 2 lines keep C-only constructs
			int iVar1;
			AottgPublicProfileHoverRuntime x;
			String pSVar2;
			bool bVar3;
			GisketchUIRoot root;
			GameObject anchor;
			Object x_00;
			AottgPublicProfileHoverCardRuntime x_01;
			Action<AottgPublicProfileFetchResponse> __this_00;
			AottgPublicProfileHoverRuntime.c__DisplayClass22_0 pGVar4;
			WaitForSecondsRealtime __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				pGVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileHoverRuntime.c__DisplayClass22_0));
				pGVar4 = new Object();
				this.__8__1 = pGVar4;
				pGVar4 = this.__8__1;
				if (pGVar4 == null) goto label_0590d712;
				pGVar4.version = this.version;
				pGVar4.__4__this = this.__4__this;
				__this_01 = new WaitForSecondsRealtime(0.2);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				x = this.__4__this;
				this.__1__state = -1;
				if (x != null) {
					x._pending = null;
					pGVar4 = this.__8__1;
					if (pGVar4 != null) {
						if (pGVar4.version == x._version) {
							bVar3 = ((Object)x == null);
							if (!bVar3) {
								bVar3 = x.isActiveAndEnabled;
								if (bVar3) {
									root = x.GetComponentInParent<GisketchUIRoot>();
									pSVar2 = x._accountId;
									anchor = x.gameObject;
									x_00 = (Object)AottgPublicProfileHoverState.ShowLoading(root, pSVar2, anchor);
									bVar3 = (x_00 != null);
									if (bVar3) {
										if (x_00 == null) goto label_0590d712;
										x_01 = x_00.GetComponent<AottgPublicProfileHoverCardRuntime>();
										bVar3 = ((Object)x_01 == null) ;
										if (bVar3) {
											x_01 = x_00.AddComponent<AottgPublicProfileHoverCardRuntime>();
										}
										if (x_01 == null) goto label_0590d712;
										x_01._owner = x;
									}
									bVar3 = (x_00 != null);
									x._open = bVar3;
									pSVar2 = x._accountId;
									pGVar4 = this.__8__1;
									__this_00 = new Action<AottgPublicProfileFetchResponse>((object)pGVar4, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_c__DisplayClass22_0_ShowAfterDelay_b__0);
									AottgPublicProfileService.GetProfile(pSVar2, __this_00);
								}
							}
						}
						goto label_0590d6fe;
					}
				}
		label_0590d712: ;
				throw new NullReferenceException();
			}
		label_0590d6fe: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x600141E")]
		[Address(RVA = "0x580DB80", Offset = "0x580CB80", VA = "0x580DB80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime.<ShowAfterDelay>d__22$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_ShowAfterDelay_d__22_System_Collections_IE);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000FFC")]
	private const float HoverDelaySeconds = 0.2f;

	[Token(Token = "0x4000FFD")]
	private const float CloseGraceSeconds = 0.18f;

	[Token(Token = "0x4000FFE")]
	[FieldOffset(Offset = "0x20")]
	private string _accountId;

	[Token(Token = "0x4000FFF")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _pending;

	[Token(Token = "0x4001000")]
	[FieldOffset(Offset = "0x30")]
	private Coroutine _pendingClose;

	[Token(Token = "0x4001001")]
	[FieldOffset(Offset = "0x38")]
	private int _version;

	[Token(Token = "0x4001002")]
	[FieldOffset(Offset = "0x3C")]
	private bool _anchorHover;

	[Token(Token = "0x4001003")]
	[FieldOffset(Offset = "0x3D")]
	private bool _cardHover;

	[Token(Token = "0x4001004")]
	[FieldOffset(Offset = "0x3E")]
	private bool _open;

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x580C670", Offset = "0x580B670", VA = "0x580C670")]
	public void Setup(string accountId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Setup): clean
		this._accountId = accountId;
		return;
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x580C680", Offset = "0x580B680", VA = "0x580C680", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerEnter): clean
		Coroutine routine;

		this._anchorHover = true;
		routine = this._pendingClose;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		this._pendingClose = null;
		this.Begin();
		return;
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x580C7C0", Offset = "0x580B7C0", VA = "0x580C7C0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnPointerExit): clean
		this._anchorHover = false;
		this.EndOrDelay();
		return;
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x580C8A0", Offset = "0x580B8A0", VA = "0x580C8A0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnSelect): clean
		Coroutine routine;

		this._anchorHover = true;
		routine = this._pendingClose;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		this._pendingClose = null;
		this.Begin();
		return;
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x580C8F0", Offset = "0x580B8F0", VA = "0x580C8F0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDeselect): clean
		this._anchorHover = false;
		this.EndOrDelay();
		return;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x580C900", Offset = "0x580B900", VA = "0x580C900")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDisable): clean
		this.CloseNow();
		return;
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x580C9C0", Offset = "0x580B9C0", VA = "0x580C9C0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$OnDestroy): clean
		this.CloseNow();
		return;
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x580C700", Offset = "0x580B700", VA = "0x580C700")]
	private void Begin()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$Begin): 1 lines keep C-only constructs
		bool bVar1;
		AottgPublicProfileHoverRuntime.d__22<ShowAfterDelay> __this_00;
		Coroutine pUVar2;
		int iVar3;

		bVar1 = String.IsNullOrEmpty(this._accountId);
		if (((bVar1) || (this._open != false)) ||(this._pending != null)) {
			return;
		}
		iVar3 = this._version + 1;
		this._version = iVar3;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileHoverRuntime.d__22<ShowAfterDelay>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.version = iVar3;
		pUVar2 = this.StartCoroutine((IEnumerator)__this_00);
		this._pending = pUVar2;
		return;
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x580C7D0", Offset = "0x580B7D0", VA = "0x580C7D0")]
	private void EndOrDelay()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$EndOrDelay): 3 lines keep C-only constructs
		Coroutine* targetAddress;
		AottgPublicProfileHoverRuntime.d__18<CloseAfterGrace> __this_00;
		Coroutine pUVar1;

		if ((this._anchorHover == false) && (this._cardHover == false)) {
			if (this._open == false) {
				targetAddress = &this._pending;
				pUVar1 = this._pending;
				if (pUVar1 != null) {
					this.StopCoroutine(pUVar1);
				}
				*targetAddress = null;
				return;
			}
			if (this._pendingClose == null) {
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileHoverRuntime.d__18<CloseAfterGrace>));
				__this_00 = new Object();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				pUVar1 = this.StartCoroutine((IEnumerator)__this_00);
				this._pendingClose = pUVar1;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x580CA70", Offset = "0x580BA70", VA = "0x580CA70")]
	[IteratorStateMachine(typeof(_003CCloseAfterGrace_003Ed__18))]
	private IEnumerator CloseAfterGrace()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseAfterGrace): 1 lines keep C-only constructs
		AottgPublicProfileHoverRuntime.d__18<CloseAfterGrace> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileHoverRuntime.d__18<CloseAfterGrace>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x580C910", Offset = "0x580B910", VA = "0x580C910")]
	private void CloseNow()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CloseNow): 2 lines keep C-only constructs
		int piVar1;
		Coroutine pUVar2;
		GisketchUIRoot root;

		piVar1 = &this._version;
		*piVar1 = *piVar1 + 1;
		pUVar2 = this._pending;
		if (pUVar2 != null) {
			this.StopCoroutine(pUVar2);
		}
		this._pending = null;
		pUVar2 = this._pendingClose;
		if (pUVar2 != null) {
			this.StopCoroutine(pUVar2);
		}
		this._pendingClose = null;
		this._open = false;
		this._anchorHover = false;
		this._cardHover = false;
		root = this.GetComponentInParent<GisketchUIRoot>();
		AottgPublicProfileHoverState.Close(root, this._accountId);
		return;
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x580CA40", Offset = "0x580BA40", VA = "0x580CA40")]
	private void CancelPending()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelPending): 2 lines keep C-only constructs
		Coroutine* targetAddress;
		Coroutine routine;

		targetAddress = &this._pending;
		routine = this._pending;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x580C6D0", Offset = "0x580B6D0", VA = "0x580C6D0")]
	private void CancelClose()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CancelClose): 2 lines keep C-only constructs
		Coroutine* targetAddress;
		Coroutine routine;

		targetAddress = &this._pendingClose;
		routine = this._pendingClose;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x580C9D0", Offset = "0x580B9D0", VA = "0x580C9D0")]
	[IteratorStateMachine(typeof(_003CShowAfterDelay_003Ed__22))]
	private IEnumerator ShowAfterDelay(int version)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$ShowAfterDelay): 1 lines keep C-only constructs
		AottgPublicProfileHoverRuntime.d__22<ShowAfterDelay> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileHoverRuntime.d__22<ShowAfterDelay>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.version = version;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x580CC30", Offset = "0x580BC30", VA = "0x580CC30")]
	public void CardEnter()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardEnter): 2 lines keep C-only constructs
		Coroutine* targetAddress;
		Coroutine routine;

		this._cardHover = true;
		targetAddress = &this._pendingClose;
		routine = this._pendingClose;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x580CC60", Offset = "0x580BC60", VA = "0x580CC60")]
	public void CardExit()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$CardExit): clean
		this._cardHover = false;
		this.EndOrDelay();
		return;
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x580CC70", Offset = "0x580BC70", VA = "0x580CC70")]
	public AottgPublicProfileHoverRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverRuntime.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverRuntime$$.ctor): clean
		base();
		return;
	}
}
