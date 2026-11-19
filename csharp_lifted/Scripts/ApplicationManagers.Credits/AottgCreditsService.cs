// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsService.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ApplicationManagers.Api;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099F")]
public sealed class AottgCreditsService : MonoBehaviour
{
	[Token(Token = "0x20009A0")]
	private struct UnitKey
	{
		[Token(Token = "0x4003082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009A2")]
	[CompilerGenerated]
	private struct _003CFetchCreditsAsync_003Ed__6 : IAsyncStateMachine
	{
		[Token(Token = "0x4003084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4003085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4003086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete;

		[Token(Token = "0x4003087")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60059CA")]
		[Address(RVA = "0x5D24450", Offset = "0x5D23450", VA = "0x5D24450", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$MoveNext): 32 lines keep C-only constructs
			AottgApiRequest targetAddress;
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			System_Action_AottgQueryFetchResult_AottgCreditsResponse___o pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			bool bVar8;
			AottgApiClient __this_00;
			AottgApiRequest request;
			Il2CppClass pIVar9;
			VirtualInvokeData pVVar10;
			AottgApiResult pAVar11;
			AottgQueryFetchResult<TValue> pAVar12;
			ulong uVar13;
			long lVar14;
			object local_98;
			AottgApiResult pAStack_90;
			ulong local_88;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_78;
			String local_58;
			AottgCreditsResponse local_50;
			object local_48;
			AottgApiResult pAStack_40;
			short local_38;
			undefined6 uStack_36;

			local_50 = null;
			local_58 = null;
			local_98 = null;
			pAStack_90 = null;
			local_88 = 0;
			if (this.__1__state == 0) {
				pCVar5 = &this.__u__1;
				local_88._0_2_ = pCVar5.task.token;
				local_88._2_6_ = *(undefined6)&pCVar5.task.field_0x12;
				local_98 = (object)this.__u__1.task.source;
				pAStack_90 = (AottgApiResult)this.__u__1.task.result ;
				this.__u__1.task.source = null;
				this.__u__1.task.result = null;
				*(ulong)&this.__u__1.task.token = 0;
				this.__1__state = -1;
			}
			else {
				__this_00 = new AottgApiClient();
				targetAddress = &request.fields;
				request.Method = "GET";
				request.ReportNetworkError = true;
				request = new AottgApiRequest();
				targetAddress.Method = "GET";
				request.Path = "/v1/credits";
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_78 = __this_00.SendAsync(request, (CancellationToken)0x0);
				local_38 = local_78.token;
				uStack_36 = local_78._18_6_;
				local_48 = (object)local_78.source;
				pAStack_40 = local_78.result;
				local_78.source = null;
				local_78.result = null;
				local_78.token = 0;
				local_78._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass._2).bitflags1 & 1) == 0 ) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass);
				}
				local_78.token = local_38;
				local_78._18_6_ = uStack_36;
				local_78.source = (IUniTaskSource<T>)local_48;
				local_78.result = pAStack_40;
				local_88._0_2_ = local_78.token;
				local_88._2_6_ = local_78._18_6_;
				local_98 = (object)local_78.source;
				pAStack_90 = local_78.result;
				cVar7 = il2cpp_runtime_helper_045ee340(&local_98, MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
				if (cVar7 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_98;
					this.__u__1.task.result = (object)pAStack_90;
					pCVar5 = &this.__u__1;
					pCVar5.task.token = (int16_t)local_88;
					*(undefined6)&pCVar5.task.field_0x12 = local_88._2_6_;
					il2cpp_runtime_helper_0350ce70(&this.__t__builder, &local_98, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26d0);
					return;
				}
			}
			pIVar4 = local_98;
			if (local_98 == null) {
				pAVar11 = pAStack_90;
			}
			else {
				sVar6 = (int16_t)local_88;
				pIVar9 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult.klass;
				if (((pIVar9._2).bitflags1 & 1) == 0) {
					pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
				}
				pIVar9 = pIVar9.rgctx_data[5].klass;
				if (((pIVar9._2).bitflags1 & 1) == 0) {
					pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
				}
				pIVar1 = pIVar4.klass;
				uVar13 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar13 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar14 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar2.interfaceType + lVar14) == pIVar9) {
							pVVar10 = (VirtualInvokeData)&pIVar1.vtable[*(int)((long)&pIVar2.offset + lVar14)].methodPtr;
							goto label_05e24788;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar9, 0);
		label_05e24788: ;
				pAVar11 = (AottgApiResult)(*pVVar10.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar10.method);
			}
			if (pAVar11 == null) {
				throw new NullReferenceException();
			}
			if (pAVar11._Success_k__BackingField == false) {
				pSVar3 = this.onComplete;
				if (pSVar3 != null) {
					pAVar12 = AottgQueryFetchResult<object>.Fail(pAVar11._Error_k__BackingField) ;
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
				}
			}
			else {
				bVar8 = AottgCreditsParser.TryParse(pAVar11._ResponseText_k__BackingField, ref local_50, ref local_58);
				if (bVar8) {
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Ok((object)local_50) ;
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
				else {
					Debug.LogError((Il2CppObject *)"AottgCreditsService: failed to parse /v1/credits response.");
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Fail(local_58);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
			}
			this.__1__state = -2;
			pIVar4 = (object)this.__t__builder.runnerPromise;
			if (pIVar4 != null) {
				pIVar9 = pIVar4.klass;
				uVar13 = (ulong)(pIVar9._2).interface_offsets_count;
				if (uVar13 != 0) {
					pIVar2 = (pIVar9._1).interfaceOffsets;
					lVar14 = 0;
					do {
						if (*(IStateMachineRunnerPromise*)((long)&pIVar2.interfaceType + lVar14) == typeof(IStateMachineRunnerPromise)) {
							pVVar10 = (VirtualInvokeData)&pIVar9.vtable[*(int)((long)&pIVar2.offset + lVar14) + 2].methodPtr;
							goto label_05e24905;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2);
		label_05e24905: ;
				(*pVVar10.methodPtr)(pIVar4,pVVar10.method);
			}
			return;
		}

		[Token(Token = "0x60059CB")]
		[Address(RVA = "0x5D24C00", Offset = "0x5D23C00", VA = "0x5D24C00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService.<FetchCreditsAsync>d__6$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x4003080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgCreditsService _instance;

	[Token(Token = "0x4003081")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, AottgCreditsResponse> _cache;

	[Token(Token = "0x60059C0")]
	[Address(RVA = "0x5D09340", Offset = "0x5D08340", VA = "0x5D09340")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$Init): 5 lines keep C-only constructs
		TimeSpan successTtl;
		AottgCreditsService pAVar1;
		Action<T1, T2> __this;
		AottgQueryPolicy __this_00;
		AottgQueryCache<AottgCreditsService.UnitKey, AottgCreditsResponse> __this_01;

		pAVar1 = SingletonFactory.CreateSingleton<AottgCreditsService>((object)AottgCreditsService._instance);
		AottgCreditsService._instance = pAVar1;
		pAVar1 = AottgCreditsService._instance;
		__this = (Action<T1, T2>)il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgCreditsService.UnitKey, Action<AottgQueryFetchResult<AottgCreditsResponse>>>));
		__this = new Action<AottgCreditsService.UnitKey, object>((object)pAVar1, (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsService_FetchCredits);
		successTtl._ticks =(TimeSpan)(AottgCreditsCache.DefaultTtl)._ticks;
		__this_00 = new AottgQueryPolicy(successTtl, (Nullable<TimeSpan>)ZEXT816(0), true);
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQueryCache<AottgCreditsService.UnitKey, AottgCreditsResponse>));
		__this_01 = new AottgQueryCache<AottgCreditsService.UnitKey, object>((System_Action_TKey__Action_AottgQueryFetchResult_TValue____o)__this, null, __this_00);
		if (pAVar1 == null) {
			throw new NullReferenceException();
		}
		pAVar1._cache = __this_01;
		return;
	}

	[Token(Token = "0x60059C1")]
	[Address(RVA = "0x5D23C70", Offset = "0x5D22C70", VA = "0x5D23C70")]
	public static void GetCredits(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$GetCredits): 4 lines keep C-only constructs
		AottgCreditsService.UnitKey key;
		AottgCreditsService pAVar1;
		Action<AottgCreditsResult> pSVar2;
		AottgQueryCache<AottgCreditsService.UnitKey, AottgCreditsResponse> __this;
		String pSVar3;
		bool bVar4;
		AottgCreditsService.c__DisplayClass3_0 __this_00;
		AottgCreditsResult __this_01;
		Action<AottgQueryResult<AottgCreditsResponse>> __this_02;

		if (Il2CppMethodInitialized_075484d2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0_GetCredits_b__0) ;
			Il2CppMethodInitialized_075484d2 = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgCreditsService.c__DisplayClass3_0));
		__this_00 = new AottgCreditsService.c__DisplayClass3_0();
		if (__this_00 != null) {
			__this_00.onResult = onResult;
			pAVar1 = AottgCreditsService._instance;
			bVar4 = ((Object)pAVar1 == null);
			pSVar3 = "not_initialized";
			if (bVar4) {
				pSVar2 = __this_00.onResult;
				if (pSVar2 == null) {
					return;
				}
				__this_01 = new AottgCreditsResult();
				__this_01._State_k__BackingField = 3;
				__this_01._Credits_k__BackingField = null ;
				__this_01._Error_k__BackingField = pSVar3;
				__this_01._IsFromCache_k__BackingField = false;
				__this_01._IsStale_k__BackingField = false;
				__this_01._IsRefreshing_k__BackingField = false;
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,__this_01,pSVar2.method);
				return;
			}
			pAVar1 = AottgCreditsService._instance;
			if (pAVar1 != null) {
				__this = pAVar1._cache;
				key._tail[0] =(AottgCreditsService.UnitKey)(AottgCreditsService.UnitKey.Value). _tail[0];
				__this_02 = new Action<AottgQueryResult<AottgCreditsResponse>>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_Credits_AottgCreditsService_c__DisplayClass3_0_GetCredits_b__0);
				if (__this != null) {
					__this.Get(key, (System_Action_AottgQueryResult_TValue___o)__this_02, forceRefresh);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60059C2")]
	[Address(RVA = "0x5D23EB0", Offset = "0x5D22EB0", VA = "0x5D23EB0")]
	public static void ClearSessionCache()
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$ClearSessionCache): clean
		AottgCreditsService pAVar1;
		AottgQueryCache<AottgCreditsService.UnitKey, AottgCreditsResponse> __this;
		bool bVar2;

		pAVar1 = AottgCreditsService._instance;
		bVar2 = ((Object)pAVar1 != null);
		if (bVar2) {
			pAVar1 = AottgCreditsService._instance;
			if (pAVar1 == null) {
				throw new NullReferenceException();
			}
			__this = pAVar1._cache;
			if (__this != null) {
				__this.Clear();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60059C3")]
	[Address(RVA = "0x5D23F70", Offset = "0x5D22F70", VA = "0x5D23F70")]
	private void FetchCredits(UnitKey key, Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$FetchCredits): 2 lines keep C-only constructs
		UniTask CVar1;
		UniTask task;

		CVar1 = this.FetchCreditsAsync(onComplete);
		task._12_4_ = 0;
		task.source = CVar1.source;
		task.token = CVar1.token;
		task._10_2_ = CVar1._10_2_;
		UniTaskExtensions.Forget(task);
		return;
	}

	[Token(Token = "0x60059C4")]
	[Address(RVA = "0x5D23F90", Offset = "0x5D22F90", VA = "0x5D23F90")]
	[AsyncStateMachine(typeof(_003CFetchCreditsAsync_003Ed__6))]
	private UniTask FetchCreditsAsync(Action<AottgQueryFetchResult<AottgCreditsResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$FetchCreditsAsync): 6 lines keep C-only constructs
		MethodInfo pMVar1;
		Il2CppRGCTXData pIVar2;
		UniTask CVar3;
		AottgCreditsService.d__6<FetchCreditsAsync> local_48;

		local_48.__u__1.task.source = null;
		local_48.__u__1.task.result = null;
		local_48.__t__builder.ex = null;
		local_48.onComplete = null;
		local_48.__1__state = 0;
		local_48._4_4_ = 0;
		local_48.__t__builder.runnerPromise =null;
		local_48.__u__1.task.token = 0;
		local_48.__u__1.task._18_6_ = 0;
		local_48.onComplete = onComplete;
		pMVar1 = MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet;
		local_48.__1__state = -1;
		pIVar2 = (MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet .field7_0x38).rgctx_data;
		if (pIVar2 == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgCreditsService_Fet);
			pIVar2 = (pMVar1.field7_0x38).rgctx_data;
		}
		local_48.MoveNext();
		CVar3 = (UniTask)il2cpp_runtime_helper_0386e920(&local_48.__t__builder, 0);
		return (UniTask)CVar3;
	}

	[Token(Token = "0x60059C5")]
	[Address(RVA = "0x5D24040", Offset = "0x5D23040", VA = "0x5D24040")]
	private static AottgCreditsResult MapResult(AottgQueryResult<AottgCreditsResponse> result)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$MapResult): 5 lines keep C-only constructs
		String pSVar1;
		AottgCreditsResponse pAVar2;
		AottgCreditsResult __this;
		bool bVar3;
		bool bVar4;
		byte uVar5;

		if (result == null) {
			throw new NullReferenceException();
		}
		switch(result._State_k__BackingField) {
		case 0:
			__this = il2cpp_codegen_object_new(typeof(AottgCreditsResult)) ;
			uVar5 = false;
			__this = new Object();
			__this._State_k__BackingField = 0;
			__this._Credits_k__BackingField = null;
			__this._Error_k__BackingField = null;
			bVar3 = true;
			bVar4 = false;
			break;
		case 1:
			pAVar2 = result._Value_k__BackingField;
			uVar5 = result._IsFromCache_k__BackingField;
			__this = il2cpp_codegen_object_new(typeof(AottgCreditsResult)) ;
			__this = new Object();
			__this._State_k__BackingField = 1;
			__this._Credits_k__BackingField = pAVar2;
			__this._Error_k__BackingField = null;
			goto label_05e24284;
		case 2:
			pAVar2 = result._Value_k__BackingField;
			__this = il2cpp_codegen_object_new(typeof(AottgCreditsResult)) ;
			__this = new Object();
			__this._State_k__BackingField = 2;
			__this._Credits_k__BackingField = pAVar2;
			__this._Error_k__BackingField = null;
			uVar5 = true;
			bVar4 = true;
			bVar3 = true;
			break;
		default: ;
			pSVar1 = result._Error_k__BackingField;
			__this = il2cpp_codegen_object_new(typeof(AottgCreditsResult)) ;
			uVar5 = 0;
			__this = new Object();
			__this._State_k__BackingField = 3;
			__this._Credits_k__BackingField = null;
			__this._Error_k__BackingField = pSVar1;
	label_05e24284: ;
			bVar4 = false;
			bVar3 = false;
			break;
		case 4:
			pAVar2 = result._Value_k__BackingField;
			pSVar1 = result._Error_k__BackingField;
			__this = il2cpp_codegen_object_new(typeof(AottgCreditsResult)) ;
			bVar3 = false;
			__this = new Object();
			__this._State_k__BackingField = 4;
			__this._Credits_k__BackingField = pAVar2;
			__this._Error_k__BackingField = pSVar1;
			uVar5 = true;
			bVar4 = true;
		}
		__this._IsFromCache_k__BackingField = (bool)uVar5;
		__this._IsStale_k__BackingField = bVar4;
		__this._IsRefreshing_k__BackingField = bVar3;
		return __this;
	}

	[Token(Token = "0x60059C6")]
	[Address(RVA = "0x5D24320", Offset = "0x5D23320", VA = "0x5D24320")]
	public AottgCreditsService()
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c (ApplicationManagers.Credits.AottgCreditsService$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsService.c.

	// ApplicationManagers.Credits.AottgCreditsService.UnitKey$$.cctor: clean
	private static void UnitKey__cctor()
	{
		return;
	}

	// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Credits.AottgCreditsService.<>c__DisplayClass3_0$$<GetCredits>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass3_0__GetCredits_b__0(ApplicationManagers_Api_AottgQueryResult_AottgCreditsResponse__o result)
	{
		Action<AottgCreditsResult> pSVar1;
		code *vtableDispatch;
		AottgCreditsResult pAVar2;

		pSVar1 = this.onResult;
		pAVar2 = AottgCreditsService.MapResult(result);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pAVar2,pSVar1.method,vtableDispatch);
		return;
	}
}
