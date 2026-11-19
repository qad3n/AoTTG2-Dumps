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

[Token(Token = "0x20005D7")]
[CompilerGenerated]
internal class CustomLogicServicesBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005D8")]
	public static class Factory
	{
		[Token(Token = "0x600365E")]
		[Address(RVA = "0x59F84F0", Offset = "0x59F74F0", VA = "0x59F84F0")]
		public static CustomLogicServicesBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005D9")]
	public static class Bindings
	{
		[Token(Token = "0x400194D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600365F")]
		[Address(RVA = "0x59F8610", Offset = "0x59F7610", VA = "0x59F8610")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003660")]
		[Address(RVA = "0x59F8880", Offset = "0x59F7880", VA = "0x59F8880")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__CheckPermissions()
		{
			return null;
		}

		[Token(Token = "0x6003661")]
		[Address(RVA = "0x59F89C0", Offset = "0x59F79C0", VA = "0x59F89C0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__GetSecret()
		{
			return null;
		}

		[Token(Token = "0x6003662")]
		[Address(RVA = "0x59F8B00", Offset = "0x59F7B00", VA = "0x59F8B00")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6003663")]
		[Address(RVA = "0x59F8C40", Offset = "0x59F7C40", VA = "0x59F8C40")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Post()
		{
			return null;
		}

		[Token(Token = "0x6003664")]
		[Address(RVA = "0x59F8D80", Offset = "0x59F7D80", VA = "0x59F8D80")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Put()
		{
			return null;
		}

		[Token(Token = "0x6003665")]
		[Address(RVA = "0x59F8EC0", Offset = "0x59F7EC0", VA = "0x59F8EC0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Delete()
		{
			return null;
		}
	}

	[Token(Token = "0x20005DB")]
	[CompilerGenerated]
	private sealed class _003CDeleteRequest_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001955")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001956")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001957")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001958")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x4001959")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x170009D1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003673")]
			[Address(RVA = "0x59F9D10", Offset = "0x59F8D10", VA = "0x59F9D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003675")]
			[Address(RVA = "0x59F9D60", Offset = "0x59F8D60", VA = "0x59F9D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600366F")]
		[Address(RVA = "0x59F82E0", Offset = "0x59F72E0", VA = "0x59F82E0")]
		[DebuggerHidden]
		public _003CDeleteRequest_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003670")]
		[Address(RVA = "0x59F97D0", Offset = "0x59F87D0", VA = "0x59F97D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003671")]
		[Address(RVA = "0x59F9880", Offset = "0x59F8880", VA = "0x59F9880", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003672")]
		[Address(RVA = "0x59F9C70", Offset = "0x59F8C70", VA = "0x59F9C70")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003674")]
		[Address(RVA = "0x59F9D20", Offset = "0x59F8D20", VA = "0x59F9D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005DC")]
	[CompilerGenerated]
	private sealed class _003CGetRequest_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400195A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400195B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400195C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x400195D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x400195E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CwebRequest_003E5__2;

		[Token(Token = "0x170009D3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600367A")]
			[Address(RVA = "0x59FA2D0", Offset = "0x59F92D0", VA = "0x59FA2D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600367C")]
			[Address(RVA = "0x59FA320", Offset = "0x59F9320", VA = "0x59FA320", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003676")]
		[Address(RVA = "0x59F8280", Offset = "0x59F7280", VA = "0x59F8280")]
		[DebuggerHidden]
		public _003CGetRequest_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003677")]
		[Address(RVA = "0x59F9D70", Offset = "0x59F8D70", VA = "0x59F9D70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003678")]
		[Address(RVA = "0x59F9E20", Offset = "0x59F8E20", VA = "0x59F9E20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003679")]
		[Address(RVA = "0x59FA230", Offset = "0x59F9230", VA = "0x59FA230")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600367B")]
		[Address(RVA = "0x59FA2E0", Offset = "0x59F92E0", VA = "0x59FA2E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005DD")]
	[CompilerGenerated]
	private sealed class _003CPostRequest_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400195F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001960")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001961")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001962")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x4001963")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string format;

		[Token(Token = "0x4001964")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public UserMethod callback;

		[Token(Token = "0x4001965")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x170009D5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003681")]
			[Address(RVA = "0x59FA890", Offset = "0x59F9890", VA = "0x59FA890", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003683")]
			[Address(RVA = "0x59FA8E0", Offset = "0x59F98E0", VA = "0x59FA8E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600367D")]
		[Address(RVA = "0x59F82A0", Offset = "0x59F72A0", VA = "0x59F82A0")]
		[DebuggerHidden]
		public _003CPostRequest_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600367E")]
		[Address(RVA = "0x59FA330", Offset = "0x59F9330", VA = "0x59FA330", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600367F")]
		[Address(RVA = "0x59FA3E0", Offset = "0x59F93E0", VA = "0x59FA3E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003680")]
		[Address(RVA = "0x59FA7F0", Offset = "0x59F97F0", VA = "0x59FA7F0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003682")]
		[Address(RVA = "0x59FA8A0", Offset = "0x59F98A0", VA = "0x59FA8A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005DE")]
	[CompilerGenerated]
	private sealed class _003CPutRequest_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001966")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001967")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001968")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001969")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x400196A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public UserMethod callback;

		[Token(Token = "0x400196B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x170009D7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003688")]
			[Address(RVA = "0x59FAE50", Offset = "0x59F9E50", VA = "0x59FAE50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600368A")]
			[Address(RVA = "0x59FAEA0", Offset = "0x59F9EA0", VA = "0x59FAEA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003684")]
		[Address(RVA = "0x59F82C0", Offset = "0x59F72C0", VA = "0x59F82C0")]
		[DebuggerHidden]
		public _003CPutRequest_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003685")]
		[Address(RVA = "0x59FA8F0", Offset = "0x59F98F0", VA = "0x59FA8F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003686")]
		[Address(RVA = "0x59FA9A0", Offset = "0x59F99A0", VA = "0x59FA9A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003687")]
		[Address(RVA = "0x59FADB0", Offset = "0x59F9DB0", VA = "0x59FADB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003689")]
		[Address(RVA = "0x59FAE60", Offset = "0x59F9E60", VA = "0x59FAE60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400194C")]
	private const int RequestTimeoutSeconds = 15;

	[Token(Token = "0x170009CD")]
	public override string ClassName
	{
		[Token(Token = "0x600365A")]
		[Address(RVA = "0x59F8490", Offset = "0x59F7490", VA = "0x59F8490", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009CE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600365B")]
		[Address(RVA = "0x59F84C0", Offset = "0x59F74C0", VA = "0x59F84C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CF")]
	public override bool IsStatic
	{
		[Token(Token = "0x600365C")]
		[Address(RVA = "0x59F84D0", Offset = "0x59F74D0", VA = "0x59F84D0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009D0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600365D")]
		[Address(RVA = "0x59F84E0", Offset = "0x59F74E0", VA = "0x59F84E0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003649")]
	[Address(RVA = "0x59F7370", Offset = "0x59F6370", VA = "0x59F7370")]
	public CustomLogicServicesBuiltin()
	{
	}

	[Token(Token = "0x600364A")]
	[Address(RVA = "0x59F73E0", Offset = "0x59F63E0", VA = "0x59F73E0")]
	private static bool IsAllowedToRunBase()
	{
		return default(bool);
	}

	[Token(Token = "0x600364B")]
	[Address(RVA = "0x59F74C0", Offset = "0x59F64C0", VA = "0x59F74C0")]
	private static bool IsAllowedToRun(string service, out string baseUrl)
	{
		return default(bool);
	}

	[Token(Token = "0x600364C")]
	[Address(RVA = "0x59F7540", Offset = "0x59F6540", VA = "0x59F7540")]
	private static string CheckMe(string service)
	{
		return null;
	}

	[Token(Token = "0x600364D")]
	[Address(RVA = "0x59F7750", Offset = "0x59F6750", VA = "0x59F7750")]
	public static bool CheckPermissions(string service)
	{
		return default(bool);
	}

	[Token(Token = "0x600364E")]
	[Address(RVA = "0x59F77D0", Offset = "0x59F67D0", VA = "0x59F77D0")]
	public static string GetSecret(string key)
	{
		return null;
	}

	[Token(Token = "0x600364F")]
	[Address(RVA = "0x59F78E0", Offset = "0x59F68E0", VA = "0x59F78E0")]
	private static string GetEndpoint(string baseUrl, string route)
	{
		return null;
	}

	[Token(Token = "0x6003650")]
	[Address(RVA = "0x59F7B50", Offset = "0x59F6B50", VA = "0x59F7B50")]
	public static void Get(string service, string route, UserMethod callback)
	{
	}

	[Token(Token = "0x6003651")]
	[Address(RVA = "0x59F7CE0", Offset = "0x59F6CE0", VA = "0x59F7CE0")]
	public static void Post(string service, string route, string data, [Optional] UserMethod callback, string format = "application/json")
	{
	}

	[Token(Token = "0x6003652")]
	[Address(RVA = "0x59F7D90", Offset = "0x59F6D90", VA = "0x59F7D90")]
	private static string GetContentType(string format)
	{
		return null;
	}

	[Token(Token = "0x6003653")]
	[Address(RVA = "0x59F7F40", Offset = "0x59F6F40", VA = "0x59F7F40")]
	public static void Put(string service, string route, string data, [Optional] UserMethod callback)
	{
	}

	[Token(Token = "0x6003654")]
	[Address(RVA = "0x59F80F0", Offset = "0x59F70F0", VA = "0x59F80F0")]
	public static void Delete(string service, string route, [Optional] UserMethod callback)
	{
	}

	[Token(Token = "0x6003655")]
	[Address(RVA = "0x59F7C60", Offset = "0x59F6C60", VA = "0x59F7C60")]
	[IteratorStateMachine(typeof(_003CGetRequest_003Ed__13))]
	private static IEnumerator GetRequest(string uri, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x6003656")]
	[Address(RVA = "0x59F7E90", Offset = "0x59F6E90", VA = "0x59F7E90")]
	[IteratorStateMachine(typeof(_003CPostRequest_003Ed__14))]
	private static IEnumerator PostRequest(string uri, string data, UserMethod callback, string format)
	{
		return null;
	}

	[Token(Token = "0x6003657")]
	[Address(RVA = "0x59F8060", Offset = "0x59F7060", VA = "0x59F8060")]
	[IteratorStateMachine(typeof(_003CPutRequest_003Ed__15))]
	private static IEnumerator PutRequest(string uri, string data, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x6003658")]
	[Address(RVA = "0x59F8200", Offset = "0x59F7200", VA = "0x59F8200")]
	[IteratorStateMachine(typeof(_003CDeleteRequest_003Ed__16))]
	private static IEnumerator DeleteRequest(string uri, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x6003659")]
	[Address(RVA = "0x59F8300", Offset = "0x59F7300", VA = "0x59F8300")]
	private static string GetWebRequestFailureJSON(UnityWebRequest webRequest)
	{
		return null;
	}
}
