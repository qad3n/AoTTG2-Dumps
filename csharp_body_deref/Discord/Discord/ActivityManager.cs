using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000004")]
public class ActivityManager
{
	[Token(Token = "0x2000005")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000006")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivityJoinHandler(IntPtr ptr, string secret);

		[Token(Token = "0x2000007")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivitySpectateHandler(IntPtr ptr, string secret);

		[Token(Token = "0x2000008")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivityJoinRequestHandler(IntPtr ptr, ref User user);

		[Token(Token = "0x2000009")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ActivityInviteHandler(IntPtr ptr, ActivityActionType type, ref User user, ref Activity activity);

		[Token(Token = "0x400000C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ActivityJoinHandler OnActivityJoin;

		[Token(Token = "0x400000D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal ActivitySpectateHandler OnActivitySpectate;

		[Token(Token = "0x400000E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ActivityJoinRequestHandler OnActivityJoinRequest;

		[Token(Token = "0x400000F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal ActivityInviteHandler OnActivityInvite;
	}

	[Token(Token = "0x200000A")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200000B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result RegisterCommandMethod(IntPtr methodsPtr, string command);

		[Token(Token = "0x200000C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result RegisterSteamMethod(IntPtr methodsPtr, uint steamId);

		[Token(Token = "0x200000D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateActivityCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200000E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateActivityMethod(IntPtr methodsPtr, ref Activity activity, IntPtr callbackData, UpdateActivityCallback callback);

		[Token(Token = "0x200000F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ClearActivityCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000010")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ClearActivityMethod(IntPtr methodsPtr, IntPtr callbackData, ClearActivityCallback callback);

		[Token(Token = "0x2000011")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendRequestReplyCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000012")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendRequestReplyMethod(IntPtr methodsPtr, long userId, ActivityJoinRequestReply reply, IntPtr callbackData, SendRequestReplyCallback callback);

		[Token(Token = "0x2000013")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendInviteCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000014")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendInviteMethod(IntPtr methodsPtr, long userId, ActivityActionType type, string content, IntPtr callbackData, SendInviteCallback callback);

		[Token(Token = "0x2000015")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void AcceptInviteCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000016")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void AcceptInviteMethod(IntPtr methodsPtr, long userId, IntPtr callbackData, AcceptInviteCallback callback);

		[Token(Token = "0x4000010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal RegisterCommandMethod RegisterCommand;

		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal RegisterSteamMethod RegisterSteam;

		[Token(Token = "0x4000012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal UpdateActivityMethod UpdateActivity;

		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal ClearActivityMethod ClearActivity;

		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal SendRequestReplyMethod SendRequestReply;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal SendInviteMethod SendInvite;

		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal AcceptInviteMethod AcceptInvite;
	}

	[Token(Token = "0x2000017")]
	public delegate void UpdateActivityHandler(Result result);

	[Token(Token = "0x2000018")]
	public delegate void ClearActivityHandler(Result result);

	[Token(Token = "0x2000019")]
	public delegate void SendRequestReplyHandler(Result result);

	[Token(Token = "0x200001A")]
	public delegate void SendInviteHandler(Result result);

	[Token(Token = "0x200001B")]
	public delegate void AcceptInviteHandler(Result result);

	[Token(Token = "0x200001C")]
	public delegate void ActivityJoinHandler(string secret);

	[Token(Token = "0x200001D")]
	public delegate void ActivitySpectateHandler(string secret);

	[Token(Token = "0x200001E")]
	public delegate void ActivityJoinRequestHandler(ref User user);

	[Token(Token = "0x200001F")]
	public delegate void ActivityInviteHandler(ActivityActionType type, ref User user, ref Activity activity);

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000001")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x232C0F0", Offset = "0x232C0F0", VA = "0x232C0F0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000001")]
	public event ActivityJoinHandler OnActivityJoin
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x232C210", Offset = "0x232C210", VA = "0x232C210")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x232C2A0", Offset = "0x232C2A0", VA = "0x232C2A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event ActivitySpectateHandler OnActivitySpectate
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x232C330", Offset = "0x232C330", VA = "0x232C330")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x232C3C0", Offset = "0x232C3C0", VA = "0x232C3C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event ActivityJoinRequestHandler OnActivityJoinRequest
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x232C450", Offset = "0x232C450", VA = "0x232C450")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x232C4E0", Offset = "0x232C4E0", VA = "0x232C4E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event ActivityInviteHandler OnActivityInvite
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x232C570", Offset = "0x232C570", VA = "0x232C570")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x232C600", Offset = "0x232C600", VA = "0x232C600")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x232C060", Offset = "0x232C060", VA = "0x232C060")]
	public void RegisterCommand()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x232C690", Offset = "0x232C690", VA = "0x232C690")]
	internal ActivityManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x232C7A0", Offset = "0x232C7A0", VA = "0x232C7A0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x232C070", Offset = "0x232C070", VA = "0x232C070")]
	public void RegisterCommand(string command)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x232CD80", Offset = "0x232CD80", VA = "0x232CD80")]
	public void RegisterSteam(uint steamId)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x232B7A0", Offset = "0x232B7A0", VA = "0x232B7A0")]
	[MonoPInvokeCallback]
	private static void UpdateActivityCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x232CE00", Offset = "0x232CE00", VA = "0x232CE00")]
	public void UpdateActivity(Activity activity, UpdateActivityHandler callback)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x232B880", Offset = "0x232B880", VA = "0x232B880")]
	[MonoPInvokeCallback]
	private static void ClearActivityCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x232CFF0", Offset = "0x232CFF0", VA = "0x232CFF0")]
	public void ClearActivity(ClearActivityHandler callback)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x232B960", Offset = "0x232B960", VA = "0x232B960")]
	[MonoPInvokeCallback]
	private static void SendRequestReplyCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x232D1D0", Offset = "0x232D1D0", VA = "0x232D1D0")]
	public void SendRequestReply(long userId, ActivityJoinRequestReply reply, SendRequestReplyHandler callback)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x232BA40", Offset = "0x232BA40", VA = "0x232BA40")]
	[MonoPInvokeCallback]
	private static void SendInviteCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x232D3D0", Offset = "0x232D3D0", VA = "0x232D3D0")]
	public void SendInvite(long userId, ActivityActionType type, string content, SendInviteHandler callback)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x232BB20", Offset = "0x232BB20", VA = "0x232BB20")]
	[MonoPInvokeCallback]
	private static void AcceptInviteCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x232D5D0", Offset = "0x232D5D0", VA = "0x232D5D0")]
	public void AcceptInvite(long userId, AcceptInviteHandler callback)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x232BC00", Offset = "0x232BC00", VA = "0x232BC00")]
	[MonoPInvokeCallback]
	private static void OnActivityJoinImpl(IntPtr ptr, string secret)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x232BD10", Offset = "0x232BD10", VA = "0x232BD10")]
	[MonoPInvokeCallback]
	private static void OnActivitySpectateImpl(IntPtr ptr, string secret)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x232BE20", Offset = "0x232BE20", VA = "0x232BE20")]
	[MonoPInvokeCallback]
	private static void OnActivityJoinRequestImpl(IntPtr ptr, ref User user)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x232BF30", Offset = "0x232BF30", VA = "0x232BF30")]
	[MonoPInvokeCallback]
	private static void OnActivityInviteImpl(IntPtr ptr, ActivityActionType type, ref User user, ref Activity activity)
	{
	}
}
