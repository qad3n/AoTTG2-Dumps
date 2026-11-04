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

[Token(Token = "0x20008DE")]
internal class AccountManager : MonoBehaviour
{
	[Token(Token = "0x20008DF")]
	private struct UnityOAuthStart
	{
		[Token(Token = "0x4002C15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string SessionId;

		[Token(Token = "0x4002C16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string PollToken;

		[Token(Token = "0x4002C17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string AuthorizationUrl;

		[Token(Token = "0x4002C18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DateTimeOffset ExpiresAt;

		[Token(Token = "0x4002C19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int PollIntervalSeconds;
	}

	[Token(Token = "0x20008E1")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass10_0
	{
		[Token(Token = "0x4002C1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6005461")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass10_0()
		{
		}

		[Token(Token = "0x6005462")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CExchangeOAuthCode_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008E5")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass164_0
	{
		[Token(Token = "0x4002C20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6005469")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass164_0()
		{
		}

		[Token(Token = "0x600546A")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CGetAuthMethods_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008E6")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass165_0
	{
		[Token(Token = "0x4002C21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002C22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x600546B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass165_0()
		{
		}

		[Token(Token = "0x600546C")]
		[Address(RVA = "0x235E400", Offset = "0x235CA00", VA = "0x18235E400")]
		internal void _003CSendApiGet_003Eb__0(AottgApiResult result)
		{
		}
	}

	[Token(Token = "0x20008E7")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass167_0
	{
		[Token(Token = "0x4002C23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002C24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x600546D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass167_0()
		{
		}

		[Token(Token = "0x600546E")]
		[Address(RVA = "0x235E400", Offset = "0x235CA00", VA = "0x18235E400")]
		internal void _003CSendApiJson_003Eb__0(AottgApiResult result)
		{
		}
	}

	[Token(Token = "0x20008E8")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass171_0
	{
		[Token(Token = "0x4002C25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600546F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass171_0()
		{
		}

		[Token(Token = "0x6005470")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CDeleteJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008E9")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass172_0
	{
		[Token(Token = "0x4002C26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6005471")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass172_0()
		{
		}

		[Token(Token = "0x6005472")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CPostJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008EE")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass54_0
	{
		[Token(Token = "0x4002C2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600547B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass54_0()
		{
		}

		[Token(Token = "0x600547C")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CSendMeJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008EF")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass55_0
	{
		[Token(Token = "0x4002C2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600547D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass55_0()
		{
		}

		[Token(Token = "0x600547E")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CSendMeReadJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008F0")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass8_0
	{
		[Token(Token = "0x4002C2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600547F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass8_0()
		{
		}

		[Token(Token = "0x6005480")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003COAuthFlow_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008F1")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass9_0
	{
		[Token(Token = "0x4002C2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6005481")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public _003C_003Ec__DisplayClass9_0()
		{
		}

		[Token(Token = "0x6005482")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal void _003CPollUnityOAuth_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x20008F2")]
	[CompilerGenerated]
	private sealed class _003CDeleteJson_003Ed__171 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002C34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002C35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass171_0 _003C_003E8__1;

		[Token(Token = "0x4002C36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000F3E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005486")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F3F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005488")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005483")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDeleteJson_003Ed__171(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005484")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005485")]
		[Address(RVA = "0x2358720", Offset = "0x2356D20", VA = "0x182358720", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005487")]
		[Address(RVA = "0x2358930", Offset = "0x2356F30", VA = "0x182358930", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F3")]
	[CompilerGenerated]
	private sealed class _003CExchangeOAuthCode_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string code;

		[Token(Token = "0x4002C3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x4002C3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass10_0 _003C_003E8__1;

		[Token(Token = "0x17000F40")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600548C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F41")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600548E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005489")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CExchangeOAuthCode_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600548A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600548B")]
		[Address(RVA = "0x2358FB0", Offset = "0x23575B0", VA = "0x182358FB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600548D")]
		[Address(RVA = "0x23593A0", Offset = "0x23579A0", VA = "0x1823593A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F4")]
	[CompilerGenerated]
	private sealed class _003CGetAuthMethods_003Ed__164 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass164_0 _003C_003E8__1;

		[Token(Token = "0x4002C41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000F42")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005492")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F43")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005494")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600548F")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetAuthMethods_003Ed__164(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005490")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005491")]
		[Address(RVA = "0x2359810", Offset = "0x2357E10", VA = "0x182359810", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005493")]
		[Address(RVA = "0x2359B40", Offset = "0x2358140", VA = "0x182359B40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F5")]
	[CompilerGenerated]
	private sealed class _003CGetCharacterInfoJson_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002C45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000F44")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005498")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F45")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600549A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005495")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetCharacterInfoJson_003Ed__52(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005496")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005497")]
		[Address(RVA = "0x2359B80", Offset = "0x2358180", VA = "0x182359B80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005499")]
		[Address(RVA = "0x2359CD0", Offset = "0x23582D0", VA = "0x182359CD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F6")]
	[CompilerGenerated]
	private sealed class _003CGetProfileJson_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002C49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000F46")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600549E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F47")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054A0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600549B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetProfileJson_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600549C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600549D")]
		[Address(RVA = "0x2359D10", Offset = "0x2358310", VA = "0x182359D10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600549F")]
		[Address(RVA = "0x2359E60", Offset = "0x2358460", VA = "0x182359E60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F7")]
	[CompilerGenerated]
	private sealed class _003COAuthFlow_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string provider;

		[Token(Token = "0x4002C4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x4002C4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int attemptId;

		[Token(Token = "0x4002C50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass8_0 _003C_003E8__1;

		[Token(Token = "0x17000F48")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054A4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F49")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054A6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054A1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003COAuthFlow_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054A2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054A3")]
		[Address(RVA = "0x235B400", Offset = "0x2359A00", VA = "0x18235B400", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054A5")]
		[Address(RVA = "0x235B900", Offset = "0x2359F00", VA = "0x18235B900", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F8")]
	[CompilerGenerated]
	private sealed class _003CPatchProfileJson_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002C54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002C56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool reportNetworkError;

		[Token(Token = "0x17000F4A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054AA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F4B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054AC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054A7")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPatchProfileJson_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054A8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054A9")]
		[Address(RVA = "0x235B940", Offset = "0x2359F40", VA = "0x18235B940", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054AB")]
		[Address(RVA = "0x235BAA0", Offset = "0x235A0A0", VA = "0x18235BAA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008F9")]
	[CompilerGenerated]
	private sealed class _003CPollUnityOAuth_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public UnityOAuthStart start;

		[Token(Token = "0x4002C5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public bool reportNetworkError;

		[Token(Token = "0x4002C5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public int attemptId;

		[Token(Token = "0x4002C5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass9_0 _003C_003E8__1;

		[Token(Token = "0x4002C5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003CpollSeconds_003E5__2;

		[Token(Token = "0x17000F4C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054B0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F4D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054B2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054AD")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPollUnityOAuth_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054AE")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054AF")]
		[Address(RVA = "0x235BAE0", Offset = "0x235A0E0", VA = "0x18235BAE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054B1")]
		[Address(RVA = "0x235C190", Offset = "0x235A790", VA = "0x18235C190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008FA")]
	[CompilerGenerated]
	private sealed class _003CPostJson_003Ed__172 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002C63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002C64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x4002C65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x4002C66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass172_0 _003C_003E8__1;

		[Token(Token = "0x4002C67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public string captureField;

		[Token(Token = "0x4002C68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Action<string> captureTarget;

		[Token(Token = "0x4002C69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool applyAuthResponse;

		[Token(Token = "0x4002C6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000F4E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054B6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F4F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054B8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054B3")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPostJson_003Ed__172(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054B4")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054B5")]
		[Address(RVA = "0x235C1D0", Offset = "0x235A7D0", VA = "0x18235C1D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054B7")]
		[Address(RVA = "0x235C690", Offset = "0x235AC90", VA = "0x18235C690", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008FB")]
	[CompilerGenerated]
	private sealed class _003CPutCharacterInfoJson_003Ed__53 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C6C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JSONNode fallbackCharacterInfo;

		[Token(Token = "0x4002C6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002C6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string json;

		[Token(Token = "0x4002C71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x17000F50")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054BC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F51")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054BE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054B9")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPutCharacterInfoJson_003Ed__53(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054BA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054BB")]
		[Address(RVA = "0x235C6D0", Offset = "0x235ACD0", VA = "0x18235C6D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054BD")]
		[Address(RVA = "0x235C840", Offset = "0x235AE40", VA = "0x18235C840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008FC")]
	[CompilerGenerated]
	private sealed class _003CSendApiGet_003Ed__165 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002C75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x4002C77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x4002C78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool parseJson;

		[Token(Token = "0x4002C79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass165_0 _003C_003E8__1;

		[Token(Token = "0x17000F52")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054C2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F53")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054C4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054BF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSendApiGet_003Ed__165(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054C0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054C1")]
		[Address(RVA = "0x235CC90", Offset = "0x235B290", VA = "0x18235CC90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054C3")]
		[Address(RVA = "0x235CE50", Offset = "0x235B450", VA = "0x18235CE50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20008FD")]
	[CompilerGenerated]
	private struct _003CSendApiGetAsync_003Ed__166 : IAsyncStateMachine
	{
		[Token(Token = "0x4002C7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002C7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002C7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x4002C7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bearer;

		[Token(Token = "0x4002C7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool parseJson;

		[Token(Token = "0x4002C7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002C80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60054C5")]
		[Address(RVA = "0x235C880", Offset = "0x235AE80", VA = "0x18235C880", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60054C6")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x20008FE")]
	[CompilerGenerated]
	private sealed class _003CSendApiJson_003Ed__167 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002C84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string method;

		[Token(Token = "0x4002C86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string path;

		[Token(Token = "0x4002C87")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x4002C88")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public string bearer;

		[Token(Token = "0x4002C89")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool parseJson;

		[Token(Token = "0x4002C8A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
		public bool reportNetworkError;

		[Token(Token = "0x4002C8B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public int? timeoutSeconds;

		[Token(Token = "0x4002C8C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass167_0 _003C_003E8__1;

		[Token(Token = "0x17000F54")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054CA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F55")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054CC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054C7")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSendApiJson_003Ed__167(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054C8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054C9")]
		[Address(RVA = "0x235D3C0", Offset = "0x235B9C0", VA = "0x18235D3C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054CB")]
		[Address(RVA = "0x235D5F0", Offset = "0x235BBF0", VA = "0x18235D5F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20008FF")]
	[CompilerGenerated]
	private struct _003CSendApiJsonAsync_003Ed__168 : IAsyncStateMachine
	{
		[Token(Token = "0x4002C8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002C8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4002C8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string method;

		[Token(Token = "0x4002C90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string path;

		[Token(Token = "0x4002C91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string json;

		[Token(Token = "0x4002C92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002C93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool parseJson;

		[Token(Token = "0x4002C94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
		public bool reportNetworkError;

		[Token(Token = "0x4002C95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int? timeoutSeconds;

		[Token(Token = "0x4002C96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002C97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60054CD")]
		[Address(RVA = "0x235CE90", Offset = "0x235B490", VA = "0x18235CE90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60054CE")]
		[Address(RVA = "0x8E6930", Offset = "0x8E4F30", VA = "0x1808E6930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000900")]
	[CompilerGenerated]
	private sealed class _003CSendMeJson_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string method;

		[Token(Token = "0x4002C9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002C9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x4002C9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002C9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x4002C9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool reportNetworkError;

		[Token(Token = "0x4002CA0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private _003C_003Ec__DisplayClass54_0 _003C_003E8__1;

		[Token(Token = "0x17000F56")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054D2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F57")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054D4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054CF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSendMeJson_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054D0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054D1")]
		[Address(RVA = "0x235D630", Offset = "0x235BC30", VA = "0x18235D630", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054D3")]
		[Address(RVA = "0x235D940", Offset = "0x235BF40", VA = "0x18235D940", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000901")]
	[CompilerGenerated]
	private sealed class _003CSendMeReadJson_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002CA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002CA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002CA3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002CA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002CA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass55_0 _003C_003E8__1;

		[Token(Token = "0x4002CA6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x17000F58")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054D8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F59")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054DA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054D5")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSendMeReadJson_003Ed__55(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054D6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054D7")]
		[Address(RVA = "0x235D980", Offset = "0x235BF80", VA = "0x18235D980", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054D9")]
		[Address(RVA = "0x235DBD0", Offset = "0x235C1D0", VA = "0x18235DBD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002BEB")]
	private const int OAuthRequestTimeoutSeconds = 10;

	[Token(Token = "0x4002BEC")]
	private const int UnityOAuthDefaultPollSeconds = 2;

	[Token(Token = "0x4002BED")]
	private const int UnityOAuthFallbackTimeoutMinutes = 10;

	[Token(Token = "0x4002BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Action<bool, string> _oauthPendingCallback;

	[Token(Token = "0x4002BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Coroutine _oauthFlowCoroutine;

	[Token(Token = "0x4002BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _oauthAttemptId;

	[Token(Token = "0x4002BF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static bool _ownProfileCacheHasValue;

	[Token(Token = "0x4002BF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private static bool _ownProfileCacheValid;

	[Token(Token = "0x4002BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private static bool _ownProfileFetchInFlight;

	[Token(Token = "0x4002BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly List<Action<bool, string>> _ownProfileFetchSubscribers;

	[Token(Token = "0x4002BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static bool _ownCharacterInfoCacheHasValue;

	[Token(Token = "0x4002BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private static bool _ownCharacterInfoCacheValid;

	[Token(Token = "0x4002BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private static bool _ownCharacterInfoFetchInFlight;

	[Token(Token = "0x4002BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static JSONNode _ownCharacterInfoCache;

	[Token(Token = "0x4002BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly List<Action<bool, string, JSONNode>> _ownCharacterInfoFetchSubscribers;

	[Token(Token = "0x4002BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static AccountManager _instance;

	[Token(Token = "0x4002BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static bool _sceneInvalidationSubscribed;

	[Token(Token = "0x4002C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static string BaseUrl;

	[Token(Token = "0x4002C01")]
	private const string RefreshTokenFileName = "AccountRefresh.dat";

	[Token(Token = "0x4002C02")]
	private const string EmailPasswordAuthMethod = "email_password";

	[Token(Token = "0x4002C03")]
	private const string DiscordAuthMethod = "discord";

	[Token(Token = "0x4002C04")]
	private const string GoogleAuthMethod = "google";

	[Token(Token = "0x4002C10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static string _refreshToken;

	[Token(Token = "0x4002C11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static readonly HashSet<string> _enabledAuthMethods;

	[Token(Token = "0x4002C12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[CompilerGenerated]
	private static Action m_OnLoggedIn;

	[Token(Token = "0x4002C13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[CompilerGenerated]
	private static Action m_OnLoggedOut;

	[Token(Token = "0x4002C14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[CompilerGenerated]
	private static Action m_OnAuthMethodsChanged;

	[Token(Token = "0x17000F23")]
	public static string ProfileDescription
	{
		[Token(Token = "0x60053F7")]
		[Address(RVA = "0x2328CD0", Offset = "0x23272D0", VA = "0x182328CD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60053F8")]
		[Address(RVA = "0x2329A10", Offset = "0x2328010", VA = "0x182329A10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F24")]
	public static string ProfileAvatarKey
	{
		[Token(Token = "0x60053F9")]
		[Address(RVA = "0x2328C30", Offset = "0x2327230", VA = "0x182328C30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60053FA")]
		[Address(RVA = "0x2329930", Offset = "0x2327F30", VA = "0x182329930")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F25")]
	public static string ProfileBannerKey
	{
		[Token(Token = "0x60053FB")]
		[Address(RVA = "0x2328C80", Offset = "0x2327280", VA = "0x182328C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60053FC")]
		[Address(RVA = "0x23299A0", Offset = "0x2327FA0", VA = "0x1823299A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F26")]
	public static Dictionary<string, string> ProfileSocials
	{
		[Token(Token = "0x60053FD")]
		[Address(RVA = "0x2328D20", Offset = "0x2327320", VA = "0x182328D20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F27")]
	public static bool HasCachedOwnProfile
	{
		[Token(Token = "0x60053FE")]
		[Address(RVA = "0x2328550", Offset = "0x2326B50", VA = "0x182328550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F28")]
	public static bool HasCachedCharacterInfo
	{
		[Token(Token = "0x60053FF")]
		[Address(RVA = "0x2328500", Offset = "0x2326B00", VA = "0x182328500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F29")]
	public static string AuthToken
	{
		[Token(Token = "0x6005414")]
		[Address(RVA = "0x2328140", Offset = "0x2326740", VA = "0x182328140")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005415")]
		[Address(RVA = "0x2329550", Offset = "0x2327B50", VA = "0x182329550")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F2A")]
	public static long AuthTokenExpiresUnix
	{
		[Token(Token = "0x6005416")]
		[Address(RVA = "0x23280F0", Offset = "0x23266F0", VA = "0x1823280F0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6005417")]
		[Address(RVA = "0x23294F0", Offset = "0x2327AF0", VA = "0x1823294F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F2B")]
	public static string PhotonToken
	{
		[Token(Token = "0x6005418")]
		[Address(RVA = "0x2328A80", Offset = "0x2327080", VA = "0x182328A80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005419")]
		[Address(RVA = "0x23298C0", Offset = "0x2327EC0", VA = "0x1823298C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F2C")]
	public static long PhotonTokenExpiresUnix
	{
		[Token(Token = "0x600541A")]
		[Address(RVA = "0x2328A20", Offset = "0x2327020", VA = "0x182328A20")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600541B")]
		[Address(RVA = "0x2329860", Offset = "0x2327E60", VA = "0x182329860")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F2D")]
	public static AccountLoginResponse LoginResponse
	{
		[Token(Token = "0x600541C")]
		[Address(RVA = "0x2328750", Offset = "0x2326D50", VA = "0x182328750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600541D")]
		[Address(RVA = "0x23296E0", Offset = "0x2327CE0", VA = "0x1823296E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F2E")]
	public static string UserId
	{
		[Token(Token = "0x600541E")]
		[Address(RVA = "0x2328F30", Offset = "0x2327530", VA = "0x182328F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F2F")]
	public static string Username
	{
		[Token(Token = "0x600541F")]
		[Address(RVA = "0x2329090", Offset = "0x2327690", VA = "0x182329090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F30")]
	public static string Email
	{
		[Token(Token = "0x6005420")]
		[Address(RVA = "0x2328340", Offset = "0x2326940", VA = "0x182328340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F31")]
	public static bool EmailVerified
	{
		[Token(Token = "0x6005421")]
		[Address(RVA = "0x23281E0", Offset = "0x23267E0", VA = "0x1823281E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F32")]
	public static string[] Roles
	{
		[Token(Token = "0x6005422")]
		[Address(RVA = "0x2328DD0", Offset = "0x23273D0", VA = "0x182328DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F33")]
	public static string PhotonUserId
	{
		[Token(Token = "0x6005423")]
		[Address(RVA = "0x2328AD0", Offset = "0x23270D0", VA = "0x182328AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F34")]
	public static JSONNode Patreon
	{
		[Token(Token = "0x6005424")]
		[Address(RVA = "0x23287B0", Offset = "0x2326DB0", VA = "0x1823287B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F35")]
	public static long RefreshTokenExpiresUnix
	{
		[Token(Token = "0x6005426")]
		[Address(RVA = "0x2328D70", Offset = "0x2327370", VA = "0x182328D70")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6005427")]
		[Address(RVA = "0x2329A80", Offset = "0x2328080", VA = "0x182329A80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F36")]
	public static bool IsLoggedIn
	{
		[Token(Token = "0x6005428")]
		[Address(RVA = "0x2328600", Offset = "0x2326C00", VA = "0x182328600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F37")]
	public static bool HasRefreshToken
	{
		[Token(Token = "0x6005429")]
		[Address(RVA = "0x23285A0", Offset = "0x2326BA0", VA = "0x1823285A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F38")]
	public static bool IsRefreshInProgress
	{
		[Token(Token = "0x600542A")]
		[Address(RVA = "0x2328690", Offset = "0x2326C90", VA = "0x182328690")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600542B")]
		[Address(RVA = "0x2329620", Offset = "0x2327C20", VA = "0x182329620")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F39")]
	public static bool KeepSignedIn
	{
		[Token(Token = "0x600542C")]
		[Address(RVA = "0x23286F0", Offset = "0x2326CF0", VA = "0x1823286F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600542D")]
		[Address(RVA = "0x2329680", Offset = "0x2327C80", VA = "0x182329680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F3A")]
	public static bool HasAuthMethodsSnapshot
	{
		[Token(Token = "0x600542E")]
		[Address(RVA = "0x23284A0", Offset = "0x2326AA0", VA = "0x1823284A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600542F")]
		[Address(RVA = "0x23295C0", Offset = "0x2327BC0", VA = "0x1823295C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F3B")]
	public static bool DevMode
	{
		[Token(Token = "0x6005430")]
		[Address(RVA = "0x2328190", Offset = "0x2326790", VA = "0x182328190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F3C")]
	public static string PendingVerifyToken
	{
		[Token(Token = "0x6005431")]
		[Address(RVA = "0x23289C0", Offset = "0x2326FC0", VA = "0x1823289C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005432")]
		[Address(RVA = "0x23297E0", Offset = "0x2327DE0", VA = "0x1823297E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F3D")]
	public static string PendingEmail
	{
		[Token(Token = "0x6005433")]
		[Address(RVA = "0x2328960", Offset = "0x2326F60", VA = "0x182328960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005434")]
		[Address(RVA = "0x2329760", Offset = "0x2327D60", VA = "0x182329760")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action OnLoggedIn
	{
		[Token(Token = "0x6005435")]
		[Address(RVA = "0x2327EF0", Offset = "0x23264F0", VA = "0x182327EF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005436")]
		[Address(RVA = "0x23292F0", Offset = "0x23278F0", VA = "0x1823292F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action OnLoggedOut
	{
		[Token(Token = "0x6005437")]
		[Address(RVA = "0x2327FF0", Offset = "0x23265F0", VA = "0x182327FF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005438")]
		[Address(RVA = "0x23293F0", Offset = "0x23279F0", VA = "0x1823293F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public static event Action OnAuthMethodsChanged
	{
		[Token(Token = "0x6005439")]
		[Address(RVA = "0x2327DF0", Offset = "0x23263F0", VA = "0x182327DF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600543A")]
		[Address(RVA = "0x23291F0", Offset = "0x23277F0", VA = "0x1823291F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60053EC")]
	[Address(RVA = "0x2324870", Offset = "0x2322E70", VA = "0x182324870")]
	public static void LoginWithOAuth(string provider, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60053ED")]
	[Address(RVA = "0x2322010", Offset = "0x2320610", VA = "0x182322010")]
	public static void CancelOAuthLogin()
	{
	}

	[Token(Token = "0x60053EE")]
	[Address(RVA = "0x2324FE0", Offset = "0x23235E0", VA = "0x182324FE0")]
	[IteratorStateMachine(typeof(_003COAuthFlow_003Ed__8))]
	private IEnumerator OAuthFlow(string provider, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60053EF")]
	[Address(RVA = "0x2325720", Offset = "0x2323D20", VA = "0x182325720")]
	[IteratorStateMachine(typeof(_003CPollUnityOAuth_003Ed__9))]
	private IEnumerator PollUnityOAuth(UnityOAuthStart start, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60053F0")]
	[Address(RVA = "0x23230D0", Offset = "0x23216D0", VA = "0x1823230D0")]
	[IteratorStateMachine(typeof(_003CExchangeOAuthCode_003Ed__10))]
	private IEnumerator ExchangeOAuthCode(string code, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x60053F1")]
	[Address(RVA = "0x2321F70", Offset = "0x2320570", VA = "0x182321F70")]
	private void CancelOAuthFlow()
	{
	}

	[Token(Token = "0x60053F2")]
	[Address(RVA = "0x2324590", Offset = "0x2322B90", VA = "0x182324590")]
	private bool IsCurrentOAuthAttempt(int attemptId)
	{
		return default(bool);
	}

	[Token(Token = "0x60053F3")]
	[Address(RVA = "0x2322CA0", Offset = "0x23212A0", VA = "0x182322CA0")]
	private static void CompleteOAuth(bool success, string error)
	{
	}

	[Token(Token = "0x60053F4")]
	[Address(RVA = "0x2326B80", Offset = "0x2325180", VA = "0x182326B80")]
	private static bool TryParseUnityOAuthStart(string json, out UnityOAuthStart start)
	{
		return default(bool);
	}

	[Token(Token = "0x60053F5")]
	[Address(RVA = "0x2326F30", Offset = "0x2325530", VA = "0x182326F30")]
	private static bool TryParseUnityOAuthStatus(string json, out string status, out string code, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60053F6")]
	[Address(RVA = "0x2324F80", Offset = "0x2323580", VA = "0x182324F80")]
	private static string NormalizeOAuthProvider(string provider)
	{
		return null;
	}

	[Token(Token = "0x6005400")]
	[Address(RVA = "0x2323A10", Offset = "0x2322010", VA = "0x182323A10")]
	public static void GetProfile(Action<bool, string> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005401")]
	[Address(RVA = "0x23273B0", Offset = "0x23259B0", VA = "0x1823273B0")]
	public static void UpdateProfile(string displayName, string description, string avatarKey, string bannerKey, Dictionary<string, string> socials, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005402")]
	[Address(RVA = "0x23233E0", Offset = "0x23219E0", VA = "0x1823233E0")]
	public static void GetCharacterInfo(Action<bool, string, JSONNode> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005403")]
	[Address(RVA = "0x2327130", Offset = "0x2325730", VA = "0x182327130")]
	public static void UpdateCharacterInfo(JSONNode characterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005404")]
	[Address(RVA = "0x2323980", Offset = "0x2321F80", VA = "0x182323980")]
	[IteratorStateMachine(typeof(_003CGetProfileJson_003Ed__50))]
	private IEnumerator GetProfileJson(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6005405")]
	[Address(RVA = "0x23254B0", Offset = "0x2323AB0", VA = "0x1823254B0")]
	[IteratorStateMachine(typeof(_003CPatchProfileJson_003Ed__51))]
	private IEnumerator PatchProfileJson(string json, Action<bool, string> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6005406")]
	[Address(RVA = "0x2323350", Offset = "0x2321950", VA = "0x182323350")]
	[IteratorStateMachine(typeof(_003CGetCharacterInfoJson_003Ed__52))]
	private IEnumerator GetCharacterInfoJson(Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6005407")]
	[Address(RVA = "0x23258D0", Offset = "0x2323ED0", VA = "0x1823258D0")]
	[IteratorStateMachine(typeof(_003CPutCharacterInfoJson_003Ed__53))]
	private IEnumerator PutCharacterInfoJson(string json, JSONNode fallbackCharacterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6005408")]
	[Address(RVA = "0x2326910", Offset = "0x2324F10", VA = "0x182326910")]
	[IteratorStateMachine(typeof(_003CSendMeJson_003Ed__54))]
	private IEnumerator SendMeJson(string method, string path, string json, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x6005409")]
	[Address(RVA = "0x23269E0", Offset = "0x2324FE0", VA = "0x1823269E0")]
	[IteratorStateMachine(typeof(_003CSendMeReadJson_003Ed__55))]
	private IEnumerator SendMeReadJson(string path, Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x600540A")]
	[Address(RVA = "0x2321B10", Offset = "0x2320110", VA = "0x182321B10")]
	private static void ApplyProfileResponse(JSONNode profile)
	{
	}

	[Token(Token = "0x600540B")]
	[Address(RVA = "0x2322DE0", Offset = "0x23213E0", VA = "0x182322DE0")]
	private static void CompleteProfileFetch(bool success, string error)
	{
	}

	[Token(Token = "0x600540C")]
	[Address(RVA = "0x2322A00", Offset = "0x2321000", VA = "0x182322A00")]
	private static void CompleteCharacterInfoFetch(bool success, string error, JSONNode characterInfo)
	{
	}

	[Token(Token = "0x600540D")]
	[Address(RVA = "0x2324E40", Offset = "0x2323440", VA = "0x182324E40")]
	private static void MarkOwnProfileCacheFresh()
	{
	}

	[Token(Token = "0x600540E")]
	[Address(RVA = "0x2324D60", Offset = "0x2323360", VA = "0x182324D60")]
	private static void MarkCharacterInfoCacheFresh(JSONNode characterInfo)
	{
	}

	[Token(Token = "0x600540F")]
	[Address(RVA = "0x2322970", Offset = "0x2320F70", VA = "0x182322970")]
	private static JSONNode CloneJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005410")]
	[Address(RVA = "0x2324480", Offset = "0x2322A80", VA = "0x182324480")]
	private static void InvalidateOwnAccountCache()
	{
	}

	[Token(Token = "0x6005411")]
	[Address(RVA = "0x23220A0", Offset = "0x23206A0", VA = "0x1823220A0")]
	private static void ClearOwnAccountCache()
	{
	}

	[Token(Token = "0x6005412")]
	[Address(RVA = "0x2322290", Offset = "0x2320890", VA = "0x182322290")]
	private static void ClearProfileResponse()
	{
	}

	[Token(Token = "0x6005413")]
	[Address(RVA = "0x2322210", Offset = "0x2320810", VA = "0x182322210")]
	private static void ClearOwnPublicProfileCache()
	{
	}

	[Token(Token = "0x6005425")]
	[Address(RVA = "0x2324610", Offset = "0x2322C10", VA = "0x182324610")]
	public static bool IsOAuthProviderLinked(string provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600543B")]
	[Address(RVA = "0x2323FF0", Offset = "0x23225F0", VA = "0x182323FF0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600543C")]
	[Address(RVA = "0x2326A80", Offset = "0x2325080", VA = "0x182326A80")]
	public static void SetKeepSignedIn(bool value)
	{
	}

	[Token(Token = "0x600543D")]
	[Address(RVA = "0x23244F0", Offset = "0x2322AF0", VA = "0x1823244F0")]
	public static bool IsAuthMethodEnabled(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x600543E")]
	[Address(RVA = "0x2323780", Offset = "0x2321D80", VA = "0x182323780")]
	public static AccountLoginResponse.OAuthLinkData GetOAuthLink(string provider)
	{
		return null;
	}

	[Token(Token = "0x600543F")]
	[Address(RVA = "0x2325980", Offset = "0x2323F80", VA = "0x182325980")]
	public static void RefreshAuthMethods(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x6005440")]
	[Address(RVA = "0x2325E20", Offset = "0x2324420", VA = "0x182325E20")]
	public static void Register(string displayName, string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005441")]
	[Address(RVA = "0x23249E0", Offset = "0x2322FE0", VA = "0x1823249E0")]
	public static void Login(string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005442")]
	[Address(RVA = "0x2325B00", Offset = "0x2324100", VA = "0x182325B00")]
	public static void Refresh(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005443")]
	[Address(RVA = "0x2324B70", Offset = "0x2323170", VA = "0x182324B70")]
	public static void Logout([Optional] Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005444")]
	[Address(RVA = "0x2323E80", Offset = "0x2322480", VA = "0x182323E80")]
	public static void GoOffline()
	{
	}

	[Token(Token = "0x6005445")]
	[Address(RVA = "0x2323F50", Offset = "0x2322550", VA = "0x182323F50")]
	public static void GoOnline(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005446")]
	[Address(RVA = "0x2323DF0", Offset = "0x23223F0", VA = "0x182323DF0")]
	public static string GetWebLoginUrlWithSession()
	{
		return null;
	}

	[Token(Token = "0x6005447")]
	[Address(RVA = "0x2327900", Offset = "0x2325F00", VA = "0x182327900")]
	public static void VerifyEmail(string token, Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x6005448")]
	[Address(RVA = "0x2323160", Offset = "0x2321760", VA = "0x182323160")]
	public static void ForgotPassword(string email, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005449")]
	[Address(RVA = "0x2325550", Offset = "0x2323B50", VA = "0x182325550")]
	public static void PatreonUnlink(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x600544A")]
	[Address(RVA = "0x23232C0", Offset = "0x23218C0", VA = "0x1823232C0")]
	[IteratorStateMachine(typeof(_003CGetAuthMethods_003Ed__164))]
	private IEnumerator GetAuthMethods(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x600544B")]
	[Address(RVA = "0x2326500", Offset = "0x2324B00", VA = "0x182326500")]
	[IteratorStateMachine(typeof(_003CSendApiGet_003Ed__165))]
	private IEnumerator SendApiGet(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return null;
	}

	[Token(Token = "0x600544C")]
	[Address(RVA = "0x23263E0", Offset = "0x23249E0", VA = "0x1823263E0")]
	[AsyncStateMachine(typeof(_003CSendApiGetAsync_003Ed__166))]
	private UniTask SendApiGetAsync(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600544D")]
	[Address(RVA = "0x2326810", Offset = "0x2324E10", VA = "0x182326810")]
	[IteratorStateMachine(typeof(_003CSendApiJson_003Ed__167))]
	private IEnumerator SendApiJson(string method, string path, string json, string bearer, bool parseJson, Action<AottgApiResult> onComplete, [Optional][DefaultParameterValue(true)] bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return null;
	}

	[Token(Token = "0x600544E")]
	[Address(RVA = "0x23266E0", Offset = "0x2324CE0", VA = "0x1823266E0")]
	[AsyncStateMachine(typeof(_003CSendApiJsonAsync_003Ed__168))]
	private UniTask SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, int? timeoutSeconds, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600544F")]
	[Address(RVA = "0x23265B0", Offset = "0x2324BB0", VA = "0x1823265B0")]
	private static UniTask<AottgApiResult> SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x6005450")]
	[Address(RVA = "0x2325080", Offset = "0x2323680", VA = "0x182325080")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6005451")]
	[Address(RVA = "0x2322F60", Offset = "0x2321560", VA = "0x182322F60")]
	[IteratorStateMachine(typeof(_003CDeleteJson_003Ed__171))]
	private IEnumerator DeleteJson(string path, string bearer, Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6005452")]
	[Address(RVA = "0x23257D0", Offset = "0x2323DD0", VA = "0x1823257D0")]
	[IteratorStateMachine(typeof(_003CPostJson_003Ed__172))]
	private IEnumerator PostJson(string path, string json, string bearer, Action<bool, string> onComplete, bool applyAuthResponse, [Optional] string captureField, [Optional] Action<string> captureTarget, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x6005453")]
	[Address(RVA = "0x2321050", Offset = "0x231F650", VA = "0x182321050")]
	private static bool ApplyAuthMethodsResponse(string json)
	{
		return default(bool);
	}

	[Token(Token = "0x6005454")]
	[Address(RVA = "0x23216F0", Offset = "0x231FCF0", VA = "0x1823216F0")]
	private static void ApplyAuthResponse(string json)
	{
	}

	[Token(Token = "0x6005455")]
	[Address(RVA = "0x23252F0", Offset = "0x23238F0", VA = "0x1823252F0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005456")]
	[Address(RVA = "0x2325380", Offset = "0x2323980", VA = "0x182325380")]
	private static long ParseIsoToUnix(string iso)
	{
		return default(long);
	}

	[Token(Token = "0x6005457")]
	[Address(RVA = "0x23225A0", Offset = "0x2320BA0", VA = "0x1823225A0")]
	private static void ClearSession(bool clearRefreshToken = true)
	{
	}

	[Token(Token = "0x6005458")]
	[Address(RVA = "0x2323D80", Offset = "0x2322380", VA = "0x182323D80")]
	private static string GetRefreshTokenPath()
	{
		return null;
	}

	[Token(Token = "0x6005459")]
	[Address(RVA = "0x2326240", Offset = "0x2324840", VA = "0x182326240")]
	private static void SaveRefreshToken()
	{
	}

	[Token(Token = "0x600545A")]
	[Address(RVA = "0x2324660", Offset = "0x2322C60", VA = "0x182324660")]
	private static void LoadRefreshToken()
	{
	}

	[Token(Token = "0x600545B")]
	[Address(RVA = "0x2323010", Offset = "0x2321610", VA = "0x182323010")]
	private static void DeleteRefreshToken()
	{
	}

	[Token(Token = "0x600545C")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AccountManager()
	{
	}
}
