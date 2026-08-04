// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AccountManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AccountManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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

[Token(Token = "0x2000755")]
internal class AccountManager : MonoBehaviour
{
	[Token(Token = "0x2000756")]
	private struct UnityOAuthStart
	{
		[Token(Token = "0x4002350")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string SessionId;

		[Token(Token = "0x4002351")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string PollToken;

		[Token(Token = "0x4002352")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string AuthorizationUrl;

		[Token(Token = "0x4002353")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DateTimeOffset ExpiresAt;

		[Token(Token = "0x4002354")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int PollIntervalSeconds;
	}

	[Token(Token = "0x2000758")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass101_0
	{
		[Token(Token = "0x4002357")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002358")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x60047F9")]
		[Address(RVA = "0x43A7080", Offset = "0x43A7080", VA = "0x43A7080")]
		public _003C_003Ec__DisplayClass101_0()
		{
		}

		[Token(Token = "0x60047FA")]
		[Address(RVA = "0x43A7090", Offset = "0x43A7090", VA = "0x43A7090")]
		internal void _003CSendApiJson_003Eb__0(AottgApiResult result)
		{
		}
	}

	[Token(Token = "0x2000759")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass105_0
	{
		[Token(Token = "0x4002359")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60047FB")]
		[Address(RVA = "0x43A70B0", Offset = "0x43A70B0", VA = "0x43A70B0")]
		public _003C_003Ec__DisplayClass105_0()
		{
		}

		[Token(Token = "0x60047FC")]
		[Address(RVA = "0x43A70C0", Offset = "0x43A70C0", VA = "0x43A70C0")]
		internal void _003CDeleteJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200075A")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass106_0
	{
		[Token(Token = "0x400235A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60047FD")]
		[Address(RVA = "0x43A70D0", Offset = "0x43A70D0", VA = "0x43A70D0")]
		public _003C_003Ec__DisplayClass106_0()
		{
		}

		[Token(Token = "0x60047FE")]
		[Address(RVA = "0x43A70E0", Offset = "0x43A70E0", VA = "0x43A70E0")]
		internal void _003CPostJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200075B")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass124_0
	{
		[Token(Token = "0x400235B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60047FF")]
		[Address(RVA = "0x43A70F0", Offset = "0x43A70F0", VA = "0x43A70F0")]
		public _003C_003Ec__DisplayClass124_0()
		{
		}

		[Token(Token = "0x6004800")]
		[Address(RVA = "0x43A7100", Offset = "0x43A7100", VA = "0x43A7100")]
		internal void _003COAuthFlow_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200075C")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass125_0
	{
		[Token(Token = "0x400235C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6004801")]
		[Address(RVA = "0x43A7110", Offset = "0x43A7110", VA = "0x43A7110")]
		public _003C_003Ec__DisplayClass125_0()
		{
		}

		[Token(Token = "0x6004802")]
		[Address(RVA = "0x43A7120", Offset = "0x43A7120", VA = "0x43A7120")]
		internal void _003CPollUnityOAuth_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200075D")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass126_0
	{
		[Token(Token = "0x400235D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6004803")]
		[Address(RVA = "0x43A7130", Offset = "0x43A7130", VA = "0x43A7130")]
		public _003C_003Ec__DisplayClass126_0()
		{
		}

		[Token(Token = "0x6004804")]
		[Address(RVA = "0x43A7140", Offset = "0x43A7140", VA = "0x43A7140")]
		internal void _003CExchangeOAuthCode_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000762")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass170_0
	{
		[Token(Token = "0x4002363")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600480D")]
		[Address(RVA = "0x43A7520", Offset = "0x43A7520", VA = "0x43A7520")]
		public _003C_003Ec__DisplayClass170_0()
		{
		}

		[Token(Token = "0x600480E")]
		[Address(RVA = "0x43A7530", Offset = "0x43A7530", VA = "0x43A7530")]
		internal void _003CSendMeJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000763")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass171_0
	{
		[Token(Token = "0x4002364")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600480F")]
		[Address(RVA = "0x43A7540", Offset = "0x43A7540", VA = "0x43A7540")]
		public _003C_003Ec__DisplayClass171_0()
		{
		}

		[Token(Token = "0x6004810")]
		[Address(RVA = "0x43A7550", Offset = "0x43A7550", VA = "0x43A7550")]
		internal void _003CSendMeReadJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000767")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass98_0
	{
		[Token(Token = "0x4002368")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6004817")]
		[Address(RVA = "0x43A7860", Offset = "0x43A7860", VA = "0x43A7860")]
		public _003C_003Ec__DisplayClass98_0()
		{
		}

		[Token(Token = "0x6004818")]
		[Address(RVA = "0x43A7870", Offset = "0x43A7870", VA = "0x43A7870")]
		internal void _003CGetAuthMethods_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000768")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass99_0
	{
		[Token(Token = "0x4002369")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x400236A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x6004819")]
		[Address(RVA = "0x43A7880", Offset = "0x43A7880", VA = "0x43A7880")]
		public _003C_003Ec__DisplayClass99_0()
		{
		}

		[Token(Token = "0x600481A")]
		[Address(RVA = "0x43A7890", Offset = "0x43A7890", VA = "0x43A7890")]
		internal void _003CSendApiGet_003Eb__0(AottgApiResult result)
		{
		}
	}

	[Token(Token = "0x2000769")]
	[CompilerGenerated]
	private sealed class _003CDeleteJson_003Ed__105 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400236B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400236C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400236D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400236E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x400236F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002370")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass105_0 _003C_003E8__1;

		[Token(Token = "0x4002371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000DDD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600481E")]
			[Address(RVA = "0x43A7AA0", Offset = "0x43A7AA0", VA = "0x43A7AA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DDE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004820")]
			[Address(RVA = "0x43A7AF0", Offset = "0x43A7AF0", VA = "0x43A7AF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600481B")]
		[Address(RVA = "0x43A1DD0", Offset = "0x43A1DD0", VA = "0x43A1DD0")]
		[DebuggerHidden]
		public _003CDeleteJson_003Ed__105(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600481C")]
		[Address(RVA = "0x43A78B0", Offset = "0x43A78B0", VA = "0x43A78B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600481D")]
		[Address(RVA = "0x43A78C0", Offset = "0x43A78C0", VA = "0x43A78C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600481F")]
		[Address(RVA = "0x43A7AB0", Offset = "0x43A7AB0", VA = "0x43A7AB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200076A")]
	[CompilerGenerated]
	private sealed class _003CExchangeOAuthCode_003Ed__126 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002372")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002373")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002374")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string code;

		[Token(Token = "0x4002375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002376")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x4002377")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass126_0 _003C_003E8__1;

		[Token(Token = "0x17000DDF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004824")]
			[Address(RVA = "0x43A7FB0", Offset = "0x43A7FB0", VA = "0x43A7FB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DE0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004826")]
			[Address(RVA = "0x43A8000", Offset = "0x43A8000", VA = "0x43A8000", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004821")]
		[Address(RVA = "0x43A3DD0", Offset = "0x43A3DD0", VA = "0x43A3DD0")]
		[DebuggerHidden]
		public _003CExchangeOAuthCode_003Ed__126(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004822")]
		[Address(RVA = "0x43A7B00", Offset = "0x43A7B00", VA = "0x43A7B00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004823")]
		[Address(RVA = "0x43A7B10", Offset = "0x43A7B10", VA = "0x43A7B10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004825")]
		[Address(RVA = "0x43A7FC0", Offset = "0x43A7FC0", VA = "0x43A7FC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200076B")]
	[CompilerGenerated]
	private sealed class _003CGetAuthMethods_003Ed__98 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002378")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400237A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400237B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass98_0 _003C_003E8__1;

		[Token(Token = "0x400237C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000DE1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600482A")]
			[Address(RVA = "0x43A8360", Offset = "0x43A8360", VA = "0x43A8360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DE2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600482C")]
			[Address(RVA = "0x43A83B0", Offset = "0x43A83B0", VA = "0x43A83B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004827")]
		[Address(RVA = "0x43A1630", Offset = "0x43A1630", VA = "0x43A1630")]
		[DebuggerHidden]
		public _003CGetAuthMethods_003Ed__98(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004828")]
		[Address(RVA = "0x43A8010", Offset = "0x43A8010", VA = "0x43A8010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004829")]
		[Address(RVA = "0x43A8020", Offset = "0x43A8020", VA = "0x43A8020", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600482B")]
		[Address(RVA = "0x43A8370", Offset = "0x43A8370", VA = "0x43A8370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200076C")]
	[CompilerGenerated]
	private sealed class _003CGetCharacterInfoJson_003Ed__168 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400237D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400237E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400237F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002380")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000DE3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004830")]
			[Address(RVA = "0x43A8510", Offset = "0x43A8510", VA = "0x43A8510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DE4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004832")]
			[Address(RVA = "0x43A8560", Offset = "0x43A8560", VA = "0x43A8560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600482D")]
		[Address(RVA = "0x43A61C0", Offset = "0x43A61C0", VA = "0x43A61C0")]
		[DebuggerHidden]
		public _003CGetCharacterInfoJson_003Ed__168(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600482E")]
		[Address(RVA = "0x43A83C0", Offset = "0x43A83C0", VA = "0x43A83C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600482F")]
		[Address(RVA = "0x43A83D0", Offset = "0x43A83D0", VA = "0x43A83D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004831")]
		[Address(RVA = "0x43A8520", Offset = "0x43A8520", VA = "0x43A8520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200076D")]
	[CompilerGenerated]
	private sealed class _003CGetProfileJson_003Ed__166 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002381")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002382")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002383")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002384")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000DE5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004836")]
			[Address(RVA = "0x43A86C0", Offset = "0x43A86C0", VA = "0x43A86C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DE6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004838")]
			[Address(RVA = "0x43A8710", Offset = "0x43A8710", VA = "0x43A8710", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004833")]
		[Address(RVA = "0x43A6180", Offset = "0x43A6180", VA = "0x43A6180")]
		[DebuggerHidden]
		public _003CGetProfileJson_003Ed__166(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004834")]
		[Address(RVA = "0x43A8570", Offset = "0x43A8570", VA = "0x43A8570", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004835")]
		[Address(RVA = "0x43A8580", Offset = "0x43A8580", VA = "0x43A8580", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004837")]
		[Address(RVA = "0x43A86D0", Offset = "0x43A86D0", VA = "0x43A86D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200076E")]
	[CompilerGenerated]
	private sealed class _003COAuthFlow_003Ed__124 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002385")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002386")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002387")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string provider;

		[Token(Token = "0x4002388")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002389")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x400238A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int attemptId;

		[Token(Token = "0x400238B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass124_0 _003C_003E8__1;

		[Token(Token = "0x17000DE7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600483C")]
			[Address(RVA = "0x43A8CF0", Offset = "0x43A8CF0", VA = "0x43A8CF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DE8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600483E")]
			[Address(RVA = "0x43A8D40", Offset = "0x43A8D40", VA = "0x43A8D40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004839")]
		[Address(RVA = "0x43A3C50", Offset = "0x43A3C50", VA = "0x43A3C50")]
		[DebuggerHidden]
		public _003COAuthFlow_003Ed__124(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600483A")]
		[Address(RVA = "0x43A8720", Offset = "0x43A8720", VA = "0x43A8720", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600483B")]
		[Address(RVA = "0x43A8730", Offset = "0x43A8730", VA = "0x43A8730", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600483D")]
		[Address(RVA = "0x43A8D00", Offset = "0x43A8D00", VA = "0x43A8D00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200076F")]
	[CompilerGenerated]
	private sealed class _003CPatchProfileJson_003Ed__167 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400238C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400238D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400238E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x400238F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002390")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002391")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool reportNetworkError;

		[Token(Token = "0x17000DE9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004842")]
			[Address(RVA = "0x43A8EB0", Offset = "0x43A8EB0", VA = "0x43A8EB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DEA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004844")]
			[Address(RVA = "0x43A8F00", Offset = "0x43A8F00", VA = "0x43A8F00", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600483F")]
		[Address(RVA = "0x43A61A0", Offset = "0x43A61A0", VA = "0x43A61A0")]
		[DebuggerHidden]
		public _003CPatchProfileJson_003Ed__167(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004840")]
		[Address(RVA = "0x43A8D50", Offset = "0x43A8D50", VA = "0x43A8D50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004841")]
		[Address(RVA = "0x43A8D60", Offset = "0x43A8D60", VA = "0x43A8D60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004843")]
		[Address(RVA = "0x43A8EC0", Offset = "0x43A8EC0", VA = "0x43A8EC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000770")]
	[CompilerGenerated]
	private sealed class _003CPollUnityOAuth_003Ed__125 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002392")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002393")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002394")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public UnityOAuthStart start;

		[Token(Token = "0x4002395")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002396")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public bool reportNetworkError;

		[Token(Token = "0x4002397")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public int attemptId;

		[Token(Token = "0x4002398")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass125_0 _003C_003E8__1;

		[Token(Token = "0x4002399")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003CpollSeconds_003E5__2;

		[Token(Token = "0x17000DEB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004848")]
			[Address(RVA = "0x43A9650", Offset = "0x43A9650", VA = "0x43A9650", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DEC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600484A")]
			[Address(RVA = "0x43A96A0", Offset = "0x43A96A0", VA = "0x43A96A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004845")]
		[Address(RVA = "0x43A3D20", Offset = "0x43A3D20", VA = "0x43A3D20")]
		[DebuggerHidden]
		public _003CPollUnityOAuth_003Ed__125(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004846")]
		[Address(RVA = "0x43A8F10", Offset = "0x43A8F10", VA = "0x43A8F10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004847")]
		[Address(RVA = "0x43A8F20", Offset = "0x43A8F20", VA = "0x43A8F20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004849")]
		[Address(RVA = "0x43A9660", Offset = "0x43A9660", VA = "0x43A9660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000771")]
	[CompilerGenerated]
	private sealed class _003CPostJson_003Ed__106 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400239A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400239B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400239C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400239D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x400239E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x400239F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x40023A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x40023A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass106_0 _003C_003E8__1;

		[Token(Token = "0x40023A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public string captureField;

		[Token(Token = "0x40023A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Action<string> captureTarget;

		[Token(Token = "0x40023A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool applyAuthResponse;

		[Token(Token = "0x40023A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000DED")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600484E")]
			[Address(RVA = "0x43A9CC0", Offset = "0x43A9CC0", VA = "0x43A9CC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DEE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004850")]
			[Address(RVA = "0x43A9D10", Offset = "0x43A9D10", VA = "0x43A9D10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600484B")]
		[Address(RVA = "0x43A1DF0", Offset = "0x43A1DF0", VA = "0x43A1DF0")]
		[DebuggerHidden]
		public _003CPostJson_003Ed__106(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600484C")]
		[Address(RVA = "0x43A96B0", Offset = "0x43A96B0", VA = "0x43A96B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600484D")]
		[Address(RVA = "0x43A96C0", Offset = "0x43A96C0", VA = "0x43A96C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600484F")]
		[Address(RVA = "0x43A9CD0", Offset = "0x43A9CD0", VA = "0x43A9CD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000772")]
	[CompilerGenerated]
	private sealed class _003CPutCharacterInfoJson_003Ed__169 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JSONNode fallbackCharacterInfo;

		[Token(Token = "0x40023A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x40023AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x40023AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string json;

		[Token(Token = "0x40023AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x17000DEF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004854")]
			[Address(RVA = "0x43A9E90", Offset = "0x43A9E90", VA = "0x43A9E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DF0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004856")]
			[Address(RVA = "0x43A9EE0", Offset = "0x43A9EE0", VA = "0x43A9EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004851")]
		[Address(RVA = "0x43A61E0", Offset = "0x43A61E0", VA = "0x43A61E0")]
		[DebuggerHidden]
		public _003CPutCharacterInfoJson_003Ed__169(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004852")]
		[Address(RVA = "0x43A9D20", Offset = "0x43A9D20", VA = "0x43A9D20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004853")]
		[Address(RVA = "0x43A9D30", Offset = "0x43A9D30", VA = "0x43A9D30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004855")]
		[Address(RVA = "0x43A9EA0", Offset = "0x43A9EA0", VA = "0x43A9EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000773")]
	[CompilerGenerated]
	private sealed class _003CSendApiGet_003Ed__99 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x40023B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x40023B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x40023B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x40023B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool parseJson;

		[Token(Token = "0x40023B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass99_0 _003C_003E8__1;

		[Token(Token = "0x17000DF1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600485A")]
			[Address(RVA = "0x43AA080", Offset = "0x43AA080", VA = "0x43AA080", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DF2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600485C")]
			[Address(RVA = "0x43AA0D0", Offset = "0x43AA0D0", VA = "0x43AA0D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004857")]
		[Address(RVA = "0x43A1710", Offset = "0x43A1710", VA = "0x43A1710")]
		[DebuggerHidden]
		public _003CSendApiGet_003Ed__99(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004858")]
		[Address(RVA = "0x43A9EF0", Offset = "0x43A9EF0", VA = "0x43A9EF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004859")]
		[Address(RVA = "0x43A9F00", Offset = "0x43A9F00", VA = "0x43A9F00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600485B")]
		[Address(RVA = "0x43AA090", Offset = "0x43AA090", VA = "0x43AA090", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000774")]
	[CompilerGenerated]
	private struct _003CSendApiGetAsync_003Ed__100 : IAsyncStateMachine
	{
		[Token(Token = "0x40023B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40023B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40023B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x40023B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bearer;

		[Token(Token = "0x40023B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool parseJson;

		[Token(Token = "0x40023BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x40023BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x600485D")]
		[Address(RVA = "0x43AA0E0", Offset = "0x43AA0E0", VA = "0x43AA0E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600485E")]
		[Address(RVA = "0x43AA850", Offset = "0x43AA850", VA = "0x43AA850", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000775")]
	[CompilerGenerated]
	private sealed class _003CSendApiJson_003Ed__101 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x40023BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x40023C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string method;

		[Token(Token = "0x40023C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string path;

		[Token(Token = "0x40023C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x40023C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public string bearer;

		[Token(Token = "0x40023C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool parseJson;

		[Token(Token = "0x40023C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
		public bool reportNetworkError;

		[Token(Token = "0x40023C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public int? timeoutSeconds;

		[Token(Token = "0x40023C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass101_0 _003C_003E8__1;

		[Token(Token = "0x17000DF3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004862")]
			[Address(RVA = "0x43AAA30", Offset = "0x43AAA30", VA = "0x43AAA30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DF4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004864")]
			[Address(RVA = "0x43AAA80", Offset = "0x43AAA80", VA = "0x43AAA80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600485F")]
		[Address(RVA = "0x43A1910", Offset = "0x43A1910", VA = "0x43A1910")]
		[DebuggerHidden]
		public _003CSendApiJson_003Ed__101(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004860")]
		[Address(RVA = "0x43AA860", Offset = "0x43AA860", VA = "0x43AA860", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004861")]
		[Address(RVA = "0x43AA870", Offset = "0x43AA870", VA = "0x43AA870", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004863")]
		[Address(RVA = "0x43AAA40", Offset = "0x43AAA40", VA = "0x43AAA40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000776")]
	[CompilerGenerated]
	private struct _003CSendApiJsonAsync_003Ed__102 : IAsyncStateMachine
	{
		[Token(Token = "0x40023C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40023C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40023CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string method;

		[Token(Token = "0x40023CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string path;

		[Token(Token = "0x40023CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string json;

		[Token(Token = "0x40023CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x40023CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool parseJson;

		[Token(Token = "0x40023CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
		public bool reportNetworkError;

		[Token(Token = "0x40023D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int? timeoutSeconds;

		[Token(Token = "0x40023D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x40023D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6004865")]
		[Address(RVA = "0x43AAA90", Offset = "0x43AAA90", VA = "0x43AAA90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6004866")]
		[Address(RVA = "0x43AB420", Offset = "0x43AB420", VA = "0x43AB420", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000777")]
	[CompilerGenerated]
	private sealed class _003CSendMeJson_003Ed__170 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string method;

		[Token(Token = "0x40023D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x40023D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x40023D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x40023D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x40023DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool reportNetworkError;

		[Token(Token = "0x40023DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private _003C_003Ec__DisplayClass170_0 _003C_003E8__1;

		[Token(Token = "0x17000DF5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600486A")]
			[Address(RVA = "0x43AB780", Offset = "0x43AB780", VA = "0x43AB780", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DF6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600486C")]
			[Address(RVA = "0x43AB7D0", Offset = "0x43AB7D0", VA = "0x43AB7D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004867")]
		[Address(RVA = "0x43A62E0", Offset = "0x43A62E0", VA = "0x43A62E0")]
		[DebuggerHidden]
		public _003CSendMeJson_003Ed__170(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004868")]
		[Address(RVA = "0x43AB430", Offset = "0x43AB430", VA = "0x43AB430", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004869")]
		[Address(RVA = "0x43AB440", Offset = "0x43AB440", VA = "0x43AB440", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600486B")]
		[Address(RVA = "0x43AB790", Offset = "0x43AB790", VA = "0x43AB790", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000778")]
	[CompilerGenerated]
	private sealed class _003CSendMeReadJson_003Ed__171 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x40023DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x40023E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass171_0 _003C_003E8__1;

		[Token(Token = "0x40023E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x17000DF7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004870")]
			[Address(RVA = "0x43ABA40", Offset = "0x43ABA40", VA = "0x43ABA40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DF8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004872")]
			[Address(RVA = "0x43ABA90", Offset = "0x43ABA90", VA = "0x43ABA90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600486D")]
		[Address(RVA = "0x43A63A0", Offset = "0x43A63A0", VA = "0x43A63A0")]
		[DebuggerHidden]
		public _003CSendMeReadJson_003Ed__171(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600486E")]
		[Address(RVA = "0x43AB7E0", Offset = "0x43AB7E0", VA = "0x43AB7E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600486F")]
		[Address(RVA = "0x43AB7F0", Offset = "0x43AB7F0", VA = "0x43AB7F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004871")]
		[Address(RVA = "0x43ABA50", Offset = "0x43ABA50", VA = "0x43ABA50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002326")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static AccountManager _instance;

	[Token(Token = "0x4002327")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool _sceneInvalidationSubscribed;

	[Token(Token = "0x4002328")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static string BaseUrl;

	[Token(Token = "0x4002329")]
	private const string RefreshTokenFileName = "AccountRefresh.dat";

	[Token(Token = "0x400232A")]
	private const string EmailPasswordAuthMethod = "email_password";

	[Token(Token = "0x400232B")]
	private const string DiscordAuthMethod = "discord";

	[Token(Token = "0x400232C")]
	private const string GoogleAuthMethod = "google";

	[Token(Token = "0x4002338")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static string _refreshToken;

	[Token(Token = "0x4002339")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static readonly HashSet<string> _enabledAuthMethods;

	[Token(Token = "0x400233D")]
	private const int OAuthRequestTimeoutSeconds = 10;

	[Token(Token = "0x400233E")]
	private const int UnityOAuthDefaultPollSeconds = 2;

	[Token(Token = "0x400233F")]
	private const int UnityOAuthFallbackTimeoutMinutes = 10;

	[Token(Token = "0x4002340")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static Action<bool, string> _oauthPendingCallback;

	[Token(Token = "0x4002341")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Coroutine _oauthFlowCoroutine;

	[Token(Token = "0x4002342")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _oauthAttemptId;

	[Token(Token = "0x4002347")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static bool _ownProfileCacheHasValue;

	[Token(Token = "0x4002348")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB1")]
	private static bool _ownProfileCacheValid;

	[Token(Token = "0x4002349")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB2")]
	private static bool _ownProfileFetchInFlight;

	[Token(Token = "0x400234A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static readonly List<Action<bool, string>> _ownProfileFetchSubscribers;

	[Token(Token = "0x400234B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static bool _ownCharacterInfoCacheHasValue;

	[Token(Token = "0x400234C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private static bool _ownCharacterInfoCacheValid;

	[Token(Token = "0x400234D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC2")]
	private static bool _ownCharacterInfoFetchInFlight;

	[Token(Token = "0x400234E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static JSONNode _ownCharacterInfoCache;

	[Token(Token = "0x400234F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private static readonly List<Action<bool, string, JSONNode>> _ownCharacterInfoFetchSubscribers;

	[Token(Token = "0x17000DC2")]
	public static string AuthToken
	{
		[Token(Token = "0x6004784")]
		[Address(RVA = "0x439CC70", Offset = "0x439CC70", VA = "0x439CC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004785")]
		[Address(RVA = "0x439CCE0", Offset = "0x439CCE0", VA = "0x439CCE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC3")]
	public static long AuthTokenExpiresUnix
	{
		[Token(Token = "0x6004786")]
		[Address(RVA = "0x439CD40", Offset = "0x439CD40", VA = "0x439CD40")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6004787")]
		[Address(RVA = "0x439CDB0", Offset = "0x439CDB0", VA = "0x439CDB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC4")]
	public static string PhotonToken
	{
		[Token(Token = "0x6004788")]
		[Address(RVA = "0x439CE10", Offset = "0x439CE10", VA = "0x439CE10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004789")]
		[Address(RVA = "0x439CE80", Offset = "0x439CE80", VA = "0x439CE80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC5")]
	public static long PhotonTokenExpiresUnix
	{
		[Token(Token = "0x600478A")]
		[Address(RVA = "0x439CEE0", Offset = "0x439CEE0", VA = "0x439CEE0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600478B")]
		[Address(RVA = "0x439CF50", Offset = "0x439CF50", VA = "0x439CF50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC6")]
	public static AccountLoginResponse LoginResponse
	{
		[Token(Token = "0x600478C")]
		[Address(RVA = "0x439CFB0", Offset = "0x439CFB0", VA = "0x439CFB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600478D")]
		[Address(RVA = "0x439D020", Offset = "0x439D020", VA = "0x439D020")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC7")]
	public static string UserId
	{
		[Token(Token = "0x600478E")]
		[Address(RVA = "0x439D080", Offset = "0x439D080", VA = "0x439D080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DC8")]
	public static string Username
	{
		[Token(Token = "0x600478F")]
		[Address(RVA = "0x439D2A0", Offset = "0x439D2A0", VA = "0x439D2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DC9")]
	public static string Email
	{
		[Token(Token = "0x6004790")]
		[Address(RVA = "0x439D4C0", Offset = "0x439D4C0", VA = "0x439D4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCA")]
	public static bool EmailVerified
	{
		[Token(Token = "0x6004791")]
		[Address(RVA = "0x439D6E0", Offset = "0x439D6E0", VA = "0x439D6E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DCB")]
	public static string[] Roles
	{
		[Token(Token = "0x6004792")]
		[Address(RVA = "0x439D900", Offset = "0x439D900", VA = "0x439D900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCC")]
	public static string PhotonUserId
	{
		[Token(Token = "0x6004793")]
		[Address(RVA = "0x439DB20", Offset = "0x439DB20", VA = "0x439DB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCD")]
	public static JSONNode Patreon
	{
		[Token(Token = "0x6004794")]
		[Address(RVA = "0x439DD40", Offset = "0x439DD40", VA = "0x439DD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCE")]
	public static long RefreshTokenExpiresUnix
	{
		[Token(Token = "0x6004796")]
		[Address(RVA = "0x439E3B0", Offset = "0x439E3B0", VA = "0x439E3B0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6004797")]
		[Address(RVA = "0x439E420", Offset = "0x439E420", VA = "0x439E420")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DCF")]
	public static bool IsLoggedIn
	{
		[Token(Token = "0x6004798")]
		[Address(RVA = "0x439E480", Offset = "0x439E480", VA = "0x439E480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DD0")]
	public static bool HasRefreshToken
	{
		[Token(Token = "0x6004799")]
		[Address(RVA = "0x439E530", Offset = "0x439E530", VA = "0x439E530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DD1")]
	public static bool IsRefreshInProgress
	{
		[Token(Token = "0x600479A")]
		[Address(RVA = "0x439E580", Offset = "0x439E580", VA = "0x439E580")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600479B")]
		[Address(RVA = "0x439E5F0", Offset = "0x439E5F0", VA = "0x439E5F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD2")]
	public static bool KeepSignedIn
	{
		[Token(Token = "0x600479C")]
		[Address(RVA = "0x439E640", Offset = "0x439E640", VA = "0x439E640")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600479D")]
		[Address(RVA = "0x439E6B0", Offset = "0x439E6B0", VA = "0x439E6B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD3")]
	public static bool HasAuthMethodsSnapshot
	{
		[Token(Token = "0x600479E")]
		[Address(RVA = "0x439E700", Offset = "0x439E700", VA = "0x439E700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600479F")]
		[Address(RVA = "0x439E770", Offset = "0x439E770", VA = "0x439E770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD4")]
	public static bool DevMode
	{
		[Token(Token = "0x60047A0")]
		[Address(RVA = "0x439E7C0", Offset = "0x439E7C0", VA = "0x439E7C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DD5")]
	public static string PendingVerifyToken
	{
		[Token(Token = "0x60047A1")]
		[Address(RVA = "0x439E830", Offset = "0x439E830", VA = "0x439E830")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047A2")]
		[Address(RVA = "0x439E8A0", Offset = "0x439E8A0", VA = "0x439E8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD6")]
	public static string PendingEmail
	{
		[Token(Token = "0x60047A3")]
		[Address(RVA = "0x439E900", Offset = "0x439E900", VA = "0x439E900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047A4")]
		[Address(RVA = "0x439E970", Offset = "0x439E970", VA = "0x439E970")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD7")]
	public static string ProfileDescription
	{
		[Token(Token = "0x60047D7")]
		[Address(RVA = "0x43A48E0", Offset = "0x43A48E0", VA = "0x43A48E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047D8")]
		[Address(RVA = "0x43A4950", Offset = "0x43A4950", VA = "0x43A4950")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD8")]
	public static string ProfileAvatarKey
	{
		[Token(Token = "0x60047D9")]
		[Address(RVA = "0x43A49C0", Offset = "0x43A49C0", VA = "0x43A49C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047DA")]
		[Address(RVA = "0x43A4A30", Offset = "0x43A4A30", VA = "0x43A4A30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DD9")]
	public static string ProfileBannerKey
	{
		[Token(Token = "0x60047DB")]
		[Address(RVA = "0x43A4AA0", Offset = "0x43A4AA0", VA = "0x43A4AA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047DC")]
		[Address(RVA = "0x43A4B10", Offset = "0x43A4B10", VA = "0x43A4B10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DDA")]
	public static Dictionary<string, string> ProfileSocials
	{
		[Token(Token = "0x60047DD")]
		[Address(RVA = "0x43A4B80", Offset = "0x43A4B80", VA = "0x43A4B80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DDB")]
	public static bool HasCachedOwnProfile
	{
		[Token(Token = "0x60047DE")]
		[Address(RVA = "0x43A4BF0", Offset = "0x43A4BF0", VA = "0x43A4BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DDC")]
	public static bool HasCachedCharacterInfo
	{
		[Token(Token = "0x60047DF")]
		[Address(RVA = "0x43A4C60", Offset = "0x43A4C60", VA = "0x43A4C60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action OnLoggedIn
	{
		[Token(Token = "0x60047A5")]
		[Address(RVA = "0x439E9D0", Offset = "0x439E9D0", VA = "0x439E9D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60047A6")]
		[Address(RVA = "0x439EAB0", Offset = "0x439EAB0", VA = "0x439EAB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action OnLoggedOut
	{
		[Token(Token = "0x60047A7")]
		[Address(RVA = "0x439EB90", Offset = "0x439EB90", VA = "0x439EB90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60047A8")]
		[Address(RVA = "0x439EC70", Offset = "0x439EC70", VA = "0x439EC70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public static event Action OnAuthMethodsChanged
	{
		[Token(Token = "0x60047A9")]
		[Address(RVA = "0x439ED50", Offset = "0x439ED50", VA = "0x439ED50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60047AA")]
		[Address(RVA = "0x439EE30", Offset = "0x439EE30", VA = "0x439EE30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004795")]
	[Address(RVA = "0x439E010", Offset = "0x439E010", VA = "0x439E010")]
	public static bool IsOAuthProviderLinked(string provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60047AB")]
	[Address(RVA = "0x439EF10", Offset = "0x439EF10", VA = "0x439EF10")]
	public static void Init()
	{
	}

	[Token(Token = "0x60047AC")]
	[Address(RVA = "0x439F940", Offset = "0x439F940", VA = "0x439F940")]
	public static void SetKeepSignedIn(bool value)
	{
	}

	[Token(Token = "0x60047AD")]
	[Address(RVA = "0x439FDF0", Offset = "0x439FDF0", VA = "0x439FDF0")]
	public static bool IsAuthMethodEnabled(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60047AE")]
	[Address(RVA = "0x439E060", Offset = "0x439E060", VA = "0x439E060")]
	public static AccountLoginResponse.OAuthLinkData GetOAuthLink(string provider)
	{
		return null;
	}

	[Token(Token = "0x60047AF")]
	[Address(RVA = "0x439F7E0", Offset = "0x439F7E0", VA = "0x439F7E0")]
	public static void RefreshAuthMethods(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x60047B0")]
	[Address(RVA = "0x439FF00", Offset = "0x439FF00", VA = "0x439FF00")]
	public static void Register(string displayName, string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047B1")]
	[Address(RVA = "0x43A0450", Offset = "0x43A0450", VA = "0x43A0450")]
	public static void Login(string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047B2")]
	[Address(RVA = "0x439F4A0", Offset = "0x439F4A0", VA = "0x439F4A0")]
	public static void Refresh(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047B3")]
	[Address(RVA = "0x43A05F0", Offset = "0x43A05F0", VA = "0x43A05F0")]
	public static void Logout([Optional] Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047B4")]
	[Address(RVA = "0x43A0D40", Offset = "0x43A0D40", VA = "0x43A0D40")]
	public static void GoOffline()
	{
	}

	[Token(Token = "0x60047B5")]
	[Address(RVA = "0x43A0E20", Offset = "0x43A0E20", VA = "0x43A0E20")]
	public static void GoOnline(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047B6")]
	[Address(RVA = "0x43A0F90", Offset = "0x43A0F90", VA = "0x43A0F90")]
	public static string GetWebLoginUrlWithSession()
	{
		return null;
	}

	[Token(Token = "0x60047B7")]
	[Address(RVA = "0x43A1030", Offset = "0x43A1030", VA = "0x43A1030")]
	public static void VerifyEmail(string token, Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x60047B8")]
	[Address(RVA = "0x43A1220", Offset = "0x43A1220", VA = "0x43A1220")]
	public static void ForgotPassword(string email, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047B9")]
	[Address(RVA = "0x43A1370", Offset = "0x43A1370", VA = "0x43A1370")]
	public static void PatreonUnlink(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x60047BA")]
	[Address(RVA = "0x439FE80", Offset = "0x439FE80", VA = "0x439FE80")]
	[IteratorStateMachine(typeof(_003CGetAuthMethods_003Ed__98))]
	private IEnumerator GetAuthMethods(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60047BB")]
	[Address(RVA = "0x43A1650", Offset = "0x43A1650", VA = "0x43A1650")]
	[IteratorStateMachine(typeof(_003CSendApiGet_003Ed__99))]
	private IEnumerator SendApiGet(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60047BC")]
	[Address(RVA = "0x43A1730", Offset = "0x43A1730", VA = "0x43A1730")]
	[AsyncStateMachine(typeof(_003CSendApiGetAsync_003Ed__100))]
	private UniTask SendApiGetAsync(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60047BD")]
	[Address(RVA = "0x43A1810", Offset = "0x43A1810", VA = "0x43A1810")]
	[IteratorStateMachine(typeof(_003CSendApiJson_003Ed__101))]
	private IEnumerator SendApiJson(string method, string path, string json, string bearer, bool parseJson, Action<AottgApiResult> onComplete, [Optional][DefaultParameterValue(true)] bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return null;
	}

	[Token(Token = "0x60047BE")]
	[Address(RVA = "0x43A1930", Offset = "0x43A1930", VA = "0x43A1930")]
	[AsyncStateMachine(typeof(_003CSendApiJsonAsync_003Ed__102))]
	private UniTask SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, int? timeoutSeconds, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60047BF")]
	[Address(RVA = "0x43A1A60", Offset = "0x43A1A60", VA = "0x43A1A60")]
	private static UniTask<AottgApiResult> SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x60047C0")]
	[Address(RVA = "0x43A1B90", Offset = "0x43A1B90", VA = "0x43A1B90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60047C1")]
	[Address(RVA = "0x43A1580", Offset = "0x43A1580", VA = "0x43A1580")]
	[IteratorStateMachine(typeof(_003CDeleteJson_003Ed__105))]
	private IEnumerator DeleteJson(string path, string bearer, Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60047C2")]
	[Address(RVA = "0x43A0340", Offset = "0x43A0340", VA = "0x43A0340")]
	[IteratorStateMachine(typeof(_003CPostJson_003Ed__106))]
	private IEnumerator PostJson(string path, string json, string bearer, Action<bool, string> onComplete, bool applyAuthResponse, [Optional] string captureField, [Optional] Action<string> captureTarget, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x60047C3")]
	[Address(RVA = "0x43A1E10", Offset = "0x43A1E10", VA = "0x43A1E10")]
	private static bool ApplyAuthMethodsResponse(string json)
	{
		return default(bool);
	}

	[Token(Token = "0x60047C4")]
	[Address(RVA = "0x43A26A0", Offset = "0x43A26A0", VA = "0x43A26A0")]
	private static void ApplyAuthResponse(string json)
	{
	}

	[Token(Token = "0x60047C5")]
	[Address(RVA = "0x43A3370", Offset = "0x43A3370", VA = "0x43A3370")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60047C6")]
	[Address(RVA = "0x43A3470", Offset = "0x43A3470", VA = "0x43A3470")]
	private static long ParseIsoToUnix(string iso)
	{
		return default(long);
	}

	[Token(Token = "0x60047C7")]
	[Address(RVA = "0x43A07B0", Offset = "0x43A07B0", VA = "0x43A07B0")]
	private static void ClearSession(bool clearRefreshToken = true)
	{
	}

	[Token(Token = "0x60047C8")]
	[Address(RVA = "0x439F1A0", Offset = "0x439F1A0", VA = "0x439F1A0")]
	private static string GetRefreshTokenPath()
	{
		return null;
	}

	[Token(Token = "0x60047C9")]
	[Address(RVA = "0x439FBA0", Offset = "0x439FBA0", VA = "0x439FBA0")]
	private static void SaveRefreshToken()
	{
	}

	[Token(Token = "0x60047CA")]
	[Address(RVA = "0x439F210", Offset = "0x439F210", VA = "0x439F210")]
	private static void LoadRefreshToken()
	{
	}

	[Token(Token = "0x60047CB")]
	[Address(RVA = "0x439FA60", Offset = "0x439FA60", VA = "0x439FA60")]
	private static void DeleteRefreshToken()
	{
	}

	[Token(Token = "0x60047CC")]
	[Address(RVA = "0x43A3890", Offset = "0x43A3890", VA = "0x43A3890")]
	public static void LoginWithOAuth(string provider, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047CD")]
	[Address(RVA = "0x43A3B30", Offset = "0x43A3B30", VA = "0x43A3B30")]
	public static void CancelOAuthLogin()
	{
	}

	[Token(Token = "0x60047CE")]
	[Address(RVA = "0x43A3A90", Offset = "0x43A3A90", VA = "0x43A3A90")]
	[IteratorStateMachine(typeof(_003COAuthFlow_003Ed__124))]
	private IEnumerator OAuthFlow(string provider, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60047CF")]
	[Address(RVA = "0x43A3C70", Offset = "0x43A3C70", VA = "0x43A3C70")]
	[IteratorStateMachine(typeof(_003CPollUnityOAuth_003Ed__125))]
	private IEnumerator PollUnityOAuth(UnityOAuthStart start, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60047D0")]
	[Address(RVA = "0x43A3D40", Offset = "0x43A3D40", VA = "0x43A3D40")]
	[IteratorStateMachine(typeof(_003CExchangeOAuthCode_003Ed__126))]
	private IEnumerator ExchangeOAuthCode(string code, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60047D1")]
	[Address(RVA = "0x43A1D30", Offset = "0x43A1D30", VA = "0x43A1D30")]
	private void CancelOAuthFlow()
	{
	}

	[Token(Token = "0x60047D2")]
	[Address(RVA = "0x43A3DF0", Offset = "0x43A3DF0", VA = "0x43A3DF0")]
	private bool IsCurrentOAuthAttempt(int attemptId)
	{
		return default(bool);
	}

	[Token(Token = "0x60047D3")]
	[Address(RVA = "0x43A3E60", Offset = "0x43A3E60", VA = "0x43A3E60")]
	private static void CompleteOAuth(bool success, string error)
	{
	}

	[Token(Token = "0x60047D4")]
	[Address(RVA = "0x43A3F90", Offset = "0x43A3F90", VA = "0x43A3F90")]
	private static bool TryParseUnityOAuthStart(string json, out UnityOAuthStart start)
	{
		return default(bool);
	}

	[Token(Token = "0x60047D5")]
	[Address(RVA = "0x43A4590", Offset = "0x43A4590", VA = "0x43A4590")]
	private static bool TryParseUnityOAuthStatus(string json, out string status, out string code, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60047D6")]
	[Address(RVA = "0x43A4890", Offset = "0x43A4890", VA = "0x43A4890")]
	private static string NormalizeOAuthProvider(string provider)
	{
		return null;
	}

	[Token(Token = "0x60047E0")]
	[Address(RVA = "0x43A4CD0", Offset = "0x43A4CD0", VA = "0x43A4CD0")]
	public static void GetProfile(Action<bool, string> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60047E1")]
	[Address(RVA = "0x43A5130", Offset = "0x43A5130", VA = "0x43A5130")]
	public static void UpdateProfile(string displayName, string description, string avatarKey, string bannerKey, Dictionary<string, string> socials, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047E2")]
	[Address(RVA = "0x43A5870", Offset = "0x43A5870", VA = "0x43A5870")]
	public static void GetCharacterInfo(Action<bool, string, JSONNode> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x60047E3")]
	[Address(RVA = "0x43A5E10", Offset = "0x43A5E10", VA = "0x43A5E10")]
	public static void UpdateCharacterInfo(JSONNode characterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60047E4")]
	[Address(RVA = "0x43A50A0", Offset = "0x43A50A0", VA = "0x43A50A0")]
	[IteratorStateMachine(typeof(_003CGetProfileJson_003Ed__166))]
	private IEnumerator GetProfileJson(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60047E5")]
	[Address(RVA = "0x43A57C0", Offset = "0x43A57C0", VA = "0x43A57C0")]
	[IteratorStateMachine(typeof(_003CPatchProfileJson_003Ed__167))]
	private IEnumerator PatchProfileJson(string json, Action<bool, string> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60047E6")]
	[Address(RVA = "0x43A5D80", Offset = "0x43A5D80", VA = "0x43A5D80")]
	[IteratorStateMachine(typeof(_003CGetCharacterInfoJson_003Ed__168))]
	private IEnumerator GetCharacterInfoJson(Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60047E7")]
	[Address(RVA = "0x43A60C0", Offset = "0x43A60C0", VA = "0x43A60C0")]
	[IteratorStateMachine(typeof(_003CPutCharacterInfoJson_003Ed__169))]
	private IEnumerator PutCharacterInfoJson(string json, JSONNode fallbackCharacterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60047E8")]
	[Address(RVA = "0x43A6200", Offset = "0x43A6200", VA = "0x43A6200")]
	[IteratorStateMachine(typeof(_003CSendMeJson_003Ed__170))]
	private IEnumerator SendMeJson(string method, string path, string json, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x60047E9")]
	[Address(RVA = "0x43A6300", Offset = "0x43A6300", VA = "0x43A6300")]
	[IteratorStateMachine(typeof(_003CSendMeReadJson_003Ed__171))]
	private IEnumerator SendMeReadJson(string path, Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60047EA")]
	[Address(RVA = "0x43A2CA0", Offset = "0x43A2CA0", VA = "0x43A2CA0")]
	private static void ApplyProfileResponse(JSONNode profile)
	{
	}

	[Token(Token = "0x60047EB")]
	[Address(RVA = "0x43A6570", Offset = "0x43A6570", VA = "0x43A6570")]
	private static void CompleteProfileFetch(bool success, string error)
	{
	}

	[Token(Token = "0x60047EC")]
	[Address(RVA = "0x43A6760", Offset = "0x43A6760", VA = "0x43A6760")]
	private static void CompleteCharacterInfoFetch(bool success, string error, JSONNode characterInfo)
	{
	}

	[Token(Token = "0x60047ED")]
	[Address(RVA = "0x43A63C0", Offset = "0x43A63C0", VA = "0x43A63C0")]
	private static void MarkOwnProfileCacheFresh()
	{
	}

	[Token(Token = "0x60047EE")]
	[Address(RVA = "0x43A69F0", Offset = "0x43A69F0", VA = "0x43A69F0")]
	private static void MarkCharacterInfoCacheFresh(JSONNode characterInfo)
	{
	}

	[Token(Token = "0x60047EF")]
	[Address(RVA = "0x43A5C70", Offset = "0x43A5C70", VA = "0x43A5C70")]
	private static JSONNode CloneJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60047F0")]
	[Address(RVA = "0x43A3420", Offset = "0x43A3420", VA = "0x43A3420")]
	private static void InvalidateOwnAccountCache()
	{
	}

	[Token(Token = "0x60047F1")]
	[Address(RVA = "0x43A6AC0", Offset = "0x43A6AC0", VA = "0x43A6AC0")]
	private static void ClearOwnAccountCache()
	{
	}

	[Token(Token = "0x60047F2")]
	[Address(RVA = "0x43A3640", Offset = "0x43A3640", VA = "0x43A3640")]
	private static void ClearProfileResponse()
	{
	}

	[Token(Token = "0x60047F3")]
	[Address(RVA = "0x43A6BD0", Offset = "0x43A6BD0", VA = "0x43A6BD0")]
	private static void ClearOwnPublicProfileCache()
	{
	}

	[Token(Token = "0x60047F4")]
	[Address(RVA = "0x43A6C40", Offset = "0x43A6C40", VA = "0x43A6C40")]
	public AccountManager()
	{
	}
}
