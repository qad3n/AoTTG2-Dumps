// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgUnityWebRequestTransport
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C9")]
public sealed class AottgUnityWebRequestTransport : IAottgApiTransport
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009CA")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x4003113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4003114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiTransportResponse> _003C_003Et__builder;

		[Token(Token = "0x4003115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiTransportRequest request;

		[Token(Token = "0x4003116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4003117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CunityRequest_003E5__2;

		[Token(Token = "0x4003118")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<UnityWebRequest>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005AA6")]
		[Address(RVA = "0x5D2B0A0", Offset = "0x5D2A0A0", VA = "0x5D2B0A0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c (ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$MoveNext): 38 lines keep C-only constructs
			String method_00;
			String url;
			Dictionary<object, object> __this_00;
			AottgUnityWebRequestTransport.d__0<SendAsync> pAVar4;
			String pSVar5;
			short sVar6;
			AottgUnityWebRequestTransport.d__0<SendAsync>* ppAVar7;
			bool bVar8;
			int value;
			int iVar9;
			UnityWebRequest pUVar10;
			DownloadHandlerBuffer __this_01;
			Encoding pSVar11;
			Byte[] data;
			UploadHandlerRaw __this_02;
			UnityWebRequestAsyncOperation asyncOperation;
			Il2CppClass pIVar12;
			Exception pSVar14;
			IntPtr pvVar15;
			AottgApiTransportRequest pAVar18;
			Exception* targetAddress;
			object obj;
			AottgUnityWebRequestTransport.d__0<SendAsync> local_108;
			byte[] local_fc = new byte[4];
			byte[] local_f8 = new byte[8];
			UnityWebRequest pUStack_f0;
			String local_e8;
			String pSStack_e0;
			String local_c8;
			UnityWebRequest pUStack_c0;
			String local_b8;
			byte local_a0;
			String local_98;
			UnityWebRequest pUStack_90;
			String local_88;
			byte[] local_78 = new byte[8];
			String local_68;
			String pSStack_60;
			Exception pSStack_50;

			local_108 = this;
			local_68._stringLength = 0;
			local_68._firstChar = 0;
			local_68._6_2_ = 0;
			pSStack_60 = null;
			local_78 = (byte[])0x0;
			local_c8 = null;
			pUStack_c0 = null;
			local_b8._stringLength = 0;
			local_b8._firstChar = 0;
			local_b8._6_2_ = 0;
			local_98 = null;
			pUStack_90 = null;
			local_88._stringLength = 0;
			local_88._firstChar = 0;
			local_88._6_2_ = 0;
			local_fc = (byte[])this.__1__state;
			if (local_fc == (byte[])0x0) {
				ppAVar7 = &local_108;
		label_05e2b603: ;
				local_a0 = (byte)ppAVar7;
				local_b8 = *(String)&local_108.__u__1.task.token;
				local_c8 = (String)local_108.__u__1.task.source;
				pUStack_c0 = (UnityWebRequest)local_108.__u__1.task.result;
				local_108.__u__1.task.source = null;
				local_108.__u__1.task.result = null;
				*(ulong)&local_108.__u__1.task.token = 0;
				local_fc = (byte[])0xffffffff;
				local_108.__1__state = -1;
		label_05e2b636: ;
				pSVar5 = local_c8;
				if (local_c8 != null) {
					sVar6 = (short)local_b8._stringLength;
					pIVar12 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_GetResult.klass;
					if (((pIVar12._2).bitflags1 & 1) == 0) {
						pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
					}
					pIVar12 = pIVar12.rgctx_data[5].klass;
					if (((pIVar12._2).bitflags1 & 1) == 0) {
						pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
					}
					pSVar5.Dispose((ulong)(uint)(int)sVar6);
				}
		label_05e2b6ed: ;
				pSVar14 = (Exception)AottgUnityWebRequestTransport.BuildResponse(local_108._unityRequest_5__2, null, null, (Nullable<long>)ZEXT816(0));
				iVar9 = 0xf;
			}
			else {
				pAVar18 = this.request;
				if (pAVar18 == null) {
					throw new NullReferenceException();
				}
				method_00 = pAVar18.Method;
				url = pAVar18.Url;
				pUVar10 = new UnityWebRequest(url, method_00);
				local_108._unityRequest_5__2 = pUVar10;
				local_a0 = (byte)&local_108;
				ppAVar7 = &local_108;
				if (local_fc == (byte[])0x0) goto label_05e2b603;
				pUVar10 = local_108._unityRequest_5__2;
				__this_01 = new DownloadHandlerBuffer();
				if (pUVar10 == null) {
					throw new NullReferenceException();
				}
				pUVar10.downloadHandler = (DownloadHandler)__this_01;
				pAVar18 = local_108.request;
				if (pAVar18 == null) {
					throw new NullReferenceException();
				}
				bVar8 = String.IsNullOrEmpty(pAVar18.JsonBody);
				if (!bVar8) {
					pUVar10 = local_108._unityRequest_5__2;
					pSVar11 = Encoding.UTF8;
					pAVar18 = local_108.request;
					if (pAVar18 == null) {
						throw new NullReferenceException();
					}
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					data = pSVar11.GetBytes(pAVar18.JsonBody);
					__this_02 = new UploadHandlerRaw(data);
					if (pUVar10 == null) {
						throw new NullReferenceException();
					}
					pUVar10.uploadHandler = (UploadHandler)__this_02;
				}
				pAVar18 = local_108.request;
				if (pAVar18 == null) {
					throw new NullReferenceException();
				}
				if (pAVar18.TimeoutSeconds.hasValue != false) {
					pUVar10 = local_108._unityRequest_5__2;
					value = (pAVar18.TimeoutSeconds).Value;
					if (pUVar10 == null) {
						throw new NullReferenceException();
					}
					pUVar10.timeout = value;
					pAVar18 = local_108.request;
					if (pAVar18 == null) {
						throw new NullReferenceException();
					}
				}
				__this_00 = (Dictionary<object, object>)pAVar18.Headers;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_f8.GetEnumerator(__this_00);
				local_68 = local_e8;
				pSStack_60 = pSStack_e0;
				local_78 = local_f8;
				local_f8 = (byte[])0x0;
				pUStack_f0 = (UnityWebRequest)local_fc;
				local_e8 = (String)local_78;
				while (bVar8 = local_78.MoveNext()) {
					pUVar10 = local_108._unityRequest_5__2;
					if (pUVar10 == null) {
						throw new NullReferenceException();
					}
					pUVar10.SetRequestHeader((String)local_68, pSStack_60);
				}
				if ((int)local_fc < 0) {
					local_78.Dispose();
				}
				ppAVar7 = (AottgUnityWebRequestTransport.d__0<SendAsync>*)local_a0;
				if (local_fc == (byte[])0x0) goto label_05e2b603;
				pUVar10 = local_108._unityRequest_5__2;
				if (pUVar10 == null) {
					throw new NullReferenceException();
				}
				asyncOperation = pUVar10.SendWebRequest();
				UnityAsyncExtensions.WithCancellation((Cysharp_Threading_Tasks_UniTask_UnityWebRequest__o)local_f8, asyncOperation, (CancellationToken)local_108.cancellationToken._source);
				local_88 = local_e8;
				local_98 = (String)local_f8;
				pUStack_90 = pUStack_f0;
				local_f8 = (byte[])0x0;
				pUStack_f0 = null;
				local_e8 = (String)0x0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter.klass._2).bitflags1 & 1) == 0) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_UnityWebRequest_GetAwaiter.klass);
				}
				local_e8 = local_88;
				local_f8 = (byte[])local_98;
				pUStack_f0 = pUStack_90;
				local_b8 = local_e8;
				local_c8 = (String)local_f8;
				pUStack_c0 = pUStack_f0;
				pIVar12 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_UnityWebRequest_get_IsCompleted.klass;
				if (((pIVar12._2).bitflags1 & 1) == 0) {
					pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				}
				pSVar5 = local_c8;
				if (local_c8 == null) goto label_05e2b6ed;
				sVar6 = (short)local_b8._stringLength;
				pIVar12 = (pIVar12.rgctx_data[3].method).klass;
				if (((pIVar12._2).bitflags1 & 1) == 0) {
					pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				}
				pIVar12 = pIVar12.rgctx_data[1].klass;
				if (((pIVar12._2).bitflags1 & 1) == 0) {
					pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				}
				iVar9 = pSVar5.Dispose((ulong)(uint)(int)sVar6);
				if (iVar9 != 0) goto label_05e2b636;
				local_fc = (byte[])0x0;
				local_108.__1__state = 0;
				local_108.__u__1.task.source =(IUniTaskSource<T>)local_c8;
				local_108.__u__1.task.result = (object)pUStack_c0;
				*(String)&local_108.__u__1.task.token = local_b8;
				il2cpp_runtime_helper_032ecdb0(&local_108.__t__builder, &local_c8, local_108, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Awa);
				iVar9 = 10;
				pSVar14 = null;
			}
			if (((int)local_fc < 0) &&(pUVar10 = local_108._unityRequest_5__2, pUVar10 != null)) {
				pIVar12 = (Il2CppClass)pUVar10.klass;
				pUVar10.Dispose();
			}
			pAVar4 = local_108;
			if (iVar9 == 0) {
				local_108.__1__state = -2;
				pvVar15 = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set);
				obj = (object)pAVar4.__t__builder.runnerPromise;
				if (obj == null) {
					pAVar4.__t__builder.ex = pSStack_50;
					targetAddress = &pAVar4.__t__builder.ex;
					goto label_05e2bd39;
				}
				pIVar12 = *(Il2CppClass*)((long)pvVar15 + 0x20);
				if (((pIVar12._2).bitflags1 & 1) == 0) {
					pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
					pIVar12 = pIVar12.rgctx_data[1].klass;
					if (((pIVar12._2).bitflags1 & 1) == 0) goto label_05e2bcdd;
		label_05e2bcb8: ;
				}
				else {
					pIVar12 = pIVar12.rgctx_data[1].klass;
					if (((pIVar12._2).bitflags1 & 1) != 0) goto label_05e2bcb8;
		label_05e2bcdd: ;
					pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				}
				goto label_05e2bd61;
			}
			if (iVar9 != 0xf) {
				return;
			}
			local_108.__1__state = -2;
			obj = (object)local_108.__t__builder.runnerPromise;
			if (obj == null) {
				local_108.__t__builder.result =(AottgApiTransportResponse)pSVar14;
				targetAddress = (Exception*)&local_108.__t__builder.result;
		label_05e2bd39: ;
				return;
			}
			pIVar12 = MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Set_7187540 .klass;
			if (((pIVar12._2).bitflags1 & 1) == 0) {
				pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
				pIVar12 = pIVar12.rgctx_data[1].klass;
				if (((pIVar12._2).bitflags1 & 1) == 0) goto label_05e2b8bb;
		label_05e2b896: ;
			}
			else {
				pIVar12 = pIVar12.rgctx_data[1].klass;
				if (((pIVar12._2).bitflags1 & 1) != 0) goto label_05e2b896;
		label_05e2b8bb: ;
				pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
			}
			pSStack_50 = pSVar14;
		label_05e2bd61: ;
			obj.Dispose(pSStack_50);
			return;
		}

		[Token(Token = "0x6005AA7")]
		[Address(RVA = "0x5D2BDC0", Offset = "0x5D2ADC0", VA = "0x5D2BDC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c (ApplicationManagers.Api.AottgUnityWebRequestTransport.<SendAsync>d__0$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x6005AA2")]
	[Address(RVA = "0x5D2AE30", Offset = "0x5D29E30", VA = "0x5D2AE30", Slot = "4")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__0))]
	public UniTask<AottgApiTransportResponse> SendAsync(AottgApiTransportRequest request, CancellationToken cancellationToken)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c (ApplicationManagers.Api.AottgUnityWebRequestTransport$$SendAsync): 6 lines keep C-only constructs
		AottgUnityWebRequestTransport.d__0<SendAsync> local_98;
		IUniTaskSource<T> local_40;
		AottgApiTransportResponse pAStack_38;
		ulong local_30;

		local_98.__1__state = 0;
		local_98._4_4_ = 0;
		local_98.__u__1.task.result = null;
		local_98.__u__1.task.token = 0;
		local_98.__u__1.task._18_6_ = 0;
		local_98._unityRequest_5__2 = null;
		local_98.__u__1.task.source = null;
		local_98.request = null;
		local_98.cancellationToken._source =(CancellationToken)null;
		local_98.__t__builder.runnerPromise =null;
		local_98.__t__builder.ex = null;
		local_98.__t__builder.result = null;
		local_98.request = request;
		local_98.cancellationToken =(CancellationToken)(CancellationToken)cancellationToken._source;
		local_98.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_Sta);
		}
		local_98.MoveNext();
		il2cpp_runtime_helper_042dddd0(&local_40, &local_98.__t__builder, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiTransportResponse_get);
		*(ulong)&__return_storage_ptr__.token = local_30;
		__return_storage_ptr__.source = local_40;
		__return_storage_ptr__.result = pAStack_38;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6005AA3")]
	[Address(RVA = "0x5D2AF40", Offset = "0x5D29F40", VA = "0x5D2AF40")]
	private static AottgApiTransportResponse BuildResponse(UnityWebRequest unityRequest, [Optional] string textOverride, [Optional] string errorOverride, [Optional] long? statusCodeOverride)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c (ApplicationManagers.Api.AottgUnityWebRequestTransport$$BuildResponse): clean
		int iVar1;
		AottgApiTransportResponse __this;
		long iVar2;
		DownloadHandler pUVar3;
		int iVar4;
		bool local_34;

		__this = new AottgApiTransportResponse();
		if ((unityRequest == null) ||(iVar1 = unityRequest.result, __this == null)) {
	label_05e2b08b: ;
			throw new NullReferenceException();
		}
		iVar4 = 0;
		if (iVar1 - 2U < 3) {
			iVar4 = iVar1 + -1;
		}
		__this.Result = iVar4;
		local_34 = statusCodeOverride.hasValue;
		if (local_34 == false) {
			iVar2 = unityRequest.responseCode;
			__this.StatusCode = iVar2;
		}
		else {
			__this.StatusCode = statusCodeOverride.value;
		}
		if (textOverride == null) {
			pUVar3 = unityRequest.downloadHandler;
			if (pUVar3 == null) {
				textOverride = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pUVar3 = unityRequest.downloadHandler;
				if (pUVar3 == null) goto label_05e2b08b;
				textOverride = pUVar3.text;
			}
		}
		__this.Text = textOverride;
		if (errorOverride == null) {
			errorOverride = unityRequest.error;
		}
		__this.Error = errorOverride;
		return __this;
	}

	[Token(Token = "0x6005AA4")]
	[Address(RVA = "0x5D2B090", Offset = "0x5D2A090", VA = "0x5D2B090")]
	private static AottgApiTransportResult ConvertResult(UnityWebRequest.Result result)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c (ApplicationManagers.Api.AottgUnityWebRequestTransport$$ConvertResult): clean
		int iVar1;

		if (result - 2U < 3) {
			iVar1 = result + -1;
		}
		return iVar1;
	}

	[Token(Token = "0x6005AA5")]
	[Address(RVA = "0x5D29270", Offset = "0x5D28270", VA = "0x5D29270")]
	public AottgUnityWebRequestTransport()
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgUnityWebRequestTransport.c (ApplicationManagers.Api.AottgUnityWebRequestTransport$$.ctor): clean
		base();
		return;
	}
}
