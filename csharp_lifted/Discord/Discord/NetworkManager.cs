// ==================== AoTTG2 cross-reference ====================
// Type: Discord.NetworkManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x20000EB")]
public class NetworkManager
{
	[Token(Token = "0x20000EC")]
	internal struct FFIEvents
	{
		[Token(Token = "0x20000ED")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void MessageHandler(IntPtr ptr, ulong peerId, byte channelId, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x20000EE")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void RouteUpdateHandler(IntPtr ptr, string routeData);

		[Token(Token = "0x40001A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal MessageHandler OnMessage;

		[Token(Token = "0x40001A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal RouteUpdateHandler OnRouteUpdate;
	}

	[Token(Token = "0x20000EF")]
	internal struct FFIMethods
	{
		[Token(Token = "0x20000F0")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetPeerIdMethod(IntPtr methodsPtr, ref ulong peerId);

		[Token(Token = "0x20000F1")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result FlushMethod(IntPtr methodsPtr);

		[Token(Token = "0x20000F2")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result OpenPeerMethod(IntPtr methodsPtr, ulong peerId, string routeData);

		[Token(Token = "0x20000F3")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result UpdatePeerMethod(IntPtr methodsPtr, ulong peerId, string routeData);

		[Token(Token = "0x20000F4")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result ClosePeerMethod(IntPtr methodsPtr, ulong peerId);

		[Token(Token = "0x20000F5")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result OpenChannelMethod(IntPtr methodsPtr, ulong peerId, byte channelId, bool reliable);

		[Token(Token = "0x20000F6")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result CloseChannelMethod(IntPtr methodsPtr, ulong peerId, byte channelId);

		[Token(Token = "0x20000F7")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SendMessageMethod(IntPtr methodsPtr, ulong peerId, byte channelId, byte[] data, int dataLen);

		[Token(Token = "0x40001A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal GetPeerIdMethod GetPeerId;

		[Token(Token = "0x40001AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal FlushMethod Flush;

		[Token(Token = "0x40001AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal OpenPeerMethod OpenPeer;

		[Token(Token = "0x40001AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal UpdatePeerMethod UpdatePeer;

		[Token(Token = "0x40001AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal ClosePeerMethod ClosePeer;

		[Token(Token = "0x40001AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal OpenChannelMethod OpenChannel;

		[Token(Token = "0x40001AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal CloseChannelMethod CloseChannel;

		[Token(Token = "0x40001B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal SendMessageMethod SendMessage;
	}

	[Token(Token = "0x20000F8")]
	public delegate void MessageHandler(ulong peerId, byte channelId, byte[] data);

	[Token(Token = "0x20000F9")]
	public delegate void RouteUpdateHandler(string routeData);

	[Token(Token = "0x40001A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x40001A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private MessageHandler m_OnMessage;

	[Token(Token = "0x40001A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private RouteUpdateHandler m_OnRouteUpdate;

	[Token(Token = "0x1700000B")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x31552B0", Offset = "0x31542B0", VA = "0x31552B0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000010")]
	public event MessageHandler OnMessage
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x31553D0", Offset = "0x31543D0", VA = "0x31553D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x3155460", Offset = "0x3154460", VA = "0x3155460")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	public event RouteUpdateHandler OnRouteUpdate
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x31554F0", Offset = "0x31544F0", VA = "0x31554F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x3155580", Offset = "0x3154580", VA = "0x3155580")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x3143600", Offset = "0x3142600", VA = "0x3143600")]
	internal NetworkManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x3155610", Offset = "0x3154610", VA = "0x3155610")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x3155930", Offset = "0x3154930", VA = "0x3155930")]
	public ulong GetPeerId()
	{
		return default(ulong);
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3155980", Offset = "0x3154980", VA = "0x3155980")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x3155A00", Offset = "0x3154A00", VA = "0x3155A00")]
	public void OpenPeer(ulong peerId, string routeData)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x3155A90", Offset = "0x3154A90", VA = "0x3155A90")]
	public void UpdatePeer(ulong peerId, string routeData)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x3155B20", Offset = "0x3154B20", VA = "0x3155B20")]
	public void ClosePeer(ulong peerId)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x3155BB0", Offset = "0x3154BB0", VA = "0x3155BB0")]
	public void OpenChannel(ulong peerId, byte channelId, bool reliable)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x3155C50", Offset = "0x3154C50", VA = "0x3155C50")]
	public void CloseChannel(ulong peerId, byte channelId)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x3155CE0", Offset = "0x3154CE0", VA = "0x3155CE0")]
	public void SendMessage(ulong peerId, byte channelId, byte[] data)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x3154FF0", Offset = "0x3153FF0", VA = "0x3154FF0")]
	[MonoPInvokeCallback]
	private static void OnMessageImpl(IntPtr ptr, ulong peerId, byte channelId, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x31551A0", Offset = "0x31541A0", VA = "0x31551A0")]
	[MonoPInvokeCallback]
	private static void OnRouteUpdateImpl(IntPtr ptr, string routeData)
	{
	}
}
