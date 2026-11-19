// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c
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

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x2000992")]
public sealed class AottgPublicProfileService : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000994")]
	[CompilerGenerated]
	private struct _003CFetchProfileAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x4003058")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4003059")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400305A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string accountId;

		[Token(Token = "0x400305B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete;

		[Token(Token = "0x400305C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005972")]
		[Address(RVA = "0x5D21220", Offset = "0x5D20220", VA = "0x5D21220", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$MoveNext): 33 lines keep C-only constructs
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			System_Action_AottgQueryFetchResult_AottgPublicProfile___o pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			bool bVar8;
			AottgApiClient __this_00;
			AottgApiRequest __this_01;
			String pSVar9;
			Il2CppClass pIVar10;
			VirtualInvokeData pVVar11;
			MethodInfo method_00;
			AottgQueryFetchResult<TValue> pAVar12;
			ulong uVar13;
			long lVar14;
			object local_98;
			MethodInfo pMStack_90;
			ulong local_88;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_78;
			String local_58;
			AottgPublicProfile local_50;
			object local_48;
			MethodInfo pMStack_40;
			short local_38;
			undefined6 uStack_36;

			local_50 = null;
			local_58 = null;
			local_98 = null;
			pMStack_90 = null;
			local_88 = 0;
			if (this.__1__state == 0) {
				pCVar5 = &this.__u__1;
				local_88._0_2_ = pCVar5.task.token;
				local_88._2_6_ = *(undefined6)&pCVar5.task.field_0x12;
				local_98 = (object)this.__u__1.task.source;
				pMStack_90 = (MethodInfo)this.__u__1.task.result;
				this.__u__1.task.source = null;
				this.__u__1.task.result = null;
				*(ulong)&this.__u__1.task.token = 0;
				this.__1__state = -1;
			}
			else {
				__this_00 = new AottgApiClient();
				__this_01 = new AottgApiRequest();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.Method = "GET";
				pSVar9 = this.accountId;
				pSVar9 = Uri.EscapeDataString(pSVar9);
				pSVar9 = String.Concat("/v1/profiles/", pSVar9);
				__this_01.Path = pSVar9;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_78 = __this_00.SendAsync(__this_01, (CancellationToken)0x0);
				local_38 = local_78.token;
				uStack_36 = local_78._18_6_;
				local_48 = (object)local_78.source;
				pMStack_40 = (MethodInfo)local_78.result;
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
				local_78.result = (AottgApiResult)pMStack_40;
				local_88._0_2_ = local_78.token;
				local_88._2_6_ = local_78._18_6_;
				local_98 = (object)local_78.source;
				pMStack_90 = (MethodInfo)local_78.result;
				cVar7 = il2cpp_runtime_helper_045ee340(&local_98, MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
				if (cVar7 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_98;
					this.__u__1.task.result = (object)pMStack_90;
					pCVar5 = &this.__u__1;
					pCVar5.task.token = (int16_t)local_88;
					*(undefined6)&pCVar5.task.field_0x12 = local_88._2_6_;
					il2cpp_runtime_helper_0350cfa0(&this.__t__builder, &local_98, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26d8);
					return;
				}
			}
			pIVar4 = local_98;
			if (local_98 == null) {
				method_00 = pMStack_90;
			}
			else {
				sVar6 = (int16_t)local_88;
				pIVar10 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult.klass;
				if (((pIVar10._2).bitflags1 & 1) == 0) {
					pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				}
				pIVar10 = pIVar10.rgctx_data[5].klass;
				if (((pIVar10._2).bitflags1 & 1) == 0) {
					pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				}
				pIVar1 = pIVar4.klass;
				uVar13 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar13 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar14 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar2.interfaceType + lVar14) == pIVar10) {
							pVVar11 = (VirtualInvokeData)&pIVar1.vtable[*(int)((long)&pIVar2.offset + lVar14)].methodPtr;
							goto label_05e21568;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar10, 0);
		label_05e21568: ;
				method_00 = (MethodInfo)(*pVVar11.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar11.method);
			}
			if (method_00 == null) {
				throw new NullReferenceException();
			}
			if (*(sbyte)&method_00.invoker_method == false) {
				pSVar3 = this.onComplete;
				if (pSVar3 != null) {
					pAVar12 = AottgQueryFetchResult<object>.Fail((String)method_00.parameters);
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
				}
			}
			else {
				bVar8 = AottgPublicProfileParser.TryParse((String)method_00.klass, ref local_50, ref local_58);
				if (bVar8) {
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Ok((object)local_50);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
				else {
					Debug.LogError((Il2CppObject *)"AottgPublicProfileService: failed to parse /v1/profiles response.");
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
				pIVar10 = pIVar4.klass;
				uVar13 = (ulong)(pIVar10._2).interface_offsets_count;
				if (uVar13 != 0) {
					pIVar2 = (pIVar10._1).interfaceOffsets;
					lVar14 = 0;
					do {
						if (*(IStateMachineRunnerPromise*)((long)&pIVar2.interfaceType + lVar14) == typeof(IStateMachineRunnerPromise)) {
							pVVar11 = (VirtualInvokeData)&pIVar10.vtable[*(int)((long)&pIVar2.offset + lVar14) + 2].methodPtr;
							goto label_05e216e5;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2);
		label_05e216e5: ;
				(*pVVar11.methodPtr)(pIVar4,pVVar11.method);
			}
			return;
		}

		[Token(Token = "0x6005973")]
		[Address(RVA = "0x5D217C0", Offset = "0x5D207C0", VA = "0x5D217C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService.<FetchProfileAsync>d__7$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x4003055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AottgPublicProfileService _instance;

	[Token(Token = "0x4003056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<string, AottgPublicProfile> _cache;

	[Token(Token = "0x6005968")]
	[Address(RVA = "0x5D094E0", Offset = "0x5D084E0", VA = "0x5D094E0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$Init): 7 lines keep C-only constructs
		TimeSpan successTtl;
		AottgPublicProfileService pAVar1;
		Action<string, Action<AottgQueryFetchResult<AottgPublicProfile>>> __this;
		AottgQueryPolicy __this_00;
		AottgQueryCache<string, AottgPublicProfile> __this_01;
		Nullable<TimeSpan> failureTtl;
		Nullable<TimeSpan> local_38;

		pAVar1 = SingletonFactory.CreateSingleton<AottgPublicProfileService>((object)AottgPublicProfileService. _instance);
		AottgPublicProfileService._instance = pAVar1;
		Il2CppCodeGenWriteBarrier(&AottgPublicProfileService._instance) ;
		pAVar1 = AottgPublicProfileService._instance;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<string, Action<AottgQueryFetchResult<AottgPublicProfile>>>));
		__this = new Action<object, object>((object)pAVar1, (intptr_t)MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_FetchProfile);
		successTtl._ticks =(TimeSpan)(AottgPublicProfileCache.SuccessTtl) ._ticks;
		local_38._0_8_ = 0;
		local_38.value._ticks = (TimeSpan)0;
		local_38 = new Nullable<TimeSpan>((TimeSpan)(AottgPublicProfileCache.FailureTtl). fields._ticks);
		failureTtl._0_8_ = local_38._0_8_ & 0xffffffff;
		failureTtl.value._ticks = local_38.value._ticks;
		__this_00 = new AottgQueryPolicy(successTtl, failureTtl, false);
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQueryCache<string, AottgPublicProfile>));
		__this_01 = new AottgQueryCache<object, object>((System_Action_TKey__Action_AottgQueryFetchResult_TValue____o)__this, null, __this_00);
		if (pAVar1 == null) {
			throw new NullReferenceException();
		}
		pAVar1._cache = __this_01;
		return;
	}

	[Token(Token = "0x6005969")]
	[Address(RVA = "0x5D20CA0", Offset = "0x5D1FCA0", VA = "0x5D20CA0")]
	public static void GetProfile(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$GetProfile): 7 lines keep C-only constructs
		AottgPublicProfileService pAVar1;
		code *vtableDispatch;
		AottgQueryCache<string, AottgPublicProfile> __this;
		bool bVar2;
		AottgPublicProfileService.c__DisplayClass3_0 __this_00;
		String* ppSVar3;
		AottgPublicProfileFetchResponse pAVar4;
		Action<AottgQueryResult<AottgPublicProfile>> __this_01;
		AottgPublicProfileService.c__DisplayClass3_0 targetAddress;
		Action<AottgPublicProfileFetchResponse> pSVar5;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileService.c__DisplayClass3_0));
		__this_00 = new Object();
		if (__this_00 == null) {
	label_05e20e5a: ;
			throw new NullReferenceException();
		}
		targetAddress = &__this_00.fields;
		__this_00.onResult = onResult;
		pAVar1 = AottgPublicProfileService._instance;
		bVar2 = ((Object)pAVar1 == null);
		if (bVar2) {
			pSVar5 = targetAddress.onResult;
			if (pSVar5 == null) {
				return;
			}
			ppSVar3 = &"not_initialized";
		}
		else {
			bVar2 = String.IsNullOrEmpty(accountId);
			if (!bVar2) {
				pAVar1 = AottgPublicProfileService._instance ;
				if (pAVar1 != null) {
					__this = pAVar1._cache;
					__this_01 = new Action<AottgQueryResult<AottgPublicProfile>>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileService_c__DisplayClass3_0_GetProfile_b__0);
					if (__this != null) {
						__this.Get((object)accountId, (System_Action_AottgQueryResult_TValue___o)__this_01, false);
						return;
					}
				}
				goto label_05e20e5a;
			}
			pSVar5 = targetAddress.onResult;
			if (pSVar5 == null) {
				return;
			}
			ppSVar3 = &"bad_account_id";
		}
		pAVar4 = AottgPublicProfileFetchResponse.Fail(*ppSVar3);
		vtableDispatch = (code)pSVar5.invoke_impl;
		(*vtableDispatch)(pSVar5.method_code,pAVar4,pSVar5.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x600596A")]
	[Address(RVA = "0x5D20E70", Offset = "0x5D1FE70", VA = "0x5D20E70")]
	public static void ClearSessionCache()
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearSessionCache): clean
		AottgPublicProfileService pAVar1;
		AottgQueryCache<string, AottgPublicProfile> __this;
		bool bVar2;

		pAVar1 = AottgPublicProfileService._instance;
		bVar2 = ((Object)pAVar1 != null);
		if (bVar2) {
			pAVar1 = AottgPublicProfileService._instance;
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

	[Token(Token = "0x600596B")]
	[Address(RVA = "0x5D20F30", Offset = "0x5D1FF30", VA = "0x5D20F30")]
	public static void ClearProfile(string accountId)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$ClearProfile): clean
		AottgPublicProfileService pAVar1;
		AottgQueryCache<string, AottgPublicProfile> __this;
		bool bVar2;

		pAVar1 = AottgPublicProfileService._instance;
		bVar2 = ((Object)pAVar1 != null);
		if (bVar2) {
			pAVar1 = AottgPublicProfileService._instance;
			if (pAVar1 == null) {
	label_05e21007: ;
				throw new NullReferenceException();
			}
			if (pAVar1._cache !=null) {
				bVar2 = String.IsNullOrEmpty(accountId);
				if (!bVar2) {
					pAVar1 = AottgPublicProfileService. _instance;
					if ((pAVar1 != null) &&(__this = pAVar1._cache, __this != null)) {
						__this.Clear((object)accountId);
						return;
					}
					goto label_05e21007;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600596C")]
	[Address(RVA = "0x5D21010", Offset = "0x5D20010", VA = "0x5D21010")]
	private void FetchProfile(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfile): 2 lines keep C-only constructs
		UniTask CVar1;
		UniTask task;

		CVar1 = this.FetchProfileAsync(accountId, onComplete);
		task._12_4_ = 0;
		task.source = CVar1.source;
		task.token = CVar1.token;
		task._10_2_ = CVar1._10_2_;
		UniTaskExtensions.Forget(task);
		return;
	}

	[Token(Token = "0x600596D")]
	[Address(RVA = "0x5D21030", Offset = "0x5D20030", VA = "0x5D21030")]
	[AsyncStateMachine(typeof(_003CFetchProfileAsync_003Ed__7))]
	private UniTask FetchProfileAsync(string accountId, Action<AottgQueryFetchResult<AottgPublicProfile>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$FetchProfileAsync): 5 lines keep C-only constructs
		UniTask CVar1;
		AottgPublicProfileService.d__7<FetchProfileAsync> local_68;

		local_68.__u__1.task.result = null;
		local_68.__u__1.task.token = 0;
		local_68.__u__1.task._18_6_ = 0;
		local_68.onComplete = null;
		local_68.__u__1.task.source = null;
		local_68.__t__builder.ex = null;
		local_68.accountId = null;
		local_68.__1__state = 0;
		local_68._4_4_ = 0;
		local_68.__t__builder.runnerPromise =null;
		local_68.accountId = accountId;
		local_68.onComplete = onComplete;
		local_68.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgPublicProfileServi);
		}
		local_68.MoveNext();
		CVar1 = (UniTask)il2cpp_runtime_helper_0386e920(&local_68.__t__builder, 0);
		return (UniTask)CVar1;
	}

	[Token(Token = "0x600596E")]
	[Address(RVA = "0x5D210F0", Offset = "0x5D200F0", VA = "0x5D210F0")]
	private static void InvokeProfileResult(AottgQueryResult<AottgPublicProfile> result, Action<AottgPublicProfileFetchResponse> onResult)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$InvokeProfileResult): 1 lines keep C-only constructs
		int iVar1;
		AottgPublicProfile pAVar2;
		AottgPublicProfileFetchResponse __this;

		if (result == null) {
			throw new NullReferenceException();
		}
		iVar1 = result._State_k__BackingField;
		if (iVar1 == 3) {
			if (onResult == null) {
				return;
			}
		}
		else {
			if (iVar1 == 1) {
				if (onResult == null) {
					return;
				}
				pAVar2 = result._Value_k__BackingField;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileFetchResponse));
				__this = new Object();
				__this._Success_k__BackingField = true;
				__this._Profile_k__BackingField = pAVar2;
				__this._Error_k__BackingField = null;
				goto label_05e211d3;
			}
			if ((onResult == null) || (iVar1 != 4)) {
				return;
			}
		}
		__this = AottgPublicProfileFetchResponse.Fail(result._Error_k__BackingField);
	label_05e211d3: ;
		(*(code)onResult.invoke_impl)(onResult.method_code,__this,onResult.method);
		return;
	}

	[Token(Token = "0x600596F")]
	[Address(RVA = "0x5D21200", Offset = "0x5D20200", VA = "0x5D21200")]
	public AottgPublicProfileService()
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c (ApplicationManagers.PublicProfiles.AottgPublicProfileService$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileService.c.

	// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.PublicProfiles.AottgPublicProfileService.<>c__DisplayClass3_0$$<GetProfile>b__0: clean
	private void c__DisplayClass3_0__GetProfile_b__0(ApplicationManagers_Api_AottgQueryResult_AottgPublicProfile__o result)
	{
		AottgPublicProfileService.InvokeProfileResult(result, this.onResult);
		return;
	}
}
