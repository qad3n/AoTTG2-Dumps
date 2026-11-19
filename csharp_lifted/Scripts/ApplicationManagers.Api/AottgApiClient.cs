// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiClient
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiClient.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009B8")]
public sealed class AottgApiClient
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20009B9")]
	[CompilerGenerated]
	private struct _003CSendAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x40030CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40030CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder<AottgApiResult> _003C_003Et__builder;

		[Token(Token = "0x40030CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AottgApiRequest request;

		[Token(Token = "0x40030D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgApiClient _003C_003E4__this;

		[Token(Token = "0x40030D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40030D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private AottgApiTransportRequest _003CtransportRequest_003E5__2;

		[Token(Token = "0x40030D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UniTask<AottgApiTransportResponse>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005A5D")]
		[Address(RVA = "0x5D2A5D0", Offset = "0x5D295D0", VA = "0x5D2A5D0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$MoveNext): 42 lines keep C-only constructs
			byte bVar1;
			AottgApiRequest request;
			AottgApiClient __this_00;
			object pIVar3;
			Il2CppRuntimeInterfaceOffsetPair pIVar4;
			Il2CppClass pIVar5;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse__o pCVar6;
			short sVar7;
			sbyte cVar8;
			AottgApiTransportRequest pAVar9;
			Il2CppClass pIVar11;
			AottgApiTransportResponse response;
			AottgApiResult pAVar12;
			ArgumentNullException __this_01;
			String paramName;
			MethodInfo lastManagedFrame;
			CancellationToken in_RCX;
			ulong uVar13;
			long lVar14;
			object local_88;
			AottgApiTransportResponse pAStack_80;
			ulong local_78;
			Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse__o local_68;
			object local_48;
			AottgApiTransportResponse pAStack_40;
			short local_38;
			undefined6 uStack_36;

			local_88 = null;
			pAStack_80 = null;
			local_78 = 0;
			if (this.__1__state == 0) {
				pCVar6 = &this.__u__1;
				local_78._0_2_ = pCVar6.task.token;
				local_78._2_6_ = *(undefined6)&pCVar6.task.field_0x12;
				local_88 = (object)this.__u__1.task.source;
				pAStack_80 = (AottgApiTransportResponse)this.__u__1.task.result;
				this.__u__1.task.source = null;
				this.__u__1.task.result = null;
				*(ulong)&this.__u__1.task.token = 0;
				this.__1__state = -1;
			}
			else {
				request = this.request;
				if (request == null) {
					pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
					__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar11);
					paramName = il2cpp_codegen_get_runtime_metadata(&"request");
					__this_01 = new ArgumentNullException(paramName);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Api_AottgApiClient_SendAsync_d__4_MoveNext);
					throw (object)__this_01;
				}
				__this_00 = this.__4__this;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pAVar9 = __this_00.BuildTransportRequest(request);
				this._transportRequest_5__2 = pAVar9;
				pIVar3 = (object)__this_00._transport;
				if (pIVar3 == null) {
					throw new NullReferenceException();
				}
				in_RCX._source =(CancellationToken)this.cancellationToken._source;
				pAVar9 = this._transportRequest_5__2;
				pIVar11 = pIVar3.klass;
				uVar13 = (ulong)(pIVar11._2).interface_offsets_count;
				local_68.SendAsync(pIVar3, pAVar9, in_RCX);
				local_38 = local_68.token;
				uStack_36 = local_68._18_6_;
				local_48 = (object)local_68.source;
				pAStack_40 = local_68.result;
				local_68.source = null;
				local_68.result = null;
				local_68.token = 0;
				local_68._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter.klass._2). bitflags1 & 1) == 0) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiTransportResponse_GetAwaiter.klass);
				}
				local_68.token = local_38;
				local_68._18_6_ = uStack_36;
				local_68.source = (IUniTaskSource<T>)local_48;
				local_68.result = pAStack_40;
				local_78._0_2_ = local_68.token;
				local_78._2_6_ = local_68._18_6_;
				local_88 = (object)local_68.source;
				pAStack_80 = local_68.result;
				cVar8 = il2cpp_runtime_helper_045ee340(&local_88, MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_get_IsCompleted);
				if (cVar8 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_88;
					this.__u__1.task.result = (object)pAStack_80;
					pCVar6 = &this.__u__1;
					pCVar6.task.token = (int16_t)local_78;
					*(undefined6)&pCVar6.task.field_0x12 = local_78._2_6_;
					il2cpp_runtime_helper_032ecc50(&this.__t__builder, &local_88, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_AwaitUnsafeOnC);
					return;
				}
			}
			pIVar3 = local_88;
			if (local_88 == null) {
				response = pAStack_80;
			}
			else {
				sVar7 = (int16_t)local_78;
				pIVar11 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiTransportResponse_GetResult.klass;
				if (((pIVar11._2).bitflags1 & 1) == 0) {
					pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
				}
				pIVar11 = pIVar11.rgctx_data[5].klass;
				if (((pIVar11._2).bitflags1 & 1) == 0) {
					pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
				}
				pIVar5 = pIVar3.klass;
				uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
				if (uVar13 != 0) {
					pIVar4 = (pIVar5._1).interfaceOffsets;
					lVar14 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar4.interfaceType + lVar14) == pIVar11) {
							in_RCX._source =(CancellationToken)&pIVar5.vtable[*(int)((long)&pIVar4.offset + lVar14)].methodPtr;
							goto label_05e2a8bf;
						}
						lVar14 = lVar14 + 0x10;
					} while (uVar13 * 0x10 != lVar14);
				}
				in_RCX._source =(CancellationToken)GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, pIVar11, 0) ;
		label_05e2a8bf: ;
				response = (AottgApiTransportResponse)(**(code*)in_RCX._source)(pIVar3,(int)sVar7,*(ulong)((long)in_RCX._source + 8));
			}
			pAVar12 = AottgApiClient.HandleResponse(this.request, this._transportRequest_5__2, response);
			this.__1__state = -2;
			this._transportRequest_5__2 = null;
			pIVar3 = (object)this.__t__builder.runnerPromise;
			if (pIVar3 == null) {
				this.__t__builder.result = pAVar12;
				return;
			}
			pIVar11 = MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_SetResult .klass;
			if (((pIVar11._2).bitflags1 & 1) == 0) {
				pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
				pIVar11 = pIVar11.rgctx_data[1].klass;
				bVar1 = (pIVar11._2).bitflags1;
			}
			else {
				pIVar11 = pIVar11.rgctx_data[1].klass;
				bVar1 = (pIVar11._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
				pIVar5 = pIVar3.klass;
			}
			else {
				pIVar5 = pIVar3.klass;
			}
			pIVar3.SendAsync(pAVar12);
			return;
		}

		[Token(Token = "0x6005A5E")]
		[Address(RVA = "0x5D2ABD0", Offset = "0x5D29BD0", VA = "0x5D2ABD0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient.<SendAsync>d__4$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x40030CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Func<string> _baseUrlProvider;

	[Token(Token = "0x40030CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly IAottgApiTransport _transport;

	[Token(Token = "0x6005A51")]
	[Address(RVA = "0x5D249E0", Offset = "0x5D239E0", VA = "0x5D249E0")]
	public AottgApiClient()
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$.ctor): 1 lines keep C-only constructs
		Func<string> __this_00;
		object __this_01;

		__this_00 = new Func<string>(null, (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
		__this_01 = new AottgUnityWebRequestTransport();
		base(__this_00, (IAottgApiTransport)__this_01);
		return;
	}

	[Token(Token = "0x6005A52")]
	[Address(RVA = "0x5D29280", Offset = "0x5D28280", VA = "0x5D29280")]
	public AottgApiClient(Func<string> baseUrlProvider, IAottgApiTransport transport)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$.ctor): 1 lines keep C-only constructs
		base();
		if (baseUrlProvider == null) {
			baseUrlProvider = new Func<string>(null, (intptr_t)MethodInfo_ApplicationManagers_Api_AottgApiClient_DefaultBaseUrl);
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._baseUrlProvider = baseUrlProvider;
		if (transport == null) {
			transport = new AottgUnityWebRequestTransport();
		}
		this._transport = transport;
		return;
	}

	[Token(Token = "0x6005A53")]
	[Address(RVA = "0x5D24AD0", Offset = "0x5D23AD0", VA = "0x5D24AD0")]
	[AsyncStateMachine(typeof(_003CSendAsync_003Ed__4))]
	public UniTask<AottgApiResult> SendAsync(AottgApiRequest request, [Optional] CancellationToken cancellationToken)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$SendAsync): 6 lines keep C-only constructs
		AottgApiClient.d__4<SendAsync> local_a8;
		IUniTaskSource<T> local_48;
		AottgApiResult pAStack_40;
		ulong local_38;

		local_a8.__1__state = 0;
		local_a8._4_4_ = 0;
		local_a8.__u__1.task.source = null;
		local_a8.__u__1.task.result = null;
		local_a8.cancellationToken._source =(CancellationToken)null;
		local_a8._transportRequest_5__2 = null;
		local_a8.request = null;
		local_a8.__4__this = null;
		local_a8.__u__1.task.token = 0;
		local_a8.__u__1.task._18_6_ = 0;
		local_a8.__t__builder.runnerPromise =null;
		local_a8.__t__builder.ex = null;
		local_a8.__t__builder.result = null;
		local_a8.__4__this = this;
		local_a8.request = request;
		local_a8.cancellationToken =(CancellationToken)(CancellationToken)cancellationToken._source;
		local_a8.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_Start_AottgApi);
		}
		local_a8.MoveNext();
		il2cpp_runtime_helper_042dddd0(&local_48, &local_a8.__t__builder, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AottgApiResult_get_Task);
		*(ulong)&__return_storage_ptr__.token = local_38;
		__return_storage_ptr__.source = local_48;
		__return_storage_ptr__.result = pAStack_40;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6005A54")]
	[Address(RVA = "0x5D29350", Offset = "0x5D28350", VA = "0x5D29350")]
	private static string DefaultBaseUrl()
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$DefaultBaseUrl): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07548506 == false) {
			Il2CppMethodInitialized_07548506 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return AccountManager.BaseUrl;
		}
		return *(String*)((long)(typeof(AccountManager)).static_fields + 0x60);
	}

	[Token(Token = "0x6005A55")]
	[Address(RVA = "0x5D293C0", Offset = "0x5D283C0", VA = "0x5D293C0")]
	private AottgApiTransportRequest BuildTransportRequest(AottgApiRequest request)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$BuildTransportRequest): 2 lines keep C-only constructs
		Dictionary<string, string>* targetAddress;
		Dictionary<object, object> pSVar1;
		bool bVar2;
		AottgApiTransportRequest __this_00;
		Dictionary<string, string> __this_01;
		String pSVar3;

		if (request != null) {
			bVar2 = String.IsNullOrEmpty(request.Method);
			if (bVar2) {
				pSVar3 = "GET";
			}
			else {
				pSVar3 = request.Method;
				if (pSVar3 == null) goto label_05e295f8;
				pSVar3 = pSVar3.ToUpperInvariant();
			}
			__this_01 = new Dictionary<string, string>();
			targetAddress = &__this_00.Headers;
			__this_00.Headers = __this_01;
			__this_00 = new AottgApiTransportRequest();
			__this_00.Method = pSVar3;
			pSVar3 = this.BuildUrl(request.Path);
			__this_00.Url = pSVar3;
			__this_00.JsonBody = request.JsonBody;
			__this_00.TimeoutSeconds = request.TimeoutSeconds;
			pSVar1 = (Dictionary<object, object>)__this_00.Headers;
			if (pSVar1 != null) {
				pSVar1.set_Item((Il2CppObject *)"Accept", (Il2CppObject *)"application/json");
				bVar2 = String.IsNullOrEmpty(request.JsonBody);
				if (!bVar2) {
					if ((Dictionary<object, object>)*targetAddress ==null) goto label_05e295f8;
					(*targetAddress).set_Item((Il2CppObject *)"Content-Type", (Il2CppObject *)"application/json");
				}
				bVar2 = String.IsNullOrEmpty(request.BearerToken);
				if (!bVar2) {
					pSVar1 = (Dictionary<object, object>)*targetAddress;
					pSVar3 = String.Concat("Bearer ", request.BearerToken);
					if (pSVar1 == null) goto label_05e295f8;
					pSVar1.set_Item((Il2CppObject *)"Authorization", (object)pSVar3);
				}
				return __this_00;
			}
		}
	label_05e295f8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A56")]
	[Address(RVA = "0x5D29680", Offset = "0x5D28680", VA = "0x5D29680")]
	private string BuildUrl(string path)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$BuildUrl): clean
		Func<string> pSVar1;
		bool bVar2;
		String pSVar3;
		String str2;

		bVar2 = String.IsNullOrEmpty(path);
		if (bVar2) {
			pSVar1 = this._baseUrlProvider;
			if (pSVar1 != null) {
				pSVar3 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
				if ((pSVar3 != null) ||(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 != null)) {
					pSVar3 = pSVar3.TrimEnd(0x2f);
					return pSVar3;
				}
			}
		}
		else if (path != null) {
			bVar2 = path.StartsWith("http://", 5);
			if (!bVar2) {
				bVar2 = path.StartsWith("https://", 5);
				if (!bVar2) {
					pSVar1 = this._baseUrlProvider;
					if (pSVar1 != null) {
						pSVar3 = (String)(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
						if ((pSVar3 != null) ||(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 != null)) {
							pSVar3 = pSVar3.TrimEnd(0x2f);
							str2 = path.TrimStart(0x2f);
							pSVar3 = String.Concat(pSVar3, "/", str2);
							return pSVar3;
						}
					}
					goto label_05e297e3;
				}
			}
			return path;
		}
	label_05e297e3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A57")]
	[Address(RVA = "0x5D297F0", Offset = "0x5D287F0", VA = "0x5D297F0")]
	private static AottgApiResult HandleResponse(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$HandleResponse): clean
		uint uVar1;
		long responseCode;
		long iVar2;
		bool bVar3;
		AottgApiResult pAVar4;
		String error;
		JSONNode pSVar5;
		String value;

		if (response != null) {
			value = response.Text;
			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				uVar1 = response.Result;
			}
			else {
				uVar1 = response.Result;
			}
			if ((uVar1 & 0xfffffffd) == 1) {
				pAVar4 = AottgApiClient.NetworkFailure(request, transportRequest, response);
				return pAVar4;
			}
			responseCode = response.StatusCode;
			if (responseCode - 300U < 0xffffffffffffff9c) {
				error = AottgApiClient.ParseError(value, responseCode);
				AottgApiClient.LogHttpFailure(transportRequest, response, value);
				pAVar4 = AottgApiResult.Fail(response.StatusCode, value, error, response.Error, false);
				return pAVar4;
			}
			if (request != null) {
				if (request.ParseJson == false) {
					pSVar5 = null;
					iVar2 = response.StatusCode;
				}
				else {
					pSVar5 = null;
					bVar3 = String.IsNullOrEmpty(value);
					if (!bVar3) {
						pSVar5 = JSON.Parse(value);
					}
					iVar2 = response.StatusCode;
				}
				pAVar4 = new AottgApiResult();
				if (pAVar4 != null) {
					pAVar4._Success_k__BackingField = true;
					pAVar4._StatusCode_k__BackingField = iVar2;
					if (value == null) {
						value = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					pAVar4._ResponseText_k__BackingField = value;
					pAVar4._Json_k__BackingField = pSVar5;
					return pAVar4;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A58")]
	[Address(RVA = "0x5D29B40", Offset = "0x5D28B40", VA = "0x5D29B40")]
	private static AottgApiResult NetworkFailure(AottgApiRequest request, AottgApiTransportRequest transportRequest, AottgApiTransportResponse response)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$NetworkFailure): 1 lines keep C-only constructs
		String[] values;
		String pSVar1;
		AottgApiResult pAVar2;
		Enum SStack_38;

		values = (String[])new string[10];
		if (values == null) {
	label_05e29de9: ;
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "AottgApiClient: network error ";
			if (transportRequest == null) goto label_05e29de9;
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = transportRequest.Method;
				if (2 < (uint)values.Length) {
					values[2] = " ";
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = transportRequest.Url;
						if (4 < (uint)values.Length) {
							values[4] = " result=";
							if (response == null) goto label_05e29de9;
							SStack_38.klass = (Enum)typeof(AottgApiTransportResult);
							SStack_38.monitor = (IntPtr)0xffffffffffffffff;
							pSVar1 = SStack_38.ToString();
							if (5 < (uint)values.Length) {
								values[5] = pSVar1;
								if (6 < (uint)values.Length) {
									values[6] = " responseCode=";
									pSVar1 = (response.StatusCode).ToString();
									if ((values.Length & 0xfffffff8) != 0) {
										values[7] = pSVar1;
										if (8 < (uint)values.Length) {
											values[8] = " error=";
											if (9 < (uint)values.Length) {
												values[9] = response.Error;
												pSVar1 = String.Concat(values);
												Debug.LogError((object)pSVar1);
												if (request != null) {
													if (request.ReportNetworkError != false) {
														AottgNetworkNotifications.TryReport("network_error");
													}
													pAVar2 = AottgApiResult.Fail(response.StatusCode, response.Text, "network_error", response.Error, false);
													return pAVar2;
												}
												goto label_05e29de9;
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
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005A59")]
	[Address(RVA = "0x5D29B30", Offset = "0x5D28B30", VA = "0x5D29B30")]
	private static bool IsNetworkError(AottgApiTransportResult result)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$IsNetworkError): clean
		return (result & 0xfffffffdU) == 1;
	}

	[Token(Token = "0x6005A5A")]
	[Address(RVA = "0x5D29DF0", Offset = "0x5D28DF0", VA = "0x5D29DF0")]
	private static string ParseError(string responseText, long responseCode)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$ParseError): clean
		bool bVar1;
		String pSVar2;
		JSONNode node;
		long local_20;

		bVar1 = String.IsNullOrEmpty(responseText);
		if (!bVar1) {
			node = JSON.Parse(responseText);
			pSVar2 = AottgApiClient.FieldValue(node, "error");
			bVar1 = String.IsNullOrEmpty(pSVar2);
			if (!bVar1) {
				return pSVar2;
			}
			pSVar2 = AottgApiClient.FieldValue(node, "message");
			bVar1 = String.IsNullOrEmpty(pSVar2);
			if (!bVar1) {
				return pSVar2;
			}
			pSVar2 = AottgApiClient.FieldValue(node, "code");
			bVar1 = String.IsNullOrEmpty(pSVar2);
			if (!bVar1) {
				return pSVar2;
			}
		}
		local_20 = responseCode;
		pSVar2 = local_20.ToString();
		pSVar2 = String.Concat("http_", pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x6005A5B")]
	[Address(RVA = "0x5D2A370", Offset = "0x5D29370", VA = "0x5D2A370")]
	private static string FieldValue(JSONNode node, string name)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$FieldValue): clean
		bool bVar1;
		ushort c;
		JSONNode pSVar2;
		String pSVar3;
		String str1;
		ushort local_2a;

		local_2a = 0;
		bVar1 = (node == null);
		if ((bVar1) || (bVar1 = String.IsNullOrEmpty(name))) {
			return null;
		}
		if (node != null) {
			pSVar2 = node.get_Item(name);
			bVar1 = (pSVar2 != null);
			if (bVar1) {
				if (pSVar2 == null) goto label_05e2a579;
				pSVar3 = pSVar2.get_Value();
				bVar1 = String.IsNullOrEmpty(pSVar3);
				if (!bVar1) {
					pSVar3 = pSVar2.get_Value();
					return pSVar3;
				}
			}
			if (name != null) {
				c = name.get_Chars(0);
				local_2a = Char.ToUpperInvariant(c);
				pSVar3 = Char.ToString(ref local_2a);
				str1 = name.Substring(1);
				pSVar3 = String.Concat(pSVar3, str1);
				pSVar2 = node.get_Item(pSVar3);
				bVar1 = (pSVar2 != null);
				if (!bVar1) {
					return null;
				}
				if (pSVar2 != null) {
					pSVar3 = pSVar2.get_Value();
					bVar1 = String.IsNullOrEmpty(pSVar3);
					if (bVar1) {
						return null;
					}
					pSVar3 = pSVar2.get_Value();
					return pSVar3;
				}
			}
		}
	label_05e2a579: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A5C")]
	[Address(RVA = "0x5D29F90", Offset = "0x5D28F90", VA = "0x5D29F90")]
	private static void LogHttpFailure(AottgApiTransportRequest request, AottgApiTransportResponse response, string text)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiClient.c (ApplicationManagers.Api.AottgApiClient$$LogHttpFailure): 2 lines keep C-only constructs
		long __this;
		uint uVar1;
		String[] values;
		String pSVar2;

		values = (String[])new string[10];
		if (values == null) {
	label_05e2a1e2: ;
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "AottgApiClient: HTTP ";
			if (response == null) goto label_05e2a1e2;
			__this = &response.StatusCode;
			pSVar2 = __this.ToString();
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = pSVar2;
				if (2 < (uint)values.Length) {
					values[2] = " ";
					if (request == null) goto label_05e2a1e2;
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = request.Method;
						if (4 < (uint)values.Length) {
							values[4] = " ";
							if (5 < (uint)values.Length) {
								values[5] = request.Url;
								if (6 < (uint)values.Length) {
									values[6] = " error=";
									if ((values.Length & 0xfffffff8) != 0) {
										values[7] = response.Error;
										if (8 < (uint)values.Length) {
											values[8] = " body=";
											if (9 < (uint)values.Length) {
												values[9] = text;
												pSVar2 = String.Concat(values);
												uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
												if (*__this - 500U < 0xffffffffffffff9c) {
													if (uVar1 == 0) {
													}
													Debug.LogError((object)pSVar2);
													return;
												}
												if (uVar1 == 0) {
												}
												Debug.LogWarning((object)pSVar2);
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
		throw new IndexOutOfRangeException();
	}
}
