// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AccountManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AccountManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ApplicationManagers.Api;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000949")]
internal class AccountManager : MonoBehaviour
{
	[Token(Token = "0x200094A")]
	private struct UnityOAuthStart
	{
		[Token(Token = "0x4002ED5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string SessionId;

		[Token(Token = "0x4002ED6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string PollToken;

		[Token(Token = "0x4002ED7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string AuthorizationUrl;

		[Token(Token = "0x4002ED8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DateTimeOffset ExpiresAt;

		[Token(Token = "0x4002ED9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int PollIntervalSeconds;
	}

	[Token(Token = "0x200094C")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass10_0
	{
		[Token(Token = "0x4002EDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057C1")]
		[Address(RVA = "0x5D03780", Offset = "0x5D02780", VA = "0x5D03780")]
		public _003C_003Ec__DisplayClass10_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057C2")]
		[Address(RVA = "0x5D03790", Offset = "0x5D02790", VA = "0x5D03790")]
		internal void _003CExchangeOAuthCode_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$<ExchangeOAuthCode>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x200094F")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass168_0
	{
		[Token(Token = "0x4002EE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057C7")]
		[Address(RVA = "0x5D039B0", Offset = "0x5D029B0", VA = "0x5D039B0")]
		public _003C_003Ec__DisplayClass168_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass168_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057C8")]
		[Address(RVA = "0x5D039C0", Offset = "0x5D029C0", VA = "0x5D039C0")]
		internal void _003CGetAuthMethods_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass168_0$$<GetAuthMethods>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x2000950")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass169_0
	{
		[Token(Token = "0x4002EE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002EE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x60057C9")]
		[Address(RVA = "0x5D039D0", Offset = "0x5D029D0", VA = "0x5D039D0")]
		public _003C_003Ec__DisplayClass169_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass169_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057CA")]
		[Address(RVA = "0x5D039E0", Offset = "0x5D029E0", VA = "0x5D039E0")]
		internal void _003CSendApiGet_003Eb__0(AottgApiResult result)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass169_0$$<SendApiGet>b__0): 1 lines keep C-only constructs
			Action<AottgApiResult> pSVar1;
			code *vtableDispatch;

			this.done = true;
			pSVar1 = this.onComplete;
			if (pSVar1 == null) {
				return;
			}
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,result,pSVar1.method,vtableDispatch);
			return;
		}
	}

	[Token(Token = "0x2000951")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass171_0
	{
		[Token(Token = "0x4002EE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002EE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x60057CB")]
		[Address(RVA = "0x5D03A00", Offset = "0x5D02A00", VA = "0x5D03A00")]
		public _003C_003Ec__DisplayClass171_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057CC")]
		[Address(RVA = "0x5D03A10", Offset = "0x5D02A10", VA = "0x5D03A10")]
		internal void _003CSendApiJson_003Eb__0(AottgApiResult result)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$<SendApiJson>b__0): 1 lines keep C-only constructs
			Action<AottgApiResult> pSVar1;
			code *vtableDispatch;

			this.done = true;
			pSVar1 = this.onComplete;
			if (pSVar1 == null) {
				return;
			}
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,result,pSVar1.method,vtableDispatch);
			return;
		}
	}

	[Token(Token = "0x2000952")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass175_0
	{
		[Token(Token = "0x4002EE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057CD")]
		[Address(RVA = "0x5D03A30", Offset = "0x5D02A30", VA = "0x5D03A30")]
		public _003C_003Ec__DisplayClass175_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass175_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057CE")]
		[Address(RVA = "0x5D03A40", Offset = "0x5D02A40", VA = "0x5D03A40")]
		internal void _003CDeleteJson_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass175_0$$<DeleteJson>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x2000953")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass176_0
	{
		[Token(Token = "0x4002EE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057CF")]
		[Address(RVA = "0x5D03A50", Offset = "0x5D02A50", VA = "0x5D03A50")]
		public _003C_003Ec__DisplayClass176_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass176_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057D0")]
		[Address(RVA = "0x5D03A60", Offset = "0x5D02A60", VA = "0x5D03A60")]
		internal void _003CPostJson_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass176_0$$<PostJson>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x2000958")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass54_0
	{
		[Token(Token = "0x4002EEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057D9")]
		[Address(RVA = "0x5D03E40", Offset = "0x5D02E40", VA = "0x5D03E40")]
		public _003C_003Ec__DisplayClass54_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057DA")]
		[Address(RVA = "0x5D03E50", Offset = "0x5D02E50", VA = "0x5D03E50")]
		internal void _003CSendMeJson_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$<SendMeJson>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x2000959")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass55_0
	{
		[Token(Token = "0x4002EED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057DB")]
		[Address(RVA = "0x5D03E60", Offset = "0x5D02E60", VA = "0x5D03E60")]
		public _003C_003Ec__DisplayClass55_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057DC")]
		[Address(RVA = "0x5D03E70", Offset = "0x5D02E70", VA = "0x5D03E70")]
		internal void _003CSendMeReadJson_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$<SendMeReadJson>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x200095A")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass8_0
	{
		[Token(Token = "0x4002EEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057DD")]
		[Address(RVA = "0x5D03E80", Offset = "0x5D02E80", VA = "0x5D03E80")]
		public _003C_003Ec__DisplayClass8_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057DE")]
		[Address(RVA = "0x5D03E90", Offset = "0x5D02E90", VA = "0x5D03E90")]
		internal void _003COAuthFlow_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$<OAuthFlow>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x200095B")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass9_0
	{
		[Token(Token = "0x4002EEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60057DF")]
		[Address(RVA = "0x5D03EA0", Offset = "0x5D02EA0", VA = "0x5D03EA0")]
		public _003C_003Ec__DisplayClass9_0()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60057E0")]
		[Address(RVA = "0x5D03EB0", Offset = "0x5D02EB0", VA = "0x5D03EB0")]
		internal void _003CPollUnityOAuth_003Eb__0(AottgApiResult r)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$<PollUnityOAuth>b__0): clean
			this.result = r;
			return;
		}
	}

	[Token(Token = "0x200095C")]
	[CompilerGenerated]
	private sealed class _003CDeleteJson_003Ed__175 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002EF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002EF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002EF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002EF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002EF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002EF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass175_0 _003C_003E8__1;

		[Token(Token = "0x4002EF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000F22")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60057E4")]
			[Address(RVA = "0x5D040B0", Offset = "0x5D030B0", VA = "0x5D040B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F23")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60057E6")]
			[Address(RVA = "0x5D04100", Offset = "0x5D03100", VA = "0x5D04100", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60057E1")]
		[Address(RVA = "0x5D01EB0", Offset = "0x5D00EB0", VA = "0x5D01EB0")]
		[DebuggerHidden]
		public _003CDeleteJson_003Ed__175(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<DeleteJson>d__175$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60057E2")]
		[Address(RVA = "0x5D03EC0", Offset = "0x5D02EC0", VA = "0x5D03EC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60057E3")]
		[Address(RVA = "0x5D03ED0", Offset = "0x5D02ED0", VA = "0x5D03ED0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<DeleteJson>d__175$$MoveNext): 4 lines keep C-only constructs
			int iVar1;
			AottgApiResult pAVar2;
			AccountManager __this_00;
			String bearer;
			AccountManager.c__DisplayClass175_0 pAVar3;
			Action<AottgApiResult> __this_01;
			object pIVar4;
			Action<bool, string> pSVar5;
			String* ppSVar6;
			IntPtr iVar7;
			String pSVar8;
			ulong uVar9;
			IntPtr iVar10;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				pAVar3 = new AccountManager.c__DisplayClass175_0();
				this.__8__1 = pAVar3;
				pAVar3 = this.__8__1;
				if (pAVar3 != null) {
					pAVar3.result = null;
					pSVar8 = this.path;
					bearer = this.bearer;
					pAVar3 = this.__8__1;
					__this_01 = new Action<AottgApiResult>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass175_0_DeleteJson_b__0);
					if (__this_00 != null) {
						pIVar4 = (object)__this_00.SendApiJson("DELETE", pSVar8, null, bearer, false, __this_01, true, (Nullable<int>)0x0);
						this.__2__current = pIVar4;
						this.__1__state = 1;
						goto label_05e04092;
					}
				}
		label_05e040a7: ;
				throw new NullReferenceException();
			}
			if (iVar1 != 1) goto label_05e04092;
			this.__1__state = -1;
			pAVar3 = this.__8__1;
			if (pAVar3 == null) goto label_05e040a7;
			pAVar2 = pAVar3.result;
			if (pAVar2 == null) {
				pSVar5 = this.onComplete;
				if (pSVar5 == null) goto label_05e04092;
				ppSVar6 = &"unknown_error";
		label_05e04082: ;
				pSVar8 = *ppSVar6;
				iVar7 = pSVar5.method;
				iVar10 = pSVar5.method_code;
				uVar9 = 0;
			}
			else {
				pSVar5 = this.onComplete;
				if (pAVar2._Success_k__BackingField == false) {
					if (pSVar5 == null) goto label_05e04092;
					ppSVar6 = &pAVar2._Error_k__BackingField;
					goto label_05e04082;
				}
				if (pSVar5 == null) goto label_05e04092;
				iVar7 = pSVar5.method;
				iVar10 = pSVar5.method_code;
				uVar9 = 1;
				pSVar8 = null;
			}
			(*(code)pSVar5.invoke_impl)(iVar10,uVar9,pSVar8,iVar7);
		label_05e04092: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60057E5")]
		[Address(RVA = "0x5D040C0", Offset = "0x5D030C0", VA = "0x5D040C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_DeleteJson_d__175_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200095D")]
	[CompilerGenerated]
	private sealed class _003CExchangeOAuthCode_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002EF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002EF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002EF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string code;

		[Token(Token = "0x4002EFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002EFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x4002EFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass10_0 _003C_003E8__1;

		[Token(Token = "0x17000F24")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60057EA")]
			[Address(RVA = "0x5D04590", Offset = "0x5D03590", VA = "0x5D04590", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F25")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60057EC")]
			[Address(RVA = "0x5D045E0", Offset = "0x5D035E0", VA = "0x5D045E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60057E7")]
		[Address(RVA = "0x5CF9AA0", Offset = "0x5CF8AA0", VA = "0x5CF9AA0")]
		[DebuggerHidden]
		public _003CExchangeOAuthCode_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60057E8")]
		[Address(RVA = "0x5D04110", Offset = "0x5D03110", VA = "0x5D04110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60057E9")]
		[Address(RVA = "0x5D04120", Offset = "0x5D03120", VA = "0x5D04120", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$MoveNext): 5 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			AottgApiResult pAVar3;
			AccountManager __this_00;
			AccountManager.c__DisplayClass10_0 pAVar4;
			String pSVar5;
			String str2;
			Action<AottgApiResult> __this_01;
			object pIVar6;
			String* ppSVar7;
			bool bVar8;
			Nullable<int> SStack_38;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				pAVar4 = new AccountManager.c__DisplayClass10_0();
				this.__8__1 = pAVar4;
				pSVar5 = AccountManager.BaseUrl;
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				pSVar5 = pSVar5.TrimEnd(0x2f);
				str2 = UnityWebRequest.EscapeURL(this.code);
				pSVar5 = String.Concat(pSVar5, "/v1/auth/oauth/session?code=", str2);
				pAVar4 = this.__8__1;
				if (pAVar4 == null) {
					throw new NullReferenceException();
				}
				pAVar4.result = null;
				pAVar4 = this.__8__1;
				__this_01 = new Action<AottgApiResult>((object)pAVar4, (intptr_t) MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0_ExchangeOAuthCode_b__0);
				bVar8 = this.reportNetworkError;
				SStack_38.hasValue = false;
				SStack_38._1_3_ = 0;
				SStack_38.value = 0;
				SStack_38 = new Nullable<int>(10);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = (object)__this_00.SendApiJson("GET", pSVar5, null, null, false, __this_01, bVar8, (Nullable<int>)SStack_38);
				this.__2__current = pIVar6;
				this.__1__state = 1;
				goto label_05e04402;
			}
			if (iVar1 != 1) goto label_05e04402;
			this.__1__state = -1;
			pAVar4 = this.__8__1;
			if (pAVar4 == null) {
				throw new NullReferenceException();
			}
			pAVar3 = pAVar4.result;
			if (pAVar3 == null) {
				ppSVar7 = &"unknown_error";
		label_05e043dd: ;
				pSVar5 = *ppSVar7;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar8 = false;
			}
			else {
				if (pAVar3._Success_k__BackingField == false) {
					ppSVar7 = &pAVar3._Error_k__BackingField;
					goto label_05e043dd;
				}
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075483c8 != false) goto label_05e04203;
		label_05e04428: ;
					Il2CppMethodInitialized_075483c8 = true;
					uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_075483c8 == false) goto label_05e04428;
		label_05e04203: ;
					uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				AccountManager._KeepSignedIn_k__BackingField = true;
				pAVar4 = this.__8__1;
				if (pAVar4 == null) {
					throw new NullReferenceException();
				}
				pAVar3 = pAVar4.result;
				if (pAVar3 == null) {
					throw new NullReferenceException();
				}
				pSVar5 = pAVar3._ResponseText_k__BackingField;
				AccountManager.ApplyAuthResponse(pSVar5);
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar8 = true;
				pSVar5 = null;
			}
			AccountManager.CompleteOAuth(bVar8, pSVar5);
		label_05e04402: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60057EB")]
		[Address(RVA = "0x5D045A0", Offset = "0x5D035A0", VA = "0x5D045A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_ExchangeOAuthCode_d__10_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200095E")]
	[CompilerGenerated]
	private sealed class _003CGetAuthMethods_003Ed__168 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002EFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002EFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002EFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass168_0 _003C_003E8__1;

		[Token(Token = "0x4002F01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000F26")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60057F0")]
			[Address(RVA = "0x5D04940", Offset = "0x5D03940", VA = "0x5D04940", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F27")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60057F2")]
			[Address(RVA = "0x5D04990", Offset = "0x5D03990", VA = "0x5D04990", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60057ED")]
		[Address(RVA = "0x5D01820", Offset = "0x5D00820", VA = "0x5D01820")]
		[DebuggerHidden]
		public _003CGetAuthMethods_003Ed__168(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60057EE")]
		[Address(RVA = "0x5D045F0", Offset = "0x5D035F0", VA = "0x5D045F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60057EF")]
		[Address(RVA = "0x5D04600", Offset = "0x5D03600", VA = "0x5D04600", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$MoveNext): 7 lines keep C-only constructs
			AccountManager.c__DisplayClass168_0* targetAddress;
			int iVar1;
			AottgApiResult pAVar2;
			Action pSVar3;
			AccountManager __this_00;
			bool bVar4;
			AccountManager.c__DisplayClass168_0 pAVar5;
			Action<AottgApiResult> __this_01;
			object pIVar6;
			Action<bool, string> pSVar7;
			String* ppSVar8;
			IntPtr iVar9;
			String pSVar10;
			ulong uVar11;
			IntPtr iVar12;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				pAVar5 = new AccountManager.c__DisplayClass168_0();
				targetAddress = &this.__8__1;
				this.__8__1 = pAVar5;
				pAVar5 = this.__8__1;
				if (pAVar5 != null) {
					pAVar5.result = null;
					pAVar5 = *targetAddress;
					__this_01 = new Action<AottgApiResult>((object)pAVar5, (intptr_t) MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass168_0_GetAuthMethods_b__0);
					if (__this_00 != null) {
						pIVar6 = (object)__this_00.SendApiGet("/v1/auth/methods", null, false, __this_01);
						this.__2__current = pIVar6;
						this.__1__state = 1;
						goto label_05e04812;
					}
				}
		label_05e048f3: ;
				throw new NullReferenceException();
			}
			if (iVar1 != 1) goto label_05e04812;
			this.__1__state = -1;
			pAVar5 = this.__8__1;
			if (pAVar5 == null) goto label_05e048f3;
			pAVar2 = pAVar5.result;
			if (pAVar2 == null) {
				pSVar7 = this.onComplete;
				if (pSVar7 == null) goto label_05e04812;
				ppSVar8 = &"unknown_error";
		label_05e04802: ;
				pSVar10 = *ppSVar8;
				iVar9 = pSVar7.method;
				iVar12 = pSVar7.method_code;
				uVar11 = 0;
			}
			else {
				if (pAVar2._Success_k__BackingField == false) {
					pSVar7 = this.onComplete;
					if (pSVar7 == null) goto label_05e04812;
					ppSVar8 = &pAVar2._Error_k__BackingField;
					goto label_05e04802;
				}
				pSVar10 = pAVar2._ResponseText_k__BackingField;
				bVar4 = AccountManager.ApplyAuthMethodsResponse(pSVar10);
				if (bVar4) {
					pSVar3 = AccountManager.OnAuthMethodsChanged;
					if (pSVar3 != null) {
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
					}
				}
				pSVar7 = this.onComplete;
				if (pSVar7 == null) goto label_05e04812;
				iVar9 = pSVar7.method;
				iVar12 = pSVar7.method_code;
				uVar11 = 1;
				pSVar10 = null;
			}
			(*(code)pSVar7.invoke_impl)(iVar12,uVar11,pSVar10,iVar9);
		label_05e04812: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60057F1")]
		[Address(RVA = "0x5D04950", Offset = "0x5D03950", VA = "0x5D04950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__168_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200095F")]
	[CompilerGenerated]
	private sealed class _003CGetCharacterInfoJson_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002F05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000F28")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60057F6")]
			[Address(RVA = "0x5D04AF0", Offset = "0x5D03AF0", VA = "0x5D04AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F29")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60057F8")]
			[Address(RVA = "0x5D04B40", Offset = "0x5D03B40", VA = "0x5D04B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60057F3")]
		[Address(RVA = "0x5CFBCF0", Offset = "0x5CFACF0", VA = "0x5CFBCF0")]
		[DebuggerHidden]
		public _003CGetCharacterInfoJson_003Ed__52(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60057F4")]
		[Address(RVA = "0x5D049A0", Offset = "0x5D039A0", VA = "0x5D049A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60057F5")]
		[Address(RVA = "0x5D049B0", Offset = "0x5D039B0", VA = "0x5D049B0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			AccountManager __this_00;
			AccountManager.c__DisplayClass52_0 __this_01;
			Action<T1, T2, T3> __this_02;
			object pIVar2;
			int iVar3;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				__this_01 = new AccountManager.c__DisplayClass52_0();
				if (__this_01 == null) {
		label_05e04aeb: ;
					throw new NullReferenceException();
				}
				__this_01.onComplete = this.onComplete;
				__this_02 = new Action<bool, string, JSONNode>((object)__this_01, (intptr_t) MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0_GetCharacterInfoJson_b__0);
				if (__this_00 == null) goto label_05e04aeb;
				iVar3 = 1;
				pIVar2 = (object)__this_00.SendMeJson("GET", "/v1/me/character-info", null, (Action<bool, string, JSONNode>)__this_02, true);
				this.__2__current = pIVar2;
			}
			else {
				iVar3 = -1;
				if (iVar1 != 1) goto label_05e04ad9;
			}
			this.__1__state = iVar3;
		label_05e04ad9: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60057F7")]
		[Address(RVA = "0x5D04B00", Offset = "0x5D03B00", VA = "0x5D04B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52_System_Collections_IEnumerator_Res);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000960")]
	[CompilerGenerated]
	private sealed class _003CGetProfileJson_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002F09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000F2A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60057FC")]
			[Address(RVA = "0x5D04CA0", Offset = "0x5D03CA0", VA = "0x5D04CA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F2B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60057FE")]
			[Address(RVA = "0x5D04CF0", Offset = "0x5D03CF0", VA = "0x5D04CF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60057F9")]
		[Address(RVA = "0x5CFBCB0", Offset = "0x5CFACB0", VA = "0x5CFBCB0")]
		[DebuggerHidden]
		public _003CGetProfileJson_003Ed__50(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetProfileJson>d__50$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60057FA")]
		[Address(RVA = "0x5D04B50", Offset = "0x5D03B50", VA = "0x5D04B50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60057FB")]
		[Address(RVA = "0x5D04B60", Offset = "0x5D03B60", VA = "0x5D04B60", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetProfileJson>d__50$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			AccountManager __this_00;
			AccountManager.c__DisplayClass50_0 __this_01;
			Action<T1, T2, T3> __this_02;
			object pIVar2;
			int iVar3;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				__this_01 = new AccountManager.c__DisplayClass50_0();
				if (__this_01 == null) {
		label_05e04c9b: ;
					throw new NullReferenceException();
				}
				__this_01.onComplete = this.onComplete;
				__this_02 = new Action<bool, string, JSONNode>((object)__this_01, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0_GetProfileJson_b__0);
				if (__this_00 == null) goto label_05e04c9b;
				iVar3 = 1;
				pIVar2 = (object)__this_00.SendMeJson("GET", "/v1/me", null, (Action<bool, string, JSONNode>)__this_02, true);
				this.__2__current = pIVar2;
			}
			else {
				iVar3 = -1;
				if (iVar1 != 1) goto label_05e04c89;
			}
			this.__1__state = iVar3;
		label_05e04c89: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60057FD")]
		[Address(RVA = "0x5D04CB0", Offset = "0x5D03CB0", VA = "0x5D04CB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000961")]
	[CompilerGenerated]
	private sealed class _003COAuthFlow_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string provider;

		[Token(Token = "0x4002F0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x4002F0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int attemptId;

		[Token(Token = "0x4002F10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass8_0 _003C_003E8__1;

		[Token(Token = "0x17000F2C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005802")]
			[Address(RVA = "0x5D052C0", Offset = "0x5D042C0", VA = "0x5D052C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F2D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005804")]
			[Address(RVA = "0x5D05310", Offset = "0x5D04310", VA = "0x5D05310", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60057FF")]
		[Address(RVA = "0x5CF9920", Offset = "0x5CF8920", VA = "0x5CF9920")]
		[DebuggerHidden]
		public _003COAuthFlow_003Ed__8(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<OAuthFlow>d__8$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005800")]
		[Address(RVA = "0x5D04D00", Offset = "0x5D03D00", VA = "0x5D04D00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005801")]
		[Address(RVA = "0x5D04D10", Offset = "0x5D03D10", VA = "0x5D04D10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<OAuthFlow>d__8$$MoveNext): 20 lines keep C-only constructs
			AccountManager.c__DisplayClass8_0* targetAddress;
			int iVar1;
			int iVar2;
			uint uVar3;
			AccountManager __this_00;
			AottgApiResult pAVar4;
			AccountManager.UnityOAuthStart pAVar5;
			bool bVar6;
			AccountManager.c__DisplayClass8_0 pAVar7;
			AccountManager.d__9<PollUnityOAuth> __this_01;
			String* ppSVar8;
			JSONObject __this_02;
			JSONNode pSVar9;
			String pSVar10;
			Action<AottgApiResult> __this_03;
			object pIVar11;
			Nullable<int> SStack_98;
			String pSStack_90;
			String pSStack_88;
			DateTime SStack_80;
			short iStack_78;
			undefined6 uStack_76;
			int iStack_70;
			uint uStack_6c;
			AccountManager.UnityOAuthStart AStack_68;

			AStack_68.ExpiresAt._offsetMinutes = 0;
			AStack_68.ExpiresAt._10_6_ = 0;
			AStack_68.PollIntervalSeconds = 0;
			AStack_68._44_4_ = 0;
			AStack_68.AuthorizationUrl = null;
			AStack_68.ExpiresAt._dateTime._dateData = (DateTime)0;
			AStack_68.SessionId = null;
			AStack_68.PollToken = null;
			iVar1 = this.__1__state;
			if (iVar1 == 2) {
				this.__1__state = -1;
				return false;
			}
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05e052ad: ;
					throw new NullReferenceException();
				}
				iVar1 = this.attemptId;
				if (__this_00._oauthAttemptId != iVar1) {
					return false;
				}
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				if (AccountManager._oauthPendingCallback ==null) {
					return false;
				}
				pAVar7 = this.__8__1;
				if (pAVar7 == null) goto label_05e052ad;
				pAVar4 = pAVar7.result;
				if (pAVar4 == null) {
					uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					pSVar10 = "unknown_error";
				}
				else {
					if (pAVar4._Success_k__BackingField != false) {
						pSVar10 = pAVar4._ResponseText_k__BackingField;
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						}
						bVar6 = AccountManager.TryParseUnityOAuthStart(pSVar10, ref AStack_68);
						pSVar10 = AStack_68.AuthorizationUrl;
						if (bVar6) {
							Application.OpenURL(pSVar10);
							iVar2 = this.attemptId;
							bVar6 = this.reportNetworkError;
							iStack_78 = AStack_68.ExpiresAt._offsetMinutes;
							uStack_76 = AStack_68.ExpiresAt._10_6_;
							iStack_70 = AStack_68.PollIntervalSeconds;
							uStack_6c = AStack_68._44_4_;
							pSStack_88 = AStack_68.AuthorizationUrl;
							SStack_80 = AStack_68.ExpiresAt._dateTime._dateData;
							SStack_98 = (Nullable<int>)AStack_68.SessionId;
							pSStack_90 = AStack_68.PollToken;
							__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AccountManager.d__9<PollUnityOAuth>));
							__this_01 = new Object();
							__this_01.__1__state = 0;
							__this_01.__4__this = __this_00;
							pAVar5 = &__this_01.start;
							pAVar5.ExpiresAt._offsetMinutes = iStack_78;
							*(undefined6)&pAVar5.ExpiresAt.field_0xa = uStack_76;
							__this_01.start.PollIntervalSeconds = iStack_70;
							*(uint)&__this_01.start.field_0x2c = uStack_6c;
							__this_01.start.AuthorizationUrl = pSStack_88;
							__this_01.start.ExpiresAt._dateTime._dateData = SStack_80._dateData;
							__this_01.start.SessionId = (String)SStack_98;
							__this_01.start.PollToken = pSStack_90;
							__this_01.attemptId = iVar2;
							__this_01.reportNetworkError = bVar6;
							this.__2__current = (object)__this_01;
							this.__1__state = 2;
							return true;
						}
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						}
						ppSVar8 = &"bad_response";
						goto label_05e050ea;
					}
					pSVar10 = pAVar4._Error_k__BackingField;
					uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				pAVar7 = new AccountManager.c__DisplayClass8_0();
				targetAddress = &this.__8__1;
				this.__8__1 = pAVar7;
				pSVar10 = this.provider;
				bVar6 = String.IsNullOrEmpty(pSVar10);
				if (bVar6) {
					pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					if ((pSVar10 == null) ||(pSVar10 = pSVar10.Trim(), pSVar10 == null)) goto label_05e052ad;
					pSVar10 = pSVar10.ToLowerInvariant();
				}
				ppSVar8 = &this.provider;
				*ppSVar8 = pSVar10;
				bVar6 = (*ppSVar8 != "discord");
				if ((!bVar6) ||(bVar6 = (*ppSVar8 != "google"), !bVar6)) {
					__this_02 = new JSONObject();
					pSVar10 = *ppSVar8;
					pSVar9 = ((JSONNode)pSVar10);
					if (__this_02 != null) {
						__this_02.set_Item("provider", pSVar9);
						pAVar7 = *targetAddress;
						if (pAVar7 != null) {
							pAVar7.result = null;
							pSVar10 = __this_02.ToString();
							pAVar7 = this.__8__1;
							__this_03 = new Action<AottgApiResult>((object)pAVar7, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0_OAuthFlow_b__0);
							bVar6 = this.reportNetworkError;
							SStack_98.hasValue = false;
							SStack_98._1_3_ = 0;
							SStack_98.value = 0;
							SStack_98 = new Nullable<int>(10);
							if (__this_00 != null) {
								pIVar11 = (object)__this_00.SendApiJson("POST", "/v1/auth/oauth/unity/start", pSVar10, null, false, __this_03, bVar6, (Nullable<int>)SStack_98);
								this.__2__current = pIVar11;
								this.__1__state = 1;
								return true;
							}
						}
					}
					goto label_05e052ad;
				}
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				ppSVar8 = &"Provider is not supported.";
		label_05e050ea: ;
				pSVar10 = *ppSVar8;
			}
			AccountManager.CompleteOAuth(false, pSVar10);
			return false;
		}

		[Token(Token = "0x6005803")]
		[Address(RVA = "0x5D052D0", Offset = "0x5D042D0", VA = "0x5D052D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000962")]
	[CompilerGenerated]
	private sealed class _003CPatchProfileJson_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002F14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002F16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool reportNetworkError;

		[Token(Token = "0x17000F2E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005808")]
			[Address(RVA = "0x5D05480", Offset = "0x5D04480", VA = "0x5D05480", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F2F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600580A")]
			[Address(RVA = "0x5D054D0", Offset = "0x5D044D0", VA = "0x5D054D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005805")]
		[Address(RVA = "0x5CFBCD0", Offset = "0x5CFACD0", VA = "0x5CFBCD0")]
		[DebuggerHidden]
		public _003CPatchProfileJson_003Ed__51(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005806")]
		[Address(RVA = "0x5D05320", Offset = "0x5D04320", VA = "0x5D05320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005807")]
		[Address(RVA = "0x5D05330", Offset = "0x5D04330", VA = "0x5D05330", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			AccountManager __this_00;
			String json;
			int iVar2;
			AccountManager.c__DisplayClass51_0 __this_01;
			Action<T1, T2, T3> __this_02;
			object pIVar3;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				__this_01 = new AccountManager.c__DisplayClass51_0();
				if (__this_01 == null) {
		label_05e05470: ;
					throw new NullReferenceException();
				}
				__this_01.onComplete = this.onComplete;
				json = this.json;
				__this_02 = new Action<bool, string, JSONNode>((object)__this_01, (intptr_t) MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0_PatchProfileJson_b__0);
				if (__this_00 == null) goto label_05e05470;
				pIVar3 = (object)__this_00.SendMeJson("PATCH", "/v1/me", json, (Action<bool, string, JSONNode>)__this_02, this.reportNetworkError);
				this.__2__current = pIVar3;
				iVar2 = 1;
			}
			else {
				iVar2 = -1;
				if (iVar1 != 1) goto label_05e0545c;
			}
			this.__1__state = iVar2;
		label_05e0545c: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6005809")]
		[Address(RVA = "0x5D05490", Offset = "0x5D04490", VA = "0x5D05490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000963")]
	[CompilerGenerated]
	private sealed class _003CPollUnityOAuth_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public UnityOAuthStart start;

		[Token(Token = "0x4002F1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public bool reportNetworkError;

		[Token(Token = "0x4002F1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public int attemptId;

		[Token(Token = "0x4002F1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass9_0 _003C_003E8__1;

		[Token(Token = "0x4002F1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003CpollSeconds_003E5__2;

		[Token(Token = "0x17000F30")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600580E")]
			[Address(RVA = "0x5D05BA0", Offset = "0x5D04BA0", VA = "0x5D05BA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F31")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005810")]
			[Address(RVA = "0x5D05BF0", Offset = "0x5D04BF0", VA = "0x5D05BF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600580B")]
		[Address(RVA = "0x5CF99F0", Offset = "0x5CF89F0", VA = "0x5CF99F0")]
		[DebuggerHidden]
		public _003CPollUnityOAuth_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600580C")]
		[Address(RVA = "0x5D054E0", Offset = "0x5D044E0", VA = "0x5D054E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600580D")]
		[Address(RVA = "0x5D054F0", Offset = "0x5D044F0", VA = "0x5D054F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$MoveNext): 16 lines keep C-only constructs
			uint uVar1;
			int iVar2;
			uint uVar3;
			AccountManager __this_00;
			AottgApiResult pAVar4;
			Action<bool, string> pSVar5;
			ulong uVar6;
			ushort uVar7;
			ushort uVar8;
			ulong uVar9;
			ushort uVar10;
			AccountManager.UnityOAuthStart pAVar11;
			bool bVar12;
			AccountManager.c__DisplayClass9_0 pAVar13;
			String* ppSVar14;
			String pSVar15;
			String pSVar16;
			Action<AottgApiResult> __this_01;
			object pIVar17;
			WaitForSecondsRealtime __this_02;
			float fVar18;
			double dVar19;
			float fVar20;
			DateTimeOffset SVar21;
			DateTimeOffset SVar22;
			DateTimeOffset right;
			DateTimeOffset left;
			String pSStack_60;
			double dStack_58;
			String pSStack_50;
			Nullable<int> SStack_48;
			TimeSpan SStack_40;
			String pSStack_38;

			pSStack_60 = null;
			pSStack_50 = null;
			pSStack_38 = null;
			SStack_40._ticks = 0;
			uVar1 = this.__1__state;
			if (uVar1 < 4) {
				__this_00 = this.__4__this;
				switch(uVar1) {
				case 0:
					this.__1__state = -1;
					fVar18 = (float)this.start.PollIntervalSeconds;
					fVar20 = 1.0;
					if (1.0 <= fVar18) {
						fVar20 = fVar18;
					}
					this._pollSeconds_5__2 = fVar20;
					break;
				case 1:
					this.__1__state = -1;
					if (__this_00 != null) {
						iVar2 = this.attemptId;
						if (__this_00._oauthAttemptId != iVar2) {
							return false;
						}
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						}
						if (AccountManager._oauthPendingCallback ==null) {
							return false;
						}
						pAVar13 = this.__8__1;
						if (pAVar13 == null) goto label_05e05b8d;
						pAVar4 = pAVar13.result;
						if (pAVar4 == null) {
							uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
							pSVar15 = "unknown_error";
		joined_r0x05e059ce: ;
							if (uVar3 == 0) {
							}
							AccountManager.CompleteOAuth(false, pSVar15);
							return false;
						}
						if (pAVar4._Success_k__BackingField == false) {
							pSVar15 = pAVar4._Error_k__BackingField;
							uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
							goto joined_r0x05e059ce;
						}
						pSVar15 = pAVar4._ResponseText_k__BackingField;
						ppSVar14 = &pSStack_38;
						bVar12 = AccountManager.TryParseUnityOAuthStatus(pSVar15, ref pSStack_60, ref pSStack_50, ppSVar14);
						if (bVar12) {
							bVar12 = (pSStack_60 == "complete");
							if (bVar12) {
								bVar12 = String.IsNullOrEmpty(pSStack_50);
								if (!bVar12) {
									pIVar17 = (object)__this_00.ExchangeOAuthCode(pSStack_50, this.reportNetworkError);
									this.__2__current = pIVar17;
									this.__1__state = 2;
									return true;
								}
								if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
								}
								ppSVar14 = &"oauth_missing_code";
								goto label_05e0586e;
							}
							bVar12 = (pSStack_60 == "failed");
							if (bVar12) {
								bVar12 = String.IsNullOrEmpty(pSStack_38);
								if (bVar12) {
									ppSVar14 = &"oauth_failed";
								}
								uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
								pSVar15 = (String)((MethodInfo)ppSVar14).methodPointer;
								goto joined_r0x05e059ce;
							}
							bVar12 = (pSStack_60 != "pending");
							if (!bVar12) {
								pAVar11 = &this.start;
								uVar9 = pAVar11.ExpiresAt._dateTime;
								uVar10 = pAVar11.ExpiresAt._offsetMinutes;
								SVar21._offsetMinutes = uVar10;
								SVar21._dateTime._dateData = (DateTime)(DateTime)uVar9;
								SVar22 = DateTimeOffset.UtcNow;
								right._8_8_ = SVar22._8_8_ & 0xffffffff;
								right._dateTime._dateData = SVar22._dateTime._dateData;
								SVar21._10_6_ = 0;
								SStack_40._ticks = (int64_t)(SVar21 - right);
								dVar19 = SStack_40.TotalSeconds;
								if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
									dStack_58 = dVar19;
									dVar19 = dStack_58;
								}
								dVar19 = Math.Max(0.1, dVar19);
								fVar20 = this._pollSeconds_5__2;
								if ((float)dVar19 <= fVar20) {
									fVar20 = (float)dVar19;
								}
								dStack_58 = (double)CONCAT44(dStack_58._4_4_, fVar20);
								__this_02 = new WaitForSecondsRealtime(dStack_58._0_4_);
								this.__2__current = (object)__this_02;
								this.__1__state = 3;
								return true;
							}
						}
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						}
						ppSVar14 = &"bad_response";
						goto label_05e0586e;
					}
					goto label_05e05b8d;
				case 2:
					this.__1__state = -1;
					return false;
				case 3:
					this.__1__state = -1;
					this.__8__1 = null;
				}
				if (__this_00 == null) {
		label_05e05b8d: ;
					throw new NullReferenceException();
				}
				iVar2 = this.attemptId;
				if (__this_00._oauthAttemptId == iVar2) {
					if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						pSVar5 = AccountManager._oauthPendingCallback;
					}
					else {
						pSVar5 = AccountManager._oauthPendingCallback;
					}
					if (pSVar5 != null) {
						pAVar13 = new AccountManager.c__DisplayClass9_0();
						this.__8__1 = pAVar13;
						SVar21 = DateTimeOffset.UtcNow;
						pAVar11 = &this.start;
						uVar6 = pAVar11.ExpiresAt._dateTime;
						uVar7 = pAVar11.ExpiresAt._offsetMinutes;
						uVar8 = *(ushort)&pAVar11.ExpiresAt.field_0xa;
						SVar22._10_2_ = uVar8;
						SVar22._offsetMinutes = uVar7;
						SVar22._dateTime._dateData = (DateTime)(DateTime)uVar6;
						SVar22._12_4_ = 0;
						left._12_4_ = 0;
						left._dateTime._dateData =((DateTime)SVar21._dateTime._dateData);
						left._offsetMinutes = SVar21._offsetMinutes;
						left._10_2_ = SVar21._10_2_;
						bVar12 = (left >= SVar22);
						uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						if (bVar12) {
							if (uVar3 == 0) {
							}
							ppSVar14 = &"oauth_timeout";
		label_05e0586e: ;
							AccountManager.CompleteOAuth(false, *ppSVar14);
							return false;
						}
						if (uVar3 == 0) {
						}
						pSVar15 = AccountManager.BaseUrl;
						if (pSVar15 != null) {
							pSVar15 = pSVar15.TrimEnd(0x2f);
							pSVar16 = UnityWebRequest.EscapeURL(this.start.SessionId);
							pSVar15 = String.Concat(pSVar15, "/v1/auth/oauth/unity/status?sessionId=", pSVar16);
							pAVar13 = this.__8__1;
							if (pAVar13 != null) {
								pAVar13.result = null;
								pSVar16 = this.start.PollToken;
								pAVar13 = this.__8__1;
								__this_01 = new Action<AottgApiResult>((object)pAVar13, (intptr_t) MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0_PollUnityOAuth_b__0);
								bVar12 = this.reportNetworkError;
								SStack_48.hasValue = false;
								SStack_48._1_3_ = 0;
								SStack_48.value = 0;
								SStack_48 = new Nullable<int>(10);
								pIVar17 = (object)__this_00.SendApiJson("GET", pSVar15, null, pSVar16, false, __this_01, bVar12, (Nullable<int>)SStack_48);
								this.__2__current = pIVar17;
								this.__1__state = 1;
								return true;
							}
						}
						goto label_05e05b8d;
					}
				}
			}
			return false;
		}

		[Token(Token = "0x600580F")]
		[Address(RVA = "0x5D05BB0", Offset = "0x5D04BB0", VA = "0x5D05BB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000964")]
	[CompilerGenerated]
	private sealed class _003CPostJson_003Ed__176 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002F23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002F24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x4002F25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x4002F26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass176_0 _003C_003E8__1;

		[Token(Token = "0x4002F27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public string captureField;

		[Token(Token = "0x4002F28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Action<string> captureTarget;

		[Token(Token = "0x4002F29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool applyAuthResponse;

		[Token(Token = "0x4002F2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000F32")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005814")]
			[Address(RVA = "0x5D06330", Offset = "0x5D05330", VA = "0x5D06330", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PostJson>d__176$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F33")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005816")]
			[Address(RVA = "0x5D06380", Offset = "0x5D05380", VA = "0x5D06380", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PostJson>d__176$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005811")]
		[Address(RVA = "0x5D01ED0", Offset = "0x5D00ED0", VA = "0x5D01ED0")]
		[DebuggerHidden]
		public _003CPostJson_003Ed__176(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PostJson>d__176$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005812")]
		[Address(RVA = "0x5D05C00", Offset = "0x5D04C00", VA = "0x5D05C00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PostJson>d__176$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005813")]
		[Address(RVA = "0x5D05C10", Offset = "0x5D04C10", VA = "0x5D05C10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PostJson>d__176$$MoveNext): 4 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			AottgApiResult pAVar3;
			Action<string> pSVar4;
			AccountManager __this_00;
			String json;
			String bearer;
			long lVar5;
			bool bVar6;
			bool bVar7;
			JSONNode pSVar8;
			JSONNode a;
			AccountManager.c__DisplayClass176_0 pAVar9;
			Action<AottgApiResult> __this_01;
			object pIVar10;
			String* ppSVar11;
			Action<bool, string> pSVar12;
			IntPtr iVar13;
			String pSVar14;
			ulong uVar15;
			IntPtr iVar17;
			MethodInfo pMVar18;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				pAVar9 = new AccountManager.c__DisplayClass176_0();
				this.__8__1 = pAVar9;
				pAVar9 = this.__8__1;
				if (pAVar9 == null) {
					throw new NullReferenceException();
				}
				pAVar9.result = null;
				pSVar14 = this.path;
				json = this.json;
				bearer = this.bearer;
				pAVar9 = this.__8__1;
				__this_01 = new Action<AottgApiResult>((object)pAVar9, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass176_0_PostJson_b__0);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pIVar10 = (object)__this_00.SendApiJson("POST", pSVar14, json, bearer, false, __this_01, this.reportNetworkError, (Nullable<int>)0x0);
				this.__2__current = pIVar10;
				this.__1__state = 1;
				goto label_05e060e8;
			}
			if (iVar1 != 1) goto label_05e060e8;
			this.__1__state = -1;
			pAVar9 = this.__8__1;
			if (pAVar9 == null) {
				throw new NullReferenceException();
			}
			pAVar3 = pAVar9.result;
			if (pAVar3 == null) {
				ppSVar11 = &"unknown_error";
		label_05e05f29: ;
				pSVar14 = *ppSVar11;
				pMVar18 = (MethodInfo *)"/v1/auth/refresh";
				bVar6 = String.Equals(this.path, "/v1/auth/refresh", 5);
				pAVar9 = this.__8__1;
				if (pAVar9 == null) {
					throw new NullReferenceException();
				}
				pAVar3 = pAVar9.result;
				if (pAVar3 == null) {
		label_05e05fbb: ;
					if (bVar6) {
		label_05e05fc4: ;
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
							if (Il2CppMethodInitialized_07548373 != false) goto label_05e05fe8;
		label_05e0610e: ;
							Il2CppMethodInitialized_07548373 = true;
							if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e05ff8;
		label_05e06131: ;
							if (Il2CppMethodInitialized_075483c7 != false) goto label_05e06005;
		label_05e06143: ;
							Il2CppMethodInitialized_075483c7 = true;
							uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						}
						else {
							if (Il2CppMethodInitialized_07548373 == false) goto label_05e0610e;
		label_05e05fe8: ;
							if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e06131;
		label_05e05ff8: ;
							if (Il2CppMethodInitialized_075483c7 == false) goto label_05e06143;
		label_05e06005: ;
							uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						}
						if (uVar2 == 0) {
						}
						bVar6 = String.IsNullOrEmpty(AccountManager. _AuthToken_k__BackingField);
						if (!bVar6) {
							bVar6 = AccountManager.HasUsablePhotonToken();
							if (!bVar6) {
								AccountManager.GoOffline();
							}
						}
					}
				}
				else {
					lVar5 = pAVar3._StatusCode_k__BackingField;
					if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_0754839e != false) goto label_05e05f8f;
		label_05e06077: ;
						Il2CppMethodInitialized_0754839e = true;
						if (lVar5 == 0x191) goto label_05e05f9c;
		label_05e06097: ;
						if (!bVar6) goto label_05e060cd;
						if ((lVar5 == 0x193) || (lVar5 == 400)) goto label_05e060b2;
						goto label_05e05fc4;
					}
					if (Il2CppMethodInitialized_0754839e == false) goto label_05e06077;
		label_05e05f8f: ;
					if (lVar5 != 0x191) goto label_05e06097;
		label_05e05f9c: ;
					pMVar18 = (MethodInfo *)"invalid_refresh_token";
					bVar7 = (pSVar14 == "invalid_refresh_token");
					if (!bVar7 && !bVar6) goto label_05e05fbb;
		label_05e060b2: ;
					AccountManager.ClearSession(true);
				}
		label_05e060cd: ;
				pSVar12 = this.onComplete;
				if (pSVar12 == null) goto label_05e060e8;
				iVar13 = pSVar12.method;
				iVar17 = pSVar12.method_code;
				uVar15 = 0;
			}
			else {
				if (pAVar3._Success_k__BackingField == false) {
					ppSVar11 = &pAVar3._Error_k__BackingField;
					goto label_05e05f29;
				}
				pSVar14 = pAVar3._ResponseText_k__BackingField;
				if ((this.captureField != null) &&(this.captureTarget != null)) {
					method = null;
					bVar6 = String.IsNullOrEmpty(pSVar14);
					if (!bVar6) {
						pSVar8 = JSON.Parse(pSVar14);
						method = null;
						bVar6 = (pSVar8 != null);
						if (bVar6) {
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							a = pSVar8.get_Item(this.captureField);
							method = null;
							bVar6 = (a != null);
							if (bVar6) {
								pSVar4 = this.captureTarget;
								pSVar8 = pSVar8.get_Item(this.captureField);
								if (pSVar8 == null) {
									throw new NullReferenceException();
								}
								method = (MethodInfo)pSVar8.get_Value();
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								(*(code)pSVar4.invoke_impl)(pSVar4.method_code,method,pSVar4.method);
							}
						}
					}
				}
				if (this.applyAuthResponse != false) {
					AccountManager.ApplyAuthResponse(pSVar14);
				}
				pSVar12 = this.onComplete;
				if (pSVar12 == null) goto label_05e060e8;
				iVar13 = pSVar12.method;
				iVar17 = pSVar12.method_code;
				uVar15 = 1;
				pSVar14 = null;
			}
			(*(code)pSVar12.invoke_impl)(iVar17,uVar15,pSVar14,iVar13);
		label_05e060e8: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6005815")]
		[Address(RVA = "0x5D06340", Offset = "0x5D05340", VA = "0x5D06340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PostJson>d__176$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_PostJson_d__176_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000965")]
	[CompilerGenerated]
	private sealed class _003CPutCharacterInfoJson_003Ed__53 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JSONNode fallbackCharacterInfo;

		[Token(Token = "0x4002F2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002F2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string json;

		[Token(Token = "0x4002F31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x17000F34")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600581A")]
			[Address(RVA = "0x5D06500", Offset = "0x5D05500", VA = "0x5D06500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F35")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600581C")]
			[Address(RVA = "0x5D06550", Offset = "0x5D05550", VA = "0x5D06550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005817")]
		[Address(RVA = "0x5CFBD10", Offset = "0x5CFAD10", VA = "0x5CFBD10")]
		[DebuggerHidden]
		public _003CPutCharacterInfoJson_003Ed__53(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005818")]
		[Address(RVA = "0x5D06390", Offset = "0x5D05390", VA = "0x5D06390", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005819")]
		[Address(RVA = "0x5D063A0", Offset = "0x5D053A0", VA = "0x5D063A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			AccountManager __this_00;
			String json;
			int iVar2;
			AccountManager.c__DisplayClass53_0 __this_01;
			Action<T1, T2, T3> __this_02;
			object pIVar3;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				__this_01 = new AccountManager.c__DisplayClass53_0();
				if (__this_01 == null) {
		label_05e064f1: ;
					throw new NullReferenceException();
				}
				__this_01.fallbackCharacterInfo = this.fallbackCharacterInfo;
				__this_01.onComplete = this.onComplete;
				json = this.json;
				__this_02 = new Action<bool, string, JSONNode>((object)__this_01, (intptr_t) MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0_PutCharacterInfoJson_b__0);
				if (__this_00 == null) goto label_05e064f1;
				pIVar3 = (object)__this_00.SendMeJson("PUT", "/v1/me/character-info", json, (Action<bool, string, JSONNode>)__this_02, this.reportNetworkError);
				this.__2__current = pIVar3;
				iVar2 = 1;
			}
			else {
				iVar2 = -1;
				if (iVar1 != 1) goto label_05e064dd;
			}
			this.__1__state = iVar2;
		label_05e064dd: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x600581B")]
		[Address(RVA = "0x5D06510", Offset = "0x5D05510", VA = "0x5D06510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53_System_Collections_IEnumerator_Res);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000966")]
	[CompilerGenerated]
	private sealed class _003CSendApiGet_003Ed__169 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002F35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x4002F37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x4002F38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool parseJson;

		[Token(Token = "0x4002F39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass169_0 _003C_003E8__1;

		[Token(Token = "0x17000F36")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005820")]
			[Address(RVA = "0x5D066E0", Offset = "0x5D056E0", VA = "0x5D066E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F37")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005822")]
			[Address(RVA = "0x5D06730", Offset = "0x5D05730", VA = "0x5D06730", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600581D")]
		[Address(RVA = "0x5D018F0", Offset = "0x5D008F0", VA = "0x5D018F0")]
		[DebuggerHidden]
		public _003CSendApiGet_003Ed__169(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGet>d__169$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600581E")]
		[Address(RVA = "0x5D06560", Offset = "0x5D05560", VA = "0x5D06560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600581F")]
		[Address(RVA = "0x5D06570", Offset = "0x5D05570", VA = "0x5D06570", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGet>d__169$$MoveNext): 3 lines keep C-only constructs
			bool parseJson;
			int iVar1;
			AccountManager pAVar2;
			String path;
			String bearer;
			AccountManager.c__DisplayClass169_0 pAVar3;
			Action<AottgApiResult> __this_00;
			Action<AottgApiResult> __this_01;
			UniTask CVar4;
			UniTask task;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				pAVar2 = this.__4__this;
				this.__1__state = -1;
				pAVar3 = new AccountManager.c__DisplayClass169_0();
				this.__8__1 = pAVar3;
				pAVar3 = this.__8__1;
				if (pAVar3 == null) goto label_05e066d3;
				pAVar3.onComplete = this.onComplete;
				pAVar3 = this.__8__1;
				if (pAVar3 == null) goto label_05e066d3;
				pAVar3.done = false;
				path = this.path;
				bearer = this.bearer;
				parseJson = this.parseJson;
				__this_01 = __this_00;
				__this_00 = new Action<AottgApiResult>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass169_0_SendApiGet_b__0);
				if (pAVar2 == null) goto label_05e066d3;
				CVar4 = __this_01.SendApiGetAsync(path, bearer, parseJson, __this_00);
				task._12_4_ = 0;
				task.source = CVar4.source;
				task.token = CVar4.token;
				task._10_2_ = CVar4._10_2_;
				UniTaskExtensions.Forget(task);
			}
			pAVar3 = this.__8__1;
			if (pAVar3 != null) {
				if (pAVar3.done == false) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				return false;
			}
		label_05e066d3: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005821")]
		[Address(RVA = "0x5D066F0", Offset = "0x5D056F0", VA = "0x5D066F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_SendApiGet_d__169_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000967")]
	[CompilerGenerated]
	private struct _003CSendApiGetAsync_003Ed__170 : IAsyncStateMachine
	{
		[Token(Token = "0x4002F3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002F3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002F3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x4002F3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bearer;

		[Token(Token = "0x4002F3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool parseJson;

		[Token(Token = "0x4002F3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002F40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6005823")]
		[Address(RVA = "0x5D06740", Offset = "0x5D05740", VA = "0x5D06740", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGetAsync>d__170$$MoveNext): 30 lines keep C-only constructs
			bool parseJson;
			String path;
			String bearer;
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			Action<AottgApiResult> pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			Il2CppClass pIVar8;
			VirtualInvokeData pVVar9;
			AottgApiResult pAVar10;
			ulong uVar11;
			long lVar12;
			object local_88;
			AottgApiResult pAStack_80;
			ulong local_78;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
			object local_48;
			AottgApiResult pAStack_40;
			short local_38;
			undefined6 uStack_36;

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
				path = this.path;
				bearer = this.bearer;
				parseJson = this.parseJson;
				local_68 = AccountManager.SendApiJsonAsync("GET", path, null, bearer, parseJson, false, (Nullable<int>)0x0);
				local_38 = local_68.token;
				uStack_36 = local_68._18_6_;
				local_48 = (object)local_68.source;
				pAStack_40 = local_68.result;
				local_68.source = null;
				local_68.result = null;
				local_68.token = 0;
				local_68._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass._2).bitflags1 & 1) == 0 ) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass);
				}
				local_68.token = local_38;
				local_68._18_6_ = uStack_36;
				local_68.source = (IUniTaskSource<T>)local_48;
				local_68.result = pAStack_40;
				local_78._0_2_ = local_68.token;
				local_78._2_6_ = local_68._18_6_;
				local_88 = (object)local_68.source;
				pAStack_80 = local_68.result;
				cVar7 = il2cpp_runtime_helper_045ee340(&local_88, MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
				if (cVar7 == false) {
					this.__1__state = 0;
					this.__u__1.task.source =(IUniTaskSource<T>)local_88;
					this.__u__1.task.result = (object)pAStack_80;
					pCVar5 = &this.__u__1;
					pCVar5.task.token = (int16_t)local_78;
					*(undefined6)&pCVar5.task.field_0x12 = local_78._2_6_;
					il2cpp_runtime_helper_0350c880(&this.__t__builder, &local_88, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26a8);
					return;
				}
			}
			pIVar4 = local_88;
			if (local_88 == null) {
				pSVar3 = this.onComplete;
				pAVar10 = pAStack_80;
			}
			else {
				sVar6 = (int16_t)local_78;
				pIVar8 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult.klass;
				if (((pIVar8._2).bitflags1 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				}
				pIVar8 = pIVar8.rgctx_data[5].klass;
				if (((pIVar8._2).bitflags1 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				}
				pIVar1 = pIVar4.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar2.interfaceType + lVar12) == pIVar8) {
							pVVar9 = (VirtualInvokeData)&pIVar1.vtable[*(int)((long)&pIVar2.offset + lVar12)].methodPtr;
							goto label_05e069c2;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar8, 0);
		label_05e069c2: ;
				pAVar10 = (AottgApiResult)(*pVVar9.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar9.method);
				pSVar3 = this.onComplete;
			}
			if (pSVar3 != null) {
				(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar10,pSVar3.method);
			}
			this.__1__state = -2;
			pIVar4 = (object)this.__t__builder.runnerPromise;
			if (pIVar4 != null) {
				pIVar8 = pIVar4.klass;
				uVar11 = (ulong)(pIVar8._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar8._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IStateMachineRunnerPromise*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStateMachineRunnerPromise)) {
							pVVar9 = (VirtualInvokeData)&pIVar8.vtable[*(int)((long)&pIVar2.offset + lVar12) + 2].methodPtr;
							goto label_05e06a75;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2) ;
		label_05e06a75: ;
				(*pVVar9.methodPtr)(pIVar4,pVVar9.method);
			}
			return;
		}

		[Token(Token = "0x6005824")]
		[Address(RVA = "0x5D06CB0", Offset = "0x5D05CB0", VA = "0x5D06CB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiGetAsync>d__170$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x2000968")]
	[CompilerGenerated]
	private sealed class _003CSendApiJson_003Ed__171 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002F44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string method;

		[Token(Token = "0x4002F46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string path;

		[Token(Token = "0x4002F47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x4002F48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public string bearer;

		[Token(Token = "0x4002F49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool parseJson;

		[Token(Token = "0x4002F4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
		public bool reportNetworkError;

		[Token(Token = "0x4002F4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public int? timeoutSeconds;

		[Token(Token = "0x4002F4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass171_0 _003C_003E8__1;

		[Token(Token = "0x17000F38")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005828")]
			[Address(RVA = "0x5D06E80", Offset = "0x5D05E80", VA = "0x5D06E80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F39")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600582A")]
			[Address(RVA = "0x5D06ED0", Offset = "0x5D05ED0", VA = "0x5D06ED0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005825")]
		[Address(RVA = "0x5D01AE0", Offset = "0x5D00AE0", VA = "0x5D01AE0")]
		[DebuggerHidden]
		public _003CSendApiJson_003Ed__171(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJson>d__171$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005826")]
		[Address(RVA = "0x5D06CC0", Offset = "0x5D05CC0", VA = "0x5D06CC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005827")]
		[Address(RVA = "0x5D06CD0", Offset = "0x5D05CD0", VA = "0x5D06CD0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJson>d__171$$MoveNext): 3 lines keep C-only constructs
			bool parseJson;
			bool reportNetworkError;
			int iVar1;
			AccountManager pAVar2;
			String method_00;
			String path;
			String json;
			String bearer;
			Nullable<int> timeoutSeconds;
			AccountManager.c__DisplayClass171_0 pAVar3;
			Action<AottgApiResult> __this_00;
			Action<AottgApiResult> __this_01;
			UniTask CVar4;
			UniTask task;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				pAVar2 = this.__4__this;
				this.__1__state = -1;
				pAVar3 = new AccountManager.c__DisplayClass171_0();
				this.__8__1 = pAVar3;
				pAVar3 = this.__8__1;
				if (pAVar3 == null) goto label_05e06e7b;
				pAVar3.onComplete = this.onComplete;
				pAVar3 = this.__8__1;
				if (pAVar3 == null) goto label_05e06e7b;
				pAVar3.done = false;
				method_00 = this.method;
				path = this.path;
				json = this.json;
				bearer = this.bearer;
				parseJson = this.parseJson;
				reportNetworkError = this.reportNetworkError;
				timeoutSeconds = this.timeoutSeconds;
				__this_01 = __this_00;
				__this_00 = new Action<AottgApiResult>((object)pAVar3, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0_SendApiJson_b__0);
				if (pAVar2 == null) goto label_05e06e7b;
				CVar4 = AccountManager.SendApiJsonAsync((AccountManager)__this_01, method_00, path, json, bearer, parseJson, reportNetworkError, (Nullable<int>)timeoutSeconds, __this_00);
				task._12_4_ = 0;
				task.source = CVar4.source;
				task.token = CVar4.token;
				task._10_2_ = CVar4._10_2_;
				UniTaskExtensions.Forget(task);
			}
			pAVar3 = this.__8__1;
			if (pAVar3 != null) {
				if (pAVar3.done == false) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				return false;
			}
		label_05e06e7b: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005829")]
		[Address(RVA = "0x5D06E90", Offset = "0x5D05E90", VA = "0x5D06E90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_SendApiJson_d__171_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000969")]
	[CompilerGenerated]
	private struct _003CSendApiJsonAsync_003Ed__172 : IAsyncStateMachine
	{
		[Token(Token = "0x4002F4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002F4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002F4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string method;

		[Token(Token = "0x4002F50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string path;

		[Token(Token = "0x4002F51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string json;

		[Token(Token = "0x4002F52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002F53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool parseJson;

		[Token(Token = "0x4002F54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
		public bool reportNetworkError;

		[Token(Token = "0x4002F55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int? timeoutSeconds;

		[Token(Token = "0x4002F56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002F57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600582B")]
		[Address(RVA = "0x5D06EE0", Offset = "0x5D05EE0", VA = "0x5D06EE0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJsonAsync>d__172$$MoveNext): 32 lines keep C-only constructs
			bool parseJson;
			bool reportNetworkError;
			String path;
			String json;
			String bearer;
			Nullable<int> timeoutSeconds;
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			Action<AottgApiResult> pSVar3;
			object pIVar4;
			Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o pCVar5;
			short sVar6;
			sbyte cVar7;
			Il2CppClass pIVar8;
			VirtualInvokeData pVVar9;
			AottgApiResult pAVar10;
			ulong uVar11;
			long lVar12;
			object local_98;
			AottgApiResult pAStack_90;
			ulong local_88;
			Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_78;
			object local_58;
			AottgApiResult pAStack_50;
			ulong local_48;
			String local_38;

			local_98 = null;
			pAStack_90 = null;
			local_88 = 0;
			local_58 = null;
			pAStack_50 = null;
			local_48._0_2_ = 0;
			local_48._2_6_ = 0;
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
				local_38 = this.method;
				path = this.path;
				json = this.json;
				bearer = this.bearer;
				parseJson = this.parseJson;
				reportNetworkError = this.reportNetworkError;
				timeoutSeconds = this.timeoutSeconds;
				local_78 = AccountManager.SendApiJsonAsync(local_38, path, json, bearer, parseJson, reportNetworkError, (Nullable<int>)timeoutSeconds);
				local_48._0_2_ = local_78.token;
				local_48._2_6_ = local_78._18_6_;
				local_58 = (object)local_78.source;
				pAStack_50 = local_78.result;
				local_78.source = null;
				local_78.result = null;
				local_78.token = 0;
				local_78._18_6_ = 0;
				if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass._2).bitflags1 & 1) == 0 ) {
					il2cpp_codegen_class_init_checked(MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter.klass);
				}
				local_78.token = (int16_t)local_48;
				local_78._18_6_ = local_48._2_6_;
				local_78.source = (IUniTaskSource<T>)local_58;
				local_78.result = pAStack_50;
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
					il2cpp_runtime_helper_0350c9b0(&this.__t__builder, &local_98, this, MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26b0);
					return;
				}
			}
			pIVar4 = local_98;
			if (local_98 == null) {
				pSVar3 = this.onComplete;
				pAVar10 = pAStack_90;
			}
			else {
				sVar6 = (int16_t)local_88;
				pIVar8 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult.klass;
				if (((pIVar8._2).bitflags1 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				}
				pIVar8 = pIVar8.rgctx_data[5].klass;
				if (((pIVar8._2).bitflags1 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				}
				pIVar1 = pIVar4.klass;
				uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(Il2CppClass*)((long)&pIVar2.interfaceType + lVar12) == pIVar8) {
							pVVar9 = (VirtualInvokeData)&pIVar1.vtable[*(int)((long)&pIVar2.offset + lVar12)].methodPtr;
							goto label_05e07186;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, pIVar8, 0);
		label_05e07186: ;
				pAVar10 = (AottgApiResult)(*pVVar9.methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar9.method);
				pSVar3 = this.onComplete;
			}
			if (pSVar3 != null) {
				(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pAVar10,pSVar3.method);
			}
			this.__1__state = -2;
			pIVar4 = (object)this.__t__builder.runnerPromise;
			if (pIVar4 != null) {
				pIVar8 = pIVar4.klass;
				uVar11 = (ulong)(pIVar8._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar2 = (pIVar8._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IStateMachineRunnerPromise*)((long)&pIVar2.interfaceType + lVar12) == typeof(IStateMachineRunnerPromise)) {
							pVVar9 = (VirtualInvokeData)&pIVar8.vtable[*(int)((long)&pIVar2.offset + lVar12) + 2].methodPtr;
							goto label_05e07245;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IStateMachineRunnerPromise), 2) ;
		label_05e07245: ;
				(*pVVar9.methodPtr)(pIVar4,pVVar9.method);
			}
			return;
		}

		[Token(Token = "0x600582C")]
		[Address(RVA = "0x5D07540", Offset = "0x5D06540", VA = "0x5D07540", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendApiJsonAsync>d__172$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x200096A")]
	[CompilerGenerated]
	private sealed class _003CSendMeJson_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string method;

		[Token(Token = "0x4002F5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x4002F5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002F5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x4002F5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool reportNetworkError;

		[Token(Token = "0x4002F60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private _003C_003Ec__DisplayClass54_0 _003C_003E8__1;

		[Token(Token = "0x17000F3A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005830")]
			[Address(RVA = "0x5D07940", Offset = "0x5D06940", VA = "0x5D07940", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F3B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005832")]
			[Address(RVA = "0x5D07990", Offset = "0x5D06990", VA = "0x5D07990", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600582D")]
		[Address(RVA = "0x5D075C0", Offset = "0x5D065C0", VA = "0x5D075C0")]
		[DebuggerHidden]
		public _003CSendMeJson_003Ed__54(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeJson>d__54$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600582E")]
		[Address(RVA = "0x5D075E0", Offset = "0x5D065E0", VA = "0x5D075E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600582F")]
		[Address(RVA = "0x5D075F0", Offset = "0x5D065F0", VA = "0x5D075F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeJson>d__54$$MoveNext): 8 lines keep C-only constructs
			AccountManager.c__DisplayClass54_0* targetAddress;
			int iVar1;
			uint uVar2;
			AccountManager __this_00;
			AottgApiResult pAVar3;
			String path;
			String json;
			String bearer;
			bool bVar4;
			AccountManager.c__DisplayClass54_0 pAVar5;
			object pIVar6;
			Action<AottgApiResult> __this_01;
			Action<bool, string, JSONNode> pSVar7;
			String* ppSVar8;
			JSONNode pSVar9;
			String pSVar10;
			ulong uVar11;
			IntPtr iVar12;
			IntPtr iVar13;

			iVar1 = this.__1__state;
			if (iVar1 == 2) {
				this.__1__state = -1;
				pAVar5 = this.__8__1;
				if (pAVar5 == null) goto label_05e07930;
				pAVar3 = pAVar5.result;
				if (pAVar3 == null) {
					pSVar7 = this.onComplete;
					if (pSVar7 == null) {
						return false;
					}
					ppSVar8 = &"unknown_error";
				}
				else {
					if (pAVar3._Success_k__BackingField != false) {
						AccountManager.ClearOwnPublicProfileCache();
						pSVar7 = this.onComplete;
						if (pSVar7 == null) {
							return false;
						}
						pAVar5 = this.__8__1;
						if ((pAVar5 == null) ||(pAVar3 = pAVar5.result, pAVar3 == null)) goto label_05e07930;
						pSVar9 = pAVar3._Json_k__BackingField;
						iVar13 = pSVar7.method;
						iVar12 = pSVar7.method_code;
						uVar11 = 1;
						pSVar10 = null;
						goto label_05e078d8;
					}
					pSVar7 = this.onComplete;
					if (pSVar7 == null) {
						return false;
					}
					ppSVar8 = &pAVar3._Error_k__BackingField;
				}
				pSVar10 = *ppSVar8;
				iVar13 = pSVar7.method;
				iVar12 = pSVar7.method_code;
				uVar11 = 0;
				pSVar9 = null;
		label_05e078d8: ;
				(*(code)pSVar7.invoke_impl)(iVar12,uVar11,pSVar10,pSVar9,iVar13);
				return false;
			}
			if (iVar1 == 1) {
				this.__1__state = -1;
				return false;
			}
			if (iVar1 != 0) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			pAVar5 = new AccountManager.c__DisplayClass54_0();
			targetAddress = &this.__8__1;
			this.__8__1 = pAVar5;
			bVar4 = String.Equals(this.method, "GET", 5);
			if (bVar4) {
				if (__this_00 != null) {
					pIVar6 = (object)__this_00.SendMeReadJson(this.path, this.onComplete);
					this.__2__current = pIVar6;
					this.__1__state = 1;
					return true;
				}
				goto label_05e07930;
			}
			pAVar5 = *targetAddress;
			if (pAVar5 == null) goto label_05e07930;
			pAVar5.result = null;
			pSVar10 = this.method;
			path = this.path;
			json = this.json;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_075483c7 != false) goto label_05e07801;
		label_05e078fe: ;
				Il2CppMethodInitialized_075483c7 = true;
				uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075483c7 == false) goto label_05e078fe;
		label_05e07801: ;
				uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			bearer = AccountManager._AuthToken_k__BackingField;
			pAVar5 = *targetAddress;
			__this_01 = new Action<AottgApiResult>((object)pAVar5, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0_SendMeJson_b__0);
			if (__this_00 != null) {
				pIVar6 = (object)__this_00.SendApiJson(pSVar10, path, json, bearer, true, __this_01, this.reportNetworkError, (Nullable<int>)0x0);
				this.__2__current = pIVar6;
				this.__1__state = 2;
				return true;
			}
		label_05e07930: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005831")]
		[Address(RVA = "0x5D07950", Offset = "0x5D06950", VA = "0x5D07950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_SendMeJson_d__54_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200096B")]
	[CompilerGenerated]
	private sealed class _003CSendMeReadJson_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002F64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002F65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass55_0 _003C_003E8__1;

		[Token(Token = "0x4002F66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x17000F3C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005836")]
			[Address(RVA = "0x5D07C20", Offset = "0x5D06C20", VA = "0x5D07C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F3D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005838")]
			[Address(RVA = "0x5D07C70", Offset = "0x5D06C70", VA = "0x5D07C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005833")]
		[Address(RVA = "0x5D079A0", Offset = "0x5D069A0", VA = "0x5D079A0")]
		[DebuggerHidden]
		public _003CSendMeReadJson_003Ed__55(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005834")]
		[Address(RVA = "0x5D079C0", Offset = "0x5D069C0", VA = "0x5D079C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005835")]
		[Address(RVA = "0x5D079D0", Offset = "0x5D069D0", VA = "0x5D079D0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$MoveNext): 7 lines keep C-only constructs
			AccountManager.c__DisplayClass55_0* targetAddress;
			int iVar1;
			uint uVar2;
			AottgApiResult pAVar3;
			AccountManager __this_00;
			String bearer;
			AccountManager.c__DisplayClass55_0 pAVar4;
			Action<AottgApiResult> __this_01;
			object pIVar5;
			Action<bool, string, JSONNode> pSVar6;
			String* ppSVar7;
			JSONNode pSVar8;
			String pSVar9;
			ulong uVar10;
			IntPtr iVar11;
			IntPtr iVar12;

			iVar1 = this.__1__state;
			if (iVar1 != 0) {
				if (iVar1 != 1) goto label_05e07c06;
				this.__1__state = -1;
				pAVar4 = this.__8__1;
				if (pAVar4 == null) goto label_05e07c1b;
				pAVar3 = pAVar4.result;
				if (pAVar3 == null) {
					pSVar6 = this.onComplete;
					if (pSVar6 == null) goto label_05e07c06;
					ppSVar7 = &"unknown_error";
		label_05e07bf4: ;
					pSVar9 = *ppSVar7;
					iVar12 = pSVar6.method;
					iVar11 = pSVar6.method_code;
					uVar10 = 0;
					pSVar8 = null;
				}
				else {
					pSVar6 = this.onComplete;
					if (pAVar3._Success_k__BackingField == false) {
						if (pSVar6 == null) goto label_05e07c06;
						ppSVar7 = &pAVar3._Error_k__BackingField;
						goto label_05e07bf4;
					}
					if (pSVar6 == null) goto label_05e07c06;
					pSVar8 = pAVar3._Json_k__BackingField;
					iVar12 = pSVar6.method;
					iVar11 = pSVar6.method_code;
					uVar10 = 1;
					pSVar9 = null;
				}
				(*(code)pSVar6.invoke_impl)(iVar11,uVar10,pSVar9,pSVar8,iVar12);
				goto label_05e07c06;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			pAVar4 = new AccountManager.c__DisplayClass55_0();
			targetAddress = &this.__8__1;
			this.__8__1 = pAVar4;
			pAVar4 = this.__8__1;
			if (pAVar4 == null) goto label_05e07c1b;
			pAVar4.result = null;
			pSVar9 = this.path;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_075483c7 != false) goto label_05e07b13;
		label_05e07ba9: ;
				Il2CppMethodInitialized_075483c7 = true;
				uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075483c7 == false) goto label_05e07ba9;
		label_05e07b13: ;
				uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			bearer = AccountManager._AuthToken_k__BackingField;
			pAVar4 = *targetAddress;
			__this_01 = new Action<AottgApiResult>((object)pAVar4, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0_SendMeReadJson_b__0);
			if (__this_00 == null) {
		label_05e07c1b: ;
				throw new NullReferenceException();
			}
			pIVar5 = (object)__this_00.SendApiGet(pSVar9, bearer, true, __this_01);
			this.__2__current = pIVar5;
			this.__1__state = 1;
		label_05e07c06: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6005837")]
		[Address(RVA = "0x5D07C30", Offset = "0x5D06C30", VA = "0x5D07C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_AccountManager_SendMeReadJson_d__55_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002EA7")]
	private const int OAuthRequestTimeoutSeconds = 10;

	[Token(Token = "0x4002EA8")]
	private const int UnityOAuthDefaultPollSeconds = 2;

	[Token(Token = "0x4002EA9")]
	private const int UnityOAuthFallbackTimeoutMinutes = 10;

	[Token(Token = "0x4002EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Action<bool, string> _oauthPendingCallback;

	[Token(Token = "0x4002EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Coroutine _oauthFlowCoroutine;

	[Token(Token = "0x4002EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _oauthAttemptId;

	[Token(Token = "0x4002EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static bool _ownProfileCacheHasValue;

	[Token(Token = "0x4002EB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private static bool _ownProfileCacheValid;

	[Token(Token = "0x4002EB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private static bool _ownProfileFetchInFlight;

	[Token(Token = "0x4002EB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly List<Action<bool, string>> _ownProfileFetchSubscribers;

	[Token(Token = "0x4002EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static bool _ownCharacterInfoCacheHasValue;

	[Token(Token = "0x4002EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private static bool _ownCharacterInfoCacheValid;

	[Token(Token = "0x4002EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private static bool _ownCharacterInfoFetchInFlight;

	[Token(Token = "0x4002EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static JSONNode _ownCharacterInfoCache;

	[Token(Token = "0x4002EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly List<Action<bool, string, JSONNode>> _ownCharacterInfoFetchSubscribers;

	[Token(Token = "0x4002EBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static AccountManager _instance;

	[Token(Token = "0x4002EBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static bool _sceneInvalidationSubscribed;

	[Token(Token = "0x4002EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static string BaseUrl;

	[Token(Token = "0x4002EBD")]
	private const string RefreshTokenFileName = "AccountRefresh.dat";

	[Token(Token = "0x4002EBE")]
	private const string RefreshPath = "/v1/auth/refresh";

	[Token(Token = "0x4002EBF")]
	private const int DefaultRequestTimeoutSeconds = 15;

	[Token(Token = "0x4002EC0")]
	private const long PhotonTokenExpiryMarginSeconds = 60L;

	[Token(Token = "0x4002EC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static readonly List<Action<bool, string>> _pendingRefreshCallbacks;

	[Token(Token = "0x4002EC2")]
	private const string EmailPasswordAuthMethod = "email_password";

	[Token(Token = "0x4002EC3")]
	private const string DiscordAuthMethod = "discord";

	[Token(Token = "0x4002EC4")]
	private const string GoogleAuthMethod = "google";

	[Token(Token = "0x4002ED0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static string _refreshToken;

	[Token(Token = "0x4002ED1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static readonly HashSet<string> _enabledAuthMethods;

	[Token(Token = "0x4002ED2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[CompilerGenerated]
	private static Action m_OnLoggedIn;

	[Token(Token = "0x4002ED3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[CompilerGenerated]
	private static Action m_OnLoggedOut;

	[Token(Token = "0x4002ED4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[CompilerGenerated]
	private static Action m_OnAuthMethodsChanged;

	[Token(Token = "0x17000F07")]
	public static string ProfileDescription
	{
		[Token(Token = "0x6005754")]
		[Address(RVA = "0x5CFA3C0", Offset = "0x5CF93C0", VA = "0x5CFA3C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_ProfileDescription): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548342 == false) {
				Il2CppMethodInitialized_07548342 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ProfileDescription_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 8);
		}
		[Token(Token = "0x6005755")]
		[Address(RVA = "0x5CFA430", Offset = "0x5CF9430", VA = "0x5CFA430")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_ProfileDescription): clean

			AccountManager._ProfileDescription_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F08")]
	public static string ProfileAvatarKey
	{
		[Token(Token = "0x6005756")]
		[Address(RVA = "0x5CFA490", Offset = "0x5CF9490", VA = "0x5CFA490")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_ProfileAvatarKey): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548344 == false) {
				Il2CppMethodInitialized_07548344 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ProfileAvatarKey_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0x10);
		}
		[Token(Token = "0x6005757")]
		[Address(RVA = "0x5CFA500", Offset = "0x5CF9500", VA = "0x5CFA500")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_ProfileAvatarKey): clean

			AccountManager._ProfileAvatarKey_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F09")]
	public static string ProfileBannerKey
	{
		[Token(Token = "0x6005758")]
		[Address(RVA = "0x5CFA560", Offset = "0x5CF9560", VA = "0x5CFA560")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_ProfileBannerKey): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548346 == false) {
				Il2CppMethodInitialized_07548346 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ProfileBannerKey_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0x18);
		}
		[Token(Token = "0x6005759")]
		[Address(RVA = "0x5CFA5D0", Offset = "0x5CF95D0", VA = "0x5CFA5D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_ProfileBannerKey): clean

			AccountManager._ProfileBannerKey_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F0A")]
	public static Dictionary<string, string> ProfileSocials
	{
		[Token(Token = "0x600575A")]
		[Address(RVA = "0x5CFA630", Offset = "0x5CF9630", VA = "0x5CFA630")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_ProfileSocials): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548348 == false) {
				Il2CppMethodInitialized_07548348 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ProfileSocials_k__BackingField;
			}
			return *(Dictionary<string, string>*)((long)(typeof(AccountManager)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000F0B")]
	public static bool HasCachedOwnProfile
	{
		[Token(Token = "0x600575B")]
		[Address(RVA = "0x5CFA6A0", Offset = "0x5CF96A0", VA = "0x5CFA6A0")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_HasCachedOwnProfile): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548349 == false) {
				Il2CppMethodInitialized_07548349 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ownProfileCacheHasValue;
			}
			return (bool)*(byte)((long)(typeof(AccountManager)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x17000F0C")]
	public static bool HasCachedCharacterInfo
	{
		[Token(Token = "0x600575C")]
		[Address(RVA = "0x5CFA710", Offset = "0x5CF9710", VA = "0x5CFA710")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_HasCachedCharacterInfo): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754834a == false) {
				Il2CppMethodInitialized_0754834a = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ownCharacterInfoCacheHasValue;
			}
			return (bool)*(byte)((long)(typeof(AccountManager)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x17000F0D")]
	public static string AuthToken
	{
		[Token(Token = "0x6005771")]
		[Address(RVA = "0x5CFD160", Offset = "0x5CFC160", VA = "0x5CFD160")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_AuthToken): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754835f == false) {
				Il2CppMethodInitialized_0754835f = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._AuthToken_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0x70);
		}
		[Token(Token = "0x6005772")]
		[Address(RVA = "0x5CFD1D0", Offset = "0x5CFC1D0", VA = "0x5CFD1D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_AuthToken): clean

			AccountManager._AuthToken_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F0E")]
	public static long AuthTokenExpiresUnix
	{
		[Token(Token = "0x6005773")]
		[Address(RVA = "0x5CFD230", Offset = "0x5CFC230", VA = "0x5CFD230")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_AuthTokenExpiresUnix): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548361 == false) {
				Il2CppMethodInitialized_07548361 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._AuthTokenExpiresUnix_k__BackingField;
			}
			return *(long)((long)(typeof(AccountManager)).static_fields + 0x78);
		}
		[Token(Token = "0x6005774")]
		[Address(RVA = "0x5CFD2A0", Offset = "0x5CFC2A0", VA = "0x5CFD2A0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_AuthTokenExpiresUnix): clean
			AccountManager._AuthTokenExpiresUnix_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F0F")]
	public static string PhotonToken
	{
		[Token(Token = "0x6005775")]
		[Address(RVA = "0x5CFD300", Offset = "0x5CFC300", VA = "0x5CFD300")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_PhotonToken): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548363 == false) {
				Il2CppMethodInitialized_07548363 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._PhotonToken_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0x80);
		}
		[Token(Token = "0x6005776")]
		[Address(RVA = "0x5CFD370", Offset = "0x5CFC370", VA = "0x5CFD370")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_PhotonToken): clean

			AccountManager._PhotonToken_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F10")]
	public static long PhotonTokenExpiresUnix
	{
		[Token(Token = "0x6005777")]
		[Address(RVA = "0x5CFD3D0", Offset = "0x5CFC3D0", VA = "0x5CFD3D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_PhotonTokenExpiresUnix): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548365 == false) {
				Il2CppMethodInitialized_07548365 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._PhotonTokenExpiresUnix_k__BackingField ;
			}
			return *(long)((long)(typeof(AccountManager)).static_fields + 0x88);
		}
		[Token(Token = "0x6005778")]
		[Address(RVA = "0x5CFD440", Offset = "0x5CFC440", VA = "0x5CFD440")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_PhotonTokenExpiresUnix): clean
			AccountManager._PhotonTokenExpiresUnix_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F11")]
	public static AccountLoginResponse LoginResponse
	{
		[Token(Token = "0x6005779")]
		[Address(RVA = "0x5CFD4A0", Offset = "0x5CFC4A0", VA = "0x5CFD4A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_LoginResponse): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548367 == false) {
				Il2CppMethodInitialized_07548367 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._LoginResponse_k__BackingField;
			}
			return *(AccountLoginResponse*)((long)(typeof(AccountManager)).static_fields + 0x90);
		}
		[Token(Token = "0x600577A")]
		[Address(RVA = "0x5CFD510", Offset = "0x5CFC510", VA = "0x5CFD510")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_LoginResponse): clean

			AccountManager._LoginResponse_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F12")]
	public static string UserId
	{
		[Token(Token = "0x600577B")]
		[Address(RVA = "0x5CFCF80", Offset = "0x5CFBF80", VA = "0x5CFCF80")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_UserId): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;

			if (Il2CppMethodInitialized_07548369 == false) {
				Il2CppMethodInitialized_07548369 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfcf9d;
		label_05dfcfee: ;
				if (g_data_07545ca0 != false) goto label_05dfcfa6;
		label_05dfcffc: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfcfb2;
		label_05dfd01b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfcfee;
		label_05dfcf9d: ;
				if (g_data_07545ca0 == false) goto label_05dfcffc;
		label_05dfcfa6: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd01b;
		label_05dfcfb2: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfd04a;
		label_05dfd07c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd056;
		label_05dfd09b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfd07c;
		label_05dfd04a: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd09b;
		label_05dfd056: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfd14f;
			if (pAVar1.Profile == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfd0d3;
		label_05dfd106: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd0df;
		label_05dfd125: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfd106;
		label_05dfd0d3: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd125;
		label_05dfd0df: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 != null) {
				pAVar2 = pAVar1.Profile;
				if (pAVar2 != null) {
					return pAVar2.AccountId;
				}
			}
		label_05dfd14f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F13")]
	public static string Username
	{
		[Token(Token = "0x600577C")]
		[Address(RVA = "0x5CFD580", Offset = "0x5CFC580", VA = "0x5CFD580")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_Username): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;

			if (Il2CppMethodInitialized_0754836a == false) {
				Il2CppMethodInitialized_0754836a = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd59d;
		label_05dfd5ee: ;
				if (g_data_07545ca0 != false) goto label_05dfd5a6;
		label_05dfd5fc: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd5b2;
		label_05dfd61b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd5ee;
		label_05dfd59d: ;
				if (g_data_07545ca0 == false) goto label_05dfd5fc;
		label_05dfd5a6: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd61b;
		label_05dfd5b2: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfd64a;
		label_05dfd67c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd656;
		label_05dfd69b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfd67c;
		label_05dfd64a: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd69b;
		label_05dfd656: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfd74f;
			if (pAVar1.Profile == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfd6d3;
		label_05dfd706: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd6df;
		label_05dfd725: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfd706;
		label_05dfd6d3: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd725;
		label_05dfd6df: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 != null) {
				pAVar2 = pAVar1.Profile;
				if (pAVar2 != null) {
					return pAVar2.DisplayName;
				}
			}
		label_05dfd74f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F14")]
	public static string Email
	{
		[Token(Token = "0x600577D")]
		[Address(RVA = "0x5CFD760", Offset = "0x5CFC760", VA = "0x5CFD760")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_Email): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;

			if (Il2CppMethodInitialized_0754836b == false) {
				Il2CppMethodInitialized_0754836b = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd77d;
		label_05dfd7ce: ;
				if (g_data_07545ca0 != false) goto label_05dfd786;
		label_05dfd7dc: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd792;
		label_05dfd7fb: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd7ce;
		label_05dfd77d: ;
				if (g_data_07545ca0 == false) goto label_05dfd7dc;
		label_05dfd786: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd7fb;
		label_05dfd792: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfd82a;
		label_05dfd85c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd836;
		label_05dfd87b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfd85c;
		label_05dfd82a: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd87b;
		label_05dfd836: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfd92f;
			if (pAVar1.Profile == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfd8b3;
		label_05dfd8e6: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd8bf;
		label_05dfd905: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfd8e6;
		label_05dfd8b3: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd905;
		label_05dfd8bf: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 != null) {
				pAVar2 = pAVar1.Profile;
				if (pAVar2 != null) {
					return pAVar2.Email;
				}
			}
		label_05dfd92f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F15")]
	public static bool EmailVerified
	{
		[Token(Token = "0x600577E")]
		[Address(RVA = "0x5CFD940", Offset = "0x5CFC940", VA = "0x5CFD940")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_EmailVerified): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;

			if (Il2CppMethodInitialized_0754836c == false) {
				Il2CppMethodInitialized_0754836c = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd95d;
		label_05dfd9ae: ;
				if (g_data_07545ca0 != false) goto label_05dfd966;
		label_05dfd9bc: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfd972;
		label_05dfd9db: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd9ae;
		label_05dfd95d: ;
				if (g_data_07545ca0 == false) goto label_05dfd9bc;
		label_05dfd966: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfd9db;
		label_05dfd972: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return false;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfda0a;
		label_05dfda3c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfda16;
		label_05dfda5b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfda3c;
		label_05dfda0a: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfda5b;
		label_05dfda16: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfdb12;
			if (pAVar1.Profile == null) {
				return false;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfda93;
		label_05dfdac6: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfda9f;
		label_05dfdae5: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfdac6;
		label_05dfda93: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdae5;
		label_05dfda9f: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 != null) {
				pAVar2 = pAVar1.Profile;
				if (pAVar2 != null) {
					return pAVar2.EmailVerified != false;
				}
			}
		label_05dfdb12: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F16")]
	public static string[] Roles
	{
		[Token(Token = "0x600577F")]
		[Address(RVA = "0x5CFDB20", Offset = "0x5CFCB20", VA = "0x5CFDB20")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_Roles): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;

			if (Il2CppMethodInitialized_0754836d == false) {
				Il2CppMethodInitialized_0754836d = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdb3d;
		label_05dfdb8e: ;
				if (g_data_07545ca0 != false) goto label_05dfdb46;
		label_05dfdb9c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdb52;
		label_05dfdbbb: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdb8e;
		label_05dfdb3d: ;
				if (g_data_07545ca0 == false) goto label_05dfdb9c;
		label_05dfdb46: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdbbb;
		label_05dfdb52: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfdbea;
		label_05dfdc1c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdbf6;
		label_05dfdc3b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfdc1c;
		label_05dfdbea: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdc3b;
		label_05dfdbf6: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfdcef;
			if (pAVar1.Profile == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfdc73;
		label_05dfdca6: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdc7f;
		label_05dfdcc5: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfdca6;
		label_05dfdc73: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdcc5;
		label_05dfdc7f: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 != null) {
				pAVar2 = pAVar1.Profile;
				if (pAVar2 != null) {
					return pAVar2.Roles;
				}
			}
		label_05dfdcef: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F17")]
	public static string PhotonUserId
	{
		[Token(Token = "0x6005780")]
		[Address(RVA = "0x5CFDD00", Offset = "0x5CFCD00", VA = "0x5CFDD00")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_PhotonUserId): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;

			if (Il2CppMethodInitialized_0754836e == false) {
				Il2CppMethodInitialized_0754836e = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdd1d;
		label_05dfdd6e: ;
				if (g_data_07545ca0 != false) goto label_05dfdd26;
		label_05dfdd7c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdd32;
		label_05dfdd9b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdd6e;
		label_05dfdd1d: ;
				if (g_data_07545ca0 == false) goto label_05dfdd7c;
		label_05dfdd26: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdd9b;
		label_05dfdd32: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfddca;
		label_05dfddfc: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfddd6;
		label_05dfde1b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfddfc;
		label_05dfddca: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfde1b;
		label_05dfddd6: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfdecf;
			if (pAVar1.Profile == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfde53;
		label_05dfde86: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfde5f;
		label_05dfdea5: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfde86;
		label_05dfde53: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdea5;
		label_05dfde5f: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 != null) {
				pAVar2 = pAVar1.Profile;
				if (pAVar2 != null) {
					return pAVar2.PhotonUserId;
				}
			}
		label_05dfdecf: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F18")]
	public static JSONNode Patreon
	{
		[Token(Token = "0x6005781")]
		[Address(RVA = "0x5CFDEE0", Offset = "0x5CFCEE0", VA = "0x5CFDEE0")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_Patreon): clean
			AccountLoginResponse pAVar1;
			AccountLoginResponse.ProfileData pAVar2;
			AccountLoginResponse.PatreonData __this;
			JSONNode pSVar3;

			if (Il2CppMethodInitialized_0754836f == false) {
				Il2CppMethodInitialized_0754836f = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdefd;
		label_05dfdf4e: ;
				if (g_data_07545ca0 != false) goto label_05dfdf06;
		label_05dfdf5c: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdf12;
		label_05dfdf7b: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdf4e;
		label_05dfdefd: ;
				if (g_data_07545ca0 == false) goto label_05dfdf5c;
		label_05dfdf06: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdf7b;
		label_05dfdf12: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfdfaa;
		label_05dfdfdc: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfdfb6;
		label_05dfdffb: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfdfdc;
		label_05dfdfaa: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfdffb;
		label_05dfdfb6: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar1 == null) goto label_05dfe152;
			if (pAVar1.Profile == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfe037;
		label_05dfe069: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfe043;
		label_05dfe088: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfe069;
		label_05dfe037: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfe088;
		label_05dfe043: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if ((pAVar1 == null) ||(pAVar2 = pAVar1.Profile, pAVar2 == null)) goto label_05dfe152;
			if (pAVar2.Patreon == null) {
				return null;
			}
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 != false) goto label_05dfe0cd;
		label_05dfe100: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfe0d9;
		label_05dfe11f: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 == false) goto label_05dfe100;
		label_05dfe0cd: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfe11f;
		label_05dfe0d9: ;
				pAVar1 = AccountManager._LoginResponse_k__BackingField;
			}
			if (((pAVar1 != null) &&(pAVar2 = pAVar1.Profile, pAVar2 != null)) &&(__this = pAVar2.Patreon, __this != null)) {
				return pSVar3;
			}
		label_05dfe152: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F19")]
	public static long RefreshTokenExpiresUnix
	{
		[Token(Token = "0x6005783")]
		[Address(RVA = "0x5CFE4A0", Offset = "0x5CFD4A0", VA = "0x5CFE4A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_RefreshTokenExpiresUnix): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548371 == false) {
				Il2CppMethodInitialized_07548371 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager. _RefreshTokenExpiresUnix_k__BackingField;
			}
			return *(long)((long)(typeof(AccountManager)).static_fields + 0x98);
		}
		[Token(Token = "0x6005784")]
		[Address(RVA = "0x5CFE510", Offset = "0x5CFD510", VA = "0x5CFE510")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_RefreshTokenExpiresUnix): clean
			AccountManager._RefreshTokenExpiresUnix_k__BackingField = value ;
			return;
		}
	}

	[Token(Token = "0x17000F1A")]
	public static bool IsLoggedIn
	{
		[Token(Token = "0x6005785")]
		[Address(RVA = "0x5CFAB30", Offset = "0x5CF9B30", VA = "0x5CFAB30")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_IsLoggedIn): clean
			uint uVar1;
			bool bVar2;

			if (Il2CppMethodInitialized_07548373 == false) {
				Il2CppMethodInitialized_07548373 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_075483c7 == false) {
				Il2CppMethodInitialized_075483c7 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
			return !bVar2;
		}
	}

	[Token(Token = "0x17000F1B")]
	public static bool HasRefreshToken
	{
		[Token(Token = "0x6005786")]
		[Address(RVA = "0x5CFE570", Offset = "0x5CFD570", VA = "0x5CFE570")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_HasRefreshToken): clean
			bool bVar1;

			bVar1 = String.IsNullOrEmpty(AccountManager._refreshToken);
			return !bVar1;
		}
	}

	[Token(Token = "0x17000F1C")]
	public static bool IsRefreshInProgress
	{
		[Token(Token = "0x6005787")]
		[Address(RVA = "0x5CFE5D0", Offset = "0x5CFD5D0", VA = "0x5CFE5D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_IsRefreshInProgress): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548375 == false) {
				Il2CppMethodInitialized_07548375 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._IsRefreshInProgress_k__BackingField;
			}
			return (bool)*(byte)((long)(typeof(AccountManager)).static_fields + 0xa0);
		}
		[Token(Token = "0x6005788")]
		[Address(RVA = "0x5CFE640", Offset = "0x5CFD640", VA = "0x5CFE640")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_IsRefreshInProgress): clean
			AccountManager._IsRefreshInProgress_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F1D")]
	public static bool KeepSignedIn
	{
		[Token(Token = "0x6005789")]
		[Address(RVA = "0x5CFE6A0", Offset = "0x5CFD6A0", VA = "0x5CFE6A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_KeepSignedIn): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548377 == false) {
				Il2CppMethodInitialized_07548377 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._KeepSignedIn_k__BackingField;
			}
			return (bool)*(byte)((long)(typeof(AccountManager)).static_fields + 0xa1);
		}
		[Token(Token = "0x600578A")]
		[Address(RVA = "0x5CFE710", Offset = "0x5CFD710", VA = "0x5CFE710")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_KeepSignedIn): clean
			AccountManager._KeepSignedIn_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F1E")]
	public static bool HasAuthMethodsSnapshot
	{
		[Token(Token = "0x600578B")]
		[Address(RVA = "0x5CFE770", Offset = "0x5CFD770", VA = "0x5CFE770")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_HasAuthMethodsSnapshot): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548379 == false) {
				Il2CppMethodInitialized_07548379 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._HasAuthMethodsSnapshot_k__BackingField ;
			}
			return (bool)*(byte)((long)(typeof(AccountManager)).static_fields + 0xa2);
		}
		[Token(Token = "0x600578C")]
		[Address(RVA = "0x5CFE7E0", Offset = "0x5CFD7E0", VA = "0x5CFE7E0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_HasAuthMethodsSnapshot): clean
			AccountManager._HasAuthMethodsSnapshot_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F1F")]
	public static bool DevMode
	{
		[Token(Token = "0x600578D")]
		[Address(RVA = "0x5CFE840", Offset = "0x5CFD840", VA = "0x5CFE840")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_DevMode): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754837b == false) {
				Il2CppMethodInitialized_0754837b = true;
				uVar1 = (typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ApplicationConfig.DevelopmentMode;
			}
			return (bool)*(byte)((long)(typeof(ApplicationConfig)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000F20")]
	public static string PendingVerifyToken
	{
		[Token(Token = "0x600578E")]
		[Address(RVA = "0x5CFE8B0", Offset = "0x5CFD8B0", VA = "0x5CFE8B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_PendingVerifyToken): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754837c == false) {
				Il2CppMethodInitialized_0754837c = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._PendingVerifyToken_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0xa8);
		}
		[Token(Token = "0x600578F")]
		[Address(RVA = "0x5CFE920", Offset = "0x5CFD920", VA = "0x5CFE920")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_PendingVerifyToken): clean

			AccountManager._PendingVerifyToken_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F21")]
	public static string PendingEmail
	{
		[Token(Token = "0x6005790")]
		[Address(RVA = "0x5CFE990", Offset = "0x5CFD990", VA = "0x5CFE990")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$get_PendingEmail): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754837e == false) {
				Il2CppMethodInitialized_0754837e = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._PendingEmail_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0xb0);
		}
		[Token(Token = "0x6005791")]
		[Address(RVA = "0x5CFEA00", Offset = "0x5CFDA00", VA = "0x5CFEA00")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$set_PendingEmail): clean

			AccountManager._PendingEmail_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x14000010")]
	public static event Action OnLoggedIn
	{
		[Token(Token = "0x6005792")]
		[Address(RVA = "0x5CFEA70", Offset = "0x5CFDA70", VA = "0x5CFEA70")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$add_OnLoggedIn): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = AccountManager.OnLoggedIn;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&AccountManager.OnLoggedIn, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6005793")]
		[Address(RVA = "0x5CFEB50", Offset = "0x5CFDB50", VA = "0x5CFEB50")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$remove_OnLoggedIn): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = AccountManager.OnLoggedIn;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&AccountManager.OnLoggedIn, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x14000011")]
	public static event Action OnLoggedOut
	{
		[Token(Token = "0x6005794")]
		[Address(RVA = "0x5CFEC30", Offset = "0x5CFDC30", VA = "0x5CFEC30")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$add_OnLoggedOut): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = AccountManager.OnLoggedOut;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&AccountManager.OnLoggedOut, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6005795")]
		[Address(RVA = "0x5CFED10", Offset = "0x5CFDD10", VA = "0x5CFED10")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$remove_OnLoggedOut): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = AccountManager.OnLoggedOut;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&AccountManager.OnLoggedOut, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x14000012")]
	public static event Action OnAuthMethodsChanged
	{
		[Token(Token = "0x6005796")]
		[Address(RVA = "0x5CFEDF0", Offset = "0x5CFDDF0", VA = "0x5CFEDF0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$add_OnAuthMethodsChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = AccountManager.OnAuthMethodsChanged;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&AccountManager.OnAuthMethodsChanged, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6005797")]
		[Address(RVA = "0x5CFEED0", Offset = "0x5CFDED0", VA = "0x5CFEED0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$remove_OnAuthMethodsChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = AccountManager.OnAuthMethodsChanged;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&AccountManager.OnAuthMethodsChanged, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x6005749")]
	[Address(RVA = "0x5CF9610", Offset = "0x5CF8610", VA = "0x5CF9610")]
	public static void LoginWithOAuth(string provider, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$LoginWithOAuth): clean
		uint uVar1;
		int iVar2;
		AccountManager pAVar3;
		AccountManager.d__8<OAuthFlow> __this;
		Coroutine pUVar4;

		if (Il2CppMethodInitialized_07548338 == false) {
			Il2CppMethodInitialized_07548338 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pAVar3 = AccountManager._instance;
		}
		else {
			pAVar3 = *(AccountManager*)((long)(typeof(AccountManager)).static_fields + 0x50);
		}
		if (pAVar3 != null) {
			pAVar3.CancelOAuthFlow();
			AccountManager._oauthPendingCallback = onComplete;
			pAVar3 = AccountManager._instance;
			if (pAVar3 != null) {
				iVar2 = pAVar3._oauthAttemptId;
				__this = new AccountManager.d__8<OAuthFlow>();
				__this.__1__state = 0;
				__this.__4__this = pAVar3;
				__this.provider = provider;
				__this.attemptId = iVar2;
				__this.reportNetworkError = reportNetworkError;
				pUVar4 = pAVar3.StartCoroutine((IEnumerator)__this);
				pAVar3._oauthFlowCoroutine = pUVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600574A")]
	[Address(RVA = "0x5CF98A0", Offset = "0x5CF88A0", VA = "0x5CF98A0")]
	public static void CancelOAuthLogin()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$CancelOAuthLogin): clean
		Action<bool, string> pSVar1;
		AccountManager __this;

		pSVar1 = AccountManager._oauthPendingCallback;
		__this = AccountManager._instance;
		if (__this != null) {
			__this.CancelOAuthFlow();
		}
		if (pSVar1 == null) {
			return;
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,0,"oauth_denied",pSVar1.method);
		return;
	}

	[Token(Token = "0x600574B")]
	[Address(RVA = "0x5CF9810", Offset = "0x5CF8810", VA = "0x5CF9810")]
	[IteratorStateMachine(typeof(_003COAuthFlow_003Ed__8))]
	private IEnumerator OAuthFlow(string provider, int attemptId, bool reportNetworkError)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$OAuthFlow): clean
		AccountManager.d__8<OAuthFlow> __this_00;

		__this_00 = new AccountManager.d__8<OAuthFlow>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.provider = provider;
		__this_00.attemptId = attemptId;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600574C")]
	[Address(RVA = "0x5CF9940", Offset = "0x5CF8940", VA = "0x5CF9940")]
	[IteratorStateMachine(typeof(_003CPollUnityOAuth_003Ed__9))]
	private IEnumerator PollUnityOAuth(UnityOAuthStart start, int attemptId, bool reportNetworkError)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$PollUnityOAuth): 3 lines keep C-only constructs
		AccountManager.UnityOAuthStart pAVar1;
		AccountManager.d__9<PollUnityOAuth> __this_00;

		__this_00 = new AccountManager.d__9<PollUnityOAuth>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		pAVar1 = &__this_00.start;
		pAVar1.ExpiresAt._offsetMinutes = start.ExpiresAt._offsetMinutes;
		*(undefined6)&pAVar1.ExpiresAt.field_0xa = start.ExpiresAt._10_6_;
		__this_00.start.PollIntervalSeconds = start.PollIntervalSeconds;
		*(uint)&__this_00.start.field_0x2c = start._44_4_;
		__this_00.start.AuthorizationUrl = start.AuthorizationUrl;
		__this_00.start.ExpiresAt._dateTime._dateData =(uint64_t)start.ExpiresAt._dateTime._dateData;
		__this_00.start.SessionId = start.SessionId;
		__this_00.start.PollToken = start.PollToken;
		__this_00.attemptId = attemptId;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600574D")]
	[Address(RVA = "0x5CF9A10", Offset = "0x5CF8A10", VA = "0x5CF9A10")]
	[IteratorStateMachine(typeof(_003CExchangeOAuthCode_003Ed__10))]
	private IEnumerator ExchangeOAuthCode(string code, bool reportNetworkError)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ExchangeOAuthCode): clean
		AccountManager.d__10<ExchangeOAuthCode> __this_00;

		__this_00 = new AccountManager.d__10<ExchangeOAuthCode>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.code = code;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600574E")]
	[Address(RVA = "0x5CF9770", Offset = "0x5CF8770", VA = "0x5CF9770")]
	private void CancelOAuthFlow()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$CancelOAuthFlow): 2 lines keep C-only constructs
		int piVar1;
		Coroutine routine;

		routine = this._oauthFlowCoroutine;
		if (routine != null) {
			this.StopCoroutine(routine);
			this._oauthFlowCoroutine = null;
		}
		AccountManager._oauthPendingCallback =null;
		piVar1 = &this._oauthAttemptId;
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x600574F")]
	[Address(RVA = "0x5CF9AC0", Offset = "0x5CF8AC0", VA = "0x5CF9AC0")]
	private bool IsCurrentOAuthAttempt(int attemptId)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$IsCurrentOAuthAttempt): clean
		int iVar1;

		if (Il2CppMethodInitialized_0754833e == false) {
			Il2CppMethodInitialized_0754833e = true;
			iVar1 = this._oauthAttemptId;
		}
		else {
			iVar1 = this._oauthAttemptId;
		}
		if (iVar1 != attemptId) {
			return false;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		return AccountManager._oauthPendingCallback !=null;
	}

	[Token(Token = "0x6005750")]
	[Address(RVA = "0x5CF9B30", Offset = "0x5CF8B30", VA = "0x5CF9B30")]
	private static void CompleteOAuth(bool success, string error)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$CompleteOAuth): clean
		AccountManager pAVar1;
		Action<bool, string> pSVar2;
		bool bVar3;

		pAVar1 = AccountManager._instance;
		bVar3 = ((Object)pAVar1 != null);
		if (bVar3) {
			pAVar1 = AccountManager._instance;
			if (pAVar1 == null) {
				throw new NullReferenceException();
			}
			pAVar1._oauthFlowCoroutine = null;
		}
		pSVar2 = AccountManager._oauthPendingCallback;
		AccountManager._oauthPendingCallback =null;
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,success,error,pSVar2.method);
		return;
	}

	[Token(Token = "0x6005751")]
	[Address(RVA = "0x5CF9C60", Offset = "0x5CF8C60", VA = "0x5CF9C60")]
	private static bool TryParseUnityOAuthStart(string json, out UnityOAuthStart start)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$TryParseUnityOAuthStart): 8 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		int iVar3;
		JSONNode pSVar4;
		JSONNode pSVar5;
		String value;
		String value_00;
		String value_01;
		String value_02;
		DateTimeOffset SVar6;
		ushort local_9a;
		String local_98;
		String pSStack_90;
		String local_88;
		DateTime SStack_80;
		ulong uStack_70;
		DateTime local_60;
		DateTimeOffset local_58;
		DateTimeOffset local_48;

		local_48._dateTime._dateData = (DateTime)0;
		local_48._offsetMinutes = 0;
		local_48._10_6_ = 0;
		local_58._dateTime._dateData = (DateTime)0;
		local_58._offsetMinutes = 0;
		local_58._10_6_ = 0;
		uStack_70 = 0;
		local_88 = null;
		SStack_80._dateData = 0;
		local_98 = null;
		pSStack_90 = null;
		*(ulong)&start.ExpiresAt._offsetMinutes = 0;
		*(ulong)&start.PollIntervalSeconds = 0;
		start.AuthorizationUrl = null;
		start.ExpiresAt._dateTime._dateData = 0;
		start.SessionId = null;
		start.PollToken = null;
		pSVar4 = JSON.Parse(json);
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar5 = pSVar4.get_Item("sessionId");
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		value = pSVar5.get_Value();
		pSVar5 = pSVar4.get_Item("pollToken");
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		value_00 = pSVar5.get_Value();
		pSVar5 = pSVar4.get_Item("authorizationUrl");
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		value_01 = pSVar5.get_Value();
		bVar1 = String.IsNullOrEmpty(value);
		if (((bVar1) || (bVar1 = String.IsNullOrEmpty(value_00))) ||(bVar1 = String.IsNullOrEmpty(value_01))) {
			return false;
		}
		SVar6 = DateTimeOffset.UtcNow;
		local_58._dateTime = SVar6._dateTime._dateData;
		local_58._offsetMinutes = SVar6._offsetMinutes;
		SVar6 = local_58.AddMinutes(10.0);
		local_60 = SVar6._dateTime._dateData;
		local_9a = SVar6._offsetMinutes;
		pSVar5 = pSVar4.get_Item("expiresAt");
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		value_02 = pSVar5.get_Value();
		bVar1 = String.IsNullOrEmpty(value_02);
		if (!bVar1) {
			bVar1 = DateTimeOffset.TryParse(value_02, null, 0x80, ref local_48);
			if (bVar1) {
				SVar6 = local_48.ToUniversalTime();
				local_60 = SVar6._dateTime._dateData;
				local_9a = SVar6._offsetMinutes;
			}
		}
		pSVar4 = pSVar4.get_Item("pollIntervalSeconds");
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pSVar4.get_AsInt();
		SStack_80._dateData = 0;
		pSStack_90 = null;
		local_88 = null;
		uStack_70 = 0;
		local_98 = value;
		pSStack_90 = value_00;
		local_88 = value_01;
		SStack_80 = local_60._dateData;
		iVar3 = 2;
		if (0 < iVar2) {
			iVar3 = iVar2;
		}
		uStack_70 = CONCAT44(uStack_70._4_4_, iVar3);
		start.SessionId = local_98;
		start.PollToken = pSStack_90;
		start.AuthorizationUrl = local_88;
		start.ExpiresAt._dateTime._dateData = (uint64_t)local_60._dateData;
		start.ExpiresAt._offsetMinutes = local_9a;
		*(uint)&start.ExpiresAt.field_0xa = 0;
		*(ushort)&start.ExpiresAt.field_0xe = 0;
		start.PollIntervalSeconds = iVar3;
		*(uint)&start.field_0x2c = uStack_70._4_4_;
		return true;
	}

	[Token(Token = "0x6005752")]
	[Address(RVA = "0x5CFA0D0", Offset = "0x5CF90D0", VA = "0x5CFA0D0")]
	private static bool TryParseUnityOAuthStatus(string json, out string status, out string code, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$TryParseUnityOAuthStatus): 1 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode pSVar3;
		String pSVar4;

		*status = null;
		*code = null;
		*error = null;
		pSVar2 = JSON.Parse(json);
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar2.get_Item("status");
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pSVar3.get_Value();
		bVar1 = String.IsNullOrEmpty(pSVar4);
		if (bVar1) {
			pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_05dfa215: ;
			*status = pSVar4;
			pSVar3 = pSVar2.get_Item("code");
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			pSVar4 = pSVar3.get_Value();
			*code = pSVar4;
			pSVar2 = pSVar2.get_Item("error");
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			pSVar4 = pSVar2.get_Value();
			*error = pSVar4;
			bVar1 = String.IsNullOrEmpty(*status);
			return !bVar1;
		}
		if (pSVar4 != null) {
			pSVar4 = pSVar4.Trim();
			if (pSVar4 != null) {
				pSVar4 = pSVar4.ToLowerInvariant();
				goto label_05dfa215;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005753")]
	[Address(RVA = "0x5CFA370", Offset = "0x5CF9370", VA = "0x5CFA370")]
	private static string NormalizeOAuthProvider(string provider)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$NormalizeOAuthProvider): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(provider);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (provider != null) {
			pSVar2 = provider.Trim();
			if (pSVar2 != null) {
				pSVar2 = pSVar2.ToLowerInvariant();
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600575D")]
	[Address(RVA = "0x5CFA780", Offset = "0x5CF9780", VA = "0x5CFA780")]
	public static void GetProfile(Action<bool, string> onComplete, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetProfile): 12 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		uint uVar4;
		AccountManager pAVar5;
		List<Action<bool, string>> __this;
		Action<bool, string>[] pSVar6;
		bool bVar8;
		code *vtableDispatch;
		ApplicationManagers_AccountManager_StaticFields pAVar9;
		Action<T1, T2> __this_00;
		AccountManager.d__50<GetProfileJson> __this_01;
		IntPtr iVar10;
		String pSVar11;
		ulong uVar12;
		IntPtr iVar13;
		Il2CppClass klass;

		pAVar5 = AccountManager._instance;
		bVar8 = ((Object)pAVar5 == null);
		if (!bVar8) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07548373 == false) goto label_05dfa900;
	label_05dfa850: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfa860;
	label_05dfa923: ;
				if (Il2CppMethodInitialized_075483c7 == false) goto label_05dfa935;
	label_05dfa86d: ;
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548373 != false) goto label_05dfa850;
	label_05dfa900: ;
				Il2CppMethodInitialized_07548373 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfa923;
	label_05dfa860: ;
				if (Il2CppMethodInitialized_075483c7 != false) goto label_05dfa86d;
	label_05dfa935: ;
				Il2CppMethodInitialized_075483c7 = true;
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			bVar8 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
			if (!bVar8) {
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
				if (forceRefresh) {
					if (uVar3 == 0) {
					}
					klass = typeof(AccountManager);
					AccountManager._ownProfileCacheValid = false;
	label_05dfa9bd: ;
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(AccountManager);
					}
					__this = klass.static_fields._ownProfileFetchSubscribers;
					if (__this != null) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this._items;
						if (pSVar6 != null) {
							uVar4 = __this._size;
							if (uVar4 < (uint)pSVar6.Length) {
								__this._size = uVar4 + 1;
								pSVar6[(int)uVar4] = onComplete;
								pAVar9 = typeof(AccountManager).static_fields;
								cVar2 = pAVar9._ownProfileFetchInFlight;
							}
							else {
								__this.AddWithResize((object)onComplete);
								pAVar9 = typeof(AccountManager).static_fields;
								cVar2 = pAVar9._ownProfileFetchInFlight;
							}
							if (cVar2 != false) {
								return;
							}
							if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
								pAVar9 = typeof(AccountManager).static_fields;
							}
							pAVar9._ownProfileFetchInFlight = true;
							pAVar5 = pAVar9._instance;
							__this_00 = new Action<bool, string>(null, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_CompleteProfileFetch);
							if (pAVar5 != null) {
								__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AccountManager.d__50<GetProfileJson>));
								__this_01 = new Object();
								__this_01.__1__state = 0;
								__this_01.__4__this = pAVar5;
								__this_01.onComplete = (Action<bool, string>)__this_00;
								pAVar5.StartCoroutine((IEnumerator)__this_01);
								return;
							}
						}
					}
					throw new NullReferenceException();
				}
				if (uVar3 == 0) {
				}
				pAVar9 = typeof(AccountManager).static_fields;
				klass = typeof(AccountManager);
				if (pAVar9._ownProfileCacheValid == false) goto label_05dfa9bd;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					pAVar9 = typeof(AccountManager).static_fields;
				}
				klass = typeof(AccountManager);
				if (pAVar9._ownProfileCacheHasValue == false) goto label_05dfa9bd;
				if (onComplete == null) {
					return;
				}
				iVar13 = onComplete.method_code;
				vtableDispatch = (code)onComplete.invoke_impl;
				iVar10 = onComplete.method;
				uVar12 = 1;
				pSVar11 = null;
				goto label_05dfa8b4;
			}
		}
		if (onComplete == null) {
			return;
		}
		iVar13 = onComplete.method_code;
		vtableDispatch = (code)onComplete.invoke_impl;
		iVar10 = onComplete.method;
		uVar12 = 0;
		pSVar11 = "not_logged_in";
	label_05dfa8b4: ;
		(*vtableDispatch)(iVar13,uVar12,pSVar11,iVar10);
		return;
	}

	[Token(Token = "0x600575E")]
	[Address(RVA = "0x5CFAC60", Offset = "0x5CF9C60", VA = "0x5CFAC60")]
	public static void UpdateProfile(string displayName, string description, string avatarKey, string bannerKey, Dictionary<string, string> socials, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$UpdateProfile): 8 lines keep C-only constructs
		uint uVar1;
		AccountManager pAVar2;
		String s;
		bool bVar3;
		JSONObject __this;
		JSONNode pSVar4;
		JSONObject __this_00;
		String pSVar5;
		AccountManager.d__51<PatchProfileJson> __this_01;
		byte[] local_98 = new byte[8];
		String local_88;
		String pSStack_80;
		ulong local_78;
		Action<bool, string> local_70;
		String local_68;
		String local_60;
		byte[] local_58 = new byte[16];
		String local_48;
		String pSStack_40;
		int local_38;
		uint uStack_34;

		local_68 = bannerKey;
		local_60 = avatarKey;
		local_88 = null;
		pSStack_80 = null;
		local_98 = (byte[])0x0;
		local_78._0_4_ = 0;
		local_78._4_4_ = 0;
		pAVar2 = AccountManager._instance;
		bVar3 = ((Object)pAVar2 == null);
		if (bVar3) goto label_05dfae2f;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548373 == false) goto label_05dfb0de;
	label_05dfadec: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfadfc;
	label_05dfb108: ;
			if (Il2CppMethodInitialized_075483c7 == false) goto label_05dfb121;
	label_05dfae09: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548373 != false) goto label_05dfadec;
	label_05dfb0de: ;
			Il2CppMethodInitialized_07548373 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfb108;
	label_05dfadfc: ;
			if (Il2CppMethodInitialized_075483c7 != false) goto label_05dfae09;
	label_05dfb121: ;
			Il2CppMethodInitialized_075483c7 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
		if (bVar3) {
	label_05dfae2f: ;
			if (onComplete == null) {
				return;
			}
			(*(code)onComplete.invoke_impl)(onComplete.method_code,0,"not_logged_in",onComplete.method);
			return;
		}
		__this = new JSONObject();
		if (displayName != null) {
			pSVar4 = ((JSONNode)displayName);
			if (__this == null) goto label_05dfb2a6;
			__this.set_Item("displayName", pSVar4);
		}
		if (description != null) {
			pSVar4 = ((JSONNode)description);
			if (__this == null) goto label_05dfb2a6;
			__this.set_Item("description", pSVar4);
		}
		pSVar5 = local_60;
		if (local_60 != null) {
			pSVar4 = ((JSONNode)pSVar5);
			if (__this == null) goto label_05dfb2a6;
			__this.set_Item("avatarKey", pSVar4);
		}
		pSVar5 = local_68;
		if (local_68 != null) {
			pSVar4 = ((JSONNode)pSVar5);
			if (__this == null) goto label_05dfb2a6;
			__this.set_Item("bannerKey", pSVar4);
		}
		if (socials != null) {
			__this_00 = new JSONObject();
			local_58.GetEnumerator((Dictionary<object, object>)socials);
			local_78._0_4_ = local_38;
			local_78._4_4_ = uStack_34;
			local_88 = local_48;
			pSStack_80 = pSStack_40;
			local_98 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_58._8_8_ = local_98;
			local_70 = onComplete;
			if (__this_00 == null) {
				bVar3 = local_98.MoveNext();
				pSVar5 = pSStack_80;
				if (bVar3) {
					((JSONNode)pSVar5);
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar3 = local_98.MoveNext();
					s = pSStack_80;
					pSVar5 = local_88;
					if (!(bVar3)) break;
					pSVar4 = ((JSONNode)s);
					__this_00.set_Item(pSVar5, pSVar4);
				}
			}
			local_98.Dispose();
			onComplete = local_70;
			if (__this == null) goto label_05dfb2a6;
			__this.set_Item("socials", (JSONNode)__this_00);
		}
		if (__this != null) {
			pAVar2 = AccountManager._instance;
			pSVar5 = __this.ToString();
			if (pAVar2 != null) {
				__this_01 = il2cpp_codegen_object_new(typeof(AccountManager.d__51<PatchProfileJson>));
				__this_01 = new Object();
				__this_01.__1__state = 0;
				__this_01.__4__this = pAVar2;
				__this_01.json = pSVar5;
				__this_01.onComplete = onComplete;
				__this_01.reportNetworkError = reportNetworkError;
				pAVar2.StartCoroutine((IEnumerator)__this_01);
				return;
			}
		}
	label_05dfb2a6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600575F")]
	[Address(RVA = "0x5CFB3F0", Offset = "0x5CFA3F0", VA = "0x5CFB3F0")]
	public static void GetCharacterInfo(Action<bool, string, JSONNode> onComplete, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetCharacterInfo): 12 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		uint uVar4;
		AccountManager pAVar5;
		code *vtableDispatch;
		List<Action<bool, string, JSONNode>> __this;
		Action<bool, string, JSONNode>[] pSVar6;
		bool bVar7;
		ApplicationManagers_AccountManager_StaticFields pAVar8;
		JSONNode pSVar9;
		Action<T1, T2, T3> __this_00;
		AccountManager.d__52<GetCharacterInfoJson> __this_01;
		Il2CppClass klass;

		pAVar5 = AccountManager._instance;
		bVar7 = ((Object)pAVar5 == null);
		if (bVar7) goto label_05dfb503;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548373 == false) goto label_05dfb572;
	label_05dfb4c0: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfb4d0;
	label_05dfb595: ;
			if (Il2CppMethodInitialized_075483c7 == false) goto label_05dfb5a7;
	label_05dfb4dd: ;
			uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548373 != false) goto label_05dfb4c0;
	label_05dfb572: ;
			Il2CppMethodInitialized_07548373 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfb595;
	label_05dfb4d0: ;
			if (Il2CppMethodInitialized_075483c7 != false) goto label_05dfb4dd;
	label_05dfb5a7: ;
			Il2CppMethodInitialized_075483c7 = true;
			uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar7 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
		if (!bVar7) {
			uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			if (forceRefresh) {
				if (uVar3 == 0) {
				}
				klass = typeof(AccountManager);
				AccountManager._ownCharacterInfoCacheValid = false;
			}
			else {
				if (uVar3 == 0) {
				}
				pAVar8 = typeof(AccountManager).static_fields;
				klass = typeof(AccountManager);
				if (pAVar8._ownCharacterInfoCacheValid != false) {
					if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
						pAVar8 = typeof(AccountManager).static_fields;
					}
					klass = typeof(AccountManager);
					if (pAVar8._ownCharacterInfoCacheHasValue != false) {
						if (onComplete == null) {
							return;
						}
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
							pAVar8 = typeof(AccountManager).static_fields;
						}
						pSVar9 = AccountManager.CloneJson(pAVar8._ownCharacterInfoCache);
						vtableDispatch = (code)onComplete.invoke_impl;
						(*vtableDispatch)(onComplete.method_code,1,0,pSVar9,onComplete.method, vtableDispatch);
						return;
					}
				}
			}
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(AccountManager);
			}
			__this = klass.static_fields._ownCharacterInfoFetchSubscribers;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar6 = __this._items;
				if (pSVar6 != null) {
					uVar4 = __this._size;
					if (uVar4 < (uint)pSVar6.Length) {
						__this._size = uVar4 + 1;
						pSVar6[(int)uVar4] = onComplete;
						pAVar8 = typeof(AccountManager).static_fields;
						cVar2 = pAVar8._ownCharacterInfoFetchInFlight;
					}
					else {
						__this.AddWithResize((object)onComplete);
						pAVar8 = typeof(AccountManager).static_fields;
						cVar2 = pAVar8._ownCharacterInfoFetchInFlight;
					}
					if (cVar2 != false) {
						return;
					}
					if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0 ) {
						pAVar8 = typeof(AccountManager).static_fields;
					}
					pAVar8._ownCharacterInfoFetchInFlight = true;
					pAVar5 = pAVar8._instance;
					__this_00 = new Action<bool, string, JSONNode>(null, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_CompleteCharacterInfoFetch);
					if (pAVar5 != null) {
						__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AccountManager.d__52<GetCharacterInfoJson>));
						__this_01 = new Object();
						__this_01.__1__state = 0;
						__this_01.__4__this = pAVar5;
						__this_01.onComplete = (Action<bool, string, JSONNode>)__this_00;
						pAVar5.StartCoroutine((IEnumerator)__this_01);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	label_05dfb503: ;
		if (onComplete == null) {
			return;
		}
		(*(code)onComplete.invoke_impl)(onComplete.method_code,0,"not_logged_in",0,onComplete.method);
		return;
	}

	[Token(Token = "0x6005760")]
	[Address(RVA = "0x5CFB950", Offset = "0x5CFA950", VA = "0x5CFB950")]
	public static void UpdateCharacterInfo(JSONNode characterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$UpdateCharacterInfo): clean
		uint uVar1;
		AccountManager pAVar2;
		bool bVar3;
		JSONObject __this;
		JSONObject __this_00;
		String pSVar4;
		IEnumerator routine;

		pAVar2 = AccountManager._instance;
		bVar3 = ((Object)pAVar2 == null);
		if (bVar3) goto label_05dfba5d;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548373 != false) goto label_05dfba1a;
	label_05dfbb8c: ;
			Il2CppMethodInitialized_07548373 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfba2a;
	label_05dfbbaf: ;
			if (Il2CppMethodInitialized_075483c7 != false) goto label_05dfba37;
	label_05dfbbc1: ;
			Il2CppMethodInitialized_075483c7 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548373 == false) goto label_05dfbb8c;
	label_05dfba1a: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfbbaf;
	label_05dfba2a: ;
			if (Il2CppMethodInitialized_075483c7 == false) goto label_05dfbbc1;
	label_05dfba37: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
		if (!bVar3) {
			__this = new JSONObject();
			pSVar4 = "characterInfo";
			__this_00 = (JSONObject)characterInfo;
			if (characterInfo == null) {
				__this_00 = new JSONObject();
			}
			if (__this != null) {
				__this.set_Item(pSVar4, (JSONNode)__this_00);
				pAVar2 = AccountManager._instance;
				pSVar4 = __this.ToString();
				if (pAVar2 != null) {
					routine = pAVar2.PutCharacterInfoJson(pSVar4, characterInfo, onComplete, reportNetworkError);
					pAVar2.StartCoroutine(routine);
					return;
				}
			}
			throw new NullReferenceException();
		}
	label_05dfba5d: ;
		if (onComplete == null) {
			return;
		}
		(*(code)onComplete.invoke_impl)(onComplete.method_code,0,"not_logged_in",0,onComplete.method);
		return;
	}

	[Token(Token = "0x6005761")]
	[Address(RVA = "0x5CFABE0", Offset = "0x5CF9BE0", VA = "0x5CFABE0")]
	[IteratorStateMachine(typeof(_003CGetProfileJson_003Ed__50))]
	private IEnumerator GetProfileJson(Action<bool, string> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetProfileJson): clean
		AccountManager.d__50<GetProfileJson> __this_00;

		__this_00 = new AccountManager.d__50<GetProfileJson>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.onComplete = onComplete;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005762")]
	[Address(RVA = "0x5CFB350", Offset = "0x5CFA350", VA = "0x5CFB350")]
	[IteratorStateMachine(typeof(_003CPatchProfileJson_003Ed__51))]
	private IEnumerator PatchProfileJson(string json, Action<bool, string> onComplete, bool reportNetworkError)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$PatchProfileJson): clean
		AccountManager.d__51<PatchProfileJson> __this_00;

		__this_00 = new AccountManager.d__51<PatchProfileJson>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.json = json;
		__this_00.onComplete = onComplete;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005763")]
	[Address(RVA = "0x5CFB8D0", Offset = "0x5CFA8D0", VA = "0x5CFB8D0")]
	[IteratorStateMachine(typeof(_003CGetCharacterInfoJson_003Ed__52))]
	private IEnumerator GetCharacterInfoJson(Action<bool, string, JSONNode> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetCharacterInfoJson): 1 lines keep C-only constructs
		AccountManager.d__52<GetCharacterInfoJson> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(AccountManager.d__52<GetCharacterInfoJson>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.onComplete = onComplete;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005764")]
	[Address(RVA = "0x5CFBC00", Offset = "0x5CFAC00", VA = "0x5CFBC00")]
	[IteratorStateMachine(typeof(_003CPutCharacterInfoJson_003Ed__53))]
	private IEnumerator PutCharacterInfoJson(string json, JSONNode fallbackCharacterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$PutCharacterInfoJson): 1 lines keep C-only constructs
		AccountManager.d__53<PutCharacterInfoJson> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(AccountManager.d__53<PutCharacterInfoJson>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.json = json;
		__this_00.fallbackCharacterInfo = fallbackCharacterInfo;
		__this_00.onComplete = onComplete;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005765")]
	[Address(RVA = "0x5CFBD30", Offset = "0x5CFAD30", VA = "0x5CFBD30")]
	[IteratorStateMachine(typeof(_003CSendMeJson_003Ed__54))]
	private IEnumerator SendMeJson(string method, string path, string json, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendMeJson): clean
		AccountManager.d__54<SendMeJson> __this_00;

		__this_00 = new AccountManager.d__54<SendMeJson>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.method = method;
		__this_00.path = path;
		__this_00.json = json;
		__this_00.onComplete = onComplete;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005766")]
	[Address(RVA = "0x5CFBE00", Offset = "0x5CFAE00", VA = "0x5CFBE00")]
	[IteratorStateMachine(typeof(_003CSendMeReadJson_003Ed__55))]
	private IEnumerator SendMeReadJson(string path, Action<bool, string, JSONNode> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendMeReadJson): clean
		AccountManager.d__55<SendMeReadJson> __this_00;

		__this_00 = new AccountManager.d__55<SendMeReadJson>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.path = path;
		__this_00.onComplete = onComplete;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005767")]
	[Address(RVA = "0x5CFBEA0", Offset = "0x5CFAEA0", VA = "0x5CFBEA0")]
	private static void ApplyProfileResponse(JSONNode profile)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ApplyProfileResponse): 4 lines keep C-only constructs
		uint uVar1;
		AccountLoginResponse pAVar2;
		ApplicationManagers_AccountManager_StaticFields pAVar3;
		JSONNode a;
		Dictionary<object, object> __this;
		bool bVar4;
		AccountLoginResponse.ProfileData pAVar5;
		String pSVar6;
		JSONNode pSVar7;
		String value;
		MethodInfo pMVar8;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		pMVar8 = null;
		bVar4 = (profile == null);
		if (bVar4) {
			return;
		}
		pAVar5 = AccountLoginResponse.ProfileData.Parse(profile);
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_05dfbf97;
	label_05dfbf67: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfbf73;
	label_05dfbfb6: ;
			pAVar2 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_05dfbf67;
	label_05dfbf97: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfbfb6;
	label_05dfbf73: ;
			pAVar2 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar2 != null) {
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07545ca0 == false) goto label_05dfc017;
	label_05dfbfe5: ;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfbff1;
	label_05dfc036: ;
				pAVar2 = AccountManager._LoginResponse_k__BackingField;
			}
			else {
				if (g_data_07545ca0 != false) goto label_05dfbfe5;
	label_05dfc017: ;
				g_data_07545ca0 = true;
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc036;
	label_05dfbff1: ;
				pAVar2 = AccountManager._LoginResponse_k__BackingField;
			}
			if (pAVar2 == null) goto label_05dfc4f7;
			pAVar2.Profile = pAVar5;
		}
		if (pAVar5 == null) goto label_05dfc4f7;
		pSVar6 = pAVar5.Description;
		if (pSVar6 == null) {
			pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8);
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc1bf;
	label_05dfc08b: ;
			if (Il2CppMethodInitialized_075483c4 != false) goto label_05dfc098;
	label_05dfc1d1: ;
			Il2CppMethodInitialized_075483c4 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc08b;
	label_05dfc1bf: ;
			if (Il2CppMethodInitialized_075483c4 == false) goto label_05dfc1d1;
	label_05dfc098: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._ProfileDescription_k__BackingField = pSVar6;
		pSVar6 = pAVar5.AvatarKey;
		if (pSVar6 == null) {
			pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8);
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc229;
	label_05dfc0dc: ;
			if (Il2CppMethodInitialized_075483c5 != false) goto label_05dfc0e9;
	label_05dfc23b: ;
			Il2CppMethodInitialized_075483c5 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc0dc;
	label_05dfc229: ;
			if (Il2CppMethodInitialized_075483c5 == false) goto label_05dfc23b;
	label_05dfc0e9: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._ProfileAvatarKey_k__BackingField = pSVar6;
		pSVar6 = pAVar5.BannerKey;
		if (pSVar6 == null) {
			pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8);
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc293;
	label_05dfc12d: ;
			if (Il2CppMethodInitialized_075483c6 != false) goto label_05dfc13a;
	label_05dfc2a5: ;
			Il2CppMethodInitialized_075483c6 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc12d;
	label_05dfc293: ;
			if (Il2CppMethodInitialized_075483c6 == false) goto label_05dfc2a5;
	label_05dfc13a: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._ProfileBannerKey_k__BackingField = pSVar6;
		if (Il2CppMethodInitialized_075454ed == false) {
			Il2CppMethodInitialized_075454ed = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc2f8;
	label_05dfc17e: ;
			pMVar8 = (MethodInfo)AccountManager._ProfileSocials_k__BackingField;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc17e;
	label_05dfc2f8: ;
			pMVar8 = (MethodInfo)AccountManager._ProfileSocials_k__BackingField;
		}
		if (pMVar8 == null) {
	label_05dfc4f7: ;
			throw new NullReferenceException();
		}
		pMVar8.Clear();
		AccountManager.MarkOwnProfileCacheFresh();
		a = pAVar5.Socials;
		bVar4 = (a == null);
		if (!bVar4) {
			if (a == null) goto label_05dfc4f7;
			local_78 = a.Keys;
			local_c8.m_Array._current = local_78.m_Array._current;
			local_c8.m_Array._list = local_78.m_Array._list;
			local_c8.m_Array._index = local_78.m_Array._index;
			local_c8.m_Array._version = local_78.m_Array._version;
			local_c8.m_Object._current.value = local_78.m_Object._current.value;
			local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
			local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
			local_c8.m_Object._version = local_78.m_Object._version;
			local_c8.m_Object._index = local_78.m_Object._index;
			local_c8.m_Object._current.key = local_78.m_Object._current.key;
			local_c8.type = local_78.type;
			local_c8._4_4_ = local_78._4_4_;
			local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
			local_118 = local_c8.GetEnumerator();
			bVar4 = local_118.MoveNext();
			if (bVar4) {
				do {
					pSVar6 = local_118.Current;
					pSVar7 = a.get_Item(pSVar6);
					if (pSVar7 == null) goto label_05dfc4f7;
					value = pSVar7.get_Value();
					bVar4 = String.IsNullOrWhiteSpace(pSVar6);
					if ((!bVar4) && (bVar4 = String.IsNullOrWhiteSpace(value), !bVar4)) {
						if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
							if (Il2CppMethodInitialized_075454ed == false) goto label_05dfc4b9;
	label_05dfc499: ;
							uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						}
						else {
							if (Il2CppMethodInitialized_075454ed != false) goto label_05dfc499;
	label_05dfc4b9: ;
							Il2CppMethodInitialized_075454ed = true;
							uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						__this = (Dictionary<object, object>)AccountManager._ProfileSocials_k__BackingField ;
						if (__this == null) goto label_05dfc4f7;
						__this.set_Item((object)pSVar6, (object)value);
					}
					bVar4 = local_118.MoveNext();
				} while (bVar4);
			}
		}
		return;
	}

	[Token(Token = "0x6005768")]
	[Address(RVA = "0x5CFC6C0", Offset = "0x5CFB6C0", VA = "0x5CFC6C0")]
	private static void CompleteProfileFetch(bool success, string error)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$CompleteProfileFetch): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int length;
		List<Action<bool, string>> pSVar3;
		object pIVar4;
		Object[] pSVar5;
		ulong uVar6;
		ulong uVar7;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07548356 == false) {
			Il2CppMethodInitialized_07548356 = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		typeof(AccountManager) = (AccountManager)klass;
		if (uVar2 == 0) {
			klass = typeof(AccountManager);
			AccountManager._ownProfileFetchInFlight = false;
		}
		else {
			((AccountManager)klass).static_fields._ownProfileFetchInFlight = false;
		}
		if (success) {
			AccountManager.MarkOwnProfileCacheFresh();
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		else {
			uVar2 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar3 = AccountManager._ownProfileFetchSubscribers;
		}
		else {
			pSVar3 = *(List<Action<bool, string>>*)((long)klass.static_fields + 0x30);
		}
		if (pSVar3 != null) {
			pSVar5 = pSVar3.ToArray();
			pSVar3 = AccountManager._ownProfileFetchSubscribers;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar3._size;
				pSVar3._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar3._items, 0, length);
				}
				if (pSVar5 != null) {
					if (0 < (int)pSVar5.Length) {
						uVar6 = pSVar5.Length & 0xffffffff;
						uVar7 = 0;
						do {
							if (uVar6 <= uVar7) {
								throw new IndexOutOfRangeException();
							}
							pIVar4 = pSVar5[uVar7];
							if (pIVar4 != null) {
								if (pIVar4 == null) goto label_05dfc86b;
								(*pIVar4[1].monitor)(pIVar4[4].klass,success,error,pIVar4[2].monitor);
								uVar6 = (ulong)(uint)pSVar5.Length;
							}
							uVar7 = uVar7 + 1;
						} while ((long)uVar7 < (long)(int)uVar6);
					}
					return;
				}
			}
		}
	label_05dfc86b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005769")]
	[Address(RVA = "0x5CFC870", Offset = "0x5CFB870", VA = "0x5CFC870")]
	private static void CompleteCharacterInfoFetch(bool success, string error, JSONNode characterInfo)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$CompleteCharacterInfoFetch): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int length;
		List<Action<bool, string, JSONNode>> pSVar3;
		object pIVar4;
		Il2CppClass klass;
		Object[] pSVar5;
		ApplicationManagers_AccountManager_StaticFields pAVar6;
		JSONNode node;
		ulong uVar7;
		JSONNode pSVar8;
		int iVar9;
		ulong uVar10;
		MethodInfo pMVar11;

		pMVar11 = (MethodInfo)error;
		if (Il2CppMethodInitialized_07548357 == false) {
			Il2CppMethodInitialized_07548357 = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		typeof(AccountManager) = (AccountManager)klass;
		if (uVar2 == 0) {
			klass = typeof(AccountManager);
			AccountManager._ownCharacterInfoFetchInFlight = false;
		}
		else {
			((AccountManager)klass).static_fields._ownCharacterInfoFetchInFlight = false;
		}
		if (success) {
			AccountManager.MarkCharacterInfoCacheFresh(characterInfo);
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		else {
			uVar2 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar3 = AccountManager._ownCharacterInfoFetchSubscribers;
			pMVar11 = MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray;
		}
		else {
			pSVar3 = *(List<Action<bool, string, JSONNode>>*)((long)klass.static_fields + 0x48);
			pMVar11 = MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray;
		}
		MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray = pMVar11;
		if (pSVar3 != null) {
			pSVar5 = pSVar3.ToArray();
			pAVar6 = typeof(AccountManager).static_fields;
			pSVar3 = pAVar6._ownCharacterInfoFetchSubscribers;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar3._size;
				pSVar3._size = 0;
				if (0 < length) {
					pMVar11 = null;
					Array.Clear((Array)pSVar3._items, 0, length);
					pAVar6 = typeof(AccountManager).static_fields;
				}
				node = AccountManager.CloneJson(pAVar6._ownCharacterInfoCache);
				if (pSVar5 != null) {
					iVar9 = (int)pSVar5.Length;
					uVar7 = pSVar5.Length & 0xffffffff;
					if (success) {
						if (0 < iVar9) {
							uVar10 = 0;
							do {
								if (uVar7 <= uVar10) {
	label_05dfcacc: ;
									throw new IndexOutOfRangeException();
								}
								pIVar4 = pSVar5[uVar10];
								if (pIVar4 != null) {
									pSVar8 = AccountManager.CloneJson(node);
									if (pIVar4 == null) goto label_05dfcad1;
									pMVar11 = (MethodInfo)0x1;
									(*pIVar4[1].monitor)(pIVar4[4].klass,1,error,pSVar8,pIVar4[2].monitor);
									uVar7 = (ulong)(uint)pSVar5.Length;
								}
								uVar10 = uVar10 + 1;
							} while ((long)uVar10 < (long)(int)uVar7);
						}
					}
					else if (0 < iVar9) {
						uVar10 = 0;
						do {
							if (uVar7 <= uVar10) goto label_05dfcacc;
							pIVar4 = pSVar5[uVar10];
							if (pIVar4 != null) {
								if (pIVar4 == null) goto label_05dfcad1;
								(*pIVar4[1].monitor)(pIVar4[4].klass,0,error,0,pIVar4[2].monitor);
								uVar7 = (ulong)(uint)pSVar5.Length;
							}
							uVar10 = uVar10 + 1;
						} while ((long)uVar10 < (long)(int)uVar7);
					}
					return;
				}
			}
		}
	label_05dfcad1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600576A")]
	[Address(RVA = "0x5CFC500", Offset = "0x5CFB500", VA = "0x5CFC500")]
	private static void MarkOwnProfileCacheFresh()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$MarkOwnProfileCacheFresh): clean
		uint uVar1;
		AccountLoginResponse pAVar2;
		bool bVar4;

		if (Il2CppMethodInitialized_07548358 == false) {
			Il2CppMethodInitialized_07548358 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc5f4;
	label_05dfc527: ;
			if (g_data_07545ca0 != false) goto label_05dfc534;
	label_05dfc606: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc629;
	label_05dfc544: ;
			pAVar2 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc527;
	label_05dfc5f4: ;
			if (g_data_07545ca0 == false) goto label_05dfc606;
	label_05dfc534: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc544;
	label_05dfc629: ;
			pAVar2 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar2 == null) {
			bVar4 = false;
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
			goto joined_r0x05dfc64f;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_05dfc66c;
	label_05dfc573: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfc583;
	label_05dfc68f: ;
			pAVar2 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_05dfc573;
	label_05dfc66c: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfc68f;
	label_05dfc583: ;
			pAVar2 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar2 == null) {
			throw new NullReferenceException();
		}
		bVar4 = pAVar2.Profile != null;
		uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
	joined_r0x05dfc64f: ;
		if (uVar1 == 0) {
		}
		AccountManager._ownProfileCacheHasValue = bVar4;
		AccountManager._ownProfileCacheValid = bVar4;
		return;
	}

	[Token(Token = "0x600576B")]
	[Address(RVA = "0x5CFCAE0", Offset = "0x5CFBAE0", VA = "0x5CFCAE0")]
	private static void MarkCharacterInfoCacheFresh(JSONNode characterInfo)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$MarkCharacterInfoCacheFresh): clean
		ApplicationManagers_AccountManager_StaticFields pAVar1;
		bool bVar2;
		JSONNode pSVar3;

		pSVar3 = AccountManager.CloneJson(characterInfo);
		pAVar1 = typeof(AccountManager).static_fields;
		pAVar1._ownCharacterInfoCache = pSVar3;
		pSVar3 = AccountManager._ownCharacterInfoCache;
		bVar2 = (pSVar3 != null);
		pAVar1 = typeof(AccountManager).static_fields;
		pAVar1._ownCharacterInfoCacheHasValue = bVar2;
		pAVar1._ownCharacterInfoCacheValid = bVar2;
		return;
	}

	[Token(Token = "0x600576C")]
	[Address(RVA = "0x5CFB7D0", Offset = "0x5CFA7D0", VA = "0x5CFB7D0")]
	private static JSONNode CloneJson(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$CloneJson): clean
		bool bVar1;
		JSONNode pSVar2;

		bVar1 = (node == null);
		if (!bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x600576D")]
	[Address(RVA = "0x5CFCBA0", Offset = "0x5CFBBA0", VA = "0x5CFCBA0")]
	private static void InvalidateOwnAccountCache()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$InvalidateOwnAccountCache): clean

		AccountManager._ownProfileCacheValid = false;
		AccountManager._ownCharacterInfoCacheValid = false;
		return;
	}

	[Token(Token = "0x600576E")]
	[Address(RVA = "0x5CFCBF0", Offset = "0x5CFBBF0", VA = "0x5CFCBF0")]
	private static void ClearOwnAccountCache()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ClearOwnAccountCache): 4 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<Action<bool, string>> pSVar3;
		List<Action<bool, string, JSONNode>> pSVar4;
		ApplicationManagers_AccountManager_StaticFields pAVar5;

		pAVar5 = typeof(AccountManager).static_fields;
		pAVar5._ownProfileCacheHasValue = false;
		pAVar5._ownProfileCacheValid = false;
		pAVar5._ownProfileFetchInFlight = false;
		pSVar3 = pAVar5._ownProfileFetchSubscribers;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar3._size;
			pSVar3._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar3._items, 0, iVar2);
				pAVar5 = typeof(AccountManager).static_fields;
			}
			pAVar5._ownCharacterInfoCacheHasValue = false;
			pAVar5._ownCharacterInfoCacheValid = false;
			pAVar5._ownCharacterInfoFetchInFlight = false;
			pSVar4 = pAVar5._ownCharacterInfoFetchSubscribers;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar4._size;
				pSVar4._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar4._items, 0, iVar2);
					pAVar5 = typeof(AccountManager).static_fields;
				}
				pAVar5._ownCharacterInfoCache = null;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600576F")]
	[Address(RVA = "0x5CFCCE0", Offset = "0x5CFBCE0", VA = "0x5CFCCE0")]
	private static void ClearProfileResponse()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ClearProfileResponse): clean
		uint uVar1;
		ApplicationManagers_AccountManager_StaticFields pAVar2;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_0754835d == false) {
			Il2CppMethodInitialized_0754835d = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483c4 == false) {
			Il2CppMethodInitialized_075483c4 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._ProfileDescription_k__BackingField = null;
		if (Il2CppMethodInitialized_075483c5 == false) {
			Il2CppMethodInitialized_075483c5 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._ProfileAvatarKey_k__BackingField = null;
		if (Il2CppMethodInitialized_075483c6 == false) {
			Il2CppMethodInitialized_075483c6 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._ProfileBannerKey_k__BackingField = null;
		if (Il2CppMethodInitialized_075454ed == false) {
			Il2CppMethodInitialized_075454ed = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			method_00 = (MethodInfo)AccountManager._ProfileSocials_k__BackingField;
		}
		else {
			method_00 = *(MethodInfo*)((long)(typeof(AccountManager)).static_fields + 0x20);
		}
		if (method_00 == null) {
			throw new NullReferenceException();
		}
		method_00.Clear();
		AccountManager.ClearOwnAccountCache();
		return;
	}

	[Token(Token = "0x6005770")]
	[Address(RVA = "0x5CFCF10", Offset = "0x5CFBF10", VA = "0x5CFCF10")]
	private static void ClearOwnPublicProfileCache()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ClearOwnPublicProfileCache): clean
		bool bVar1;
		String pSVar2;

		pSVar2 = AccountManager.UserId;
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			return;
		}
		pSVar2 = AccountManager.UserId;
		AottgPublicProfileService.ClearProfile(pSVar2);
		return;
	}

	[Token(Token = "0x6005782")]
	[Address(RVA = "0x5CFE160", Offset = "0x5CFD160", VA = "0x5CFE160")]
	public static bool IsOAuthProviderLinked(string provider)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$IsOAuthProviderLinked): clean
		AccountLoginResponse.OAuthLinkData pAVar1;

		pAVar1 = AccountManager.GetOAuthLink(provider);
		return pAVar1 != null;
	}

	[Token(Token = "0x6005798")]
	[Address(RVA = "0x5CFEFB0", Offset = "0x5CFDFB0", VA = "0x5CFEFB0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$Init): 5 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;
		bool bVar3;
		AccountManager pAVar4;
		String path;
		OnPreLoadScene __this;

		pAVar4 = SingletonFactory.CreateSingleton<AccountManager>((object)AccountManager._instance);
		AccountManager._instance = pAVar4;
		if (AccountManager._sceneInvalidationSubscribed == false) {
			__this = new OnPreLoadScene(null, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene);
			EventManager.add_OnPreLoadScene(__this);
			klass = typeof(AccountManager);
			AccountManager._sceneInvalidationSubscribed = true;
			uVar1 = (((AccountManager)klass)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483a5 == false) {
			Il2CppMethodInitialized_075483a5 = true;
			uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(FolderPaths))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		path = String.Concat(FolderPaths.Settings, "/AccountRefresh.dat");
		bVar3 = File.Exists(path);
		if (Il2CppMethodInitialized_075483c8 == false) {
			Il2CppMethodInitialized_075483c8 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AccountManager._KeepSignedIn_k__BackingField = bVar3;
		AccountManager.LoadRefreshToken();
		bVar3 = String.IsNullOrEmpty(AccountManager._refreshToken);
		if (!bVar3) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			AccountManager.Refresh(null, true);
		}
		AccountManager.RefreshAuthMethods(null);
		return;
	}

	[Token(Token = "0x6005799")]
	[Address(RVA = "0x5CFFB20", Offset = "0x5CFEB20", VA = "0x5CFFB20")]
	public static void SetKeepSignedIn(bool value)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SetKeepSignedIn): clean
		uint uVar1;
		bool bVar2;
		ApplicationManagers_AccountManager_StaticFields pAVar3;
		AccountManager pAVar4;

		if (Il2CppMethodInitialized_07548387 == false) {
			Il2CppMethodInitialized_07548387 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483c8 == false) {
			Il2CppMethodInitialized_075483c8 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar4 = typeof(AccountManager);
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._KeepSignedIn_k__BackingField = value;
		uVar1 = (pAVar4._2).cctor_finished_or_no_cctor;
		if (value) {
			if (uVar1 == 0) {
				pAVar3 = typeof(AccountManager).static_fields;
			}
			bVar2 = String.IsNullOrEmpty(pAVar3._refreshToken);
			if (!bVar2) {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					pAVar4 = typeof(AccountManager);
					AccountManager.SaveRefreshToken();
					return;
				}
				AccountManager.SaveRefreshToken();
				return;
			}
			return;
		}
		if (uVar1 == 0) {
			AccountManager.DeleteRefreshToken();
			return;
		}
		AccountManager.DeleteRefreshToken();
		return;
	}

	[Token(Token = "0x600579A")]
	[Address(RVA = "0x5CFFFB0", Offset = "0x5CFEFB0", VA = "0x5CFFFB0")]
	public static bool IsAuthMethodEnabled(string key)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$IsAuthMethodEnabled): 1 lines keep C-only constructs
		HashSet<object> __this;
		bool bVar1;

		if (Il2CppMethodInitialized_07548388 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548388 = true;
		}
		bVar1 = String.IsNullOrEmpty(key);
		if (bVar1) {
			return false;
		}
		__this = (HashSet<object>)AccountManager._enabledAuthMethods;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this.Contains((object)key);
		return bVar1;
	}

	[Token(Token = "0x600579B")]
	[Address(RVA = "0x5CFE1B0", Offset = "0x5CFD1B0", VA = "0x5CFE1B0")]
	public static AccountLoginResponse.OAuthLinkData GetOAuthLink(string provider)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetOAuthLink): clean
		AccountLoginResponse pAVar1;
		AccountLoginResponse.ProfileData pAVar2;
		AccountLoginResponse.OAuthLinkData[] pAVar3;
		AccountLoginResponse.OAuthLinkData pAVar4;
		bool bVar5;
		ulong uVar6;
		ulong uVar7;

		bVar5 = String.IsNullOrEmpty(provider);
		if (bVar5) {
			return null;
		}
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_05dfe238;
	label_05dfe208: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfe214;
	label_05dfe257: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_05dfe208;
	label_05dfe238: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfe257;
	label_05dfe214: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar1 == null) {
			return null;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_05dfe2b8;
	label_05dfe286: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfe292;
	label_05dfe2d7: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_05dfe286;
	label_05dfe2b8: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfe2d7;
	label_05dfe292: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar1 == null) goto label_05dfe491;
		if (pAVar1.Profile == null) {
			return null;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_05dfe345;
	label_05dfe313: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfe31f;
	label_05dfe364: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_05dfe313;
	label_05dfe345: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfe364;
	label_05dfe31f: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if ((pAVar1 == null) ||(pAVar2 = pAVar1.Profile, pAVar2 == null)) goto label_05dfe491;
		if (pAVar2.OAuthLinks == null) {
			return null;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_05dfe3df;
	label_05dfe3ad: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dfe3b9;
	label_05dfe3fe: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_05dfe3ad;
	label_05dfe3df: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dfe3fe;
	label_05dfe3b9: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if (((pAVar1 != null) &&(pAVar2 = pAVar1.Profile, pAVar2 != null)) &&(pAVar3 = pAVar2.OAuthLinks, pAVar3 != null)) {
			if (0 < (int)pAVar3.Length) {
				uVar6 = pAVar3.Length & 0xffffffff;
				uVar7 = 0;
				do {
					if (uVar6 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					pAVar4 = pAVar3[uVar7];
					if (pAVar4 != null) {
						bVar5 = String.Equals(pAVar4.Provider, provider, 5);
						if (bVar5) {
							return pAVar4;
						}
						uVar6 = (ulong)(uint)pAVar3.Length;
					}
					uVar7 = uVar7 + 1;
				} while ((long)uVar7 < (long)(int)uVar6);
			}
			return null;
		}
	label_05dfe491: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600579C")]
	[Address(RVA = "0x5CFF9C0", Offset = "0x5CFE9C0", VA = "0x5CFF9C0")]
	public static void RefreshAuthMethods(Action<bool, string> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$RefreshAuthMethods): clean
		AccountManager pAVar1;
		bool bVar2;
		AccountManager.d__168<GetAuthMethods> __this;

		pAVar1 = AccountManager._instance;
		bVar2 = ((Object)pAVar1 == null);
		if (bVar2) {
			if (onComplete == null) {
				return;
			}
			(*(code)onComplete.invoke_impl)(onComplete.method_code,0,"not_initialized",onComplete.method);
			return;
		}
		pAVar1 = AccountManager._instance;
		if (pAVar1 == null) {
			throw new NullReferenceException();
		}
		__this = new AccountManager.d__168<GetAuthMethods>();
		__this.__1__state = 0;
		__this.__4__this = pAVar1;
		__this.onComplete = onComplete;
		pAVar1.StartCoroutine((IEnumerator)__this);
		return;
	}

	[Token(Token = "0x600579D")]
	[Address(RVA = "0x5D000D0", Offset = "0x5CFF0D0", VA = "0x5D000D0")]
	public static void Register(string displayName, string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$Register): 2 lines keep C-only constructs
		uint uVar1;
		ApplicationManagers_AccountManager_StaticFields pAVar2;
		AccountManager __this;
		object @object;
		String path;
		String captureField;
		AccountManager.c__DisplayClass158_0 __this_00;
		JSONObject __this_01;
		JSONNode pSVar3;
		String json;
		Action<T1, T2> __this_02;
		ApplicationManagers_AccountManager___c_StaticFields pAVar4;
		Action<string> __this_03;
		IEnumerator routine;

		__this_00 = new AccountManager.c__DisplayClass158_0();
		if (__this_00 == null) goto label_05e004fc;
		__this_00.onComplete = onComplete;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075483c9 != false) goto label_05e00206;
	label_05e00497: ;
			Il2CppMethodInitialized_075483c9 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075483c9 == false) goto label_05e00497;
	label_05e00206: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._PendingVerifyToken_k__BackingField = null;
		if (Il2CppMethodInitialized_075483ca == false) {
			Il2CppMethodInitialized_075483ca = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._PendingEmail_k__BackingField = email;
		__this_01 = new JSONObject();
		pSVar3 = ((JSONNode)displayName);
		if (__this_01 != null) {
			__this_01.set_Item("displayName", pSVar3);
			pSVar3 = ((JSONNode)email);
			__this_01.set_Item("email", pSVar3);
			pSVar3 = ((JSONNode)password);
			__this_01.set_Item("password", pSVar3);
			__this = AccountManager._instance;
			json = __this_01.ToString();
			__this_02 = new Action<bool, string>((object)__this_00, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass158_0_Register_b__0);
			if ((typeof(AccountManager.c)._2).cctor_finished_or_no_cctor == 0) {
			}
			captureField = "verificationToken";
			path = "/v1/auth/register";
			pAVar4 = typeof(AccountManager.c).static_fields;
			__this_03 = pAVar4.__9__158_1;
			if (__this_03 == null) {
				if ((typeof(AccountManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pAVar4 = typeof(AccountManager.c).static_fields;
				}
				@object = (object)pAVar4.__9;
				__this_03 = new Action<string>(@object, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c_Register_b__158_1);
				pAVar4 = typeof(AccountManager.c).static_fields;
				pAVar4.__9__158_1 = __this_03;
			}
			if (__this != null) {
				routine = __this.PostJson(path, json, null, (Action<bool, string>)__this_02, false, captureField, __this_03, reportNetworkError);
				__this.StartCoroutine(routine);
				return;
			}
		}
	label_05e004fc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600579E")]
	[Address(RVA = "0x5D00620", Offset = "0x5CFF620", VA = "0x5D00620")]
	public static void Login(string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$Login): clean
		AccountManager __this;
		JSONObject __this_00;
		JSONNode pSVar1;
		String json;
		IEnumerator routine;

		__this_00 = new JSONObject();
		pSVar1 = ((JSONNode)email);
		if (__this_00 != null) {
			__this_00.set_Item("email", pSVar1);
			pSVar1 = ((JSONNode)password);
			__this_00.set_Item("password", pSVar1);
			__this = AccountManager._instance;
			json = __this_00.ToString();
			if (__this != null) {
				routine = __this.PostJson("/v1/auth/login", json, null, onComplete, true, null, null, reportNetworkError);
				__this.StartCoroutine(routine);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600579F")]
	[Address(RVA = "0x5CFF500", Offset = "0x5CFE500", VA = "0x5CFF500")]
	public static void Refresh(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$Refresh): 3 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		uint uVar4;
		List<Action<bool, string>> __this;
		Action<bool, string>[] pSVar5;
		AccountManager __this_00;
		object @object;
		String path;
		bool bVar8;
		JSONObject __this_01;
		JSONNode pSVar9;
		String pSVar10;
		ApplicationManagers_AccountManager___c_StaticFields pAVar11;
		Action<T1, T2> __this_02;
		IEnumerator routine;

		bVar8 = String.IsNullOrEmpty(AccountManager._refreshToken);
		if (bVar8) {
			if (Il2CppMethodInitialized_075483cb == false) {
				Il2CppMethodInitialized_075483cb = true;
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				AccountManager._IsRefreshInProgress_k__BackingField = false ;
			}
			else {
				*(byte)((long)(typeof(AccountManager)).static_fields + 0xa0) = 0;
			}
			if (onComplete == null) {
				return;
			}
			(*(code)onComplete.invoke_impl)(onComplete.method_code,0,"no_refresh_token",onComplete.method);
			return;
		}
		if (onComplete == null) {
	label_05dff688: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dff698;
	label_05dff771: ;
			if (g_data_075483cc == false) goto label_05dff783;
	label_05dff6a5: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dff6b5;
	label_05dff7a6: ;
			cVar2 = AccountManager._IsRefreshInProgress_k__BackingField;
		}
		else {
			__this = AccountManager._pendingRefreshCallbacks;
			if (__this == null) goto label_05dff9b2;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar5 = __this._items;
			if (pSVar5 == null) goto label_05dff9b2;
			uVar4 = __this._size;
			if (uVar4 < (uint)pSVar5.Length) {
				__this._size = uVar4 + 1;
				pSVar5[(int)uVar4] = onComplete;
				goto label_05dff688;
			}
			__this.AddWithResize((object)onComplete);
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dff771;
	label_05dff698: ;
			if (g_data_075483cc != false) goto label_05dff6a5;
	label_05dff783: ;
			g_data_075483cc = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dff7a6;
	label_05dff6b5: ;
			cVar2 = AccountManager._IsRefreshInProgress_k__BackingField;
		}
		if (cVar2 != false) {
			return;
		}
		__this_01 = new JSONObject();
		pSVar10 = AccountManager._refreshToken;
		pSVar9 = ((JSONNode)pSVar10);
		if (__this_01 != null) {
			__this_01.set_Item("refreshToken", pSVar9);
			if (Il2CppMethodInitialized_075483cb == false) {
				Il2CppMethodInitialized_075483cb = true;
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			AccountManager._IsRefreshInProgress_k__BackingField = true;
			__this_00 = AccountManager._instance;
			pSVar10 = __this_01.ToString();
			path = "/v1/auth/refresh";
			pAVar11 = typeof(AccountManager.c).static_fields;
			__this_02 = (Action<T1, T2>)pAVar11.__9__160_0;
			if (__this_02 == null) {
				if ((typeof(AccountManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pAVar11 = typeof(AccountManager.c).static_fields;
				}
				@object = (object)pAVar11.__9;
				__this_02 = new Action<bool, string>(@object, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c_Refresh_b__160_0);
				pAVar11 = typeof(AccountManager.c).static_fields;
				pAVar11.__9__160_0 = (Action<bool, string>)__this_02;
			}
			if (__this_00 != null) {
				routine = __this_00.PostJson(path, pSVar10, null, (Action<bool, string>)__this_02, true, null, null, reportNetworkError);
				__this_00.StartCoroutine(routine);
				return;
			}
		}
	label_05dff9b2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60057A0")]
	[Address(RVA = "0x5D007B0", Offset = "0x5CFF7B0", VA = "0x5D007B0")]
	public static void Logout([Optional] Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$Logout): 2 lines keep C-only constructs
		AccountManager __this;
		bool bVar1;
		JSONObject __this_00;
		JSONNode pSVar2;
		String pSVar3;
		IEnumerator routine;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, reportNetworkError);
		pSVar3 = AccountManager._refreshToken;
		AccountManager.ClearSession(true);
		bVar1 = String.IsNullOrEmpty(pSVar3);
		if (bVar1) {
			if (onComplete == null) {
				return;
			}
			(*(code)onComplete.invoke_impl)(onComplete.method_code,1,0,onComplete.method);
			return;
		}
		__this_00 = new JSONObject();
		pSVar2 = ((JSONNode)pSVar3);
		if (__this_00 != null) {
			__this_00.set_Item("refreshToken", pSVar2);
			__this = AccountManager._instance;
			pSVar3 = __this_00.ToString();
			if (__this != null) {
				routine = __this.PostJson("/v1/auth/logout", pSVar3, null, onComplete, false, null, null, reportNetworkError);
				__this.StartCoroutine(routine);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60057A1")]
	[Address(RVA = "0x5D00F30", Offset = "0x5CFFF30", VA = "0x5D00F30")]
	public static void GoOffline()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GoOffline): clean
		uint uVar1;
		bool clearRefreshToken;

		if (Il2CppMethodInitialized_0754838f == false) {
			Il2CppMethodInitialized_0754838f = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07548374 == false) {
			Il2CppMethodInitialized_07548374 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		clearRefreshToken = String.IsNullOrEmpty(AccountManager._refreshToken) ;
		AccountManager.ClearSession(clearRefreshToken);
		return;
	}

	[Token(Token = "0x60057A2")]
	[Address(RVA = "0x5D01010", Offset = "0x5D00010", VA = "0x5D01010")]
	public static void GoOnline(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GoOnline): clean
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_07548390 == false) {
			Il2CppMethodInitialized_07548390 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07548373 == false) {
			Il2CppMethodInitialized_07548373 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483c7 == false) {
			Il2CppMethodInitialized_075483c7 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
		if (bVar2) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			AccountManager.Refresh(onComplete, reportNetworkError);
			return;
		}
		if (onComplete == null) {
			return;
		}
		(*(code)onComplete.invoke_impl)(onComplete.method_code,1,0,onComplete.method);
		return;
	}

	[Token(Token = "0x60057A3")]
	[Address(RVA = "0x5D01180", Offset = "0x5D00180", VA = "0x5D01180")]
	public static string GetWebLoginUrlWithSession()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetWebLoginUrlWithSession): clean
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_07548391 == false) {
			Il2CppMethodInitialized_07548391 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AccountManager.BaseUrl;
		}
		else {
			pSVar2 = *(String*)((long)(typeof(AccountManager)).static_fields + 0x60);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar2.TrimEnd(0x2f);
		pSVar2 = String.Concat(pSVar2, "/login");
		return pSVar2;
	}

	[Token(Token = "0x60057A4")]
	[Address(RVA = "0x5D01220", Offset = "0x5D00220", VA = "0x5D01220")]
	public static void VerifyEmail(string token, Action<bool, string> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$VerifyEmail): 1 lines keep C-only constructs
		AccountManager __this;
		AccountManager.c__DisplayClass165_0 __this_00;
		JSONObject __this_01;
		JSONNode pSVar1;
		String json;
		Action<T1, T2> __this_02;
		IEnumerator routine;

		__this_00 = new AccountManager.c__DisplayClass165_0();
		if (__this_00 != null) {
			__this_00.onComplete = onComplete;
			__this_01 = new JSONObject();
			pSVar1 = ((JSONNode)token);
			if (__this_01 != null) {
				__this_01.set_Item("token", pSVar1);
				__this = AccountManager._instance;
				json = __this_01.ToString();
				__this_02 = new Action<bool, string>((object)__this_00, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0_VerifyEmail_b__0);
				if (__this != null) {
					routine = __this.PostJson("/v1/auth/verify-email", json, null, (Action<bool, string>)__this_02, false, null, null, true);
					__this.StartCoroutine(routine);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60057A5")]
	[Address(RVA = "0x5D01410", Offset = "0x5D00410", VA = "0x5D01410")]
	public static void ForgotPassword(string email, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ForgotPassword): clean
		AccountManager __this;
		JSONObject __this_00;
		JSONNode pSVar1;
		String json;
		IEnumerator routine;

		__this_00 = new JSONObject();
		pSVar1 = ((JSONNode)email);
		if (__this_00 != null) {
			__this_00.set_Item("email", pSVar1);
			__this = AccountManager._instance;
			json = __this_00.ToString();
			if (__this != null) {
				routine = __this.PostJson("/v1/auth/forgot-password", json, null, onComplete, false, null, null, reportNetworkError);
				__this.StartCoroutine(routine);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60057A6")]
	[Address(RVA = "0x5D01560", Offset = "0x5D00560", VA = "0x5D01560")]
	public static void PatreonUnlink(Action<bool, string> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$PatreonUnlink): clean
		uint uVar1;
		AccountManager __this;
		bool bVar2;
		IEnumerator routine;

		if (Il2CppMethodInitialized_07548394 == false) {
			Il2CppMethodInitialized_07548394 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07548373 == false) {
			Il2CppMethodInitialized_07548373 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483c7 == false) {
			Il2CppMethodInitialized_075483c7 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
		if (!bVar2) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				__this = AccountManager._instance;
			}
			else {
				__this = AccountManager._instance;
			}
			if (Il2CppMethodInitialized_075483c7 == false) {
				Il2CppMethodInitialized_075483c7 = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (__this == null) {
				throw new NullReferenceException();
			}
			routine = __this.DeleteJson("/v1/patreon/link", *(String*)((long)(typeof(AccountManager)).static_fields + 0x70), onComplete);
			__this.StartCoroutine(routine);
			return;
		}
		if (onComplete == null) {
			return;
		}
		(*(code)onComplete.invoke_impl)(onComplete.method_code,0,"not_logged_in",onComplete.method);
		return;
	}

	[Token(Token = "0x60057A7")]
	[Address(RVA = "0x5D00050", Offset = "0x5CFF050", VA = "0x5D00050")]
	[IteratorStateMachine(typeof(_003CGetAuthMethods_003Ed__168))]
	private IEnumerator GetAuthMethods(Action<bool, string> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetAuthMethods): clean
		AccountManager.d__168<GetAuthMethods> __this_00;

		__this_00 = new AccountManager.d__168<GetAuthMethods>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.onComplete = onComplete;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60057A8")]
	[Address(RVA = "0x5D01840", Offset = "0x5D00840", VA = "0x5D01840")]
	[IteratorStateMachine(typeof(_003CSendApiGet_003Ed__169))]
	private IEnumerator SendApiGet(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendApiGet): 1 lines keep C-only constructs
		AccountManager.d__169<SendApiGet> __this_00;

		if (Il2CppMethodInitialized_07548396 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AccountManager.d__169<SendApiGet>)) ;
			Il2CppMethodInitialized_07548396 = true;
		}
		__this_00 = new AccountManager.d__169<SendApiGet>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.path = path;
		__this_00.bearer = bearer;
		__this_00.parseJson = parseJson;
		__this_00.onComplete = onComplete;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60057A9")]
	[Address(RVA = "0x5D01910", Offset = "0x5D00910", VA = "0x5D01910")]
	[AsyncStateMachine(typeof(_003CSendApiGetAsync_003Ed__170))]
	private UniTask SendApiGetAsync(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendApiGetAsync): 6 lines keep C-only constructs
		UniTask CVar1;
		AccountManager.d__170<SendApiGetAsync> local_88;

		local_88.__u__1.task.result = null;
		local_88.__u__1.task.token = 0;
		local_88.__u__1.task._18_6_ = 0;
		local_88.onComplete = null;
		local_88.__u__1.task.source = null;
		local_88.bearer = null;
		local_88.parseJson = false;
		local_88._41_7_ = 0;
		local_88.__t__builder.ex = null;
		local_88.path = null;
		local_88.__1__state = 0;
		local_88._4_4_ = 0;
		local_88.__t__builder.runnerPromise =null;
		local_88.path = path;
		local_88.bearer = bearer;
		local_88.parseJson = parseJson;
		local_88.onComplete = onComplete;
		local_88.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG);
		}
		local_88.MoveNext();
		CVar1 = (UniTask)il2cpp_runtime_helper_0386e920(&local_88.__t__builder, 0);
		return (UniTask)CVar1;
	}

	[Token(Token = "0x60057AA")]
	[Address(RVA = "0x5D019F0", Offset = "0x5D009F0", VA = "0x5D019F0")]
	[IteratorStateMachine(typeof(_003CSendApiJson_003Ed__171))]
	private IEnumerator SendApiJson(string method, string path, string json, string bearer, bool parseJson, Action<AottgApiResult> onComplete, [Optional][DefaultParameterValue(true)] bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendApiJson): clean
		AccountManager.d__171<SendApiJson> __this_00;

		__this_00 = new AccountManager.d__171<SendApiJson>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.method = method;
		__this_00.path = path;
		__this_00.json = json;
		__this_00.bearer = bearer;
		__this_00.parseJson = parseJson;
		__this_00.onComplete = onComplete;
		__this_00.reportNetworkError = reportNetworkError;
		__this_00.timeoutSeconds = timeoutSeconds;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60057AB")]
	[Address(RVA = "0x5D01B00", Offset = "0x5D00B00", VA = "0x5D01B00")]
	[AsyncStateMachine(typeof(_003CSendApiJsonAsync_003Ed__172))]
	private UniTask SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, int? timeoutSeconds, Action<AottgApiResult> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendApiJsonAsync): 9 lines keep C-only constructs
		UniTask CVar1;
		AccountManager.d__172<SendApiJsonAsync> local_98;

		local_98.__u__1.task.source = null;
		local_98.__u__1.task.result = null;
		local_98.timeoutSeconds.value = 0;
		local_98._68_4_ = 0;
		local_98.onComplete = null;
		local_98.bearer = null;
		local_98.parseJson = false;
		local_98.reportNetworkError = false;
		local_98._58_2_ = 0;
		local_98.timeoutSeconds.hasValue = false;
		local_98.timeoutSeconds._1_3_ = 0;
		local_98.path = null;
		local_98.json = null;
		local_98.__t__builder.ex = null;
		local_98.method = null;
		local_98.__1__state = 0;
		local_98._4_4_ = 0;
		local_98.__t__builder.runnerPromise =null;
		local_98.__u__1.task.token = 0;
		local_98.__u__1.task._18_6_ = 0;
		local_98.method = method;
		local_98.path = path;
		local_98.json = json;
		local_98.bearer = bearer;
		local_98.reportNetworkError = reportNetworkError;
		local_98.timeoutSeconds._0_4_ = timeoutSeconds._0_4_;
		local_98.timeoutSeconds.value = timeoutSeconds.value;
		local_98.onComplete = onComplete;
		local_98.parseJson = parseJson;
		local_98.__1__state = -1;
		if ((MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ .field7_0x38).rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ);
		}
		local_98.MoveNext();
		CVar1 = (UniTask)il2cpp_runtime_helper_0386e920(&local_98.__t__builder, 0);
		return (UniTask)CVar1;
	}

	[Token(Token = "0x60057AC")]
	[Address(RVA = "0x5D01C30", Offset = "0x5D00C30", VA = "0x5D01C30")]
	private static UniTask<AottgApiResult> SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SendApiJsonAsync): 4 lines keep C-only constructs
		AottgApiClient __this;
		AottgApiRequest __this_00;
		int value;
		Nullable<int> local_58;
		Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_50;
		Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;

		local_50 = __return_storage_ptr__;
		__this = new AottgApiClient();
		__this_00 = new AottgApiRequest();
		if (__this_00 != null) {
			__this_00.Method = method;
			__this_00.Path = path;
			__this_00.JsonBody = json;
			__this_00.BearerToken = bearer;
			value = 0xf;
			if (timeoutSeconds.hasValue != false) {
				value = timeoutSeconds.value;
			}
			__this_00.ParseJson = parseJson;
			local_58.hasValue = false;
			local_58._1_3_ = 0;
			local_58.value = 0;
			local_58 = new Nullable<int>(value);
			__this_00.TimeoutSeconds = local_58;
			__this_00.ReportNetworkError = reportNetworkError;
			if (__this != null) {
				local_48 = __this.SendAsync(__this_00, (CancellationToken)0x0);
				local_50.token = local_48.token;
				*(undefined6)&local_50.field_0x12 = local_48._18_6_;
				local_50.source = local_48.source;
				local_50.result = local_48.result;
				return local_50;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60057AD")]
	[Address(RVA = "0x5D01DC0", Offset = "0x5D00DC0", VA = "0x5D01DC0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$OnDestroy): 1 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		OnPreLoadScene __this_00;

		if (Il2CppMethodInitialized_0754839b == false) {
			Il2CppMethodInitialized_0754839b = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AccountManager._sceneInvalidationSubscribed;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AccountManager)).static_fields + 0x58 );
		}
		if (cVar1 != false) {
			__this_00 = new OnPreLoadScene(null, (intptr_t)MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene);
			EventManager.remove_OnPreLoadScene(__this_00);
			AccountManager._sceneInvalidationSubscribed = false;
		}
		this.CancelOAuthFlow();
		return;
	}

	[Token(Token = "0x60057AE")]
	[Address(RVA = "0x5D01770", Offset = "0x5D00770", VA = "0x5D01770")]
	[IteratorStateMachine(typeof(_003CDeleteJson_003Ed__175))]
	private IEnumerator DeleteJson(string path, string bearer, Action<bool, string> onComplete)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$DeleteJson): 1 lines keep C-only constructs
		AccountManager.d__175<DeleteJson> __this_00;

		if (Il2CppMethodInitialized_0754839c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AccountManager.d__175<DeleteJson>)) ;
			Il2CppMethodInitialized_0754839c = true;
		}
		__this_00 = new AccountManager.d__175<DeleteJson>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.path = path;
		__this_00.bearer = bearer;
		__this_00.onComplete = onComplete;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60057AF")]
	[Address(RVA = "0x5D00520", Offset = "0x5CFF520", VA = "0x5D00520")]
	[IteratorStateMachine(typeof(_003CPostJson_003Ed__176))]
	private IEnumerator PostJson(string path, string json, string bearer, Action<bool, string> onComplete, bool applyAuthResponse, [Optional] string captureField, [Optional] Action<string> captureTarget, bool reportNetworkError = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$PostJson): clean
		AccountManager.d__176<PostJson> __this_00;

		__this_00 = new AccountManager.d__176<PostJson>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.path = path;
		__this_00.json = json;
		__this_00.bearer = bearer;
		__this_00.onComplete = onComplete;
		__this_00.applyAuthResponse = applyAuthResponse;
		__this_00.captureField = captureField;
		__this_00.captureTarget = captureTarget;
		__this_00.reportNetworkError = reportNetworkError;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60057B0")]
	[Address(RVA = "0x5D01EF0", Offset = "0x5D00EF0", VA = "0x5D01EF0")]
	private static bool IsSessionRejected(bool isRefresh, long statusCode, string error)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$IsSessionRejected): clean
		bool bVar1;

		if (statusCode == 0x191) {
			bVar1 = (error == "invalid_refresh_token");
			if ((!bVar1) && (isRefresh)) {
	label_05e01f53: ;
				return (statusCode - 0x191U & 0xfffffffffffffffd) == 0;
			}
		}
		else {
			if (!isRefresh) {
				return false;
			}
			bVar1 = true;
			if (statusCode != 400) goto label_05e01f53;
		}
		return bVar1;
	}

	[Token(Token = "0x60057B1")]
	[Address(RVA = "0x5D01F70", Offset = "0x5D00F70", VA = "0x5D01F70")]
	private static bool HasUsablePhotonToken()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$HasUsablePhotonToken): 1 lines keep C-only constructs
		uint uVar1;
		long lVar2;
		bool bVar3;
		long iVar4;
		DateTimeOffset SVar5;
		DateTimeOffset local_28;

		local_28._dateTime._dateData = (DateTime)0;
		local_28._offsetMinutes = 0;
		local_28._10_6_ = 0;
		if (Il2CppMethodInitialized_075472f7 == false) {
			Il2CppMethodInitialized_075472f7 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(AccountManager) + 0xe4);
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.IsNullOrEmpty(AccountManager._PhotonToken_k__BackingField);
		if (bVar3) {
			return false;
		}
		if (Il2CppMethodInitialized_075483cd == false) {
			Il2CppMethodInitialized_075483cd = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			lVar2 = AccountManager. _PhotonTokenExpiresUnix_k__BackingField;
		}
		else {
			lVar2 = *(long)((long)(typeof(AccountManager)).static_fields + 0x88 );
		}
		if (lVar2 == 0) {
			return true;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075483cd == false) {
			Il2CppMethodInitialized_075483cd = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		lVar2 = AccountManager._PhotonTokenExpiresUnix_k__BackingField;
		SVar5 = DateTimeOffset.UtcNow;
		local_28._dateTime = SVar5._dateTime._dateData;
		local_28._offsetMinutes = SVar5._offsetMinutes;
		iVar4 = local_28.ToUnixTimeSeconds();
		return iVar4 + 0x3c < lVar2;
	}

	[Token(Token = "0x60057B2")]
	[Address(RVA = "0x5D021A0", Offset = "0x5D011A0", VA = "0x5D021A0")]
	private static bool ApplyAuthMethodsResponse(string json)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ApplyAuthMethodsResponse): 12 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		HashSet<object> pSVar2;
		object pIVar3;
		bool bVar4;
		int iVar5;
		JSONNode pSVar6;
		JSONArray a;
		HashSet<string> __this;
		JSONNode pSVar7;
		String pSVar8;
		ApplicationManagers_AccountManager_StaticFields pAVar9;
		Il2CppClass klass;
		FormatException __this_00;
		MethodInfo lastManagedFrame;
		int iVar10;
		bool bVar11;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		if (Il2CppMethodInitialized_075483a0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075483a0 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar6 = JSON.Parse(json);
		if ((pSVar6 == null) ||(pSVar6 = pSVar6.get_Item("methods"), pSVar6 == null)) goto label_05e027fc;
		a = pSVar6.get_AsArray();
		bVar4 = ((JSONNode)a == null);
		if (bVar4) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
			__this_00 = (FormatException)il2cpp_codegen_object_new(klass);
			pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Missing methods array.");
			__this_00 = new FormatException(pSVar8);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_ApplyAuthMethodsResponse);
			throw (object)__this_00;
		}
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05e02335;
	label_05e02744: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 == false) goto label_05e02744;
	label_05e02335: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (a == null) goto label_05e027fc;
		iVar5 = a.get_Count();
		if (0 < iVar5) {
			iVar10 = 0;
			do {
				pSVar6 = a.get_Item(iVar10);
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.get_Item("key"), pSVar7 == null)) goto label_05e027fc;
				pSVar8 = (String)pSVar7.get_Value();
				bVar4 = String.IsNullOrEmpty(pSVar8);
				if (!bVar4) {
					pSVar6 = pSVar6.get_Item("enabled");
					if (pSVar6 == null) goto label_05e027fc;
					bVar4 = pSVar6.get_AsBool();
					if (bVar4) {
						if (__this == null) goto label_05e027fc;
						__this.Add((object)pSVar8);
					}
				}
				iVar10 = iVar10 + 1;
				iVar5 = a.get_Count();
			} while (iVar10 < iVar5);
		}
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075483ce != false) goto label_05e024bb;
	label_05e02786: ;
			g_data_075483ce = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075483ce == false) goto label_05e02786;
	label_05e024bb: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar9 = typeof(AccountManager).static_fields;
		bVar4 = true;
		if (pAVar9._HasAuthMethodsSnapshot_k__BackingField != false) {
			if (__this == null) goto label_05e027fc;
			iVar10 = __this._count;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				pAVar9 = typeof(AccountManager).static_fields;
			}
			if (pAVar9._enabledAuthMethods == null) goto label_05e027fc;
			bVar11 = iVar10 != pAVar9._enabledAuthMethods._count;
			if (!bVar11) {
				local_48.GetEnumerator((HashSet<object>)__this);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
				do {
					bVar4 = local_68.MoveNext();
					pIVar3 = local_58;
					if (!bVar4) goto label_05e025d3;
					pSVar2 = (HashSet<object>)AccountManager._enabledAuthMethods;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pSVar2.Contains(pIVar3);
				} while (bVar4);
				bVar11 = true;
	label_05e025d3: ;
				local_68.Dispose();
				bVar4 = bVar11;
			}
		}
		pSVar2 = (HashSet<object>)AccountManager._enabledAuthMethods;
		if ((pSVar2 != null) &&(pSVar2.Clear(), __this != null)) {
			local_48.GetEnumerator((HashSet<object>)__this);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
			while(true) {
				bVar11 = local_68.MoveNext();
				pIVar3 = local_58;
				if (!bVar11) {
					local_68.Dispose();
					if (Il2CppMethodInitialized_075483cf == false) {
						Il2CppMethodInitialized_075483cf = true;
						uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(AccountManager))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					AccountManager._HasAuthMethodsSnapshot_k__BackingField = true;
					return bVar4;
				}
				pSVar2 = (HashSet<object>)AccountManager._enabledAuthMethods;
				if (pSVar2 == null) break;
				pSVar2.Add(pIVar3) ;
			}
			throw new NullReferenceException();
		}
	label_05e027fc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60057B3")]
	[Address(RVA = "0x5D02910", Offset = "0x5D01910", VA = "0x5D02910")]
	private static void ApplyAuthResponse(string json)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ApplyAuthResponse): 8 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		ApplicationManagers_AccountManager_StaticFields pAVar3;
		Action pSVar4;
		ulong uVar5;
		ushort uVar6;
		ulong uVar7;
		ushort uVar8;
		bool bVar9;
		JSONNode pSVar10;
		AccountLoginResponse pAVar11;
		long iVar12;
		Il2CppClass pIVar13;
		FormatException __this;
		String pSVar14;
		MethodInfo pMVar15;
		DateTimeOffset left;
		DateTimeOffset left_00;

		pSVar10 = JSON.Parse(json);
		pAVar11 = AccountLoginResponse.Parse(pSVar10);
		if (pAVar11 == null) {
			pIVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
			__this = (FormatException)il2cpp_codegen_object_new(pIVar13);
			pSVar14 = il2cpp_codegen_get_runtime_metadata(&"Missing login response payload.");
			__this = new FormatException(pSVar14);
			pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_ApplyAuthResponse);
			throw (object)__this;
		}
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075483d0 != false) goto label_05e029a8;
	label_05e02dc0: ;
			Il2CppMethodInitialized_075483d0 = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075483d0 == false) goto label_05e02dc0;
	label_05e029a8: ;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._LoginResponse_k__BackingField = pAVar11;
		pSVar14 = pAVar11.AccessToken;
		if (Il2CppMethodInitialized_075483d1 == false) {
			Il2CppMethodInitialized_075483d1 = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._AuthToken_k__BackingField = pSVar14;
		pSVar14 = pAVar11.PhotonToken;
		if (Il2CppMethodInitialized_075483d2 == false) {
			Il2CppMethodInitialized_075483d2 = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._PhotonToken_k__BackingField = pSVar14;
		uVar5 = pAVar11.AccessTokenExpiresAt._dateTime;
		uVar6 = pAVar11.AccessTokenExpiresAt._offsetMinutes;
		left._offsetMinutes = uVar6;
		left._dateTime._dateData = (DateTime)(DateTime)uVar5;
		iVar12 = 0;
		left._10_6_ = 0;
		bVar9 = (left == (DateTimeOffset)ZEXT816(0));
		if (bVar9) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e02c43;
	label_05e02a9d: ;
			if (Il2CppMethodInitialized_075483d3 == false) goto label_05e02c55;
	label_05e02aaa: ;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			iVar12 = (pAVar11.AccessTokenExpiresAt).ToUnixTimeSeconds();
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e02a9d;
	label_05e02c43: ;
			if (Il2CppMethodInitialized_075483d3 != false) goto label_05e02aaa;
	label_05e02c55: ;
			Il2CppMethodInitialized_075483d3 = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AccountManager._AuthTokenExpiresUnix_k__BackingField = iVar12;
		uVar7 = pAVar11.PhotonTokenExpiresAt._dateTime;
		uVar8 = pAVar11.PhotonTokenExpiresAt._offsetMinutes;
		left_00._offsetMinutes = uVar8;
		left_00._dateTime._dateData = (DateTime)(DateTime)uVar7;
		iVar12 = 0;
		left_00._10_6_ = 0;
		bVar9 = (left_00 == (DateTimeOffset)ZEXT816(0));
		if (bVar9) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e02cc4;
	label_05e02b16: ;
			if (Il2CppMethodInitialized_075483d4 == false) goto label_05e02cd6;
	label_05e02b23: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e02cfa;
	label_05e02b34: ;
			AccountManager._PhotonTokenExpiresUnix_k__BackingField = iVar12;
		}
		else {
			iVar12 = (pAVar11.PhotonTokenExpiresAt).ToUnixTimeSeconds();
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e02b16;
	label_05e02cc4: ;
			if (Il2CppMethodInitialized_075483d4 != false) goto label_05e02b23;
	label_05e02cd6: ;
			Il2CppMethodInitialized_075483d4 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e02b34;
	label_05e02cfa: ;
			AccountManager._PhotonTokenExpiresUnix_k__BackingField = iVar12;
		}
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar14 = pAVar11.RefreshToken;
		pSVar10 = pSVar10.get_Item("profile");
		bVar9 = (pSVar10 != null);
		if (bVar9) {
			AccountManager.ApplyProfileResponse(pSVar10);
		}
		bVar9 = String.IsNullOrEmpty(pSVar14);
		if (bVar9) {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			goto joined_r0x05e02da3;
		}
		pAVar3 = typeof(AccountManager).static_fields;
		pAVar3._refreshToken = pSVar14;
		if (Il2CppMethodInitialized_075483d5 == false) {
			Il2CppMethodInitialized_075483d5 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e02d70;
	label_05e02e7a: ;
			cVar1 = AccountManager._KeepSignedIn_k__BackingField;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar13 = typeof(AccountManager);
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e02e7a;
	label_05e02d70: ;
			cVar1 = AccountManager._KeepSignedIn_k__BackingField;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar13 = typeof(AccountManager);
		}
		typeof(AccountManager) = (AccountManager)pIVar13;
		if (cVar1 == false) {
			if (uVar2 == 0) {
			}
			AccountManager.DeleteRefreshToken();
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (uVar2 == 0) {
			}
			AccountManager.SaveRefreshToken();
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
	joined_r0x05e02da3: ;
		if (uVar2 == 0) {
			pSVar4 = AccountManager.OnLoggedIn;
		}
		else {
			pSVar4 = *(Action*)((long)(typeof(AccountManager)).static_fields + 200);
		}
		if (pSVar4 == null) {
			return;
		}
		(*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar4.method);
		return;
	}

	[Token(Token = "0x60057B4")]
	[Address(RVA = "0x5D02F40", Offset = "0x5D01F40", VA = "0x5D02F40")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$OnPreLoadScene): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075483a2 == false) {
			Il2CppMethodInitialized_075483a2 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_0754835b == false) {
			Il2CppMethodInitialized_0754835b = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AccountManager._ownProfileCacheValid = false;
		AccountManager._ownCharacterInfoCacheValid = false;
		return;
	}

	[Token(Token = "0x60057B5")]
	[Address(RVA = "0x5D02FE0", Offset = "0x5D01FE0", VA = "0x5D02FE0")]
	private static long ParseIsoToUnix(string iso)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ParseIsoToUnix): clean
		bool bVar1;
		DateTime d1;
		long iVar2;
		DateTime SStack_28;
		TimeSpan SStack_20;
		DateTime SStack_18;

		SStack_18._dateData = (DateTime)0;
		SStack_20._ticks = (TimeSpan)0;
		bVar1 = String.IsNullOrEmpty(iso);
		if (!bVar1) {
			SStack_18 = DateTime.Parse(iso, null, 0x80);
			d1 = SStack_18.ToUniversalTime();
			SStack_28._dateData = (DateTime)0;
			SStack_28 = new DateTime(0x7b2, 1, 1, 0, 0, 0, 1);
			SStack_20 = (d1 - SStack_28);
		}
		return iVar2;
	}

	[Token(Token = "0x60057B6")]
	[Address(RVA = "0x5D00980", Offset = "0x5CFF980", VA = "0x5D00980")]
	private static void ClearSession(bool clearRefreshToken = true)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$ClearSession): 27 lines keep C-only constructs
		uint uVar1;
		IntPtr pvVar2;
		Action pSVar3;
		code *vtableDispatch;
		AccountManager klass;
		bool bVar4;
		byte uVar5;
		ApplicationManagers_AccountManager_StaticFields pAVar6;
		ulong extraout_RDX;
		ulong extraout_RDX_00;
		ulong extraout_RDX_01;
		ulong extraout_RDX_02;
		ulong extraout_RDX_03;
		ulong extraout_RDX_04;
		ulong extraout_RDX_05;
		ulong extraout_RDX_06;
		ulong uVar7;
		Il2CppClass pIVar8;
		MethodInfo pMVar9;

		if (Il2CppMethodInitialized_075483a4 == false) {
			Il2CppMethodInitialized_075483a4 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e009ab;
	label_05e00bc3: ;
			if (Il2CppMethodInitialized_07548373 != false) goto label_05e009b8;
	label_05e00bd5: ;
			Il2CppMethodInitialized_07548373 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e009c8;
	label_05e00bf8: ;
			if (Il2CppMethodInitialized_075483c7 != false) goto label_05e009d5;
	label_05e00c0a: ;
			Il2CppMethodInitialized_075483c7 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e00bc3;
	label_05e009ab: ;
			if (Il2CppMethodInitialized_07548373 == false) goto label_05e00bd5;
	label_05e009b8: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e00bf8;
	label_05e009c8: ;
			if (Il2CppMethodInitialized_075483c7 == false) goto label_05e00c0a;
	label_05e009d5: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = String.IsNullOrEmpty(AccountManager._AuthToken_k__BackingField);
		uVar5 = true;
		if (!bVar4) {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			goto joined_r0x05e00c8b;
		}
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548374 != false) goto label_05e00c57;
	label_05e00ef2: ;
			Il2CppMethodInitialized_07548374 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548374 == false) goto label_05e00ef2;
	label_05e00c57: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = String.IsNullOrEmpty(AccountManager._refreshToken);
		uVar5 = !bVar4;
		uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
	joined_r0x05e00c8b: ;
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483d1 == false) {
			Il2CppMethodInitialized_075483d1 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(AccountManager) + 0xe4);
		}
		if (uVar1 == 0) {
		}
		pAVar6 = typeof(AccountManager).static_fields;
		pAVar6._AuthToken_k__BackingField = null;
		if (Il2CppMethodInitialized_075483d3 == false) {
			Il2CppMethodInitialized_075483d3 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		typeof(AccountManager) = (AccountManager)pIVar8;
		if (uVar1 == 0) {
			pIVar8 = typeof(AccountManager);
			AccountManager._AuthTokenExpiresUnix_k__BackingField = 0;
		}
		else {
			(*(ApplicationManagers_AccountManager_StaticFields*)((long)pIVar8 + 0xb8)). _AuthTokenExpiresUnix_k__BackingField = 0;
		}
		if (Il2CppMethodInitialized_075483d2 == false) {
			Il2CppMethodInitialized_075483d2 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		else {
			uVar1 = *(uint)((long)pIVar8 + 0xe4);
		}
		if (uVar1 == 0) {
			pIVar8 = typeof(AccountManager);
		}
		pvVar2 = pIVar8.static_fields;
		*(ulong)((long)pvVar2 + 0x80) = 0;
		if (Il2CppMethodInitialized_075483d4 == false) {
			Il2CppMethodInitialized_075483d4 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		typeof(AccountManager) = (AccountManager)pIVar8;
		if (uVar1 == 0) {
			pIVar8 = typeof(AccountManager);
			AccountManager._PhotonTokenExpiresUnix_k__BackingField = 0;
		}
		else {
			(*(ApplicationManagers_AccountManager_StaticFields*)((long)pIVar8 + 0xb8)). _PhotonTokenExpiresUnix_k__BackingField = 0;
		}
		if (Il2CppMethodInitialized_075483d0 == false) {
			Il2CppMethodInitialized_075483d0 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		else {
			uVar1 = *(uint)((long)pIVar8 + 0xe4);
		}
		if (uVar1 == 0) {
			pIVar8 = typeof(AccountManager);
		}
		pvVar2 = pIVar8.static_fields;
		*(ulong)((long)pvVar2 + 0x90) = 0;
		pMVar9 = (MethodInfo)((long)pvVar2 + 0x90);
		AccountManager.ClearProfileResponse();
		if (Il2CppMethodInitialized_075483d6 == false) {
			Il2CppMethodInitialized_075483d6 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
			uVar7 = extraout_RDX_00;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
			uVar7 = extraout_RDX;
		}
		typeof(AccountManager) = klass;
		if (uVar1 == 0) {
			klass = typeof(AccountManager);
			pAVar6 = typeof(AccountManager).static_fields;
			pAVar6._RefreshTokenExpiresUnix_k__BackingField = 0;
			uVar7 = extraout_RDX_01;
		}
		else {
			pAVar6 = *(ApplicationManagers_AccountManager_StaticFields*)((long)klass + 0xb8);
			pAVar6._RefreshTokenExpiresUnix_k__BackingField = 0;
		}
		if (clearRefreshToken) {
			if (*(uint)((long)klass + 0xe4) == 0) {
				pAVar6 = typeof(AccountManager).static_fields;
			}
			pAVar6._refreshToken = null;
			pMVar9 = (MethodInfo)&pAVar6._refreshToken;
			AccountManager.DeleteRefreshToken();
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(AccountManager);
			uVar7 = extraout_RDX_02;
		}
		else {
			uVar1 = *(uint)((long)klass + 0xe4);
		}
		if (uVar1 == 0) {
			uVar7 = extraout_RDX_03;
		}
		if (Il2CppMethodInitialized_075483cb == false) {
			Il2CppMethodInitialized_075483cb = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
			uVar7 = extraout_RDX_04;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
			pIVar8 = typeof(AccountManager);
		}
		typeof(AccountManager) = (AccountManager)pIVar8;
		if (uVar1 == 0) {
			pIVar8 = typeof(AccountManager);
			pAVar6 = typeof(AccountManager).static_fields;
			pAVar6._IsRefreshInProgress_k__BackingField = false;
			uVar7 = extraout_RDX_05;
		}
		else {
			pAVar6 = pIVar8.static_fields;
			pAVar6._IsRefreshInProgress_k__BackingField = false;
		}
		if ((bool)uVar5) {
			if ((pIVar8._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = AccountManager.OnLoggedOut;
				uVar7 = extraout_RDX_06;
			}
			else {
				pSVar3 = pAVar6.OnLoggedOut;
			}
			if (pSVar3 != null) {
				vtableDispatch = (code)pSVar3.invoke_impl;
				(*vtableDispatch)(pSVar3.method_code,pSVar3.method,uVar7,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60057B7")]
	[Address(RVA = "0x5CFF220", Offset = "0x5CFE220", VA = "0x5CFF220")]
	private static string GetRefreshTokenPath()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$GetRefreshTokenPath): clean
		String pSVar1;

		pSVar1 = String.Concat(FolderPaths.Settings, "/AccountRefresh.dat");
		return pSVar1;
	}

	[Token(Token = "0x60057B8")]
	[Address(RVA = "0x5CFFDA0", Offset = "0x5CFEDA0", VA = "0x5CFFDA0")]
	private static void SaveRefreshToken()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$SaveRefreshToken): clean
		String pSVar1;
		String path;

		Directory.CreateDirectory(FolderPaths.Settings);
		pSVar1 = AccountManager._refreshToken;
		pSVar1 = DeviceLockedEncryption.Encrypt(pSVar1);
		path = String.Concat(FolderPaths.Settings, "/AccountRefresh.dat");
		File.WriteAllText(path, pSVar1);
		return;
	}

	[Token(Token = "0x60057B9")]
	[Address(RVA = "0x5CFF290", Offset = "0x5CFE290", VA = "0x5CFF290")]
	private static void LoadRefreshToken()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$LoadRefreshToken): clean
		bool bVar2;
		String pSVar3;

		pSVar3 = String.Concat(FolderPaths.Settings, "/AccountRefresh.dat");
		bVar2 = File.Exists(pSVar3);
		if (bVar2) {
			pSVar3 = File.ReadAllText(pSVar3);
			pSVar3 = DeviceLockedEncryption.Decrypt(pSVar3);
			AccountManager._refreshToken = pSVar3;
		}
		return;
	}

	[Token(Token = "0x60057BA")]
	[Address(RVA = "0x5CFFC70", Offset = "0x5CFEC70", VA = "0x5CFFC70")]
	private static void DeleteRefreshToken()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$DeleteRefreshToken): clean
		bool bVar1;
		String path;

		path = String.Concat(FolderPaths.Settings, "/AccountRefresh.dat");
		bVar1 = File.Exists(path);
		if (bVar1) {
			File.Delete(path);
		}
		return;
	}

	[Token(Token = "0x60057BB")]
	[Address(RVA = "0x5D03170", Offset = "0x5D02170", VA = "0x5D03170")]
	public AccountManager()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountManager.c (ApplicationManagers.AccountManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/AccountManager.c.

	// ApplicationManagers.AccountManager.<>c__DisplayClass158_0$$.ctor: clean
	private void c__DisplayClass158_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$.ctor: clean
	private void c__DisplayClass165_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager$$.cctor: clean
	static AccountManager()
	{
		uint uVar1;
		ApplicationManagers_AccountManager_StaticFields pAVar2;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, string> __this;
		List<Action<bool, string>> pSVar3;
		List<Action<bool, string, JSONNode>> __this_00;
		HashSet<string> __this_01;

		__this = new Dictionary<string, string>();
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._ProfileSocials_k__BackingField = __this;
		pSVar3 = new List<Action<bool, string>>();
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._ownProfileFetchSubscribers = pSVar3;
		__this_00 = new List<Action<bool, string, JSONNode>>();
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._ownCharacterInfoFetchSubscribers = __this_00;
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2.BaseUrl = "https://aottg2.com";
		pSVar3 = new List<Action<bool, string>>();
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._pendingRefreshCallbacks = pSVar3;
		AccountManager._KeepSignedIn_k__BackingField = true;
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
		__this_01 = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		__this_01.Add((Il2CppObject *)"email_password");
		__this_01.Add((Il2CppObject *)"discord");
		__this_01.Add((Il2CppObject *)"google");
		pAVar2 = typeof(AccountManager).static_fields;
		pAVar2._enabledAuthMethods = __this_01;
		return;
	}

	// ApplicationManagers.AccountManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AccountManager.c();
		AccountManager.c.__9 =(AccountManager.c)__this;
		return;
	}

	// ApplicationManagers.AccountManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager.<>c$$<Register>b__158_1: clean
	private void c__Register_b__158_1(String t)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075483ad == false) {
			Il2CppMethodInitialized_075483ad = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075483c9 == false) {
			Il2CppMethodInitialized_075483c9 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AccountManager._PendingVerifyToken_k__BackingField = t;
		return;
	}

	// ApplicationManagers.AccountManager.<>c$$<Refresh>b__160_0: 3 lines keep C-only constructs
	private void c__Refresh_b__160_0(bool success, String error)
	{
		int piVar1;
		uint uVar2;
		int length;
		List<Action<bool, string>> pSVar4;
		object pIVar5;
		uint uVar6;
		Object[] pSVar7;
		uint uVar8;

		if (Il2CppMethodInitialized_075483ae == false) {
			Il2CppMethodInitialized_075483ae = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075483cb == false) {
			Il2CppMethodInitialized_075483cb = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AccountManager._IsRefreshInProgress_k__BackingField = false;
		pSVar4 = AccountManager._pendingRefreshCallbacks;
		if (pSVar4 != null) {
			pSVar7 = pSVar4.ToArray();
			pSVar4 = AccountManager._pendingRefreshCallbacks;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar4._size;
				pSVar4._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar4._items, 0, length);
				}
				if (pSVar7 != null) {
					uVar6 = (uint)pSVar7.Length;
					if (0 < (int)uVar6) {
						uVar8 = 0;
						do {
							if (uVar6 <= uVar8) {
								throw new IndexOutOfRangeException();
							}
							pIVar5 = pSVar7[(int)uVar8];
							if (pIVar5 == null) goto label_05e03772;
							(*pIVar5[1].monitor)(pIVar5[4].klass,success,error,pIVar5[2].monitor);
							uVar8 = uVar8 + 1;
							uVar6 = (uint)pSVar7.Length;
						} while ((int)uVar8 < (int)uVar6);
					}
					return;
				}
			}
		}
	label_05e03772: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass158_0$$<Register>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass158_0__Register_b__0(bool success, String error)
	{
		uint uVar1;
		Action<bool, string> pSVar2;
		code *UNRECOVERED_JUMPTABLE_00;

		if (success) {
			pSVar2 = this.onComplete;
			if (pSVar2 == null) {
				return;
			}
			UNRECOVERED_JUMPTABLE_00 = (code)pSVar2.invoke_impl;
			(*UNRECOVERED_JUMPTABLE_00)(pSVar2.method_code,1,0,pSVar2.method,UNRECOVERED_JUMPTABLE_00);
			return;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075483ca == false) {
			Il2CppMethodInitialized_075483ca = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AccountManager._PendingEmail_k__BackingField = null;
		pSVar2 = this.onComplete;
		if (pSVar2 == null) {
			return;
		}
		UNRECOVERED_JUMPTABLE_00 = (code)pSVar2.invoke_impl;
		(*UNRECOVERED_JUMPTABLE_00)(pSVar2.method_code,0,error,pSVar2.method,UNRECOVERED_JUMPTABLE_00);
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$<VerifyEmail>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass165_0__VerifyEmail_b__0(bool success, String error)
	{
		uint uVar1;
		Action<bool, string> pSVar2;
		code *vtableDispatch;

		if (!success) {
			pSVar2 = this.onComplete;
			goto joined_r0x05e03961;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075483c9 == false) goto label_05e03980;
	label_05e0392e: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075483c9 != false) goto label_05e0392e;
	label_05e03980: ;
			Il2CppMethodInitialized_075483c9 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AccountManager._PendingVerifyToken_k__BackingField = null;
		pSVar2 = this.onComplete;
	joined_r0x05e03961: ;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,success,error,pSVar2.method,vtableDispatch);
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$.ctor: clean
	private void c__DisplayClass50_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$<GetProfileJson>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass50_0__GetProfileJson_b__0(bool success, String error, JSONNode node)
	{
		Action<bool, string> pSVar1;
		code *vtableDispatch;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		if (success) {
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			AccountManager.ApplyProfileResponse(node);
			pSVar1 = this.onComplete;
		}
		else {
			pSVar1 = this.onComplete;
		}
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,success,error,pSVar1.method,vtableDispatch);
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$.ctor: clean
	private void c__DisplayClass51_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$<PatchProfileJson>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass51_0__PatchProfileJson_b__0(bool success, String error, JSONNode node)
	{
		Action<bool, string> pSVar1;
		code *vtableDispatch;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		if (success) {
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			AccountManager.ApplyProfileResponse(node);
			AccountManager.MarkOwnProfileCacheFresh();
			pSVar1 = this.onComplete;
		}
		else {
			pSVar1 = this.onComplete;
		}
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,success,error,pSVar1.method,vtableDispatch);
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$.ctor: clean
	private void c__DisplayClass52_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$<GetCharacterInfoJson>b__0: clean
	private void c__DisplayClass52_0__GetCharacterInfoJson_b__0(bool success, String error, JSONNode node)
	{
		Action<bool, string, JSONNode> pSVar1;
		bool bVar2;
		JSONNode pSVar3;

		pSVar1 = this.onComplete;
		if (pSVar1 == null) {
			return;
		}
		if (success) {
			pSVar3 = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) {
					throw new NullReferenceException();
				}
				pSVar3 = node.get_Item("characterInfo");
			}
		}
		else {
			pSVar3 = null;
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,success,error,pSVar3,pSVar1.method);
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$.ctor: clean
	private void c__DisplayClass53_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$<PutCharacterInfoJson>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass53_0__PutCharacterInfoJson_b__0(bool success, String error, JSONNode node)
	{
		uint uVar1;
		code *vtableDispatch;
		Action<bool, string, JSONNode> pSVar2;
		bool bVar3;
		JSONNode pSVar4;
		MethodInfo method_00;

		if (!success) {
			pSVar4 = this.fallbackCharacterInfo;
			pSVar2 = this.onComplete;
			goto joined_r0x05e03dce;
		}
		bVar3 = (node != null);
		if (bVar3) {
			if (node == null) {
				throw new NullReferenceException();
			}
			pSVar4 = node.get_Item("characterInfo");
			bVar3 = (pSVar4 != null);
			if (!bVar3) goto label_05e03df7;
			method_00 = (MethodInfo *)"characterInfo";
			pSVar4 = node.get_Item("characterInfo");
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05e03df7: ;
			pSVar4 = this.fallbackCharacterInfo;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AccountManager.MarkCharacterInfoCacheFresh(pSVar4);
		pSVar2 = this.onComplete;
	joined_r0x05e03dce: ;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,success,error,pSVar4,pSVar2.method,vtableDispatch);
		return;
	}
}
