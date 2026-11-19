// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ActivityManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/ActivityManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000002")]
public class ActivityManager
{
	[Token(Token = "0x2000003")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000004")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivityJoinHandler(IntPtr ptr, string secret);

		[Token(Token = "0x2000005")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivitySpectateHandler(IntPtr ptr, string secret);

		[Token(Token = "0x2000006")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivityJoinRequestHandler(IntPtr ptr, ref User user);

		[Token(Token = "0x2000007")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivityInviteHandler(IntPtr ptr, ActivityActionType type, ref User user, ref Activity activity);

		[Token(Token = "0x4000007")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ActivityJoinHandler OnActivityJoin;

		[Token(Token = "0x4000008")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal ActivitySpectateHandler OnActivitySpectate;

		[Token(Token = "0x4000009")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ActivityJoinRequestHandler OnActivityJoinRequest;

		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal ActivityInviteHandler OnActivityInvite;
	}

	[Token(Token = "0x2000008")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000009")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result RegisterCommandMethod(IntPtr methodsPtr, string command);

		[Token(Token = "0x200000A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result RegisterSteamMethod(IntPtr methodsPtr, uint steamId);

		[Token(Token = "0x200000B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateActivityCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200000C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateActivityMethod(IntPtr methodsPtr, ref Activity activity, IntPtr callbackData, UpdateActivityCallback callback);

		[Token(Token = "0x200000D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ClearActivityCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200000E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ClearActivityMethod(IntPtr methodsPtr, IntPtr callbackData, ClearActivityCallback callback);

		[Token(Token = "0x200000F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendRequestReplyCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000010")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendRequestReplyMethod(IntPtr methodsPtr, long userId, ActivityJoinRequestReply reply, IntPtr callbackData, SendRequestReplyCallback callback);

		[Token(Token = "0x2000011")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendInviteCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000012")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendInviteMethod(IntPtr methodsPtr, long userId, ActivityActionType type, string content, IntPtr callbackData, SendInviteCallback callback);

		[Token(Token = "0x2000013")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void AcceptInviteCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000014")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void AcceptInviteMethod(IntPtr methodsPtr, long userId, IntPtr callbackData, AcceptInviteCallback callback);

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal RegisterCommandMethod RegisterCommand;

		[Token(Token = "0x400000C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal RegisterSteamMethod RegisterSteam;

		[Token(Token = "0x400000D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal UpdateActivityMethod UpdateActivity;

		[Token(Token = "0x400000E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal ClearActivityMethod ClearActivity;

		[Token(Token = "0x400000F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal SendRequestReplyMethod SendRequestReply;

		[Token(Token = "0x4000010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal SendInviteMethod SendInvite;

		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal AcceptInviteMethod AcceptInvite;
	}

	[Token(Token = "0x2000015")]
	public delegate void UpdateActivityHandler(Result result);

	[Token(Token = "0x2000016")]
	public delegate void ClearActivityHandler(Result result);

	[Token(Token = "0x2000017")]
	public delegate void SendRequestReplyHandler(Result result);

	[Token(Token = "0x2000018")]
	public delegate void SendInviteHandler(Result result);

	[Token(Token = "0x2000019")]
	public delegate void AcceptInviteHandler(Result result);

	[Token(Token = "0x200001A")]
	public delegate void ActivityJoinHandler(string secret);

	[Token(Token = "0x200001B")]
	public delegate void ActivitySpectateHandler(string secret);

	[Token(Token = "0x200001C")]
	public delegate void ActivityJoinRequestHandler(ref User user);

	[Token(Token = "0x200001D")]
	public delegate void ActivityInviteHandler(ActivityActionType type, ref User user, ref Activity activity);

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private ActivityJoinHandler m_OnActivityJoin;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private ActivitySpectateHandler m_OnActivitySpectate;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private ActivityJoinRequestHandler m_OnActivityJoinRequest;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private ActivityInviteHandler m_OnActivityInvite;

	[Token(Token = "0x17000001")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x313D090", Offset = "0x313C090", VA = "0x313D090")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000001")]
	public event ActivityJoinHandler OnActivityJoin
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x313D1B0", Offset = "0x313C1B0", VA = "0x313D1B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x313D240", Offset = "0x313C240", VA = "0x313D240")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event ActivitySpectateHandler OnActivitySpectate
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x313D2D0", Offset = "0x313C2D0", VA = "0x313D2D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x313D360", Offset = "0x313C360", VA = "0x313D360")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event ActivityJoinRequestHandler OnActivityJoinRequest
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x313D3F0", Offset = "0x313C3F0", VA = "0x313D3F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x313D480", Offset = "0x313C480", VA = "0x313D480")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event ActivityInviteHandler OnActivityInvite
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x313D510", Offset = "0x313C510", VA = "0x313D510")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x313D5A0", Offset = "0x313C5A0", VA = "0x313D5A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x313D000", Offset = "0x313C000", VA = "0x313D000")]
	public void RegisterCommand()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x313D630", Offset = "0x313C630", VA = "0x313D630")]
	internal ActivityManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x313D740", Offset = "0x313C740", VA = "0x313D740")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x313D010", Offset = "0x313C010", VA = "0x313D010")]
	public void RegisterCommand(string command)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x313DD10", Offset = "0x313CD10", VA = "0x313DD10")]
	public void RegisterSteam(uint steamId)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x313C750", Offset = "0x313B750", VA = "0x313C750")]
	[MonoPInvokeCallback]
	private static void UpdateActivityCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x313DD90", Offset = "0x313CD90", VA = "0x313DD90")]
	public void UpdateActivity(Activity activity, UpdateActivityHandler callback)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x313C830", Offset = "0x313B830", VA = "0x313C830")]
	[MonoPInvokeCallback]
	private static void ClearActivityCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x313DF70", Offset = "0x313CF70", VA = "0x313DF70")]
	public void ClearActivity(ClearActivityHandler callback)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x313C910", Offset = "0x313B910", VA = "0x313C910")]
	[MonoPInvokeCallback]
	private static void SendRequestReplyCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x313E140", Offset = "0x313D140", VA = "0x313E140")]
	public void SendRequestReply(long userId, ActivityJoinRequestReply reply, SendRequestReplyHandler callback)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x313C9F0", Offset = "0x313B9F0", VA = "0x313C9F0")]
	[MonoPInvokeCallback]
	private static void SendInviteCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x313E330", Offset = "0x313D330", VA = "0x313E330")]
	public void SendInvite(long userId, ActivityActionType type, string content, SendInviteHandler callback)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x313CAD0", Offset = "0x313BAD0", VA = "0x313CAD0")]
	[MonoPInvokeCallback]
	private static void AcceptInviteCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x313E520", Offset = "0x313D520", VA = "0x313E520")]
	public void AcceptInvite(long userId, AcceptInviteHandler callback)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x313CBB0", Offset = "0x313BBB0", VA = "0x313CBB0")]
	[MonoPInvokeCallback]
	private static void OnActivityJoinImpl(IntPtr ptr, string secret)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x313CCC0", Offset = "0x313BCC0", VA = "0x313CCC0")]
	[MonoPInvokeCallback]
	private static void OnActivitySpectateImpl(IntPtr ptr, string secret)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x313CDD0", Offset = "0x313BDD0", VA = "0x313CDD0")]
	[MonoPInvokeCallback]
	private static void OnActivityJoinRequestImpl(IntPtr ptr, ref User user)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x313CEE0", Offset = "0x313BEE0", VA = "0x313CEE0")]
	[MonoPInvokeCallback]
	private static void OnActivityInviteImpl(IntPtr ptr, ActivityActionType type, ref User user, ref Activity activity)
	{
	}
}
