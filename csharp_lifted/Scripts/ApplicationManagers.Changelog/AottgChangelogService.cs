// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c
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

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009AC")]
public sealed class AottgChangelogService : MonoBehaviour
{
	[Token(Token = "0x20009AD")]
	private struct UnitKey
	{
		[Token(Token = "0x40030B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly UnitKey Value;
	}

	[Token(Token = "0x20009AE")]
	private struct ListKey
	{
		[Token(Token = "0x17000F92")]
		public int Page
		{
			[Token(Token = "0x6005A3E")]
			[Address(RVA = "0x5D27EF0", Offset = "0x5D26EF0", VA = "0x5D27EF0")]
			[CompilerGenerated]
			readonly get
			{
				// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_Page): clean
				return this._Page_k__BackingField;
			}
			[Token(Token = "0x6005A3F")]
			[Address(RVA = "0x5D27F00", Offset = "0x5D26F00", VA = "0x5D27F00")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_Page): clean
				this._Page_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000F93")]
		public int PageSize
		{
			[Token(Token = "0x6005A40")]
			[Address(RVA = "0x5D27F10", Offset = "0x5D26F10", VA = "0x5D27F10")]
			[CompilerGenerated]
			readonly get
			{
				// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.ListKey$$get_PageSize): clean
				return this._PageSize_k__BackingField;
			}
			[Token(Token = "0x6005A41")]
			[Address(RVA = "0x5D27F20", Offset = "0x5D26F20", VA = "0x5D27F20")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.ListKey$$set_PageSize): clean
				this._PageSize_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6005A3D")]
		[Address(RVA = "0x5D272E0", Offset = "0x5D262E0", VA = "0x5D272E0")]
		public ListKey(int page, int pageSize)
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.ListKey$$.ctor): clean
			this._Page_k__BackingField = page;
			this._PageSize_k__BackingField = pageSize;
			return;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B3")]
	[CompilerGenerated]
	private struct _003CFetchEntryAsync_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x40030B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40030BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x40030BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete;

		[Token(Token = "0x40030BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A4A")]
		[Address(RVA = "0x5D28170", Offset = "0x5D27170", VA = "0x5D28170", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$MoveNext): 33 lines keep C-only constructs
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			System_Action_AottgQueryFetchResult_ChangelogEntryResponse___o pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			bool bVar8;
			Il2CppClass pIVar9;
			VirtualInvokeData pVVar10;
			AottgApiResult pAVar11;
			AottgChangelogParser.Parser<T> __this_00;
			AottgQueryFetchResult<TValue> pAVar12;
			String pSVar13;
			ulong uVar14;
			long lVar15;
			object local_88;
			AottgApiResult pAStack_80;
			ulong local_78;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
			String local_48;
			object local_40;
			object local_38;
			AottgApiResult pAStack_30;
			short local_28;
			undefined6 uStack_26;

			local_40 = null;
			local_48 = null;
			local_88 = null;
			pAStack_80 = null;
			local_78 = 0;
			if (this.__1__state == 0) {
				pCVar5 = &this.__u__1;
				local_78._0_2_ = pCVar5.task.token;
				local_78._2_6_ = *(undefined6)&pCVar5.task.field_0x12;
				local_88 = (object)this.__u__1.task.source;
				pAStack_80 = (AottgApiResult)this.__u__1.task.result ;
				this.__u__1.task.source = null;
				this.__u__1.task.result = null;
				*(ulong)&this.__u__1.task.token = 0;
				this.__1__state = -1;
			}
			else {
				pSVar13 = this.path;
				if ((typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor == 0) {
				}
				local_68 = AottgChangelogService.SendGet(pSVar13);
				local_28 = local_68.token;
				uStack_26 = local_68._18_6_;
				local_38 = (object)local_68.source;
				pAStack_30 = local_68.result;
				local_68.source = null;
				local_68.result = null;
				local_68.token = 0;
				local_68._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass._2).bitflags1 & 1) == 0 ) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass);
				}
				local_68.token = local_28;
				local_68._18_6_ = uStack_26;
				local_68.source = (IUniTaskSource<T>)local_38;
				local_68.result = pAStack_30;
				local_78._0_2_ = local_68.token;
				local_78._2_6_ = local_68._18_6_;
				local_88 = (object)local_68.source;
				pAStack_80 = local_68.result;
				cVar7 = il2cpp_runtime_helper_045ee340();
				if (cVar7 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_88;
					this.__u__1.task.result = (object)pAStack_80;
					pCVar5 = &this.__u__1;
					pCVar5.task.token = (int16_t)local_78;
					*(undefined6)&pCVar5.task.field_0x12 = local_78._2_6_;
					il2cpp_runtime_helper_0350cae0(&this.__t__builder, &local_88, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26b8);
					return;
				}
			}
			pIVar4 = local_88;
			if (local_88 == null) {
				pAVar11 = pAStack_80;
			}
			else {
				sVar6 = (int16_t)local_78;
				pIVar9 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult.klass;
				if (((pIVar9._2).bitflags1 & 1) == 0) {
					pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
				}
				pIVar9 = pIVar9.rgctx_data[5].klass;
				if (((pIVar9._2).bitflags1 & 1) == 0) {
					pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
				}
				pIVar1 = pIVar4.klass;
				uVar14 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar14 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar15 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar2.interfaceType + lVar15) == pIVar9) {
							pVVar10 = (VirtualInvokeData)&pIVar1.vtable[*(int)((long)&pIVar2.offset + lVar15)].methodPtr;
							goto label_05e283f8;
						}
						lVar15 = lVar15 + 0x10;
					} while (uVar14 * 0x10 != lVar15);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar9, 0);
		label_05e283f8: ;
				pAVar11 = (AottgApiResult)(*pVVar10.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar10.method);
			}
			if (pAVar11 == null) {
				throw new NullReferenceException();
			}
			if (pAVar11._Success_k__BackingField == false) {
				pSVar3 = this.onComplete;
				if (pAVar11._StatusCode_k__BackingField == 0x194) {
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Ok(null);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
				else if (pSVar3 != null) {
					pAVar12 = AottgQueryFetchResult<object>.Fail(pAVar11._Error_k__BackingField);
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
				}
			}
			else {
				pSVar13 = pAVar11._ResponseText_k__BackingField;
				__this_00 = (AottgChangelogParser.Parser<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogParser.Parser<ChangelogEntryResponse>));
				__this_00 = new AottgChangelogParser.Parser<object>(null, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry);
				bVar8 = AottgChangelogParser.TryParse<ChangelogEntryResponse>(pSVar13, __this_00, ref local_40, ref local_48);
				if (bVar8) {
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Ok(local_40);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
				else {
					pSVar13 = String.Concat("AottgChangelogService: failed to parse ", this.path, " response.");
					Debug.LogError((object)pSVar13);
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Fail(local_48);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
			}
			this.__1__state = -2;
			pIVar4 = (object)this.__t__builder.runnerPromise;
			if (pIVar4 != null) {
				pIVar9 = pIVar4.klass;
				uVar14 = (ulong)(pIVar9._2).interface_offsets_count;
				if (uVar14 != 0) {
					pIVar2 = (pIVar9._1).interfaceOffsets;
					lVar15 = 0;
					do {
						if (*(IStateMachineRunnerPromise*)((long)&pIVar2.interfaceType + lVar15) == typeof(IStateMachineRunnerPromise)) {
							pVVar10 = (VirtualInvokeData)&pIVar9.vtable[*(int)((long)&pIVar2.offset + lVar15) + 2].methodPtr;
							goto label_05e28635;
						}
						lVar15 = lVar15 + 0x10;
					} while (uVar14 * 0x10 != lVar15);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2);
		label_05e28635: ;
				(*pVVar10.methodPtr)(pIVar4,pVVar10.method);
			}
			return;
		}

		[Token(Token = "0x6005A4B")]
		[Address(RVA = "0x5D28700", Offset = "0x5D27700", VA = "0x5D28700", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.<FetchEntryAsync>d__18$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B4")]
	[CompilerGenerated]
	private struct _003CFetchLatestVersionAsync_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x40030BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40030C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete;

		[Token(Token = "0x40030C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A4C")]
		[Address(RVA = "0x5D28710", Offset = "0x5D27710", VA = "0x5D28710", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$MoveNext): 33 lines keep C-only constructs
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			String json;
			System_Action_AottgQueryFetchResult_LatestChangelogVersionResponse___o pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			bool bVar8;
			Il2CppClass pIVar9;
			VirtualInvokeData pVVar10;
			AottgApiResult pAVar11;
			AottgChangelogParser.Parser<T> __this_00;
			AottgQueryFetchResult<TValue> pAVar12;
			ulong uVar13;
			long lVar14;
			object local_88;
			AottgApiResult pAStack_80;
			ulong local_78;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
			String local_48;
			object local_40;
			object local_38;
			AottgApiResult pAStack_30;
			short local_28;
			undefined6 uStack_26;

			local_40 = null;
			local_48 = null;
			local_88 = null;
			pAStack_80 = null;
			local_78 = 0;
			if (this.__1__state == 0) {
				pCVar5 = &this.__u__1;
				local_78._0_2_ = pCVar5.task.token;
				local_78._2_6_ = *(undefined6)&pCVar5.task.field_0x12;
				local_88 = (object)this.__u__1.task.source;
				pAStack_80 = (AottgApiResult)this.__u__1.task.result ;
				this.__u__1.task.source = null;
				this.__u__1.task.result = null;
				*(ulong)&this.__u__1.task.token = 0;
				this.__1__state = -1;
			}
			else {
				if ((typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor == 0) {
				}
				local_68 = AottgChangelogService.SendGet("/v1/changelog/latest-version");
				local_28 = local_68.token;
				uStack_26 = local_68._18_6_;
				local_38 = (object)local_68.source;
				pAStack_30 = local_68.result;
				local_68.source = null;
				local_68.result = null;
				local_68.token = 0;
				local_68._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass._2).bitflags1 & 1) == 0 ) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass);
				}
				local_68.token = local_28;
				local_68._18_6_ = uStack_26;
				local_68.source = (IUniTaskSource<T>)local_38;
				local_68.result = pAStack_30;
				local_78._0_2_ = local_68.token;
				local_78._2_6_ = local_68._18_6_;
				local_88 = (object)local_68.source;
				pAStack_80 = local_68.result;
				cVar7 = il2cpp_runtime_helper_045ee340();
				if (cVar7 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_88;
					this.__u__1.task.result = (object)pAStack_80;
					pCVar5 = &this.__u__1;
					pCVar5.task.token = (int16_t)local_78;
					*(undefined6)&pCVar5.task.field_0x12 = local_78._2_6_;
					il2cpp_runtime_helper_0350cc10(&this.__t__builder, &local_88, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26c0);
					return;
				}
			}
			pIVar4 = local_88;
			if (local_88 == null) {
				pAVar11 = pAStack_80;
			}
			else {
				sVar6 = (int16_t)local_78;
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
							goto label_05e28998;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar9, 0);
		label_05e28998: ;
				pAVar11 = (AottgApiResult)(*pVVar10.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar10.method);
			}
			if (pAVar11 == null) {
				throw new NullReferenceException();
			}
			if (pAVar11._Success_k__BackingField == false) {
				pSVar3 = this.onComplete;
				if (pSVar3 != null) {
					pAVar12 = AottgQueryFetchResult<object>.Fail(pAVar11._Error_k__BackingField);
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
				}
			}
			else {
				json = pAVar11._ResponseText_k__BackingField;
				__this_00 = (AottgChangelogParser.Parser<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogParser.Parser<LatestChangelogVersionResponse>));
				__this_00 = new AottgChangelogParser.Parser<object>(null, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion);
				bVar8 = AottgChangelogParser.TryParse<LatestChangelogVersionResponse>(json, __this_00, ref local_40, ref local_48);
				if (bVar8) {
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Ok(local_40);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar12,pSVar3.method);
					}
				}
				else {
					Debug.LogError((Il2CppObject *)"AottgChangelogService: failed to parse /v1/changelog/latest-version response.");
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar12 = AottgQueryFetchResult<object>.Fail(local_48);
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
							goto label_05e28b85;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2);
		label_05e28b85: ;
				(*pVVar10.methodPtr)(pIVar4,pVVar10.method);
			}
			return;
		}

		[Token(Token = "0x6005A4D")]
		[Address(RVA = "0x5D28C40", Offset = "0x5D27C40", VA = "0x5D28C40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.<FetchLatestVersionAsync>d__16$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B5")]
	[CompilerGenerated]
	private struct _003CFetchListAsync_003Ed__17 : IAsyncStateMachine
	{
		[Token(Token = "0x40030C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40030C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ListKey key;

		[Token(Token = "0x40030C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete;

		[Token(Token = "0x40030C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A4E")]
		[Address(RVA = "0x5D28C50", Offset = "0x5D27C50", VA = "0x5D28C50", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$MoveNext): 34 lines keep C-only constructs
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			System_Action_AottgQueryFetchResult_PublicChangelogListResponse___o pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			bool bVar8;
			String pSVar9;
			String str3;
			Il2CppClass pIVar10;
			VirtualInvokeData pVVar11;
			AottgApiResult pAVar12;
			AottgChangelogParser.Parser<T> __this_00;
			AottgQueryFetchResult<TValue> pAVar13;
			ulong uVar14;
			long lVar15;
			int local_8c;
			object local_88;
			AottgApiResult pAStack_80;
			ulong local_78;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
			String local_48;
			object local_40;
			object local_38;
			AottgApiResult pAStack_30;
			short local_28;
			undefined6 uStack_26;

			local_40 = null;
			local_48 = null;
			local_88 = null;
			pAStack_80 = null;
			local_78 = 0;
			local_8c = 0;
			if (this.__1__state == 0) {
				pCVar5 = &this.__u__1;
				local_78._0_2_ = pCVar5.task.token;
				local_78._2_6_ = *(undefined6)&pCVar5.task.field_0x12;
				local_88 = (object)this.__u__1.task.source;
				pAStack_80 = (AottgApiResult)this.__u__1.task.result ;
				this.__u__1.task.source = null;
				this.__u__1.task.result = null;
				*(ulong)&this.__u__1.task.token = 0;
				this.__1__state = -1;
			}
			else {
				local_8c = this.key._Page_k__BackingField;
				pSVar9 = local_8c.ToString();
				local_8c = this.key._PageSize_k__BackingField;
				str3 = local_8c.ToString();
				pSVar9 = String.Concat("/v1/changelog?page=", pSVar9, "&pageSize=", str3);
				if ((typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor == 0) {
				}
				local_68 = AottgChangelogService.SendGet(pSVar9);
				local_28 = local_68.token;
				uStack_26 = local_68._18_6_;
				local_38 = (object)local_68.source;
				pAStack_30 = local_68.result;
				local_68.source = null;
				local_68.result = null;
				local_68.token = 0;
				local_68._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass._2).bitflags1 & 1) == 0 ) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass);
				}
				local_68.token = local_28;
				local_68._18_6_ = uStack_26;
				local_68.source = (IUniTaskSource<T>)local_38;
				local_68.result = pAStack_30;
				local_78._0_2_ = local_68.token;
				local_78._2_6_ = local_68._18_6_;
				local_88 = (object)local_68.source;
				pAStack_80 = local_68.result;
				cVar7 = il2cpp_runtime_helper_045ee340();
				if (cVar7 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_88;
					this.__u__1.task.result = (object)pAStack_80;
					pCVar5 = &this.__u__1;
					pCVar5.task.token = (int16_t)local_78;
					*(undefined6)&pCVar5.task.field_0x12 = local_78._2_6_;
					il2cpp_runtime_helper_0350cd40(&this.__t__builder, &local_88, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26c8);
					return;
				}
			}
			pIVar4 = local_88;
			if (local_88 == null) {
				pAVar12 = pAStack_80;
			}
			else {
				sVar6 = (int16_t)local_78;
				pIVar10 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult.klass;
				if (((pIVar10._2).bitflags1 & 1) == 0) {
					pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				}
				pIVar10 = pIVar10.rgctx_data[5].klass;
				if (((pIVar10._2).bitflags1 & 1) == 0) {
					pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				}
				pIVar1 = pIVar4.klass;
				uVar14 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar14 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar15 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar2.interfaceType + lVar15) == pIVar10) {
							pVVar11 = (VirtualInvokeData)&pIVar1.vtable[*(int)((long)&pIVar2.offset + lVar15)].methodPtr;
							goto label_05e28f48;
						}
						lVar15 = lVar15 + 0x10;
					} while (uVar14 * 0x10 != lVar15);
				}
				pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar10, 0);
		label_05e28f48: ;
				pAVar12 = (AottgApiResult)(*pVVar11.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar11.method);
			}
			if (pAVar12 == null) {
				throw new NullReferenceException();
			}
			if (pAVar12._Success_k__BackingField == false) {
				pSVar3 = this.onComplete;
				if (pSVar3 != null) {
					pAVar13 = AottgQueryFetchResult<object>.Fail(pAVar12._Error_k__BackingField);
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar13,pSVar3.method);
				}
			}
			else {
				pSVar9 = pAVar12._ResponseText_k__BackingField;
				__this_00 = (AottgChangelogParser.Parser<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogParser.Parser<PublicChangelogListResponse>));
				__this_00 = new AottgChangelogParser.Parser<object>(null, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList);
				bVar8 = AottgChangelogParser.TryParse<PublicChangelogListResponse>(pSVar9, __this_00, ref local_40, ref local_48);
				if (bVar8) {
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar13 = AottgQueryFetchResult<object>.Ok(local_40);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar13,pSVar3.method);
					}
				}
				else {
					Debug.LogError((Il2CppObject *)"AottgChangelogService: failed to parse /v1/changelog response.");
					pSVar3 = this.onComplete;
					if (pSVar3 != null) {
						pAVar13 = AottgQueryFetchResult<object>.Fail(local_48);
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar13,pSVar3.method);
					}
				}
			}
			this.__1__state = -2;
			pIVar4 = (object)this.__t__builder.runnerPromise;
			if (pIVar4 != null) {
				pIVar10 = pIVar4.klass;
				uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
				if (uVar14 != 0) {
					pIVar2 = (pIVar10._1).interfaceOffsets;
					lVar15 = 0;
					do {
						if (*(IStateMachineRunnerPromise*)((long)&pIVar2.interfaceType + lVar15) == typeof(IStateMachineRunnerPromise)) {
							pVVar11 = (VirtualInvokeData)&pIVar10.vtable[*(int)((long)&pIVar2.offset + lVar15) + 2].methodPtr;
							goto label_05e29135;
						}
						lVar15 = lVar15 + 0x10;
					} while (uVar14 * 0x10 != lVar15);
				}
				pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2);
		label_05e29135: ;
				(*pVVar11.methodPtr)(pIVar4,pVVar11.method);
			}
			return;
		}

		[Token(Token = "0x6005A4F")]
		[Address(RVA = "0x5D29200", Offset = "0x5D28200", VA = "0x5D29200", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService.<FetchListAsync>d__17$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x40030AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly AottgQueryPolicy CachePolicy;

	[Token(Token = "0x40030AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AottgChangelogService _instance;

	[Token(Token = "0x40030AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AottgQueryCache<UnitKey, LatestChangelogVersionResponse> _latestVersionCache;

	[Token(Token = "0x40030AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgQueryCache<UnitKey, ChangelogEntryResponse> _latestEntryCache;

	[Token(Token = "0x40030B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgQueryCache<ListKey, PublicChangelogListResponse> _listCache;

	[Token(Token = "0x40030B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private AottgQueryCache<string, ChangelogEntryResponse> _entryCache;

	[Token(Token = "0x6005A2A")]
	[Address(RVA = "0x5D269C0", Offset = "0x5D259C0", VA = "0x5D269C0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$Init): 16 lines keep C-only constructs
		AottgQueryPolicy pAVar2;
		AottgChangelogService pAVar3;
		Action<T1, T2> pSVar4;
		AottgQueryCache<AottgChangelogService.UnitKey, LatestChangelogVersionResponse> __this;
		AottgQueryCache<AottgChangelogService.UnitKey, ChangelogEntryResponse> __this_00;
		AottgQueryCache<AottgChangelogService.ListKey, PublicChangelogListResponse> __this_01;
		Action<string, Action<AottgQueryFetchResult<ChangelogEntryResponse>>> __this_02;
		AottgQueryCache<string, ChangelogEntryResponse> __this_03;

		pAVar3 = SingletonFactory.CreateSingleton<AottgChangelogService>((object)AottgChangelogService._instance);
		AottgChangelogService._instance = pAVar3;
		pAVar3 = AottgChangelogService._instance;
		pSVar4 = (Action<T1, T2>)il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogService.UnitKey, Action<AottgQueryFetchResult<LatestChangelogVersionResponse>>>));
		pSVar4 = new Action<AottgChangelogService.UnitKey, object>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestVersion);
		pAVar2 = AottgChangelogService.CachePolicy;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQueryCache<AottgChangelogService.UnitKey, LatestChangelogVersionResponse>));
		__this = new AottgQueryCache<AottgChangelogService.UnitKey, object>((System_Action_TKey__Action_AottgQueryFetchResult_TValue____o)pSVar4, null, pAVar2);
		if (pAVar3 != null) {
			pAVar3._latestVersionCache = __this;
			pAVar3 = AottgChangelogService._instance;
			pSVar4 = (Action<T1, T2>)il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogService.UnitKey, Action<AottgQueryFetchResult<ChangelogEntryResponse>>>));
			pSVar4 = new Action<AottgChangelogService.UnitKey, object>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchLatestEntry);
			pAVar2 = AottgChangelogService.CachePolicy;
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQueryCache<AottgChangelogService.UnitKey, ChangelogEntryResponse>));
			__this_00 = new AottgQueryCache<AottgChangelogService.UnitKey, object>((System_Action_TKey__Action_AottgQueryFetchResult_TValue____o)pSVar4, null, pAVar2);
			if (pAVar3 != null) {
				pAVar3._latestEntryCache = __this_00;
				pAVar3 = AottgChangelogService._instance;
				pSVar4 = (Action<T1, T2>)il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogService.ListKey, Action<AottgQueryFetchResult<PublicChangelogListResponse>>>));
				pSVar4 = new Action<AottgChangelogService.ListKey, object>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchList);
				pAVar2 = AottgChangelogService.CachePolicy;
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQueryCache<AottgChangelogService.ListKey, PublicChangelogListResponse>));
				__this_01 = new AottgQueryCache<AottgChangelogService.ListKey, object>((System_Action_TKey__Action_AottgQueryFetchResult_TValue____o)pSVar4, null, pAVar2);
				if (pAVar3 != null) {
					pAVar3._listCache = __this_01;
					pAVar3 = AottgChangelogService._instance;
					__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<string, Action<AottgQueryFetchResult<ChangelogEntryResponse>>>));
					__this_02 = new Action<object, object>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_FetchEntry);
					pAVar2 = AottgChangelogService.CachePolicy;
					__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQueryCache<string, ChangelogEntryResponse>)) ;
					__this_03 = new AottgQueryCache<object, object>((System_Action_TKey__Action_AottgQueryFetchResult_TValue____o)__this_02, null, pAVar2);
					if (pAVar3 != null) {
						pAVar3._entryCache = __this_03;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A2B")]
	[Address(RVA = "0x5D26D50", Offset = "0x5D25D50", VA = "0x5D26D50")]
	public static void GetLatestVersion(Action<AottgChangelogResult<LatestChangelogVersionResponse>> onResult, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$GetLatestVersion): 6 lines keep C-only constructs
		AottgChangelogService.UnitKey key;
		System_Action_AottgChangelogResult_T___o onResult_00;
		AottgChangelogService pAVar1;
		AottgQueryCache<AottgChangelogService.UnitKey, LatestChangelogVersionResponse> __this;
		bool bVar2;
		AottgChangelogService.c__DisplayClass7_0 __this_00;
		Action<AottgQueryResult<LatestChangelogVersionResponse>> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogService.c__DisplayClass7_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.onResult = onResult;
			onResult_00 = (System_Action_AottgChangelogResult_T___o)__this_00.onResult;
			bVar2 = AottgChangelogService.Ready<LatestChangelogVersionResponse>(onResult_00);
			if (!bVar2) {
				return;
			}
			pAVar1 = AottgChangelogService._instance;
			if (pAVar1 != null) {
				__this = pAVar1._latestVersionCache;
				if ((typeof(AottgChangelogService.UnitKey)._2). cctor_finished_or_no_cctor == 0) {
				}
				key._tail[0] =(AottgChangelogService.UnitKey)(AottgChangelogService.UnitKey.Value) ._tail[0];
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgQueryResult<LatestChangelogVersionResponse>>));
				__this_01 = new Action<object>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass7_0_GetLatestVersion_b__0);
				if (__this != null) {
					__this.Get(key, (System_Action_AottgQueryResult_TValue___o)__this_01, forceRefresh);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A2C")]
	[Address(RVA = "0x5D26F00", Offset = "0x5D25F00", VA = "0x5D26F00")]
	public static void GetLatest(Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$GetLatest): 5 lines keep C-only constructs
		AottgChangelogService.UnitKey key;
		System_Action_AottgChangelogResult_T___o onResult_00;
		AottgChangelogService pAVar1;
		AottgQueryCache<AottgChangelogService.UnitKey, ChangelogEntryResponse> __this;
		bool bVar2;
		AottgChangelogService.c__DisplayClass8_0 __this_00;
		Action<AottgQueryResult<ChangelogEntryResponse>> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogService.c__DisplayClass8_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.onResult = onResult;
			onResult_00 = (System_Action_AottgChangelogResult_T___o)__this_00.onResult;
			bVar2 = AottgChangelogService.Ready<ChangelogEntryResponse>(onResult_00);
			if (!bVar2) {
				return;
			}
			pAVar1 = AottgChangelogService._instance;
			if (pAVar1 != null) {
				__this = pAVar1._latestEntryCache;
				if ((typeof(AottgChangelogService.UnitKey)._2). cctor_finished_or_no_cctor == 0) {
				}
				key._tail[0] =(AottgChangelogService.UnitKey)(AottgChangelogService.UnitKey.Value) ._tail[0];
				__this_01 = new Action<AottgQueryResult<ChangelogEntryResponse>>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass8_0_GetLatest_b__0);
				if (__this != null) {
					__this.Get(key, (System_Action_AottgQueryResult_TValue___o)__this_01, forceRefresh);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A2D")]
	[Address(RVA = "0x5D270B0", Offset = "0x5D260B0", VA = "0x5D270B0")]
	public static void GetList(Action<AottgChangelogResult<PublicChangelogListResponse>> onResult, int page = 1, int pageSize = 20, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$GetList): 10 lines keep C-only constructs
		System_Action_AottgChangelogResult_T___o onResult_00;
		AottgChangelogService pAVar1;
		AottgQueryCache<AottgChangelogService.ListKey, PublicChangelogListResponse> __this;
		code *vtableDispatch;
		bool bVar2;
		AottgChangelogService.c__DisplayClass9_0 __this_00;
		Action<AottgQueryResult<PublicChangelogListResponse>> __this_01;
		String* ppSVar3;
		AottgChangelogResult<TValue> pAVar4;
		Action<AottgChangelogResult<PublicChangelogListResponse>> pSVar5;
		AottgChangelogService.c__DisplayClass9_0 targetAddress;
		AottgChangelogService.ListKey key;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogService.c__DisplayClass9_0));
		__this_00 = new Object();
		if (__this_00 == null) {
	label_05e272be: ;
			throw new NullReferenceException();
		}
		targetAddress = &__this_00.fields;
		__this_00.onResult = onResult;
		onResult_00 = (System_Action_AottgChangelogResult_T___o)__this_00.onResult;
		bVar2 = AottgChangelogService.Ready<PublicChangelogListResponse>(onResult_00);
		if (!bVar2) {
			return;
		}
		if (page < 1) {
			pSVar5 = targetAddress.onResult;
			if (pSVar5 == null) {
				return;
			}
			ppSVar3 = &"bad_page";
		}
		else {
			if (pageSize - 1U < 100) {
				pAVar1 = AottgChangelogService._instance;
				if (pAVar1 != null) {
					__this = pAVar1._listCache;
					__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgQueryResult<PublicChangelogListResponse>>));
					__this_01 = new Action<object>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass9_0_GetList_b__0);
					if (__this != null) {
						key._PageSize_k__BackingField = pageSize;
						key._Page_k__BackingField = page;
						__this.Get(key, (System_Action_AottgQueryResult_TValue___o)__this_01, forceRefresh);
						return;
					}
				}
				goto label_05e272be;
			}
			pSVar5 = targetAddress.onResult;
			if (pSVar5 == null) {
				return;
			}
			ppSVar3 = &"bad_page_size";
		}
		pAVar4 = AottgChangelogResult<object>.FailedNoCache(*ppSVar3);
		vtableDispatch = (code)pSVar5.invoke_impl;
		(*vtableDispatch)(pSVar5.method_code,pAVar4,pSVar5.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x6005A2E")]
	[Address(RVA = "0x5D272F0", Offset = "0x5D262F0", VA = "0x5D272F0")]
	public static void GetEntry(string id, Action<AottgChangelogResult<ChangelogEntryResponse>> onResult, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$GetEntry): 5 lines keep C-only constructs
		System_Action_AottgChangelogResult_T___o onResult_00;
		AottgChangelogService pAVar1;
		AottgQueryCache<string, ChangelogEntryResponse> __this;
		Action<AottgChangelogResult<ChangelogEntryResponse>> pSVar2;
		bool bVar3;
		AottgChangelogService.c__DisplayClass10_0 __this_00;
		String input;
		Action<AottgQueryResult<ChangelogEntryResponse>> __this_01;
		AottgChangelogResult<TValue> pAVar4;
		Guid local_48;

		local_48._a = 0;
		local_48._b = 0;
		local_48._c = 0;
		local_48._d = 0;
		local_48._e = 0;
		local_48._f = 0;
		local_48._g = 0;
		local_48._h = 0;
		local_48._i = 0;
		local_48._j = 0;
		local_48._k = 0;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogService.c__DisplayClass10_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.onResult = onResult;
			onResult_00 = (System_Action_AottgChangelogResult_T___o)__this_00.onResult;
			bVar3 = AottgChangelogService.Ready<ChangelogEntryResponse>(onResult_00);
			if (!bVar3) {
				return;
			}
			if ((id != null) ||(id = (String)**(long*)(g_data_07556758 + 0xb8), id != null)) {
				input = id.Trim();
				bVar3 = Guid.TryParse(input, ref local_48);
				if (!bVar3) {
					pSVar2 = __this_00.onResult;
					if (pSVar2 == null) {
						return;
					}
					pAVar4 = AottgChangelogResult<object>.FailedNoCache("bad_id");
					(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pAVar4,pSVar2.method);
					return;
				}
				pAVar1 = AottgChangelogService._instance;
				if (pAVar1 != null) {
					__this = pAVar1._entryCache;
					__this_01 = new Action<AottgQueryResult<ChangelogEntryResponse>>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_Changelog_AottgChangelogService_c__DisplayClass10_0_GetEntry_b__0);
					if (__this != null) {
						__this.Get((object)input, (System_Action_AottgQueryResult_TValue___o)__this_01, forceRefresh);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A2F")]
	[Address(RVA = "0x5D27510", Offset = "0x5D26510", VA = "0x5D27510")]
	public static void ClearSessionCache()
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$ClearSessionCache): clean
		AottgChangelogService pAVar1;
		AottgQueryCache<AottgChangelogService.UnitKey, LatestChangelogVersionResponse> __this;
		AottgQueryCache<AottgChangelogService.UnitKey, ChangelogEntryResponse> __this_00;
		AottgQueryCache<AottgChangelogService.ListKey, PublicChangelogListResponse> __this_01;
		AottgQueryCache<string, ChangelogEntryResponse> __this_02;
		bool bVar2;

		pAVar1 = AottgChangelogService._instance;
		bVar2 = ((Object)pAVar1 == null);
		if (bVar2) {
			return;
		}
		pAVar1 = AottgChangelogService._instance;
		if (pAVar1 != null) {
			__this = pAVar1._latestVersionCache;
			if (__this != null) {
				__this.Clear();
			}
			pAVar1 = AottgChangelogService._instance;
			if (pAVar1 != null) {
				__this_00 = pAVar1._latestEntryCache;
				if (__this_00 !=(AottgQueryCache<AottgChangelogService.UnitKey, ChangelogEntryResponse>)0x0) {
					__this_00.Clear();
				}
				pAVar1 = AottgChangelogService._instance;
				if (pAVar1 != null) {
					__this_01 = pAVar1._listCache;
					if (__this_01 !=null) {
						__this_01.Clear();
					}
					if ((typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pAVar1 = AottgChangelogService._instance;
					if (pAVar1 != null) {
						__this_02 = pAVar1._entryCache;
						if (__this_02 == null) {
							return;
						}
						__this_02.Clear();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A30")]
	[Address(RVA = "0x5D276E0", Offset = "0x5D266E0", VA = "0x5D276E0")]
	private void FetchLatestVersion(UnitKey key, Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersion): 10 lines keep C-only constructs
		byte[] auVar1 = new byte[12];
		UniTask task;
		AottgChangelogService.d__16<FetchLatestVersionAsync> AStack_48;

		AStack_48.__u__1.task.source = null;
		AStack_48.__u__1.task.result = null;
		AStack_48.__t__builder.ex = null;
		AStack_48.onComplete = null;
		AStack_48.__1__state = 0;
		AStack_48._4_4_ = 0;
		AStack_48.__t__builder.runnerPromise =null;
		AStack_48.__u__1.task.token = 0;
		AStack_48.__u__1.task._18_6_ = 0;
		AStack_48.onComplete = onComplete;
		AStack_48.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8 .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8);
		}
		AStack_48.MoveNext();
		auVar1 = il2cpp_runtime_helper_0386e920(&AStack_48.__t__builder, 0);
		task._12_4_ = 0;
		task.source = (IUniTaskSource)auVar1._0_8_;
		task.token = auVar1._8_2_;
		task._10_2_ = auVar1._10_2_;
		UniTaskExtensions.Forget(task);
		return;
	}

	[Token(Token = "0x6005A31")]
	[Address(RVA = "0x5D27830", Offset = "0x5D26830", VA = "0x5D27830")]
	private void FetchLatestEntry(UnitKey key, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestEntry): 3 lines keep C-only constructs
		String* ppSVar1;
		UniTask CVar2;
		UniTask task;

		if (g_data_075484f5 == false) {
			ppSVar1 = &"/v1/changelog/latest";
			g_data_075484f5 = true;
			this = (AottgChangelogService)ppSVar1;
		}
		CVar2 = this.FetchEntryAsync("/v1/changelog/latest", onComplete);
		task._12_4_ = 0;
		task.source = CVar2.source;
		task.token = CVar2.token;
		task._10_2_ = CVar2._10_2_;
		UniTaskExtensions.Forget(task);
		return;
	}

	[Token(Token = "0x6005A32")]
	[Address(RVA = "0x5D27930", Offset = "0x5D26930", VA = "0x5D27930")]
	private void FetchList(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchList): 10 lines keep C-only constructs
		byte[] auVar1 = new byte[12];
		UniTask task;
		AottgChangelogService.d__17<FetchListAsync> local_68;

		local_68.__u__1.task.result = null;
		local_68.__u__1.task.token = 0;
		local_68.__u__1.task._18_6_ = 0;
		local_68.onComplete = null;
		local_68.__u__1.task.source = null;
		local_68.__t__builder.ex = null;
		local_68.key._Page_k__BackingField = 0;
		local_68.key._PageSize_k__BackingField = 0;
		local_68.__1__state = 0;
		local_68._4_4_ = 0;
		local_68.__t__builder.runnerPromise =null;
		local_68.key = key;
		local_68.onComplete = onComplete;
		local_68.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0 .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0);
		}
		local_68.MoveNext();
		auVar1 = il2cpp_runtime_helper_0386e920(&local_68.__t__builder, 0);
		task._12_4_ = 0;
		task.source = (IUniTaskSource)auVar1._0_8_;
		task.token = auVar1._8_2_;
		task._10_2_ = auVar1._10_2_;
		UniTaskExtensions.Forget(task);
		return;
	}

	[Token(Token = "0x6005A33")]
	[Address(RVA = "0x5D27AA0", Offset = "0x5D26AA0", VA = "0x5D27AA0")]
	private void FetchEntry(string id, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchEntry): 4 lines keep C-only constructs
		String pSVar1;
		String* method_00;
		AottgChangelogService __this_00;
		UniTask CVar2;
		UniTask task;

		pSVar1 = Uri.EscapeDataString(id);
		method_00 = &"/v1/changelog/";
		__this_00 = (ApplicationManagers_Changelog_AottgChangelogService_o *)"/v1/changelog/";
		pSVar1 = String.Concat("/v1/changelog/", pSVar1);
		CVar2 = __this_00.FetchEntryAsync(pSVar1, onComplete);
		task._12_4_ = 0;
		task.source = CVar2.source;
		task.token = CVar2.token;
		task._10_2_ = CVar2._10_2_;
		UniTaskExtensions.Forget(task);
		return;
	}

	[Token(Token = "0x6005A34")]
	[Address(RVA = "0x5D27790", Offset = "0x5D26790", VA = "0x5D27790")]
	[AsyncStateMachine(typeof(_003CFetchLatestVersionAsync_003Ed__16))]
	private UniTask FetchLatestVersionAsync(Action<AottgQueryFetchResult<LatestChangelogVersionResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchLatestVersionAsync): 5 lines keep C-only constructs
		UniTask CVar1;
		AottgChangelogService.d__16<FetchLatestVersionAsync> AStack_48;

		AStack_48.__u__1.task.source = null;
		AStack_48.__u__1.task.result = null;
		AStack_48.__t__builder.ex = null;
		AStack_48.onComplete = null;
		AStack_48.__1__state = 0;
		AStack_48._4_4_ = 0;
		AStack_48.__t__builder.runnerPromise =null;
		AStack_48.__u__1.task.token = 0;
		AStack_48.__u__1.task._18_6_ = 0;
		AStack_48.onComplete = onComplete;
		AStack_48.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8 .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27b8);
		}
		AStack_48.MoveNext();
		CVar1 = (UniTask)il2cpp_runtime_helper_0386e920(&AStack_48.__t__builder, 0);
		return (UniTask)CVar1;
	}

	[Token(Token = "0x6005A35")]
	[Address(RVA = "0x5D279F0", Offset = "0x5D269F0", VA = "0x5D279F0")]
	[AsyncStateMachine(typeof(_003CFetchListAsync_003Ed__17))]
	private UniTask FetchListAsync(ListKey key, Action<AottgQueryFetchResult<PublicChangelogListResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchListAsync): 5 lines keep C-only constructs
		UniTask CVar1;
		AottgChangelogService.d__17<FetchListAsync> local_68;

		local_68.__u__1.task.result = null;
		local_68.__u__1.task.token = 0;
		local_68.__u__1.task._18_6_ = 0;
		local_68.onComplete = null;
		local_68.__u__1.task.source = null;
		local_68.__t__builder.ex = null;
		local_68.key._Page_k__BackingField = 0;
		local_68.key._PageSize_k__BackingField = 0;
		local_68.__1__state = 0;
		local_68._4_4_ = 0;
		local_68.__t__builder.runnerPromise =null;
		local_68.key = key;
		local_68.onComplete = onComplete;
		local_68.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0 .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F_71a27c0);
		}
		local_68.MoveNext();
		CVar1 = (UniTask)il2cpp_runtime_helper_0386e920(&local_68.__t__builder, 0);
		return (UniTask)CVar1;
	}

	[Token(Token = "0x6005A36")]
	[Address(RVA = "0x5D27870", Offset = "0x5D26870", VA = "0x5D27870")]
	[AsyncStateMachine(typeof(_003CFetchEntryAsync_003Ed__18))]
	private UniTask FetchEntryAsync(string path, Action<AottgQueryFetchResult<ChangelogEntryResponse>> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$FetchEntryAsync): 5 lines keep C-only constructs
		UniTask CVar1;
		AottgChangelogService.d__18<FetchEntryAsync> local_68;

		local_68.__u__1.task.result = null;
		local_68.__u__1.task.token = 0;
		local_68.__u__1.task._18_6_ = 0;
		local_68.onComplete = null;
		local_68.__u__1.task.source = null;
		local_68.__t__builder.ex = null;
		local_68.path = null;
		local_68.__1__state = 0;
		local_68._4_4_ = 0;
		local_68.__t__builder.runnerPromise =null;
		local_68.path = path;
		local_68.onComplete = onComplete;
		local_68.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AottgChangelogService_F);
		}
		local_68.MoveNext();
		CVar1 = (UniTask)il2cpp_runtime_helper_0386e920(&local_68.__t__builder, 0);
		return (UniTask)CVar1;
	}

	[Token(Token = "0x6005A37")]
	[Address(RVA = "0x5D27B30", Offset = "0x5D26B30", VA = "0x5D27B30")]
	private static UniTask<AottgApiResult> SendGet(string path)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$SendGet): 2 lines keep C-only constructs
		AottgApiClient __this;
		AottgApiRequest request;
		Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;

		__this = new AottgApiClient();
		request.Method = "GET";
		request.ReportNetworkError = true;
		request = new AottgApiRequest();
		request.Method = "GET";
		request.Path = path;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_48 = __this.SendAsync(request, (CancellationToken)0x0);
		__return_storage_ptr__.token = local_48.token;
		*(undefined6)&__return_storage_ptr__.field_0x12 = local_48._18_6_;
		__return_storage_ptr__.source = local_48.source;
		__return_storage_ptr__.result = local_48.result;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6005A38")]
	private static bool Ready<T>(Action<AottgChangelogResult<T>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A39")]
	private static AottgChangelogResult<T> Map<T>(AottgQueryResult<T> result)
	{
		return null;
	}

	[Token(Token = "0x6005A3A")]
	[Address(RVA = "0x5D27C50", Offset = "0x5D26C50", VA = "0x5D27C50")]
	public AottgChangelogService()
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c (ApplicationManagers.Changelog.AottgChangelogService$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogService.c.

	// ApplicationManagers.Changelog.AottgChangelogService$$Map<object>: 7 lines keep C-only constructs
	private static ApplicationManagers_Changelog_AottgChangelogResult_T__o Map_object(ApplicationManagers_Api_AottgQueryResult_T__o result)
	{
		ApplicationManagers_Changelog_AottgChangelogResult_T__o pAVar2;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		if (result == null) {
			throw new NullReferenceException();
		}
		switch(result._State_k__BackingField) {
		case 0:
			pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)AottgChangelogResult<object>.LoadingNoCache();
			return pAVar2;
		case 1:
			pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)AottgChangelogResult<object>.ReadyFresh(result._Value_k__BackingField, result._IsFromCache_k__BackingField);
			return pAVar2;
		case 2:
			pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)AottgChangelogResult<object>.ReadyStaleRefreshing(result._Value_k__BackingField) ;
			return pAVar2;
		default: ;
			pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)AottgChangelogResult<object>.FailedNoCache(result._Error_k__BackingField);
			return pAVar2;
		case 4:
			pAVar2 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)AottgChangelogResult<object>.FailedRefreshStale(result._Value_k__BackingField, result._Error_k__BackingField);
			return pAVar2;
		}
	}

	// ApplicationManagers.Changelog.AottgChangelogService$$Map<__Il2CppFullySharedGenericType>: 18 lines keep C-only constructs
	private static ApplicationManagers_Changelog_AottgChangelogResult_T__o Map___Il2CppFullySharedGenericType(ApplicationManagers_Api_AottgQueryResult_T__o result)
	{
		InvokerMethod pIVar1;
		long lVar2;
		uint uVar3;
		MethodInfo_3487B00_RGCTXs pMVar4;
		ApplicationManagers_Changelog_AottgChangelogResult_T__o pAVar5;
		ApplicationManagers_Changelog_AottgChangelogResult_T__c pAVar6;
		byte puVar7;
		MethodInfo pMVar8;
		Il2CppMethodPointer vtableDispatch;
		byte[] auVar9 = new byte[16];
		ApplicationManagers_Changelog_AottgChangelogResult_T__c[] apAStack_48 = new ApplicationManagers_Changelog_AottgChangelogResult_T__c[4];
		byte local_21;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar4 = method.rgctx_data;
		}
		lVar2 = -((ulong)(pMVar4._6_T._2).stack_slot_size + 0xf & 0xfffffffffffffff0);
		pAVar6 = (ApplicationManagers_Changelog_AottgChangelogResult_T__c)((long)apAStack_48 + lVar2);
		if (result == null) {
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587cb4;
			throw new NullReferenceException();
		}
		vtableDispatch = pMVar4._1_ApplicationManagers_Api_AottgQueryResult_T__get_State.methodPointer;
		*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587b55;
		uVar3 = (*vtableDispatch)(result);
		apAStack_48[2] = pAVar6;
		switch(uVar3) {
		case 0:
			pAVar5 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)(*method.rgctx_data._2_ApplicationManagers_Changelog_AottgChangelogResult_T__LoadingNoCache. methodPointer)();
			return pAVar5;
		case 1:
			pMVar8 = method.rgctx_data._5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
			vtableDispatch = pMVar8.methodPointer;
			pIVar1 = pMVar8.invoker_method;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587ba0;
			(*pIVar1)(vtableDispatch,pMVar8,result,apAStack_48 + 2,pAVar6);
			vtableDispatch = method.rgctx_data._7_ApplicationManagers_Api_AottgQueryResult_T__get_IsFromCache.methodPointer;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587bad;
			local_21 = (*vtableDispatch)(result);
			puVar7 = (byte)((long)apAStack_48 + lVar2);
			pMVar8 = method.rgctx_data._8_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyFresh;
			vtableDispatch = pMVar8.methodPointer;
			if (-1 < (int)(method.rgctx_data._6_T._1).byval_arg.bits) {
				pAVar6 = (pAVar6._1).image;
			}
			apAStack_48[3] = (ApplicationManagers_Changelog_AottgChangelogResult_T__c)&local_21;
			apAStack_48[2] = pAVar6;
			break;
		case 2:
			pMVar8 = method.rgctx_data._5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
			vtableDispatch = pMVar8.methodPointer;
			pIVar1 = pMVar8.invoker_method;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587bf1;
			(*pIVar1)(vtableDispatch,pMVar8,result,apAStack_48 + 2,pAVar6);
			pMVar8 = method.rgctx_data._9_ApplicationManagers_Changelog_AottgChangelogResult_T__ReadyStaleRefreshing ;
			vtableDispatch = pMVar8.methodPointer;
			if (-1 < (int)(method.rgctx_data._6_T._1).byval_arg.bits) {
				pAVar6 = (pAVar6._1).image;
			}
			pIVar1 = pMVar8.invoker_method;
			apAStack_48[1] = pAVar6;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587c1a;
			(*pIVar1)(vtableDispatch,pMVar8,null,apAStack_48 + 1,apAStack_48 + 2);
			return (ApplicationManagers_Changelog_AottgChangelogResult_T__o)apAStack_48[2];
		default: ;
			vtableDispatch = method.rgctx_data._10_ApplicationManagers_Api_AottgQueryResult_T__get_Error.methodPointer;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587c30;
			auVar9 = (*vtableDispatch)(result);
			pMVar8 = method.rgctx_data._12_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache;
			vtableDispatch = pMVar8.methodPointer;
			pAVar5 = (ApplicationManagers_Changelog_AottgChangelogResult_T__o)(*vtableDispatch)(auVar9._0_8_,pMVar8,auVar9._8_8_,vtableDispatch);
			return pAVar5;
		case 4:
			pMVar8 = method.rgctx_data._5_ApplicationManagers_Api_AottgQueryResult_T__get_Value;
			vtableDispatch = pMVar8.methodPointer;
			pIVar1 = pMVar8.invoker_method;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587c66;
			(*pIVar1)(vtableDispatch,pMVar8,result,apAStack_48 + 2,pAVar6);
			vtableDispatch = method.rgctx_data._10_ApplicationManagers_Api_AottgQueryResult_T__get_Error.methodPointer;
			*(ulong)((long)apAStack_48 + lVar2 + -8) = 0x3587c73;
			apAStack_48[3] =(ApplicationManagers_Changelog_AottgChangelogResult_T__c)(*vtableDispatch)(result);
			puVar7 = (byte)((long)apAStack_48 + lVar2);
			pMVar8 = method.rgctx_data._11_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedRefreshStale;
			vtableDispatch = pMVar8.methodPointer;
			if (-1 < (int)(method.rgctx_data._6_T._1).byval_arg.bits) {
				pAVar6 = (pAVar6._1).image;
			}
			apAStack_48[2] = pAVar6;
		}
		pIVar1 = pMVar8.invoker_method;
		*(ulong)(puVar7 + -8) = 0x3587ca0;
		(*pIVar1)(vtableDispatch,pMVar8,null,apAStack_48 + 2,apAStack_48 + 1);
		return (ApplicationManagers_Changelog_AottgChangelogResult_T__o)apAStack_48[1];
	}

	// ApplicationManagers.Changelog.AottgChangelogService$$Ready<object>: 1 lines keep C-only constructs
	private static bool Ready_object(System_Action_AottgChangelogResult_T___o onResult)
	{
		uint uVar1;
		AottgChangelogService x;
		bool bVar2;
		AottgChangelogResult<TValue> pAVar3;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor;
				goto joined_r0x03587d12;
			}
		}
		uVar1 = (typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor;
	joined_r0x03587d12: ;
		if (uVar1 == 0) {
		}
		x = AottgChangelogService._instance;
		bVar2 = ((Object)x != null);
		if ((onResult != null) && (!bVar2)) {
			pAVar3 = AottgChangelogResult<object>.FailedNoCache("not_initialized");
			(*(code)onResult.invoke_impl)(onResult.method_code,pAVar3,onResult.method) ;
		}
		return bVar2;
	}

	// ApplicationManagers.Changelog.AottgChangelogService$$Ready<__Il2CppFullySharedGenericType>: 3 lines keep C-only constructs
	private static bool Ready___Il2CppFullySharedGenericType(System_Action_AottgChangelogResult_T___o onResult)
	{
		uint uVar1;
		AottgChangelogService x;
		MethodInfo pMVar2;
		bool bVar3;
		IntPtr local_20;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				uVar1 = (typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor;
				goto joined_r0x03587e06;
			}
		}
		uVar1 = (typeof(AottgChangelogService)._2).cctor_finished_or_no_cctor;
	joined_r0x03587e06: ;
		if (uVar1 == 0) {
		}
		x = AottgChangelogService._instance;
		bVar3 = ((Object)x != null);
		if ((onResult != null) && (!bVar3)) {
			local_20 = (IntPtr)(*method.rgctx_data. _1_ApplicationManagers_Changelog_AottgChangelogResult_T__FailedNoCache.methodPointer )("not_initialized");
			pMVar2 = method.rgctx_data._4_System_Action_AottgChangelogResult_T___Invoke;
			(*pMVar2.invoker_method)(pMVar2.methodPointer,pMVar2,onResult,&local_20,local_20);
		}
		return bVar3;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$.ctor: clean
	private void c__DisplayClass8_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService$$.cctor: 2 lines keep C-only constructs
	static AottgChangelogService()
	{
		TimeSpan successTtl;
		TimeSpan value;
		AottgQueryPolicy __this;
		Nullable<TimeSpan> failureTtl;
		Nullable<TimeSpan> SStack_28;

		successTtl = TimeSpan.FromMinutes(30.0);
		value = TimeSpan.FromSeconds(45.0);
		SStack_28._0_8_ = 0;
		SStack_28.value._ticks = (TimeSpan)0;
		SStack_28 = new Nullable<TimeSpan>(value);
		failureTtl._0_8_ = SStack_28._0_8_ & 0xffffffff;
		failureTtl.value._ticks = SStack_28.value._ticks;
		__this = new AottgQueryPolicy(successTtl, failureTtl, true);
		AottgChangelogService.CachePolicy = __this;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.UnitKey$$.cctor: clean
	private static void UnitKey__cctor()
	{
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass10_0$$<GetEntry>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass10_0__GetEntry_b__0(ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o result)
	{
		Action<AottgChangelogResult<ChangelogEntryResponse>> pSVar1;
		code *vtableDispatch;
		ApplicationManagers_Changelog_AottgChangelogResult_T__o pAVar2;

		pSVar1 = this.onResult;
		pAVar2 = AottgChangelogService.Map<ChangelogEntryResponse>((ApplicationManagers_Api_AottgQueryResult_T__o)result);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pAVar2,pSVar1.method,vtableDispatch);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass7_0$$<GetLatestVersion>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass7_0__GetLatestVersion_b__0(ApplicationManagers_Api_AottgQueryResult_LatestChangelogVersionResponse__o result)
	{
		Action<AottgChangelogResult<LatestChangelogVersionResponse>> pSVar1;
		code *vtableDispatch;
		ApplicationManagers_Changelog_AottgChangelogResult_T__o pAVar2;

		pSVar1 = this.onResult;
		pAVar2 = AottgChangelogService.Map<LatestChangelogVersionResponse>((ApplicationManagers_Api_AottgQueryResult_T__o)result);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pAVar2,pSVar1.method,vtableDispatch);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass8_0$$<GetLatest>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass8_0__GetLatest_b__0(ApplicationManagers_Api_AottgQueryResult_ChangelogEntryResponse__o result)
	{
		Action<AottgChangelogResult<ChangelogEntryResponse>> pSVar1;
		code *vtableDispatch;
		ApplicationManagers_Changelog_AottgChangelogResult_T__o pAVar2;

		pSVar1 = this.onResult;
		pAVar2 = AottgChangelogService.Map<ChangelogEntryResponse>((ApplicationManagers_Api_AottgQueryResult_T__o)result);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pAVar2,pSVar1.method,vtableDispatch);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogService.<>c__DisplayClass9_0$$<GetList>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass9_0__GetList_b__0(ApplicationManagers_Api_AottgQueryResult_PublicChangelogListResponse__o result)
	{
		Action<AottgChangelogResult<PublicChangelogListResponse>> pSVar1;
		code *vtableDispatch;
		ApplicationManagers_Changelog_AottgChangelogResult_T__o pAVar2;

		pSVar1 = this.onResult;
		pAVar2 = AottgChangelogService.Map<PublicChangelogListResponse>((ApplicationManagers_Api_AottgQueryResult_T__o)result);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pAVar2,pSVar1.method,vtableDispatch);
		return;
	}
}
