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

[Token(Token = "0x2000707")]
internal class AccountManager : MonoBehaviour
{
	[Token(Token = "0x2000708")]
	private struct UnityOAuthStart
	{
		[Token(Token = "0x40021F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string SessionId;

		[Token(Token = "0x40021F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string PollToken;

		[Token(Token = "0x40021F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string AuthorizationUrl;

		[Token(Token = "0x40021F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DateTimeOffset ExpiresAt;

		[Token(Token = "0x40021F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int PollIntervalSeconds;
	}

	[Token(Token = "0x200070A")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass10_0
	{
		[Token(Token = "0x40021FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6004591")]
		[Address(RVA = "0x408F030", Offset = "0x408F030", VA = "0x408F030")]
		public _003C_003Ec__DisplayClass10_0()
		{
		}

		[Token(Token = "0x6004592")]
		[Address(RVA = "0x408F040", Offset = "0x408F040", VA = "0x408F040")]
		internal void _003CExchangeOAuthCode_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200070E")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass164_0
	{
		[Token(Token = "0x40021FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x6004599")]
		[Address(RVA = "0x408F360", Offset = "0x408F360", VA = "0x408F360")]
		public _003C_003Ec__DisplayClass164_0()
		{
		}

		[Token(Token = "0x600459A")]
		[Address(RVA = "0x408F370", Offset = "0x408F370", VA = "0x408F370")]
		internal void _003CGetAuthMethods_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200070F")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass165_0
	{
		[Token(Token = "0x40021FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002200")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x600459B")]
		[Address(RVA = "0x408F380", Offset = "0x408F380", VA = "0x408F380")]
		public _003C_003Ec__DisplayClass165_0()
		{
		}

		[Token(Token = "0x600459C")]
		[Address(RVA = "0x408F390", Offset = "0x408F390", VA = "0x408F390")]
		internal void _003CSendApiGet_003Eb__0(AottgApiResult result)
		{
		}
	}

	[Token(Token = "0x2000710")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass167_0
	{
		[Token(Token = "0x4002201")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool done;

		[Token(Token = "0x4002202")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x600459D")]
		[Address(RVA = "0x408F3B0", Offset = "0x408F3B0", VA = "0x408F3B0")]
		public _003C_003Ec__DisplayClass167_0()
		{
		}

		[Token(Token = "0x600459E")]
		[Address(RVA = "0x408F3C0", Offset = "0x408F3C0", VA = "0x408F3C0")]
		internal void _003CSendApiJson_003Eb__0(AottgApiResult result)
		{
		}
	}

	[Token(Token = "0x2000711")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass171_0
	{
		[Token(Token = "0x4002203")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x600459F")]
		[Address(RVA = "0x408F3E0", Offset = "0x408F3E0", VA = "0x408F3E0")]
		public _003C_003Ec__DisplayClass171_0()
		{
		}

		[Token(Token = "0x60045A0")]
		[Address(RVA = "0x408F3F0", Offset = "0x408F3F0", VA = "0x408F3F0")]
		internal void _003CDeleteJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000712")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass172_0
	{
		[Token(Token = "0x4002204")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60045A1")]
		[Address(RVA = "0x408F400", Offset = "0x408F400", VA = "0x408F400")]
		public _003C_003Ec__DisplayClass172_0()
		{
		}

		[Token(Token = "0x60045A2")]
		[Address(RVA = "0x408F410", Offset = "0x408F410", VA = "0x408F410")]
		internal void _003CPostJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000717")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass54_0
	{
		[Token(Token = "0x400220A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60045AB")]
		[Address(RVA = "0x408F7F0", Offset = "0x408F7F0", VA = "0x408F7F0")]
		public _003C_003Ec__DisplayClass54_0()
		{
		}

		[Token(Token = "0x60045AC")]
		[Address(RVA = "0x408F800", Offset = "0x408F800", VA = "0x408F800")]
		internal void _003CSendMeJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000718")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass55_0
	{
		[Token(Token = "0x400220B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60045AD")]
		[Address(RVA = "0x408F810", Offset = "0x408F810", VA = "0x408F810")]
		public _003C_003Ec__DisplayClass55_0()
		{
		}

		[Token(Token = "0x60045AE")]
		[Address(RVA = "0x408F820", Offset = "0x408F820", VA = "0x408F820")]
		internal void _003CSendMeReadJson_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x2000719")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass8_0
	{
		[Token(Token = "0x400220C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60045AF")]
		[Address(RVA = "0x408F830", Offset = "0x408F830", VA = "0x408F830")]
		public _003C_003Ec__DisplayClass8_0()
		{
		}

		[Token(Token = "0x60045B0")]
		[Address(RVA = "0x408F840", Offset = "0x408F840", VA = "0x408F840")]
		internal void _003COAuthFlow_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200071A")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass9_0
	{
		[Token(Token = "0x400220D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public AottgApiResult result;

		[Token(Token = "0x60045B1")]
		[Address(RVA = "0x408F850", Offset = "0x408F850", VA = "0x408F850")]
		public _003C_003Ec__DisplayClass9_0()
		{
		}

		[Token(Token = "0x60045B2")]
		[Address(RVA = "0x408F860", Offset = "0x408F860", VA = "0x408F860")]
		internal void _003CPollUnityOAuth_003Eb__0(AottgApiResult r)
		{
		}
	}

	[Token(Token = "0x200071B")]
	[CompilerGenerated]
	private sealed class _003CDeleteJson_003Ed__171 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400220E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400220F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002210")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002211")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002212")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002213")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass171_0 _003C_003E8__1;

		[Token(Token = "0x4002214")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000D63")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045B6")]
			[Address(RVA = "0x408FA60", Offset = "0x408FA60", VA = "0x408FA60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D64")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045B8")]
			[Address(RVA = "0x408FAB0", Offset = "0x408FAB0", VA = "0x408FAB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045B3")]
		[Address(RVA = "0x408DA80", Offset = "0x408DA80", VA = "0x408DA80")]
		[DebuggerHidden]
		public _003CDeleteJson_003Ed__171(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045B4")]
		[Address(RVA = "0x408F870", Offset = "0x408F870", VA = "0x408F870", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045B5")]
		[Address(RVA = "0x408F880", Offset = "0x408F880", VA = "0x408F880", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045B7")]
		[Address(RVA = "0x408FA70", Offset = "0x408FA70", VA = "0x408FA70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200071C")]
	[CompilerGenerated]
	private sealed class _003CExchangeOAuthCode_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002215")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002216")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002217")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string code;

		[Token(Token = "0x4002218")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002219")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x400221A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass10_0 _003C_003E8__1;

		[Token(Token = "0x17000D65")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045BC")]
			[Address(RVA = "0x408FF70", Offset = "0x408FF70", VA = "0x408FF70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D66")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045BE")]
			[Address(RVA = "0x408FFC0", Offset = "0x408FFC0", VA = "0x408FFC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045B9")]
		[Address(RVA = "0x4085140", Offset = "0x4085140", VA = "0x4085140")]
		[DebuggerHidden]
		public _003CExchangeOAuthCode_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045BA")]
		[Address(RVA = "0x408FAC0", Offset = "0x408FAC0", VA = "0x408FAC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045BB")]
		[Address(RVA = "0x408FAD0", Offset = "0x408FAD0", VA = "0x408FAD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045BD")]
		[Address(RVA = "0x408FF80", Offset = "0x408FF80", VA = "0x408FF80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200071D")]
	[CompilerGenerated]
	private sealed class _003CGetAuthMethods_003Ed__164 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400221B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400221C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400221D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400221E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass164_0 _003C_003E8__1;

		[Token(Token = "0x400221F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000D67")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045C2")]
			[Address(RVA = "0x4090320", Offset = "0x4090320", VA = "0x4090320", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D68")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045C4")]
			[Address(RVA = "0x4090370", Offset = "0x4090370", VA = "0x4090370", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045BF")]
		[Address(RVA = "0x408D430", Offset = "0x408D430", VA = "0x408D430")]
		[DebuggerHidden]
		public _003CGetAuthMethods_003Ed__164(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045C0")]
		[Address(RVA = "0x408FFD0", Offset = "0x408FFD0", VA = "0x408FFD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045C1")]
		[Address(RVA = "0x408FFE0", Offset = "0x408FFE0", VA = "0x408FFE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045C3")]
		[Address(RVA = "0x4090330", Offset = "0x4090330", VA = "0x4090330", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200071E")]
	[CompilerGenerated]
	private sealed class _003CGetCharacterInfoJson_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002220")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x4002223")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000D69")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045C8")]
			[Address(RVA = "0x40904D0", Offset = "0x40904D0", VA = "0x40904D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D6A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045CA")]
			[Address(RVA = "0x4090520", Offset = "0x4090520", VA = "0x4090520", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045C5")]
		[Address(RVA = "0x4087590", Offset = "0x4087590", VA = "0x4087590")]
		[DebuggerHidden]
		public _003CGetCharacterInfoJson_003Ed__52(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045C6")]
		[Address(RVA = "0x4090380", Offset = "0x4090380", VA = "0x4090380", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045C7")]
		[Address(RVA = "0x4090390", Offset = "0x4090390", VA = "0x4090390", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045C9")]
		[Address(RVA = "0x40904E0", Offset = "0x40904E0", VA = "0x40904E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200071F")]
	[CompilerGenerated]
	private sealed class _003CGetProfileJson_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002224")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002225")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002226")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002227")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x17000D6B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045CE")]
			[Address(RVA = "0x4090680", Offset = "0x4090680", VA = "0x4090680", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D6C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045D0")]
			[Address(RVA = "0x40906D0", Offset = "0x40906D0", VA = "0x40906D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045CB")]
		[Address(RVA = "0x4087550", Offset = "0x4087550", VA = "0x4087550")]
		[DebuggerHidden]
		public _003CGetProfileJson_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045CC")]
		[Address(RVA = "0x4090530", Offset = "0x4090530", VA = "0x4090530", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045CD")]
		[Address(RVA = "0x4090540", Offset = "0x4090540", VA = "0x4090540", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045CF")]
		[Address(RVA = "0x4090690", Offset = "0x4090690", VA = "0x4090690", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000720")]
	[CompilerGenerated]
	private sealed class _003COAuthFlow_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002228")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002229")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400222A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string provider;

		[Token(Token = "0x400222B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400222C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reportNetworkError;

		[Token(Token = "0x400222D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int attemptId;

		[Token(Token = "0x400222E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private _003C_003Ec__DisplayClass8_0 _003C_003E8__1;

		[Token(Token = "0x17000D6D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045D4")]
			[Address(RVA = "0x4090CA0", Offset = "0x4090CA0", VA = "0x4090CA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D6E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045D6")]
			[Address(RVA = "0x4090CF0", Offset = "0x4090CF0", VA = "0x4090CF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045D1")]
		[Address(RVA = "0x4084FC0", Offset = "0x4084FC0", VA = "0x4084FC0")]
		[DebuggerHidden]
		public _003COAuthFlow_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045D2")]
		[Address(RVA = "0x40906E0", Offset = "0x40906E0", VA = "0x40906E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045D3")]
		[Address(RVA = "0x40906F0", Offset = "0x40906F0", VA = "0x40906F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045D5")]
		[Address(RVA = "0x4090CB0", Offset = "0x4090CB0", VA = "0x4090CB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000721")]
	[CompilerGenerated]
	private sealed class _003CPatchProfileJson_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400222F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002230")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002231")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x4002232")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002233")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool reportNetworkError;

		[Token(Token = "0x17000D6F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045DA")]
			[Address(RVA = "0x4090E60", Offset = "0x4090E60", VA = "0x4090E60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D70")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045DC")]
			[Address(RVA = "0x4090EB0", Offset = "0x4090EB0", VA = "0x4090EB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045D7")]
		[Address(RVA = "0x4087570", Offset = "0x4087570", VA = "0x4087570")]
		[DebuggerHidden]
		public _003CPatchProfileJson_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045D8")]
		[Address(RVA = "0x4090D00", Offset = "0x4090D00", VA = "0x4090D00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045D9")]
		[Address(RVA = "0x4090D10", Offset = "0x4090D10", VA = "0x4090D10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045DB")]
		[Address(RVA = "0x4090E70", Offset = "0x4090E70", VA = "0x4090E70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000722")]
	[CompilerGenerated]
	private sealed class _003CPollUnityOAuth_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002235")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002236")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002237")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public UnityOAuthStart start;

		[Token(Token = "0x4002238")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002239")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public bool reportNetworkError;

		[Token(Token = "0x400223A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public int attemptId;

		[Token(Token = "0x400223B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass9_0 _003C_003E8__1;

		[Token(Token = "0x400223C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003CpollSeconds_003E5__2;

		[Token(Token = "0x17000D71")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045E0")]
			[Address(RVA = "0x4091600", Offset = "0x4091600", VA = "0x4091600", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D72")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045E2")]
			[Address(RVA = "0x4091650", Offset = "0x4091650", VA = "0x4091650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045DD")]
		[Address(RVA = "0x4085090", Offset = "0x4085090", VA = "0x4085090")]
		[DebuggerHidden]
		public _003CPollUnityOAuth_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045DE")]
		[Address(RVA = "0x4090EC0", Offset = "0x4090EC0", VA = "0x4090EC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045DF")]
		[Address(RVA = "0x4090ED0", Offset = "0x4090ED0", VA = "0x4090ED0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045E1")]
		[Address(RVA = "0x4091610", Offset = "0x4091610", VA = "0x4091610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000723")]
	[CompilerGenerated]
	private sealed class _003CPostJson_003Ed__172 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400223D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400223E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400223F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002240")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002241")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4002242")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x4002243")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x4002244")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass172_0 _003C_003E8__1;

		[Token(Token = "0x4002245")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public string captureField;

		[Token(Token = "0x4002246")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Action<string> captureTarget;

		[Token(Token = "0x4002247")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool applyAuthResponse;

		[Token(Token = "0x4002248")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Action<bool, string> onComplete;

		[Token(Token = "0x17000D73")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045E6")]
			[Address(RVA = "0x4091C70", Offset = "0x4091C70", VA = "0x4091C70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D74")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045E8")]
			[Address(RVA = "0x4091CC0", Offset = "0x4091CC0", VA = "0x4091CC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045E3")]
		[Address(RVA = "0x408DAA0", Offset = "0x408DAA0", VA = "0x408DAA0")]
		[DebuggerHidden]
		public _003CPostJson_003Ed__172(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045E4")]
		[Address(RVA = "0x4091660", Offset = "0x4091660", VA = "0x4091660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045E5")]
		[Address(RVA = "0x4091670", Offset = "0x4091670", VA = "0x4091670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045E7")]
		[Address(RVA = "0x4091C80", Offset = "0x4091C80", VA = "0x4091C80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000724")]
	[CompilerGenerated]
	private sealed class _003CPutCharacterInfoJson_003Ed__53 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002249")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400224A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400224B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JSONNode fallbackCharacterInfo;

		[Token(Token = "0x400224C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x400224D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400224E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string json;

		[Token(Token = "0x400224F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool reportNetworkError;

		[Token(Token = "0x17000D75")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045EC")]
			[Address(RVA = "0x4091E40", Offset = "0x4091E40", VA = "0x4091E40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D76")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045EE")]
			[Address(RVA = "0x4091E90", Offset = "0x4091E90", VA = "0x4091E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045E9")]
		[Address(RVA = "0x40875B0", Offset = "0x40875B0", VA = "0x40875B0")]
		[DebuggerHidden]
		public _003CPutCharacterInfoJson_003Ed__53(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045EA")]
		[Address(RVA = "0x4091CD0", Offset = "0x4091CD0", VA = "0x4091CD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045EB")]
		[Address(RVA = "0x4091CE0", Offset = "0x4091CE0", VA = "0x4091CE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045ED")]
		[Address(RVA = "0x4091E50", Offset = "0x4091E50", VA = "0x4091E50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000725")]
	[CompilerGenerated]
	private sealed class _003CSendApiGet_003Ed__165 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002251")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002252")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002253")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002254")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x4002255")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string bearer;

		[Token(Token = "0x4002256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool parseJson;

		[Token(Token = "0x4002257")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private _003C_003Ec__DisplayClass165_0 _003C_003E8__1;

		[Token(Token = "0x17000D77")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045F2")]
			[Address(RVA = "0x4092030", Offset = "0x4092030", VA = "0x4092030", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D78")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045F4")]
			[Address(RVA = "0x4092080", Offset = "0x4092080", VA = "0x4092080", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045EF")]
		[Address(RVA = "0x408D510", Offset = "0x408D510", VA = "0x408D510")]
		[DebuggerHidden]
		public _003CSendApiGet_003Ed__165(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045F0")]
		[Address(RVA = "0x4091EA0", Offset = "0x4091EA0", VA = "0x4091EA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045F1")]
		[Address(RVA = "0x4091EB0", Offset = "0x4091EB0", VA = "0x4091EB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045F3")]
		[Address(RVA = "0x4092040", Offset = "0x4092040", VA = "0x4092040", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000726")]
	[CompilerGenerated]
	private struct _003CSendApiGetAsync_003Ed__166 : IAsyncStateMachine
	{
		[Token(Token = "0x4002258")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4002259")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400225A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string path;

		[Token(Token = "0x400225B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bearer;

		[Token(Token = "0x400225C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool parseJson;

		[Token(Token = "0x400225D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x400225E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60045F5")]
		[Address(RVA = "0x4092090", Offset = "0x4092090", VA = "0x4092090", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60045F6")]
		[Address(RVA = "0x4092800", Offset = "0x4092800", VA = "0x4092800", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000727")]
	[CompilerGenerated]
	private sealed class _003CSendApiJson_003Ed__167 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400225F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002260")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002261")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002262")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002263")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string method;

		[Token(Token = "0x4002264")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public string path;

		[Token(Token = "0x4002265")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x4002266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public string bearer;

		[Token(Token = "0x4002267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool parseJson;

		[Token(Token = "0x4002268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
		public bool reportNetworkError;

		[Token(Token = "0x4002269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public int? timeoutSeconds;

		[Token(Token = "0x400226A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private _003C_003Ec__DisplayClass167_0 _003C_003E8__1;

		[Token(Token = "0x17000D79")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045FA")]
			[Address(RVA = "0x40929E0", Offset = "0x40929E0", VA = "0x40929E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D7A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045FC")]
			[Address(RVA = "0x4092A30", Offset = "0x4092A30", VA = "0x4092A30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045F7")]
		[Address(RVA = "0x408D710", Offset = "0x408D710", VA = "0x408D710")]
		[DebuggerHidden]
		public _003CSendApiJson_003Ed__167(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045F8")]
		[Address(RVA = "0x4092810", Offset = "0x4092810", VA = "0x4092810", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045F9")]
		[Address(RVA = "0x4092820", Offset = "0x4092820", VA = "0x4092820", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045FB")]
		[Address(RVA = "0x40929F0", Offset = "0x40929F0", VA = "0x40929F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000728")]
	[CompilerGenerated]
	private struct _003CSendApiJsonAsync_003Ed__168 : IAsyncStateMachine
	{
		[Token(Token = "0x400226B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400226C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400226D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string method;

		[Token(Token = "0x400226E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string path;

		[Token(Token = "0x400226F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string json;

		[Token(Token = "0x4002270")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string bearer;

		[Token(Token = "0x4002271")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool parseJson;

		[Token(Token = "0x4002272")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
		public bool reportNetworkError;

		[Token(Token = "0x4002273")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int? timeoutSeconds;

		[Token(Token = "0x4002274")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Action<AottgApiResult> onComplete;

		[Token(Token = "0x4002275")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UniTask<AottgApiResult>.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60045FD")]
		[Address(RVA = "0x4092A40", Offset = "0x4092A40", VA = "0x4092A40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60045FE")]
		[Address(RVA = "0x40933D0", Offset = "0x40933D0", VA = "0x40933D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000729")]
	[CompilerGenerated]
	private sealed class _003CSendMeJson_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002276")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002277")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002278")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string method;

		[Token(Token = "0x4002279")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x400227A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string path;

		[Token(Token = "0x400227B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x400227C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public string json;

		[Token(Token = "0x400227D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool reportNetworkError;

		[Token(Token = "0x400227E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private _003C_003Ec__DisplayClass54_0 _003C_003E8__1;

		[Token(Token = "0x17000D7B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004602")]
			[Address(RVA = "0x4093730", Offset = "0x4093730", VA = "0x4093730", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D7C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004604")]
			[Address(RVA = "0x4093780", Offset = "0x4093780", VA = "0x4093780", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045FF")]
		[Address(RVA = "0x40876B0", Offset = "0x40876B0", VA = "0x40876B0")]
		[DebuggerHidden]
		public _003CSendMeJson_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004600")]
		[Address(RVA = "0x40933E0", Offset = "0x40933E0", VA = "0x40933E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004601")]
		[Address(RVA = "0x40933F0", Offset = "0x40933F0", VA = "0x40933F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004603")]
		[Address(RVA = "0x4093740", Offset = "0x4093740", VA = "0x4093740", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200072A")]
	[CompilerGenerated]
	private sealed class _003CSendMeReadJson_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400227F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002280")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002281")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AccountManager _003C_003E4__this;

		[Token(Token = "0x4002282")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002283")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private _003C_003Ec__DisplayClass55_0 _003C_003E8__1;

		[Token(Token = "0x4002284")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Action<bool, string, JSONNode> onComplete;

		[Token(Token = "0x17000D7D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004608")]
			[Address(RVA = "0x40939F0", Offset = "0x40939F0", VA = "0x40939F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D7E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600460A")]
			[Address(RVA = "0x4093A40", Offset = "0x4093A40", VA = "0x4093A40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004605")]
		[Address(RVA = "0x4087770", Offset = "0x4087770", VA = "0x4087770")]
		[DebuggerHidden]
		public _003CSendMeReadJson_003Ed__55(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004606")]
		[Address(RVA = "0x4093790", Offset = "0x4093790", VA = "0x4093790", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004607")]
		[Address(RVA = "0x40937A0", Offset = "0x40937A0", VA = "0x40937A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004609")]
		[Address(RVA = "0x4093A00", Offset = "0x4093A00", VA = "0x4093A00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40021C9")]
	private const int OAuthRequestTimeoutSeconds = 10;

	[Token(Token = "0x40021CA")]
	private const int UnityOAuthDefaultPollSeconds = 2;

	[Token(Token = "0x40021CB")]
	private const int UnityOAuthFallbackTimeoutMinutes = 10;

	[Token(Token = "0x40021CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Action<bool, string> _oauthPendingCallback;

	[Token(Token = "0x40021CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Coroutine _oauthFlowCoroutine;

	[Token(Token = "0x40021CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _oauthAttemptId;

	[Token(Token = "0x40021D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static bool _ownProfileCacheHasValue;

	[Token(Token = "0x40021D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private static bool _ownProfileCacheValid;

	[Token(Token = "0x40021D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private static bool _ownProfileFetchInFlight;

	[Token(Token = "0x40021D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly List<Action<bool, string>> _ownProfileFetchSubscribers;

	[Token(Token = "0x40021D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static bool _ownCharacterInfoCacheHasValue;

	[Token(Token = "0x40021D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private static bool _ownCharacterInfoCacheValid;

	[Token(Token = "0x40021D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private static bool _ownCharacterInfoFetchInFlight;

	[Token(Token = "0x40021DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static JSONNode _ownCharacterInfoCache;

	[Token(Token = "0x40021DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly List<Action<bool, string, JSONNode>> _ownCharacterInfoFetchSubscribers;

	[Token(Token = "0x40021DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static AccountManager _instance;

	[Token(Token = "0x40021DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static bool _sceneInvalidationSubscribed;

	[Token(Token = "0x40021DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static string BaseUrl;

	[Token(Token = "0x40021DF")]
	private const string RefreshTokenFileName = "AccountRefresh.dat";

	[Token(Token = "0x40021E0")]
	private const string EmailPasswordAuthMethod = "email_password";

	[Token(Token = "0x40021E1")]
	private const string DiscordAuthMethod = "discord";

	[Token(Token = "0x40021E2")]
	private const string GoogleAuthMethod = "google";

	[Token(Token = "0x40021EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static string _refreshToken;

	[Token(Token = "0x40021EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static readonly HashSet<string> _enabledAuthMethods;

	[Token(Token = "0x17000D48")]
	public static string ProfileDescription
	{
		[Token(Token = "0x6004527")]
		[Address(RVA = "0x4085C50", Offset = "0x4085C50", VA = "0x4085C50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004528")]
		[Address(RVA = "0x4085CC0", Offset = "0x4085CC0", VA = "0x4085CC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D49")]
	public static string ProfileAvatarKey
	{
		[Token(Token = "0x6004529")]
		[Address(RVA = "0x4085D20", Offset = "0x4085D20", VA = "0x4085D20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600452A")]
		[Address(RVA = "0x4085D90", Offset = "0x4085D90", VA = "0x4085D90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D4A")]
	public static string ProfileBannerKey
	{
		[Token(Token = "0x600452B")]
		[Address(RVA = "0x4085DF0", Offset = "0x4085DF0", VA = "0x4085DF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600452C")]
		[Address(RVA = "0x4085E60", Offset = "0x4085E60", VA = "0x4085E60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D4B")]
	public static Dictionary<string, string> ProfileSocials
	{
		[Token(Token = "0x600452D")]
		[Address(RVA = "0x4085EC0", Offset = "0x4085EC0", VA = "0x4085EC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D4C")]
	public static bool HasCachedOwnProfile
	{
		[Token(Token = "0x600452E")]
		[Address(RVA = "0x4085F30", Offset = "0x4085F30", VA = "0x4085F30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D4D")]
	public static bool HasCachedCharacterInfo
	{
		[Token(Token = "0x600452F")]
		[Address(RVA = "0x4085FA0", Offset = "0x4085FA0", VA = "0x4085FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D4E")]
	public static string AuthToken
	{
		[Token(Token = "0x6004544")]
		[Address(RVA = "0x4088B60", Offset = "0x4088B60", VA = "0x4088B60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004545")]
		[Address(RVA = "0x4088BD0", Offset = "0x4088BD0", VA = "0x4088BD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D4F")]
	public static long AuthTokenExpiresUnix
	{
		[Token(Token = "0x6004546")]
		[Address(RVA = "0x4088C30", Offset = "0x4088C30", VA = "0x4088C30")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6004547")]
		[Address(RVA = "0x4088CA0", Offset = "0x4088CA0", VA = "0x4088CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D50")]
	public static string PhotonToken
	{
		[Token(Token = "0x6004548")]
		[Address(RVA = "0x4088D00", Offset = "0x4088D00", VA = "0x4088D00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004549")]
		[Address(RVA = "0x4088D70", Offset = "0x4088D70", VA = "0x4088D70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D51")]
	public static long PhotonTokenExpiresUnix
	{
		[Token(Token = "0x600454A")]
		[Address(RVA = "0x4088DD0", Offset = "0x4088DD0", VA = "0x4088DD0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600454B")]
		[Address(RVA = "0x4088E40", Offset = "0x4088E40", VA = "0x4088E40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D52")]
	public static AccountLoginResponse LoginResponse
	{
		[Token(Token = "0x600454C")]
		[Address(RVA = "0x4088EA0", Offset = "0x4088EA0", VA = "0x4088EA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600454D")]
		[Address(RVA = "0x4088F10", Offset = "0x4088F10", VA = "0x4088F10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D53")]
	public static string UserId
	{
		[Token(Token = "0x600454E")]
		[Address(RVA = "0x4088930", Offset = "0x4088930", VA = "0x4088930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D54")]
	public static string Username
	{
		[Token(Token = "0x600454F")]
		[Address(RVA = "0x4088F80", Offset = "0x4088F80", VA = "0x4088F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D55")]
	public static string Email
	{
		[Token(Token = "0x6004550")]
		[Address(RVA = "0x40891B0", Offset = "0x40891B0", VA = "0x40891B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D56")]
	public static bool EmailVerified
	{
		[Token(Token = "0x6004551")]
		[Address(RVA = "0x40893E0", Offset = "0x40893E0", VA = "0x40893E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D57")]
	public static string[] Roles
	{
		[Token(Token = "0x6004552")]
		[Address(RVA = "0x4089610", Offset = "0x4089610", VA = "0x4089610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D58")]
	public static string PhotonUserId
	{
		[Token(Token = "0x6004553")]
		[Address(RVA = "0x4089840", Offset = "0x4089840", VA = "0x4089840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D59")]
	public static JSONNode Patreon
	{
		[Token(Token = "0x6004554")]
		[Address(RVA = "0x4089A70", Offset = "0x4089A70", VA = "0x4089A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D5A")]
	public static long RefreshTokenExpiresUnix
	{
		[Token(Token = "0x6004556")]
		[Address(RVA = "0x408A120", Offset = "0x408A120", VA = "0x408A120")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6004557")]
		[Address(RVA = "0x408A190", Offset = "0x408A190", VA = "0x408A190")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D5B")]
	public static bool IsLoggedIn
	{
		[Token(Token = "0x6004558")]
		[Address(RVA = "0x40863D0", Offset = "0x40863D0", VA = "0x40863D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D5C")]
	public static bool HasRefreshToken
	{
		[Token(Token = "0x6004559")]
		[Address(RVA = "0x408A1F0", Offset = "0x408A1F0", VA = "0x408A1F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D5D")]
	public static bool IsRefreshInProgress
	{
		[Token(Token = "0x600455A")]
		[Address(RVA = "0x408A250", Offset = "0x408A250", VA = "0x408A250")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600455B")]
		[Address(RVA = "0x408A2C0", Offset = "0x408A2C0", VA = "0x408A2C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D5E")]
	public static bool KeepSignedIn
	{
		[Token(Token = "0x600455C")]
		[Address(RVA = "0x408A320", Offset = "0x408A320", VA = "0x408A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600455D")]
		[Address(RVA = "0x408A390", Offset = "0x408A390", VA = "0x408A390")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D5F")]
	public static bool HasAuthMethodsSnapshot
	{
		[Token(Token = "0x600455E")]
		[Address(RVA = "0x408A3F0", Offset = "0x408A3F0", VA = "0x408A3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600455F")]
		[Address(RVA = "0x408A460", Offset = "0x408A460", VA = "0x408A460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D60")]
	public static bool DevMode
	{
		[Token(Token = "0x6004560")]
		[Address(RVA = "0x408A4C0", Offset = "0x408A4C0", VA = "0x408A4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D61")]
	public static string PendingVerifyToken
	{
		[Token(Token = "0x6004561")]
		[Address(RVA = "0x408A530", Offset = "0x408A530", VA = "0x408A530")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004562")]
		[Address(RVA = "0x408A5A0", Offset = "0x408A5A0", VA = "0x408A5A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D62")]
	public static string PendingEmail
	{
		[Token(Token = "0x6004563")]
		[Address(RVA = "0x408A610", Offset = "0x408A610", VA = "0x408A610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004564")]
		[Address(RVA = "0x408A680", Offset = "0x408A680", VA = "0x408A680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public static event Action OnLoggedIn
	{
		[Token(Token = "0x6004565")]
		[Address(RVA = "0x408A6F0", Offset = "0x408A6F0", VA = "0x408A6F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004566")]
		[Address(RVA = "0x408A7E0", Offset = "0x408A7E0", VA = "0x408A7E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	public static event Action OnLoggedOut
	{
		[Token(Token = "0x6004567")]
		[Address(RVA = "0x408A8D0", Offset = "0x408A8D0", VA = "0x408A8D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004568")]
		[Address(RVA = "0x408A9C0", Offset = "0x408A9C0", VA = "0x408A9C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public static event Action OnAuthMethodsChanged
	{
		[Token(Token = "0x6004569")]
		[Address(RVA = "0x408AAB0", Offset = "0x408AAB0", VA = "0x408AAB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600456A")]
		[Address(RVA = "0x408ABA0", Offset = "0x408ABA0", VA = "0x408ABA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600451C")]
	[Address(RVA = "0x4084C90", Offset = "0x4084C90", VA = "0x4084C90")]
	public static void LoginWithOAuth(string provider, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x600451D")]
	[Address(RVA = "0x4084F40", Offset = "0x4084F40", VA = "0x4084F40")]
	public static void CancelOAuthLogin()
	{
	}

	[Token(Token = "0x600451E")]
	[Address(RVA = "0x4084EA0", Offset = "0x4084EA0", VA = "0x4084EA0")]
	[IteratorStateMachine(typeof(_003COAuthFlow_003Ed__8))]
	private IEnumerator OAuthFlow(string provider, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x600451F")]
	[Address(RVA = "0x4084FE0", Offset = "0x4084FE0", VA = "0x4084FE0")]
	[IteratorStateMachine(typeof(_003CPollUnityOAuth_003Ed__9))]
	private IEnumerator PollUnityOAuth(UnityOAuthStart start, int attemptId, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6004520")]
	[Address(RVA = "0x40850B0", Offset = "0x40850B0", VA = "0x40850B0")]
	[IteratorStateMachine(typeof(_003CExchangeOAuthCode_003Ed__10))]
	private IEnumerator ExchangeOAuthCode(string code, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6004521")]
	[Address(RVA = "0x4084E00", Offset = "0x4084E00", VA = "0x4084E00")]
	private void CancelOAuthFlow()
	{
	}

	[Token(Token = "0x6004522")]
	[Address(RVA = "0x4085160", Offset = "0x4085160", VA = "0x4085160")]
	private bool IsCurrentOAuthAttempt(int attemptId)
	{
		return default(bool);
	}

	[Token(Token = "0x6004523")]
	[Address(RVA = "0x40851D0", Offset = "0x40851D0", VA = "0x40851D0")]
	private static void CompleteOAuth(bool success, string error)
	{
	}

	[Token(Token = "0x6004524")]
	[Address(RVA = "0x4085300", Offset = "0x4085300", VA = "0x4085300")]
	private static bool TryParseUnityOAuthStart(string json, out UnityOAuthStart start)
	{
		return default(bool);
	}

	[Token(Token = "0x6004525")]
	[Address(RVA = "0x4085900", Offset = "0x4085900", VA = "0x4085900")]
	private static bool TryParseUnityOAuthStatus(string json, out string status, out string code, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004526")]
	[Address(RVA = "0x4085C00", Offset = "0x4085C00", VA = "0x4085C00")]
	private static string NormalizeOAuthProvider(string provider)
	{
		return null;
	}

	[Token(Token = "0x6004530")]
	[Address(RVA = "0x4086010", Offset = "0x4086010", VA = "0x4086010")]
	public static void GetProfile(Action<bool, string> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004531")]
	[Address(RVA = "0x4086510", Offset = "0x4086510", VA = "0x4086510")]
	public static void UpdateProfile(string displayName, string description, string avatarKey, string bannerKey, Dictionary<string, string> socials, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004532")]
	[Address(RVA = "0x4086C50", Offset = "0x4086C50", VA = "0x4086C50")]
	public static void GetCharacterInfo(Action<bool, string, JSONNode> onComplete, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6004533")]
	[Address(RVA = "0x40871E0", Offset = "0x40871E0", VA = "0x40871E0")]
	public static void UpdateCharacterInfo(JSONNode characterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004534")]
	[Address(RVA = "0x4086480", Offset = "0x4086480", VA = "0x4086480")]
	[IteratorStateMachine(typeof(_003CGetProfileJson_003Ed__50))]
	private IEnumerator GetProfileJson(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6004535")]
	[Address(RVA = "0x4086BA0", Offset = "0x4086BA0", VA = "0x4086BA0")]
	[IteratorStateMachine(typeof(_003CPatchProfileJson_003Ed__51))]
	private IEnumerator PatchProfileJson(string json, Action<bool, string> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6004536")]
	[Address(RVA = "0x4087150", Offset = "0x4087150", VA = "0x4087150")]
	[IteratorStateMachine(typeof(_003CGetCharacterInfoJson_003Ed__52))]
	private IEnumerator GetCharacterInfoJson(Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6004537")]
	[Address(RVA = "0x4087490", Offset = "0x4087490", VA = "0x4087490")]
	[IteratorStateMachine(typeof(_003CPutCharacterInfoJson_003Ed__53))]
	private IEnumerator PutCharacterInfoJson(string json, JSONNode fallbackCharacterInfo, Action<bool, string, JSONNode> onComplete, bool reportNetworkError)
	{
		return null;
	}

	[Token(Token = "0x6004538")]
	[Address(RVA = "0x40875D0", Offset = "0x40875D0", VA = "0x40875D0")]
	[IteratorStateMachine(typeof(_003CSendMeJson_003Ed__54))]
	private IEnumerator SendMeJson(string method, string path, string json, Action<bool, string, JSONNode> onComplete, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x6004539")]
	[Address(RVA = "0x40876D0", Offset = "0x40876D0", VA = "0x40876D0")]
	[IteratorStateMachine(typeof(_003CSendMeReadJson_003Ed__55))]
	private IEnumerator SendMeReadJson(string path, Action<bool, string, JSONNode> onComplete)
	{
		return null;
	}

	[Token(Token = "0x600453A")]
	[Address(RVA = "0x4087790", Offset = "0x4087790", VA = "0x4087790")]
	private static void ApplyProfileResponse(JSONNode profile)
	{
	}

	[Token(Token = "0x600453B")]
	[Address(RVA = "0x4088030", Offset = "0x4088030", VA = "0x4088030")]
	private static void CompleteProfileFetch(bool success, string error)
	{
	}

	[Token(Token = "0x600453C")]
	[Address(RVA = "0x4088210", Offset = "0x4088210", VA = "0x4088210")]
	private static void CompleteCharacterInfoFetch(bool success, string error, JSONNode characterInfo)
	{
	}

	[Token(Token = "0x600453D")]
	[Address(RVA = "0x4087E70", Offset = "0x4087E70", VA = "0x4087E70")]
	private static void MarkOwnProfileCacheFresh()
	{
	}

	[Token(Token = "0x600453E")]
	[Address(RVA = "0x4088490", Offset = "0x4088490", VA = "0x4088490")]
	private static void MarkCharacterInfoCacheFresh(JSONNode characterInfo)
	{
	}

	[Token(Token = "0x600453F")]
	[Address(RVA = "0x4087040", Offset = "0x4087040", VA = "0x4087040")]
	private static JSONNode CloneJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004540")]
	[Address(RVA = "0x4088550", Offset = "0x4088550", VA = "0x4088550")]
	private static void InvalidateOwnAccountCache()
	{
	}

	[Token(Token = "0x6004541")]
	[Address(RVA = "0x40885A0", Offset = "0x40885A0", VA = "0x40885A0")]
	private static void ClearOwnAccountCache()
	{
	}

	[Token(Token = "0x6004542")]
	[Address(RVA = "0x4088690", Offset = "0x4088690", VA = "0x4088690")]
	private static void ClearProfileResponse()
	{
	}

	[Token(Token = "0x6004543")]
	[Address(RVA = "0x40888C0", Offset = "0x40888C0", VA = "0x40888C0")]
	private static void ClearOwnPublicProfileCache()
	{
	}

	[Token(Token = "0x6004555")]
	[Address(RVA = "0x4089D60", Offset = "0x4089D60", VA = "0x4089D60")]
	public static bool IsOAuthProviderLinked(string provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600456B")]
	[Address(RVA = "0x408AC90", Offset = "0x408AC90", VA = "0x408AC90")]
	public static void Init()
	{
	}

	[Token(Token = "0x600456C")]
	[Address(RVA = "0x408B6E0", Offset = "0x408B6E0", VA = "0x408B6E0")]
	public static void SetKeepSignedIn(bool value)
	{
	}

	[Token(Token = "0x600456D")]
	[Address(RVA = "0x408BBA0", Offset = "0x408BBA0", VA = "0x408BBA0")]
	public static bool IsAuthMethodEnabled(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x600456E")]
	[Address(RVA = "0x4089DB0", Offset = "0x4089DB0", VA = "0x4089DB0")]
	public static AccountLoginResponse.OAuthLinkData GetOAuthLink(string provider)
	{
		return null;
	}

	[Token(Token = "0x600456F")]
	[Address(RVA = "0x408B580", Offset = "0x408B580", VA = "0x408B580")]
	public static void RefreshAuthMethods(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x6004570")]
	[Address(RVA = "0x408BCC0", Offset = "0x408BCC0", VA = "0x408BCC0")]
	public static void Register(string displayName, string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004571")]
	[Address(RVA = "0x408C220", Offset = "0x408C220", VA = "0x408C220")]
	public static void Login(string email, string password, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004572")]
	[Address(RVA = "0x408B230", Offset = "0x408B230", VA = "0x408B230")]
	public static void Refresh(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004573")]
	[Address(RVA = "0x408C3C0", Offset = "0x408C3C0", VA = "0x408C3C0")]
	public static void Logout([Optional] Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004574")]
	[Address(RVA = "0x408CB40", Offset = "0x408CB40", VA = "0x408CB40")]
	public static void GoOffline()
	{
	}

	[Token(Token = "0x6004575")]
	[Address(RVA = "0x408CC20", Offset = "0x408CC20", VA = "0x408CC20")]
	public static void GoOnline(Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004576")]
	[Address(RVA = "0x408CD90", Offset = "0x408CD90", VA = "0x408CD90")]
	public static string GetWebLoginUrlWithSession()
	{
		return null;
	}

	[Token(Token = "0x6004577")]
	[Address(RVA = "0x408CE30", Offset = "0x408CE30", VA = "0x408CE30")]
	public static void VerifyEmail(string token, Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x6004578")]
	[Address(RVA = "0x408D020", Offset = "0x408D020", VA = "0x408D020")]
	public static void ForgotPassword(string email, Action<bool, string> onComplete, bool reportNetworkError = true)
	{
	}

	[Token(Token = "0x6004579")]
	[Address(RVA = "0x408D170", Offset = "0x408D170", VA = "0x408D170")]
	public static void PatreonUnlink(Action<bool, string> onComplete)
	{
	}

	[Token(Token = "0x600457A")]
	[Address(RVA = "0x408BC40", Offset = "0x408BC40", VA = "0x408BC40")]
	[IteratorStateMachine(typeof(_003CGetAuthMethods_003Ed__164))]
	private IEnumerator GetAuthMethods(Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x600457B")]
	[Address(RVA = "0x408D450", Offset = "0x408D450", VA = "0x408D450")]
	[IteratorStateMachine(typeof(_003CSendApiGet_003Ed__165))]
	private IEnumerator SendApiGet(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return null;
	}

	[Token(Token = "0x600457C")]
	[Address(RVA = "0x408D530", Offset = "0x408D530", VA = "0x408D530")]
	[AsyncStateMachine(typeof(_003CSendApiGetAsync_003Ed__166))]
	private UniTask SendApiGetAsync(string path, string bearer, bool parseJson, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600457D")]
	[Address(RVA = "0x408D610", Offset = "0x408D610", VA = "0x408D610")]
	[IteratorStateMachine(typeof(_003CSendApiJson_003Ed__167))]
	private IEnumerator SendApiJson(string method, string path, string json, string bearer, bool parseJson, Action<AottgApiResult> onComplete, [Optional][DefaultParameterValue(true)] bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return null;
	}

	[Token(Token = "0x600457E")]
	[Address(RVA = "0x408D730", Offset = "0x408D730", VA = "0x408D730")]
	[AsyncStateMachine(typeof(_003CSendApiJsonAsync_003Ed__168))]
	private UniTask SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, int? timeoutSeconds, Action<AottgApiResult> onComplete)
	{
		return default(UniTask);
	}

	[Token(Token = "0x600457F")]
	[Address(RVA = "0x408D860", Offset = "0x408D860", VA = "0x408D860")]
	private static UniTask<AottgApiResult> SendApiJsonAsync(string method, string path, string json, string bearer, bool parseJson, bool reportNetworkError, [Optional] int? timeoutSeconds)
	{
		return default(UniTask<AottgApiResult>);
	}

	[Token(Token = "0x6004580")]
	[Address(RVA = "0x408D990", Offset = "0x408D990", VA = "0x408D990")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004581")]
	[Address(RVA = "0x408D380", Offset = "0x408D380", VA = "0x408D380")]
	[IteratorStateMachine(typeof(_003CDeleteJson_003Ed__171))]
	private IEnumerator DeleteJson(string path, string bearer, Action<bool, string> onComplete)
	{
		return null;
	}

	[Token(Token = "0x6004582")]
	[Address(RVA = "0x408C110", Offset = "0x408C110", VA = "0x408C110")]
	[IteratorStateMachine(typeof(_003CPostJson_003Ed__172))]
	private IEnumerator PostJson(string path, string json, string bearer, Action<bool, string> onComplete, bool applyAuthResponse, [Optional] string captureField, [Optional] Action<string> captureTarget, bool reportNetworkError = true)
	{
		return null;
	}

	[Token(Token = "0x6004583")]
	[Address(RVA = "0x408DAC0", Offset = "0x408DAC0", VA = "0x408DAC0")]
	private static bool ApplyAuthMethodsResponse(string json)
	{
		return default(bool);
	}

	[Token(Token = "0x6004584")]
	[Address(RVA = "0x408E360", Offset = "0x408E360", VA = "0x408E360")]
	private static void ApplyAuthResponse(string json)
	{
	}

	[Token(Token = "0x6004585")]
	[Address(RVA = "0x408E980", Offset = "0x408E980", VA = "0x408E980")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004586")]
	[Address(RVA = "0x408EA20", Offset = "0x408EA20", VA = "0x408EA20")]
	private static long ParseIsoToUnix(string iso)
	{
		return default(long);
	}

	[Token(Token = "0x6004587")]
	[Address(RVA = "0x408C590", Offset = "0x408C590", VA = "0x408C590")]
	private static void ClearSession(bool clearRefreshToken = true)
	{
	}

	[Token(Token = "0x6004588")]
	[Address(RVA = "0x408AF20", Offset = "0x408AF20", VA = "0x408AF20")]
	private static string GetRefreshTokenPath()
	{
		return null;
	}

	[Token(Token = "0x6004589")]
	[Address(RVA = "0x408B950", Offset = "0x408B950", VA = "0x408B950")]
	private static void SaveRefreshToken()
	{
	}

	[Token(Token = "0x600458A")]
	[Address(RVA = "0x408AF90", Offset = "0x408AF90", VA = "0x408AF90")]
	private static void LoadRefreshToken()
	{
	}

	[Token(Token = "0x600458B")]
	[Address(RVA = "0x408B810", Offset = "0x408B810", VA = "0x408B810")]
	private static void DeleteRefreshToken()
	{
	}

	[Token(Token = "0x600458C")]
	[Address(RVA = "0x408EBF0", Offset = "0x408EBF0", VA = "0x408EBF0")]
	public AccountManager()
	{
	}
}
