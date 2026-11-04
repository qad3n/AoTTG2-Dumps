// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicServicesBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicServicesBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace CustomLogic;

[Token(Token = "0x2000578")]
[CompilerGenerated]
internal class CustomLogicServicesBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000579")]
	public static class Factory
	{
		[Token(Token = "0x60033D2")]
		[Address(RVA = "0x203CE80", Offset = "0x203B480", VA = "0x18203CE80")]
		public static CustomLogicServicesBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200057A")]
	public static class Bindings
	{
		[Token(Token = "0x40017AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60033D3")]
		[Address(RVA = "0x2019700", Offset = "0x2017D00", VA = "0x182019700")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60033D4")]
		[Address(RVA = "0x20257F0", Offset = "0x2023DF0", VA = "0x1820257F0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__CheckPermissions()
		{
			return null;
		}

		[Token(Token = "0x60033D5")]
		[Address(RVA = "0x2028770", Offset = "0x2026D70", VA = "0x182028770")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__GetSecret()
		{
			return null;
		}

		[Token(Token = "0x60033D6")]
		[Address(RVA = "0x2028BF0", Offset = "0x20271F0", VA = "0x182028BF0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x60033D7")]
		[Address(RVA = "0x2029500", Offset = "0x2027B00", VA = "0x182029500")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Post()
		{
			return null;
		}

		[Token(Token = "0x60033D8")]
		[Address(RVA = "0x2029980", Offset = "0x2027F80", VA = "0x182029980")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Put()
		{
			return null;
		}

		[Token(Token = "0x60033D9")]
		[Address(RVA = "0x2026210", Offset = "0x2024810", VA = "0x182026210")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Delete()
		{
			return null;
		}
	}

	[Token(Token = "0x200057C")]
	[CompilerGenerated]
	private sealed class _003CDeleteRequest_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40017B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40017B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40017B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x40017B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x40017B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x17000989")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033E7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700098A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033E9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033E3")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDeleteRequest_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033E4")]
		[Address(RVA = "0x20751F0", Offset = "0x20737F0", VA = "0x1820751F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033E5")]
		[Address(RVA = "0x2074E20", Offset = "0x2073420", VA = "0x182074E20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60033E6")]
		[Address(RVA = "0x2075280", Offset = "0x2073880", VA = "0x182075280")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60033E8")]
		[Address(RVA = "0x20751B0", Offset = "0x20737B0", VA = "0x1820751B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200057D")]
	[CompilerGenerated]
	private sealed class _003CGetRequest_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40017BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40017BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40017BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x40017BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x40017BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CwebRequest_003E5__2;

		[Token(Token = "0x1700098B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033EE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700098C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033F0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033EA")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetRequest_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033EB")]
		[Address(RVA = "0x20756C0", Offset = "0x2073CC0", VA = "0x1820756C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033EC")]
		[Address(RVA = "0x20752D0", Offset = "0x20738D0", VA = "0x1820752D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60033ED")]
		[Address(RVA = "0x2075750", Offset = "0x2073D50", VA = "0x182075750")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60033EF")]
		[Address(RVA = "0x2075680", Offset = "0x2073C80", VA = "0x182075680", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200057E")]
	[CompilerGenerated]
	private sealed class _003CPostRequest_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40017BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40017C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40017C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x40017C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x40017C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string format;

		[Token(Token = "0x40017C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public UserMethod callback;

		[Token(Token = "0x40017C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x1700098D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033F5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700098E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033F7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033F1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPostRequest_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033F2")]
		[Address(RVA = "0x2075BA0", Offset = "0x20741A0", VA = "0x182075BA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033F3")]
		[Address(RVA = "0x20757A0", Offset = "0x2073DA0", VA = "0x1820757A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60033F4")]
		[Address(RVA = "0x2075C30", Offset = "0x2074230", VA = "0x182075C30")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60033F6")]
		[Address(RVA = "0x2075B60", Offset = "0x2074160", VA = "0x182075B60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200057F")]
	[CompilerGenerated]
	private sealed class _003CPutRequest_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40017C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40017C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40017C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x40017C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x40017CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public UserMethod callback;

		[Token(Token = "0x40017CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x1700098F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033FC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000990")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033FE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033F8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPutRequest_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033F9")]
		[Address(RVA = "0x2076080", Offset = "0x2074680", VA = "0x182076080", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033FA")]
		[Address(RVA = "0x2075C80", Offset = "0x2074280", VA = "0x182075C80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60033FB")]
		[Address(RVA = "0x2076110", Offset = "0x2074710", VA = "0x182076110")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60033FD")]
		[Address(RVA = "0x2076040", Offset = "0x2074640", VA = "0x182076040", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40017AC")]
	private const int RequestTimeoutSeconds = 15;

	[Token(Token = "0x17000985")]
	public override string ClassName
	{
		[Token(Token = "0x60033CE")]
		[Address(RVA = "0x203C230", Offset = "0x203A830", VA = "0x18203C230", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000986")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60033CF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000987")]
	public override bool IsStatic
	{
		[Token(Token = "0x60033D0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000988")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60033D1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033BD")]
	[Address(RVA = "0x203C1E0", Offset = "0x203A7E0", VA = "0x18203C1E0")]
	public CustomLogicServicesBuiltin()
	{
	}

	[Token(Token = "0x60033BE")]
	[Address(RVA = "0x203BC20", Offset = "0x203A220", VA = "0x18203BC20")]
	private static bool IsAllowedToRunBase()
	{
		return default(bool);
	}

	[Token(Token = "0x60033BF")]
	[Address(RVA = "0x203BCF0", Offset = "0x203A2F0", VA = "0x18203BCF0")]
	private static bool IsAllowedToRun(string service, out string baseUrl)
	{
		return default(bool);
	}

	[Token(Token = "0x60033C0")]
	[Address(RVA = "0x203AFC0", Offset = "0x20395C0", VA = "0x18203AFC0")]
	private static string CheckMe(string service)
	{
		return null;
	}

	[Token(Token = "0x60033C1")]
	[Address(RVA = "0x203B210", Offset = "0x2039810", VA = "0x18203B210")]
	public static bool CheckPermissions(string service)
	{
		return default(bool);
	}

	[Token(Token = "0x60033C2")]
	[Address(RVA = "0x203B860", Offset = "0x2039E60", VA = "0x18203B860")]
	public static string GetSecret(string key)
	{
		return null;
	}

	[Token(Token = "0x60033C3")]
	[Address(RVA = "0x203B520", Offset = "0x2039B20", VA = "0x18203B520")]
	private static string GetEndpoint(string baseUrl, string route)
	{
		return null;
	}

	[Token(Token = "0x60033C4")]
	[Address(RVA = "0x203BB30", Offset = "0x203A130", VA = "0x18203BB30")]
	public static void Get(string service, string route, UserMethod callback)
	{
	}

	[Token(Token = "0x60033C5")]
	[Address(RVA = "0x203BE30", Offset = "0x203A430", VA = "0x18203BE30")]
	public static void Post(string service, string route, string data, [Optional] UserMethod callback, string format = "application/json")
	{
	}

	[Token(Token = "0x60033C6")]
	[Address(RVA = "0x203B420", Offset = "0x2039A20", VA = "0x18203B420")]
	private static string GetContentType(string format)
	{
		return null;
	}

	[Token(Token = "0x60033C7")]
	[Address(RVA = "0x203C0D0", Offset = "0x203A6D0", VA = "0x18203C0D0")]
	public static void Put(string service, string route, string data, [Optional] UserMethod callback)
	{
	}

	[Token(Token = "0x60033C8")]
	[Address(RVA = "0x203B330", Offset = "0x2039930", VA = "0x18203B330")]
	public static void Delete(string service, string route, [Optional] UserMethod callback)
	{
	}

	[Token(Token = "0x60033C9")]
	[Address(RVA = "0x203B7D0", Offset = "0x2039DD0", VA = "0x18203B7D0")]
	[IteratorStateMachine(typeof(_003CGetRequest_003Ed__13))]
	private static IEnumerator GetRequest(string uri, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x60033CA")]
	[Address(RVA = "0x203BD80", Offset = "0x203A380", VA = "0x18203BD80")]
	[IteratorStateMachine(typeof(_003CPostRequest_003Ed__14))]
	private static IEnumerator PostRequest(string uri, string data, UserMethod callback, string format)
	{
		return null;
	}

	[Token(Token = "0x60033CB")]
	[Address(RVA = "0x203C030", Offset = "0x203A630", VA = "0x18203C030")]
	[IteratorStateMachine(typeof(_003CPutRequest_003Ed__15))]
	private static IEnumerator PutRequest(string uri, string data, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x60033CC")]
	[Address(RVA = "0x203B2A0", Offset = "0x20398A0", VA = "0x18203B2A0")]
	[IteratorStateMachine(typeof(_003CDeleteRequest_003Ed__16))]
	private static IEnumerator DeleteRequest(string uri, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x60033CD")]
	[Address(RVA = "0x203B9A0", Offset = "0x2039FA0", VA = "0x18203B9A0")]
	private static string GetWebRequestFailureJSON(UnityWebRequest webRequest)
	{
		return null;
	}
}
