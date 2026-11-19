// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AccountManager
// Update status: CHANGED in this game update
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
		}

		[Token(Token = "0x60057C2")]
		[Address(RVA = "0x5D03790", Offset = "0x5D02790", VA = "0x5D03790")]
		internal void _003CExchangeOAuthCode_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057C8")]
		[Address(RVA = "0x5D039C0", Offset = "0x5D029C0", VA = "0x5D039C0")]
		internal void _003CGetAuthMethods_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057CA")]
		[Address(RVA = "0x5D039E0", Offset = "0x5D029E0", VA = "0x5D039E0")]
		internal void _003CSendApiGet_003Eb__0(AottgApiResult result)
		{
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
		}

		[Token(Token = "0x60057CC")]
		[Address(RVA = "0x5D03A10", Offset = "0x5D02A10", VA = "0x5D03A10")]
		internal void _003CSendApiJson_003Eb__0(AottgApiResult result)
		{
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
		}

		[Token(Token = "0x60057CE")]
		[Address(RVA = "0x5D03A40", Offset = "0x5D02A40", VA = "0x5D03A40")]
		internal void _003CDeleteJson_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057D0")]
		[Address(RVA = "0x5D03A60", Offset = "0x5D02A60", VA = "0x5D03A60")]
		internal void _003CPostJson_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057DA")]
		[Address(RVA = "0x5D03E50", Offset = "0x5D02E50", VA = "0x5D03E50")]
		internal void _003CSendMeJson_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057DC")]
		[Address(RVA = "0x5D03E70", Offset = "0x5D02E70", VA = "0x5D03E70")]
		internal void _003CSendMeReadJson_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057DE")]
		[Address(RVA = "0x5D03E90", Offset = "0x5D02E90", VA = "0x5D03E90")]
		internal void _003COAuthFlow_003Eb__0(AottgApiResult r)
		{
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
		}

		[Token(Token = "0x60057E0")]
		[Address(RVA = "0x5D03EB0", Offset = "0x5D02EB0", VA = "0x5D03EB0")]
		internal void _003CPollUnityOAuth_003Eb__0(AottgApiResult r)
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60057E1")]
		[Address(RVA = "0x5D01EB0", Offset = "0x5D00EB0", VA = "0x5D01EB0")]
		[DebuggerHidden]
		public _003CDeleteJson_003Ed__175(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60057E2")]
		[Address(RVA = "0x5D03EC0", Offset = "0x5D02EC0", VA = "0x5D03EC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60057E3")]
		[Address(RVA = "0x5D03ED0", Offset = "0x5D02ED0", VA = "0x5D03ED0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60057E5")]
		[Address(RVA = "0x5D040C0", Offset = "0x5D030C0", VA = "0x5D040C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60057E7")]
		[Address(RVA = "0x5CF9AA0", Offset = "0x5CF8AA0", VA = "0x5CF9AA0")]
		[DebuggerHidden]
		public _003CExchangeOAuthCode_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60057E8")]
		[Address(RVA = "0x5D04110", Offset = "0x5D03110", VA = "0x5D04110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60057E9")]
		[Address(RVA = "0x5D04120", Offset = "0x5D03120", VA = "0x5D04120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60057EB")]
		[Address(RVA = "0x5D045A0", Offset = "0x5D035A0", VA = "0x5D045A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60057ED")]
		[Address(RVA = "0x5D01820", Offset = "0x5D00820", VA = "0x5D01820")]
		[DebuggerHidden]
		public _003CGetAuthMethods_003Ed__168(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60057EE")]
		[Address(RVA = "0x5D045F0", Offset = "0x5D035F0", VA = "0x5D045F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60057EF")]
		[Address(RVA = "0x5D04600", Offset = "0x5D03600", VA = "0x5D04600", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60057F1")]
		[Address(RVA = "0x5D04950", Offset = "0x5D03950", VA = "0x5D04950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60057F3")]
		[Address(RVA = "0x5CFBCF0", Offset = "0x5CFACF0", VA = "0x5CFBCF0")]
		[DebuggerHidden]
		public _003CGetCharacterInfoJson_003Ed__52(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60057F4")]
		[Address(RVA = "0x5D049A0", Offset = "0x5D039A0", VA = "0x5D049A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60057F5")]
		[Address(RVA = "0x5D049B0", Offset = "0x5D039B0", VA = "0x5D049B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60057F7")]
		[Address(RVA = "0x5D04B00", Offset = "0x5D03B00", VA = "0x5D04B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60057F9")]
		[Address(RVA = "0x5CFBCB0", Offset = "0x5CFACB0", VA = "0x5CFBCB0")]
		[DebuggerHidden]
		public _003CGetProfileJson_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60057FA")]
		[Address(RVA = "0x5D04B50", Offset = "0x5D03B50", VA = "0x5D04B50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60057FB")]
		[Address(RVA = "0x5D04B60", Offset = "0x5D03B60", VA = "0x5D04B60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60057FD")]
		[Address(RVA = "0x5D04CB0", Offset = "0x5D03CB0", VA = "0x5D04CB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60057FF")]
		[Address(RVA = "0x5CF9920", Offset = "0x5CF8920", VA = "0x5CF9920")]
		[DebuggerHidden]
		public _003COAuthFlow_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005800")]
		[Address(RVA = "0x5D04D00", Offset = "0x5D03D00", VA = "0x5D04D00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005801")]
		[Address(RVA = "0x5D04D10", Offset = "0x5D03D10", VA = "0x5D04D10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005803")]
		[Address(RVA = "0x5D052D0", Offset = "0x5D042D0", VA = "0x5D052D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6005805")]
		[Address(RVA = "0x5CFBCD0", Offset = "0x5CFACD0", VA = "0x5CFBCD0")]
		[DebuggerHidden]
		public _003CPatchProfileJson_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005806")]
		[Address(RVA = "0x5D05320", Offset = "0x5D04320", VA = "0x5D05320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005807")]
		[Address(RVA = "0x5D05330", Offset = "0x5D04330", VA = "0x5D05330", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005809")]
		[Address(RVA = "0x5D05490", Offset = "0x5D04490", VA = "0x5D05490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x600580B")]
		[Address(RVA = "0x5CF99F0", Offset = "0x5CF89F0", VA = "0x5CF99F0")]
		[DebuggerHidden]
		public _003CPollUnityOAuth_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600580C")]
		[Address(RVA = "0x5D054E0", Offset = "0x5D044E0", VA = "0x5D054E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600580D")]
		[Address(RVA = "0x5D054F0", Offset = "0x5D044F0", VA = "0x5D054F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600580F")]
		[Address(RVA = "0x5D05BB0", Offset = "0x5D04BB0", VA = "0x5D05BB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6005811")]
		[Address(RVA = "0x5D01ED0", Offset = "0x5D00ED0", VA = "0x5D01ED0")]
		[DebuggerHidden]
		public _003CPostJson_003Ed__176(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005812")]
		[Address(RVA = "0x5D05C00", Offset = "0x5D04C00", VA = "0x5D05C00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005813")]
		[Address(RVA = "0x5D05C10", Offset = "0x5D04C10", VA = "0x5D05C10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005815")]
		[Address(RVA = "0x5D06340", Offset = "0x5D05340", VA = "0x5D06340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6005817")]
		[Address(RVA = "0x5CFBD10", Offset = "0x5CFAD10", VA = "0x5CFBD10")]
		[DebuggerHidden]
		public _003CPutCharacterInfoJson_003Ed__53(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005818")]
		[Address(RVA = "0x5D06390", Offset = "0x5D05390", VA = "0x5D06390", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005819")]
		[Address(RVA = "0x5D063A0", Offset = "0x5D053A0", VA = "0x5D063A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600581B")]
		[Address(RVA = "0x5D06510", Offset = "0x5D05510", VA = "0x5D06510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x600581D")]
		[Address(RVA = "0x5D018F0", Offset = "0x5D008F0", VA = "0x5D018F0")]
		[DebuggerHidden]
		public _003CSendApiGet_003Ed__169(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600581E")]
		[Address(RVA = "0x5D06560", Offset = "0x5D05560", VA = "0x5D06560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600581F")]
		[Address(RVA = "0x5D06570", Offset = "0x5D05570", VA = "0x5D06570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005821")]
		[Address(RVA = "0x5D066F0", Offset = "0x5D056F0", VA = "0x5D066F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
		}

		[Token(Token = "0x6005824")]
		[Address(RVA = "0x5D06CB0", Offset = "0x5D05CB0", VA = "0x5D06CB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6005825")]
		[Address(RVA = "0x5D01AE0", Offset = "0x5D00AE0", VA = "0x5D01AE0")]
		[DebuggerHidden]
		public _003CSendApiJson_003Ed__171(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005826")]
		[Address(RVA = "0x5D06CC0", Offset = "0x5D05CC0", VA = "0x5D06CC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005827")]
		[Address(RVA = "0x5D06CD0", Offset = "0x5D05CD0", VA = "0x5D06CD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005829")]
		[Address(RVA = "0x5D06E90", Offset = "0x5D05E90", VA = "0x5D06E90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
		}

		[Token(Token = "0x600582C")]
		[Address(RVA = "0x5D07540", Offset = "0x5D06540", VA = "0x5D07540", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x600582D")]
		[Address(RVA = "0x5D075C0", Offset = "0x5D065C0", VA = "0x5D075C0")]
		[DebuggerHidden]
		public _003CSendMeJson_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600582E")]
		[Address(RVA = "0x5D075E0", Offset = "0x5D065E0", VA = "0x5D075E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600582F")]
		[Address(RVA = "0x5D075F0", Offset = "0x5D065F0", VA = "0x5D075F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005831")]
		[Address(RVA = "0x5D07950", Offset = "0x5D06950", VA = "0x5D07950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6005833")]
		[Address(RVA = "0x5D079A0", Offset = "0x5D069A0", VA = "0x5D079A0")]
		[DebuggerHidden]
		public _003CSendMeReadJson_003Ed__55(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005834")]
		[Address(RVA = "0x5D079C0", Offset = "0x5D069C0", VA = "0x5D079C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005835")]
		[Address(RVA = "0x5D079D0", Offset = "0x5D069D0", VA = "0x5D079D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005837")]
		[Address(RVA = "0x5D07C30", Offset = "0x5D06C30", VA = "0x5D07C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
			return null;
		}
		[Token(Token = "0x6005755")]
		[Address(RVA = "0x5CFA430", Offset = "0x5CF9430", VA = "0x5CFA430")]
		[CompilerGenerated]
		private set
		{
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
			return null;
		}
		[Token(Token = "0x6005757")]
		[Address(RVA = "0x5CFA500", Offset = "0x5CF9500", VA = "0x5CFA500")]
		[CompilerGenerated]
		private set
		{
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
			return null;
		}
		[Token(Token = "0x6005759")]
		[Address(RVA = "0x5CFA5D0", Offset = "0x5CF95D0", VA = "0x5CFA5D0")]
		[CompilerGenerated]
		private set
		{
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
			return null;
		}
	}

	[Token(Token = "0x17000F0B")]
	public static bool HasCachedOwnProfile
	{
		[Token(Token = "0x600575B")]
		[Address(RVA = "0x5CFA6A0", Offset = "0x5CF96A0", VA = "0x5CFA6A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F0C")]
	public static bool HasCachedCharacterInfo
	{
		[Token(Token = "0x600575C")]
		[Address(RVA = "0x5CFA710", Offset = "0x5CF9710", VA = "0x5CFA710")]
		get
		{
			return default(bool);
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
			return null;
		}
		[Token(Token = "0x6005772")]
		[Address(RVA = "0x5CFD1D0", Offset = "0x5CFC1D0", VA = "0x5CFD1D0")]
		[CompilerGenerated]
		private set
		{
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
			return default(long);
		}
		[Token(Token = "0x6005774")]
		[Address(RVA = "0x5CFD2A0", Offset = "0x5CFC2A0", VA = "0x5CFD2A0")]
		[CompilerGenerated]
		private set
		{
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
			return null;
		}
		[Token(Token = "0x6005776")]
		[Address(RVA = "0x5CFD370", Offset = "0x5CFC370", VA = "0x5CFD370")]
		[CompilerGenerated]
		private set
		{
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
			return default(long);
		}
		[Token(Token = "0x6005778")]
		[Address(RVA = "0x5CFD440", Offset = "0x5CFC440", VA = "0x5CFD440")]
		[CompilerGenerated]
		private set
		{
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
			return null;
		}
		[Token(Token = "0x600577A")]
		[Address(RVA = "0x5CFD510", Offset = "0x5CFC510", VA = "0x5CFD510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F12")]
	public static string UserId
	{
		[Token(Token = "0x600577B")]
		[Address(RVA = "0x5CFCF80", Offset = "0x5CFBF80", VA = "0x5CFCF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F13")]
	public static string Username
	{
		[Token(Token = "0x600577C")]
		[Address(RVA = "0x5CFD580", Offset = "0x5CFC580", VA = "0x5CFD580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F14")]
	public static string Email
	{
		[Token(Token = "0x600577D")]
		[Address(RVA = "0x5CFD760", Offset = "0x5CFC760", VA = "0x5CFD760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F15")]
	public static bool EmailVerified
	{
		[Token(Token = "0x600577E")]
		[Address(RVA = "0x5CFD940", Offset = "0x5CFC940", VA = "0x5CFD940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F16")]
	public static string[] Roles
	{
		[Token(Token = "0x600577F")]
		[Address(RVA = "0x5CFDB20", Offset = "0x5CFCB20", VA = "0x5CFDB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F17")]
	public static string PhotonUserId
	{
		[Token(Token = "0x6005780")]
		[Address(RVA = "0x5CFDD00", Offset = "0x5CFCD00", VA = "0x5CFDD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000F18")]
	public static JSONNode Patreon
	{
		[Token(Token = "0x6005781")]
		[Address(RVA = "0x5CFDEE0", Offset = "0x5CFCEE0", VA = "0x5CFDEE0")]
		get
		{
			return null;
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
			return default(long);
		}
		[Token(Token = "0x6005784")]
		[Address(RVA = "0x5CFE510", Offset = "0x5CFD510", VA = "0x5CFE510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F1A")]
	public static bool IsLoggedIn
	{
		[Token(Token = "0x6005785")]
		[Address(RVA = "0x5CFAB30", Offset = "0x5CF9B30", VA = "0x5CFAB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000F1B")]
	public static bool HasRefreshToken
	{
		[Token(Token = "0x6005786")]
		[Address(RVA = "0x5CFE570", Offset = "0x5CFD570", VA = "0x5CFE570")]
		get
		{
			return default(bool);
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
			return default(bool);
		}
		[Token(Token = "0x6005788")]
		[Address(RVA = "0x5CFE640", Offset = "0x5CFD640", VA = "0x5CFE640")]
		[CompilerGenerated]
		private set
		{
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
			return default(bool);
		}
		[Token(Token = "0x600578A")]
		[Address(RVA = "0x5CFE710", Offset = "0x5CFD710", VA = "0x5CFE710")]
		[CompilerGenerated]
		private set
		{
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
			return default(bool);
		}
		[Token(Token = "0x600578C")]
		[Address(RVA = "0x5CFE7E0", Offset = "0x5CFD7E0", VA = "0x5CFE7E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F1F")]
	public static bool DevMode
	{
		[Token(Token = "0x600578D")]
		[Address(RVA = "0x5CFE840", Offset = "0x5CFD840", VA = "0x5CFE840")]
		get
		{
			return default(bool);
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
			return null;
		}
		[Token(Token = "0x600578F")]
		[Address(RVA = "0x5CFE920", Offset = "0x5CFD920", VA = "0x5CFE920")]
		[CompilerGenerated]
		private set
		{
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
			return null;
		}
		[Token(Token = "0x6005791")]
		[Address(RVA = "0x5CFEA00", Offset = "0x5CFDA00", VA = "0x5CFEA00")]
		[CompilerGenerated]
		private set
		{
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
		}
		[Token(Token = "0x6005793")]
		[Address(RVA = "0x5CFEB50", Offset = "0x5CFDB50", VA = "0x5CFEB50")]
		[CompilerGenerated]
		remove
		{
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
		}
		[Token(Token = "0x6005795")]
		[Address(RVA = "0x5CFED10", Offset = "0x5CFDD10", VA = "0x5CFED10")]
		[CompilerGenerated]
		remove
		{
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
		}
		[Token(Token = "0x6005797")]
		[Address(RVA = "0x5CFEED0", Offset = "0x5CFDED0", VA = "0x5CFEED0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6005749")]
	[Address(RVA = "0x5CF9610", Offset = "0x5CF8610", VA = "0x5CF9610")]
	public static void LoginWithOAuth(string provider, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x600574A")]
	[Address(RVA = "0x5CF98A0", Offset = "0x5CF88A0", VA = "0x5CF98A0")]
	public static void CancelOAuthLogin()
	{
	}

	[Token(Token = "0x600574B")]
	[Address(RVA = "0x5CF9810", Offset = "0x5CF8810", VA = "0x5CF9810")]
	[IteratorStateMachine(typeof(_003COAuthFlow_003Ed__8))]
	private IEnumerator OAuthFlow(string provider, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x600574C")]
	[Address(RVA = "0x5CF9940", Offset = "0x5CF8940", VA = "0x5CF9940")]
	[IteratorStateMachine(typeof(_003CPollUnityOAuth_003Ed__9))]
	private IEnumerator PollUnityOAuth(UnityOAuthStart start, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x600574D")]
	[Address(RVA = "0x5CF9A10", Offset = "0x5CF8A10", VA = "0x5CF9A10")]
	[IteratorStateMachine(typeof(_003CExchangeOAuthCode_003Ed__10))]
	private IEnumerator ExchangeOAuthCode(string code, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x600574E")]
	[Address(RVA = "0x5CF9770", Offset = "0x5CF8770", VA = "0x5CF9770")]
	private void CancelOAuthFlow()
	{
	}

	[Token(Token = "0x600574F")]
	[Address(RVA = "0x5CF9AC0", Offset = "0x5CF8AC0", VA = "0x5CF9AC0")]
	private bool IsCurrentOAuthAttempt(int attemptId)
	{
		return default(bool);
	}

	[Token(Token = "0x6005750")]
	[Address(RVA = "0x5CF9B30", Offset = "0x5CF8B30", VA = "0x5CF9B30")]
	private static void CompleteOAuth(bool success, string error)
	{
	}

	[Token(Token = "0x6005751")]
	[Address(RVA = "0x5CF9C60", Offset = "0x5CF8C60", VA = "0x5CF9C60")]
	private static bool TryParseUnityOAuthStart(string json, out UnityOAuthStart start)
	{
		return default(bool);
	}

	[Token(Token = "0x6005752")]
	[Address(RVA = "0x5CFA0D0", Offset = "0x5CF90D0", VA = "0x5CFA0D0")]
	private static bool TryParseUnityOAuthStatus(string json, out string status, out string code, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005753")]
	[Address(RVA = "0x5CFA370", Offset = "0x5CF9370", VA = "0x5CFA370")]
	private static string NormalizeOAuthProvider(string provider)
	{
		return null;
	}

	[Token(Token = "0x600575D")]
	[Address(RVA = "0x5CFA780", Offset = "0x5CF9780", VA = "0x5CFA780")]
	public static void GetProfile(Action<bool, string> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x600575E")]
	[Address(RVA = "0x5CFAC60", Offset = "0x5CF9C60", VA = "0x5CFAC60")]
	public static void UpdateProfile(string displayName, string description, string avatarKey, string bannerKey, Dictionary<string, string> socials, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x600575F")]
	[Address(RVA = "0x5CFB3F0", Offset = "0x5CFA3F0", VA = "0x5CFB3F0")]
	public static void GetCharacterInfo(Action<bool, string, JSONNode> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005760")]
	[Address(RVA = "0x5CFB950", Offset = "0x5CFA950", VA = "0x5CFB950")]
	public static void UpdateCharacterInfo(JSONNode characterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6005761")]
	[Address(RVA = "0x5CFABE0", Offset = "0x5CF9BE0", VA = "0x5CFABE0")]
	[IteratorStateMachine(typeof(_003CGetProfileJson_003Ed__50))]
	private IEnumerator GetProfileJson(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6005762")]
	[Address(RVA = "0x5CFB350", Offset = "0x5CFA350", VA = "0x5CFB350")]
	[IteratorStateMachine(typeof(_003CPatchProfileJson_003Ed__51))]
	private IEnumerator PatchProfileJson(string json, Action<bool, string> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6005763")]
	[Address(RVA = "0x5CFB8D0", Offset = "0x5CFA8D0", VA = "0x5CFB8D0")]
	[IteratorStateMachine(typeof(_003CGetCharacterInfoJson_003Ed__52))]
	private IEnumerator GetCharacterInfoJson(Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6005764")]
	[Address(RVA = "0x5CFBC00", Offset = "0x5CFAC00", VA = "0x5CFBC00")]
	[IteratorStateMachine(typeof(_003CPutCharacterInfoJson_003Ed__53))]
	private IEnumerator PutCharacterInfoJson(string json, JSONNode fallbackCharacterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6005765")]
	[Address(RVA = "0x5CFBD30", Offset = "0x5CFAD30", VA = "0x5CFBD30")]
	[IteratorStateMachine(typeof(_003CSendMeJson_003Ed__54))]
	private IEnumerator SendMeJson(string method, string path, string json, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x6005766")]
	[Address(RVA = "0x5CFBE00", Offset = "0x5CFAE00", VA = "0x5CFBE00")]
	[IteratorStateMachine(typeof(_003CSendMeReadJson_003Ed__55))]
	private IEnumerator SendMeReadJson(string path, Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6005767")]
	[Address(RVA = "0x5CFBEA0", Offset = "0x5CFAEA0", VA = "0x5CFBEA0")]
	private static void ApplyProfileResponse(JSONNode profile)
	{
	}

	[Token(Token = "0x6005768")]
	[Address(RVA = "0x5CFC6C0", Offset = "0x5CFB6C0", VA = "0x5CFC6C0")]
	private static void CompleteProfileFetch(bool success, string error)
	{
	}

	[Token(Token = "0x6005769")]
	[Address(RVA = "0x5CFC870", Offset = "0x5CFB870", VA = "0x5CFC870")]
	private static void CompleteCharacterInfoFetch(bool success, string error, JSONNode characterInfo)
	{
	}

	[Token(Token = "0x600576A")]
	[Address(RVA = "0x5CFC500", Offset = "0x5CFB500", VA = "0x5CFC500")]
	private static void MarkOwnProfileCacheFresh()
	{
	}

	[Token(Token = "0x600576B")]
	[Address(RVA = "0x5CFCAE0", Offset = "0x5CFBAE0", VA = "0x5CFCAE0")]
	private static void MarkCharacterInfoCacheFresh(JSONNode characterInfo)
	{
	}

	[Token(Token = "0x600576C")]
	[Address(RVA = "0x5CFB7D0", Offset = "0x5CFA7D0", VA = "0x5CFB7D0")]
	private static JSONNode CloneJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600576D")]
	[Address(RVA = "0x5CFCBA0", Offset = "0x5CFBBA0", VA = "0x5CFCBA0")]
	private static void InvalidateOwnAccountCache()
	{
	}

	[Token(Token = "0x600576E")]
	[Address(RVA = "0x5CFCBF0", Offset = "0x5CFBBF0", VA = "0x5CFCBF0")]
	private static void ClearOwnAccountCache()
	{
	}

	[Token(Token = "0x600576F")]
	[Address(RVA = "0x5CFCCE0", Offset = "0x5CFBCE0", VA = "0x5CFCCE0")]
	private static void ClearProfileResponse()
	{
	}

	[Token(Token = "0x6005770")]
	[Address(RVA = "0x5CFCF10", Offset = "0x5CFBF10", VA = "0x5CFCF10")]
	private static void ClearOwnPublicProfileCache()
	{
	}

	[Token(Token = "0x6005782")]
	[Address(RVA = "0x5CFE160", Offset = "0x5CFD160", VA = "0x5CFE160")]
	public static bool IsOAuthProviderLinked(string provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6005798")]
	[Address(RVA = "0x5CFEFB0", Offset = "0x5CFDFB0", VA = "0x5CFEFB0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005799")]
	[Address(RVA = "0x5CFFB20", Offset = "0x5CFEB20", VA = "0x5CFFB20")]
	public static void SetKeepSignedIn(bool value)
	{
	}

	[Token(Token = "0x600579A")]
	[Address(RVA = "0x5CFFFB0", Offset = "0x5CFEFB0", VA = "0x5CFFFB0")]
	public static bool IsAuthMethodEnabled(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x600579B")]
	[Address(RVA = "0x5CFE1B0", Offset = "0x5CFD1B0", VA = "0x5CFE1B0")]
	public static AccountLoginResponse.OAuthLinkData GetOAuthLink(string provider)
	{
		return null;
	}

	[Token(Token = "0x600579C")]
	[Address(RVA = "0x5CFF9C0", Offset = "0x5CFE9C0", VA = "0x5CFF9C0")]
	public static void RefreshAuthMethods(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x600579D")]
	[Address(RVA = "0x5D000D0", Offset = "0x5CFF0D0", VA = "0x5D000D0")]
	public static void Register(string displayName, string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x600579E")]
	[Address(RVA = "0x5D00620", Offset = "0x5CFF620", VA = "0x5D00620")]
	public static void Login(string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x600579F")]
	[Address(RVA = "0x5CFF500", Offset = "0x5CFE500", VA = "0x5CFF500")]
	public static void Refresh(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60057A0")]
	[Address(RVA = "0x5D007B0", Offset = "0x5CFF7B0", VA = "0x5D007B0")]
	public static void Logout([Optional] Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60057A1")]
	[Address(RVA = "0x5D00F30", Offset = "0x5CFFF30", VA = "0x5D00F30")]
	public static void GoOffline()
	{
	}

	[Token(Token = "0x60057A2")]
	[Address(RVA = "0x5D01010", Offset = "0x5D00010", VA = "0x5D01010")]
	public static void GoOnline(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60057A3")]
	[Address(RVA = "0x5D01180", Offset = "0x5D00180", VA = "0x5D01180")]
	public static string GetWebLoginUrlWithSession()
	{
		return null;
	}

	[Token(Token = "0x60057A4")]
	[Address(RVA = "0x5D01220", Offset = "0x5D00220", VA = "0x5D01220")]
	public static void VerifyEmail(string token, Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x60057A5")]
	[Address(RVA = "0x5D01410", Offset = "0x5D00410", VA = "0x5D01410")]
	public static void ForgotPassword(string email, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x60057A6")]
	[Address(RVA = "0x5D01560", Offset = "0x5D00560", VA = "0x5D01560")]
	public static void PatreonUnlink(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x60057A7")]
	[Address(RVA = "0x5D00050", Offset = "0x5CFF050", VA = "0x5D00050")]
	[IteratorStateMachine(typeof(_003CGetAuthMethods_003Ed__168))]
	private IEnumerator GetAuthMethods(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60057A8")]
	[Address(RVA = "0x5D01840", Offset = "0x5D00840", VA = "0x5D01840")]
	[IteratorStateMachine(typeof(_003CSendApiGet_003Ed__169))]
	private IEnumerator SendApiGet(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60057A9")]
	[Address(RVA = "0x5D01910", Offset = "0x5D00910", VA = "0x5D01910")]
	[AsyncStateMachine(typeof(_003CSendApiGetAsync_003Ed__170))]
	private UniTask SendApiGetAsync(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60057AA")]
	[Address(RVA = "0x5D019F0", Offset = "0x5D009F0", VA = "0x5D019F0")]
	[IteratorStateMachine(typeof(_003CSendApiJson_003Ed__171))]
	private IEnumerator SendApiJson(string method, string path, string json, string bearer, bool parseJson, Action<AottgApiResult> onComplete, [Optional][DefaultParameterValue(true)] bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return null;
	}

	[Token(Token = "0x60057AB")]
	[Address(RVA = "0x5D01B00", Offset = "0x5D00B00", VA = "0x5D01B00")]
	[AsyncStateMachine(typeof(_003CSendApiJsonAsync_003Ed__172))]
	private UniTask SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, int? timeoutSeconds, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x60057AC")]
	[Address(RVA = "0x5D01C30", Offset = "0x5D00C30", VA = "0x5D01C30")]
	private static UniTask<AottgApiResult> SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x60057AD")]
	[Address(RVA = "0x5D01DC0", Offset = "0x5D00DC0", VA = "0x5D01DC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60057AE")]
	[Address(RVA = "0x5D01770", Offset = "0x5D00770", VA = "0x5D01770")]
	[IteratorStateMachine(typeof(_003CDeleteJson_003Ed__175))]
	private IEnumerator DeleteJson(string path, string bearer, Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x60057AF")]
	[Address(RVA = "0x5D00520", Offset = "0x5CFF520", VA = "0x5D00520")]
	[IteratorStateMachine(typeof(_003CPostJson_003Ed__176))]
	private IEnumerator PostJson(string path, string json, string bearer, Action<bool, string> onComplete, bool applyAuthResponse, [Optional] string captureField, [Optional] Action<string> captureTarget, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x60057B0")]
	[Address(RVA = "0x5D01EF0", Offset = "0x5D00EF0", VA = "0x5D01EF0")]
	private static bool IsSessionRejected(bool isRefresh, long statusCode, string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60057B1")]
	[Address(RVA = "0x5D01F70", Offset = "0x5D00F70", VA = "0x5D01F70")]
	private static bool HasUsablePhotonToken()
	{
		return default(bool);
	}

	[Token(Token = "0x60057B2")]
	[Address(RVA = "0x5D021A0", Offset = "0x5D011A0", VA = "0x5D021A0")]
	private static bool ApplyAuthMethodsResponse(string json)
	{
		return default(bool);
	}

	[Token(Token = "0x60057B3")]
	[Address(RVA = "0x5D02910", Offset = "0x5D01910", VA = "0x5D02910")]
	private static void ApplyAuthResponse(string json)
	{
	}

	[Token(Token = "0x60057B4")]
	[Address(RVA = "0x5D02F40", Offset = "0x5D01F40", VA = "0x5D02F40")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60057B5")]
	[Address(RVA = "0x5D02FE0", Offset = "0x5D01FE0", VA = "0x5D02FE0")]
	private static long ParseIsoToUnix(string iso)
	{
		return default(long);
	}

	[Token(Token = "0x60057B6")]
	[Address(RVA = "0x5D00980", Offset = "0x5CFF980", VA = "0x5D00980")]
	private static void ClearSession(bool clearRefreshToken = true)
	{
	}

	[Token(Token = "0x60057B7")]
	[Address(RVA = "0x5CFF220", Offset = "0x5CFE220", VA = "0x5CFF220")]
	private static string GetRefreshTokenPath()
	{
		return null;
	}

	[Token(Token = "0x60057B8")]
	[Address(RVA = "0x5CFFDA0", Offset = "0x5CFEDA0", VA = "0x5CFFDA0")]
	private static void SaveRefreshToken()
	{
	}

	[Token(Token = "0x60057B9")]
	[Address(RVA = "0x5CFF290", Offset = "0x5CFE290", VA = "0x5CFF290")]
	private static void LoadRefreshToken()
	{
	}

	[Token(Token = "0x60057BA")]
	[Address(RVA = "0x5CFFC70", Offset = "0x5CFEC70", VA = "0x5CFFC70")]
	private static void DeleteRefreshToken()
	{
	}

	[Token(Token = "0x60057BB")]
	[Address(RVA = "0x5D03170", Offset = "0x5D02170", VA = "0x5D03170")]
	public AccountManager()
	{
	}
}
