// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicServicesBuiltin
// Update status: NEW in this game update
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

[Token(Token = "0x2000422")]
[CompilerGenerated]
internal class CustomLogicServicesBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000423")]
	public static class Factory
	{
		[Token(Token = "0x6002A6E")]
		[Address(RVA = "0x40E3A60", Offset = "0x40E3A60", VA = "0x40E3A60")]
		public static CustomLogicServicesBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000424")]
	public static class Bindings
	{
		[Token(Token = "0x4001170")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002A6F")]
		[Address(RVA = "0x40E3B80", Offset = "0x40E3B80", VA = "0x40E3B80")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002A70")]
		[Address(RVA = "0x40E3DF0", Offset = "0x40E3DF0", VA = "0x40E3DF0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__CheckPermissions()
		{
			return null;
		}

		[Token(Token = "0x6002A71")]
		[Address(RVA = "0x40E3F40", Offset = "0x40E3F40", VA = "0x40E3F40")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__GetSecret()
		{
			return null;
		}

		[Token(Token = "0x6002A72")]
		[Address(RVA = "0x40E4090", Offset = "0x40E4090", VA = "0x40E4090")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Get()
		{
			return null;
		}

		[Token(Token = "0x6002A73")]
		[Address(RVA = "0x40E41E0", Offset = "0x40E41E0", VA = "0x40E41E0")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Post()
		{
			return null;
		}

		[Token(Token = "0x6002A74")]
		[Address(RVA = "0x40E4330", Offset = "0x40E4330", VA = "0x40E4330")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Put()
		{
			return null;
		}

		[Token(Token = "0x6002A75")]
		[Address(RVA = "0x40E4480", Offset = "0x40E4480", VA = "0x40E4480")]
		public static CLMethodBinding<CustomLogicServicesBuiltin> __CreateMethodBinding__Delete()
		{
			return null;
		}
	}

	[Token(Token = "0x2000426")]
	[CompilerGenerated]
	private sealed class _003CDeleteRequest_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001178")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400117A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x400117B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x400117C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x17000896")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002A83")]
			[Address(RVA = "0x40E53B0", Offset = "0x40E53B0", VA = "0x40E53B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000897")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002A85")]
			[Address(RVA = "0x40E5400", Offset = "0x40E5400", VA = "0x40E5400", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002A7F")]
		[Address(RVA = "0x40E3850", Offset = "0x40E3850", VA = "0x40E3850")]
		[DebuggerHidden]
		public _003CDeleteRequest_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002A80")]
		[Address(RVA = "0x40E4DB0", Offset = "0x40E4DB0", VA = "0x40E4DB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002A81")]
		[Address(RVA = "0x40E4E60", Offset = "0x40E4E60", VA = "0x40E4E60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002A82")]
		[Address(RVA = "0x40E5310", Offset = "0x40E5310", VA = "0x40E5310")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002A84")]
		[Address(RVA = "0x40E53C0", Offset = "0x40E53C0", VA = "0x40E53C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000427")]
	[CompilerGenerated]
	private sealed class _003CGetRequest_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400117D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400117E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400117F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001180")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public UserMethod callback;

		[Token(Token = "0x4001181")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private UnityWebRequest _003CwebRequest_003E5__2;

		[Token(Token = "0x17000898")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002A8A")]
			[Address(RVA = "0x40E5A50", Offset = "0x40E5A50", VA = "0x40E5A50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000899")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002A8C")]
			[Address(RVA = "0x40E5AA0", Offset = "0x40E5AA0", VA = "0x40E5AA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002A86")]
		[Address(RVA = "0x40E37F0", Offset = "0x40E37F0", VA = "0x40E37F0")]
		[DebuggerHidden]
		public _003CGetRequest_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002A87")]
		[Address(RVA = "0x40E5410", Offset = "0x40E5410", VA = "0x40E5410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002A88")]
		[Address(RVA = "0x40E54C0", Offset = "0x40E54C0", VA = "0x40E54C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002A89")]
		[Address(RVA = "0x40E59B0", Offset = "0x40E59B0", VA = "0x40E59B0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002A8B")]
		[Address(RVA = "0x40E5A60", Offset = "0x40E5A60", VA = "0x40E5A60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000428")]
	[CompilerGenerated]
	private sealed class _003CPostRequest_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001182")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001183")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001184")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x4001185")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x4001186")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string format;

		[Token(Token = "0x4001187")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public UserMethod callback;

		[Token(Token = "0x4001188")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x1700089A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002A91")]
			[Address(RVA = "0x40E60F0", Offset = "0x40E60F0", VA = "0x40E60F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700089B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002A93")]
			[Address(RVA = "0x40E6140", Offset = "0x40E6140", VA = "0x40E6140", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002A8D")]
		[Address(RVA = "0x40E3810", Offset = "0x40E3810", VA = "0x40E3810")]
		[DebuggerHidden]
		public _003CPostRequest_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002A8E")]
		[Address(RVA = "0x40E5AB0", Offset = "0x40E5AB0", VA = "0x40E5AB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002A8F")]
		[Address(RVA = "0x40E5B60", Offset = "0x40E5B60", VA = "0x40E5B60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002A90")]
		[Address(RVA = "0x40E6050", Offset = "0x40E6050", VA = "0x40E6050")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002A92")]
		[Address(RVA = "0x40E6100", Offset = "0x40E6100", VA = "0x40E6100", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000429")]
	[CompilerGenerated]
	private sealed class _003CPutRequest_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400118A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400118B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string uri;

		[Token(Token = "0x400118C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string data;

		[Token(Token = "0x400118D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public UserMethod callback;

		[Token(Token = "0x400118E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Cwww_003E5__2;

		[Token(Token = "0x1700089C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002A98")]
			[Address(RVA = "0x40E6790", Offset = "0x40E6790", VA = "0x40E6790", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700089D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002A9A")]
			[Address(RVA = "0x40E67E0", Offset = "0x40E67E0", VA = "0x40E67E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002A94")]
		[Address(RVA = "0x40E3830", Offset = "0x40E3830", VA = "0x40E3830")]
		[DebuggerHidden]
		public _003CPutRequest_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002A95")]
		[Address(RVA = "0x40E6150", Offset = "0x40E6150", VA = "0x40E6150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002A96")]
		[Address(RVA = "0x40E6200", Offset = "0x40E6200", VA = "0x40E6200", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002A97")]
		[Address(RVA = "0x40E66F0", Offset = "0x40E66F0", VA = "0x40E66F0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002A99")]
		[Address(RVA = "0x40E67A0", Offset = "0x40E67A0", VA = "0x40E67A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400116F")]
	private const int RequestTimeoutSeconds = 15;

	[Token(Token = "0x17000892")]
	public override string ClassName
	{
		[Token(Token = "0x6002A6A")]
		[Address(RVA = "0x40E3A00", Offset = "0x40E3A00", VA = "0x40E3A00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000893")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002A6B")]
		[Address(RVA = "0x40E3A30", Offset = "0x40E3A30", VA = "0x40E3A30", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000894")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002A6C")]
		[Address(RVA = "0x40E3A40", Offset = "0x40E3A40", VA = "0x40E3A40", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000895")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002A6D")]
		[Address(RVA = "0x40E3A50", Offset = "0x40E3A50", VA = "0x40E3A50", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002A59")]
	[Address(RVA = "0x40E2900", Offset = "0x40E2900", VA = "0x40E2900")]
	public CustomLogicServicesBuiltin()
	{
	}

	[Token(Token = "0x6002A5A")]
	[Address(RVA = "0x40E2970", Offset = "0x40E2970", VA = "0x40E2970")]
	private static bool IsAllowedToRunBase()
	{
		return default(bool);
	}

	[Token(Token = "0x6002A5B")]
	[Address(RVA = "0x40E2A50", Offset = "0x40E2A50", VA = "0x40E2A50")]
	private static bool IsAllowedToRun(string service, out string baseUrl)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A5C")]
	[Address(RVA = "0x40E2AD0", Offset = "0x40E2AD0", VA = "0x40E2AD0")]
	private static string CheckMe(string service)
	{
		return null;
	}

	[Token(Token = "0x6002A5D")]
	[Address(RVA = "0x40E2CE0", Offset = "0x40E2CE0", VA = "0x40E2CE0")]
	public static bool CheckPermissions(string service)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A5E")]
	[Address(RVA = "0x40E2D70", Offset = "0x40E2D70", VA = "0x40E2D70")]
	public static string GetSecret(string key)
	{
		return null;
	}

	[Token(Token = "0x6002A5F")]
	[Address(RVA = "0x40E2E80", Offset = "0x40E2E80", VA = "0x40E2E80")]
	private static string GetEndpoint(string baseUrl, string route)
	{
		return null;
	}

	[Token(Token = "0x6002A60")]
	[Address(RVA = "0x40E3100", Offset = "0x40E3100", VA = "0x40E3100")]
	public static void Get(string service, string route, UserMethod callback)
	{
	}

	[Token(Token = "0x6002A61")]
	[Address(RVA = "0x40E32A0", Offset = "0x40E32A0", VA = "0x40E32A0")]
	public static void Post(string service, string route, string data, [Optional] UserMethod callback, string format = "application/json")
	{
	}

	[Token(Token = "0x6002A62")]
	[Address(RVA = "0x40E3350", Offset = "0x40E3350", VA = "0x40E3350")]
	private static string GetContentType(string format)
	{
		return null;
	}

	[Token(Token = "0x6002A63")]
	[Address(RVA = "0x40E3510", Offset = "0x40E3510", VA = "0x40E3510")]
	public static void Put(string service, string route, string data, [Optional] UserMethod callback)
	{
	}

	[Token(Token = "0x6002A64")]
	[Address(RVA = "0x40E3650", Offset = "0x40E3650", VA = "0x40E3650")]
	public static void Delete(string service, string route, [Optional] UserMethod callback)
	{
	}

	[Token(Token = "0x6002A65")]
	[Address(RVA = "0x40E3220", Offset = "0x40E3220", VA = "0x40E3220")]
	[IteratorStateMachine(typeof(_003CGetRequest_003Ed__13))]
	private static IEnumerator GetRequest(string uri, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x6002A66")]
	[Address(RVA = "0x40E3450", Offset = "0x40E3450", VA = "0x40E3450")]
	[IteratorStateMachine(typeof(_003CPostRequest_003Ed__14))]
	private static IEnumerator PostRequest(string uri, string data, UserMethod callback, string format)
	{
		return null;
	}

	[Token(Token = "0x6002A67")]
	[Address(RVA = "0x40E35B0", Offset = "0x40E35B0", VA = "0x40E35B0")]
	[IteratorStateMachine(typeof(_003CPutRequest_003Ed__15))]
	private static IEnumerator PutRequest(string uri, string data, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x6002A68")]
	[Address(RVA = "0x40E3770", Offset = "0x40E3770", VA = "0x40E3770")]
	[IteratorStateMachine(typeof(_003CDeleteRequest_003Ed__16))]
	private static IEnumerator DeleteRequest(string uri, UserMethod callback)
	{
		return null;
	}

	[Token(Token = "0x6002A69")]
	[Address(RVA = "0x40E3870", Offset = "0x40E3870", VA = "0x40E3870")]
	private static string GetWebRequestFailureJSON(UnityWebRequest webRequest)
	{
		return null;
	}
}
