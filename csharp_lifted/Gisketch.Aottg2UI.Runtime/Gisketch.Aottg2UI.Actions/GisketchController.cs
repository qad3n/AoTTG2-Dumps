// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DC")]
public class GisketchController : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GisketchUIRoot _root;

	[Token(Token = "0x170000A9")]
	protected GisketchUIRoot Root
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x529EE90", Offset = "0x529DE90", VA = "0x529EE90")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$get_Root): clean
			GisketchUIRoot x;
			bool bVar1;
			GisketchUIRoot pGVar2;

			x = this._root;
			bVar1 = ((Object)x != null);
			if (bVar1) {
			}
			return pGVar2;
		}
	}

	[Token(Token = "0x170000AA")]
	protected GisketchUIState State
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x529EEF0", Offset = "0x529DEF0", VA = "0x529EEF0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$get_State): clean
			GisketchUIRoot pGVar1;
			bool bVar2;
			GisketchUIState pGVar3;

			pGVar1 = this._root;
			bVar2 = ((Object)pGVar1 != null);
			if (bVar2) {
				pGVar1 = this._root;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
			}
			return pGVar3;
		}
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x529EF60", Offset = "0x529DF60", VA = "0x529EF60", Slot = "5")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$Awake): clean
		bool bVar1;
		GisketchUIRoot pGVar2;

		pGVar2 = this._root;
		bVar1 = ((Object)pGVar2 == null);
		if (bVar1) {
			pGVar2 = this.GetComponent<GisketchUIRoot>();
			this._root = pGVar2;
			return;
		}
		return;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x529EFF0", Offset = "0x529DFF0", VA = "0x529EFF0", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$HandleAction): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		String message;
		object local_20;

		local_20 = null;
		bVar1 = String.IsNullOrEmpty(actionId);
		if (bVar1) {
	label_0539f0a0: ;
			message = String.Concat("Unhandled Gisketch action: ", actionId);
			Debug.LogWarning((object)message, (Object)context.GameObject);
			return;
		}
		__this_00 = (Dictionary<object, object>)this._actions;
		if (__this_00 != null) {
			bVar1 = __this_00.TryGetValue((object)actionId, ref local_20);
			if (!bVar1) goto label_0539f0a0;
			if (local_20 != null) {
				(*local_20[1].monitor)(local_20[4].klass,local_20[2].monitor);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x529F0F0", Offset = "0x529E0F0", VA = "0x529F0F0")]
	protected void RegisterAction(string actionId, Action<GisketchActionContext> action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$RegisterAction): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07542b9a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_set_Item) ;
			Il2CppMethodInitialized_07542b9a = true;
		}
		bVar1 = String.IsNullOrEmpty(actionId);
		if ((action == null) || (bVar1)) {
			return;
		}
		__this_00 = (Dictionary<object, object>)this._actions;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)actionId, (object)action);
		return;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x529F160", Offset = "0x529E160", VA = "0x529F160")]
	protected bool TryBeginOperation(string operationKey, string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$TryBeginOperation): clean
		GisketchUIRoot pGVar1;
		bool bVar2;
		GisketchUIState state;

		pGVar1 = this._root;
		state = null;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			state = pGVar1._State_k__BackingField;
		}
		bVar2 = GisketchUIOperationState.TryBegin(state, operationKey, message);
		return bVar2;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x529F1F0", Offset = "0x529E1F0", VA = "0x529F1F0")]
	protected void EndOperation(string operationKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$EndOperation): clean
		GisketchUIRoot pGVar1;
		bool bVar2;
		GisketchUIState state;

		pGVar1 = this._root;
		state = null;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			state = pGVar1._State_k__BackingField;
		}
		GisketchUIOperationState.End(state, operationKey);
		return;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x529F280", Offset = "0x529E280", VA = "0x529F280")]
	protected bool IsOperationActive(string operationKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$IsOperationActive): clean
		GisketchUIRoot pGVar1;
		bool bVar2;
		GisketchUIState state;

		pGVar1 = this._root;
		state = null;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			state = pGVar1._State_k__BackingField;
		}
		bVar2 = GisketchUIOperationState.IsBusy(state, operationKey);
		return bVar2;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x529F310", Offset = "0x529E310", VA = "0x529F310")]
	public GisketchController()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c (Gisketch.Aottg2UI.Actions.GisketchController$$.ctor): 2 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, Action<GisketchActionContext>> __this_00;

		if (Il2CppMethodInitialized_07542b9b == false) {
			Il2CppMethodInitialized_07542b9b = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Action<GisketchActionContext>>));
		__this_00 = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._actions = __this_00;
		base();
		return;
	}
}
