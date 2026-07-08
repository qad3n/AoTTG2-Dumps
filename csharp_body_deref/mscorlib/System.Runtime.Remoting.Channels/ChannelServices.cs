using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x2000377")]
[ComVisible(true)]
public sealed class ChannelServices
{
	[Token(Token = "0x4000F06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ArrayList registeredChannels;

	[Token(Token = "0x4000F07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static ArrayList delayedClientChannels;

	[Token(Token = "0x4000F08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static System.Runtime.Remoting.Contexts.CrossContextChannel _crossContextSink;

	[Token(Token = "0x4000F09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static string CrossContextUrl;

	[Token(Token = "0x4000F0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static IList oldStartModeTypes;

	[Token(Token = "0x1700036E")]
	internal static System.Runtime.Remoting.Contexts.CrossContextChannel CrossContextChannel
	{
		[Token(Token = "0x6001D7C")]
		[Address(RVA = "0x4E97960", Offset = "0x4E97960", VA = "0x4E97960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D7D")]
	[Address(RVA = "0x4E979D0", Offset = "0x4E979D0", VA = "0x4E979D0")]
	internal static IMessageSink CreateClientChannelSinkChain(string url, object remoteChannelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001D7E")]
	[Address(RVA = "0x4E98410", Offset = "0x4E98410", VA = "0x4E98410")]
	internal static IMessageSink CreateClientChannelSinkChain(IChannelSender sender, string url, object[] channelDataArray, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x4E98650", Offset = "0x4E98650", VA = "0x4E98650")]
	[Obsolete("Use RegisterChannel(IChannel,Boolean)")]
	public static void RegisterChannel(IChannel chnl)
	{
	}

	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x4E986B0", Offset = "0x4E986B0", VA = "0x4E986B0")]
	public static void RegisterChannel(IChannel chnl, bool ensureSecurity)
	{
	}

	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x4E99140", Offset = "0x4E99140", VA = "0x4E99140")]
	internal static void RegisterChannelConfig(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x4E9A020", Offset = "0x4E9A020", VA = "0x4E9A020")]
	private static object CreateProvider(System.Runtime.Remoting.ProviderData prov)
	{
		return null;
	}

	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x4E9A330", Offset = "0x4E9A330", VA = "0x4E9A330")]
	public static IMessage SyncDispatchMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x4E9A3D0", Offset = "0x4E9A3D0", VA = "0x4E9A3D0")]
	private static ReturnMessage CheckIncomingMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x4E9A650", Offset = "0x4E9A650", VA = "0x4E9A650")]
	internal static IMessage CheckReturnMessage(IMessage callMsg, IMessage retMsg)
	{
		return null;
	}

	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x4E9A840", Offset = "0x4E9A840", VA = "0x4E9A840")]
	private static bool IsLocalCall(IMessage callMsg)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x4E9A990", Offset = "0x4E9A990", VA = "0x4E9A990")]
	internal static object[] GetCurrentChannelInfo()
	{
		return null;
	}
}
