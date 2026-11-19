// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DD")]
internal sealed class GisketchDebouncedInputAction : MonoBehaviour
{
	[Token(Token = "0x20000DE")]
	[CompilerGenerated]
	private sealed class _003CInvokeLater_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000486")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000487")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000488")]
		[FieldOffset(Offset = "0x20")]
		public GisketchDebouncedInputAction _003C_003E4__this;

		[Token(Token = "0x170000AB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60006E4")]
			[Address(RVA = "0x529FBF0", Offset = "0x529EBF0", VA = "0x529FBF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000AC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006E6")]
			[Address(RVA = "0x529FC40", Offset = "0x529EC40", VA = "0x529FC40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x529F760", Offset = "0x529E760", VA = "0x529F760")]
		[DebuggerHidden]
		public _003CInvokeLater_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x529FB00", Offset = "0x529EB00", VA = "0x529FB00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x529FB10", Offset = "0x529EB10", VA = "0x529FB10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$MoveNext): clean
			float time;
			int iVar1;
			GisketchDebouncedInputAction __this_00;
			WaitForSecondsRealtime __this_01;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_0539fbea;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) {
		label_0539fbea: ;
					throw new NullReferenceException();
				}
				time = __this_00._delay;
				if (0.0 < time) {
					__this_01 = new WaitForSecondsRealtime(time);
					this.__2__current = (object)__this_01;
					this.__1__state = 1;
					return true;
				}
			}
			__this_00._pending = null;
			__this_00.Dispatch(__this_00._actionId);
			return false;
		}

		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x529FC00", Offset = "0x529EC00", VA = "0x529FC00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction.<InvokeLater>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_InvokeLater_d__10_System_Collections_IEnu);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x38")]
	private string _actionId;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x40")]
	private string _commitActionId;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x48")]
	private float _delay;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x50")]
	private Coroutine _pending;

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x529F430", Offset = "0x529E430", VA = "0x529F430")]
	public void Setup(TMP_InputField input, IGisketchActionHandler actions, GisketchNodeDefinition node, float delay)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Setup): 8 lines keep C-only constructs
		TMP_InputField* targetAddress;
		TMP_InputField x;
		TMP_InputField.OnChangeEvent __this_00;
		TMP_InputField.SubmitEvent __this_01;
		bool bVar1;
		UnityAction<T0> pUVar2;
		String pSVar3;
		float fVar4;

		targetAddress = &this._input;
		this._input = input;
		this._actions = actions;
		this._node = node;
		if (node == null) {
			this._actionId = null;
			pSVar3 = null;
		}
		else {
			if (this == null) goto label_0539f614;
			this._actionId = node.action;
			pSVar3 = node.commitAction;
		}
		this._commitActionId = pSVar3;
		fVar4 = 0.0;
		if (0.0 <= delay) {
			fVar4 = delay;
		}
		this._delay = fVar4;
		x = this._input;
		bVar1 = ((Object)x != null);
		if (!bVar1) {
			return;
		}
		if (*targetAddress != null) {
			__this_00 = ((*targetAddress).fields).m_OnValueChanged;
			pUVar2 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged);
			if (__this_00 != null) {
				__this_00.AddListener(pUVar2);
				if (*targetAddress != null) {
					__this_01 = ((*targetAddress).fields).m_OnEndEdit;
					pUVar2 = new UnityAction<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted);
					if (__this_01 != null) {
						__this_01.AddListener(pUVar2);
						return;
					}
				}
			}
		}
	label_0539f614: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x529F620", Offset = "0x529E620", VA = "0x529F620")]
	private void OnInputChanged(string _)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputChanged): clean
		this.Schedule();
		return;
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x529F630", Offset = "0x529E630", VA = "0x529F630")]
	private void Schedule()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Schedule): 1 lines keep C-only constructs
		bool bVar1;
		GisketchDebouncedInputAction.d__10<InvokeLater> __this_00;
		Coroutine pUVar2;

		bVar1 = String.IsNullOrEmpty(this._actionId);
		if ((bVar1) || (this._actions == null)) {
			return;
		}
		pUVar2 = this._pending;
		if (pUVar2 != null) {
			this.StopCoroutine(pUVar2);
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchDebouncedInputAction.d__10<InvokeLater>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		pUVar2 = this.StartCoroutine((IEnumerator)__this_00);
		this._pending = pUVar2;
		return;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x529F6F0", Offset = "0x529E6F0", VA = "0x529F6F0")]
	[IteratorStateMachine(typeof(_003CInvokeLater_003Ed__10))]
	private IEnumerator InvokeLater()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$InvokeLater): 1 lines keep C-only constructs
		GisketchDebouncedInputAction.d__10<InvokeLater> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchDebouncedInputAction.d__10<InvokeLater>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x529F780", Offset = "0x529E780", VA = "0x529F780")]
	private void OnInputCommitted(string _)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnInputCommitted): 1 lines keep C-only constructs
		Coroutine routine;
		bool bVar1;

		routine = this._pending;
		if (routine != null) {
			this.StopCoroutine(routine);
			this._pending = null;
		}
		bVar1 = String.IsNullOrEmpty(this._commitActionId);
		this.Dispatch((&this._actionId)[!bVar1]);
		return;
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x529F7E0", Offset = "0x529E7E0", VA = "0x529F7E0")]
	private void Dispatch(string actionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$Dispatch): 3 lines keep C-only constructs
		TMP_InputField pTVar1;
		GisketchNodeDefinition pGVar2;
		GisketchActionContext context;
		bool bVar5;
		String elementId;
		GameObject gameObject;
		object obj;
		GisketchActionContext local_68;
		String local_48;
		GameObject pUStack_40;
		GisketchNodeDefinition local_38;
		int iStack_30;
		uint uStack_2c;

		bVar5 = String.IsNullOrEmpty(actionId);
		if (bVar5) {
			return;
		}
		obj = (object)this._actions;
		if (obj == null) {
			return;
		}
		if (this._node == null) {
	label_0539f8ac: ;
			elementId = this.name;
		}
		else {
			pTVar1 = this._input;
			bVar5 = ((Object)pTVar1 != null);
			if (bVar5) {
				pTVar1 = this._input;
				if ((pTVar1 == null) ||(pGVar2 = this._node, pGVar2 == null)) goto label_0539f988;
				pGVar2.value = pTVar1.m_Text;
			}
			obj = (object)this._actions;
			pGVar2 = this._node;
			if (pGVar2 == null) goto label_0539f8ac;
			elementId = pGVar2.id;
		}
		gameObject = this.gameObject;
		local_68.Node = null;
		local_68.InputSource = 0;
		local_68._28_4_ = 0;
		local_68.ElementId = null;
		local_68.GameObject = null;
		local_68 = new GisketchActionContext(elementId, gameObject, this._node);
		if (obj != null) {
			local_38 = local_68.Node;
			iStack_30 = local_68.InputSource;
			uStack_2c = local_68._28_4_;
			local_48 = local_68.ElementId;
			pUStack_40 = local_68.GameObject;
			context.GameObject = pUStack_40;
			context.ElementId = local_48;
			context.Node = local_38;
			context.InputSource = iStack_30;
			context._28_4_ = uStack_2c;
			obj.HandleAction(actionId, context);
			return;
		}
	label_0539f988: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x529F990", Offset = "0x529E990", VA = "0x529F990")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$OnDestroy): 2 lines keep C-only constructs
		Coroutine routine;
		TMP_InputField pTVar1;
		TMP_InputField.OnChangeEvent __this_00;
		TMP_InputField.SubmitEvent __this_01;
		bool bVar2;
		UnityAction<T0> pUVar3;

		routine = this._pending;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		pTVar1 = this._input;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._input;
			if (pTVar1 != null) {
				__this_00 = pTVar1.m_OnValueChanged;
				pUVar3 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputChanged);
				if (__this_00 != null) {
					__this_00.RemoveListener(pUVar3);
					pTVar1 = this._input;
					if (pTVar1 != null) {
						__this_01 = pTVar1.m_OnEndEdit;
						pUVar3 = new UnityAction<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_OnInputCommitted);
						if (__this_01 != null) {
							__this_01.RemoveListener(pUVar3);
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x529FAF0", Offset = "0x529EAF0", VA = "0x529FAF0")]
	public GisketchDebouncedInputAction()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c (Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction$$.ctor): clean
		base();
		return;
	}
}
