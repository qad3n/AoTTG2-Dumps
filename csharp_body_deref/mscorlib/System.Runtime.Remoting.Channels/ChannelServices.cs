// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.ChannelServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x20003A6")]
[ComVisible(true)]
public sealed class ChannelServices
{
	[Token(Token = "0x4000F13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ArrayList registeredChannels;

	[Token(Token = "0x4000F14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static ArrayList delayedClientChannels;

	[Token(Token = "0x4000F15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static System.Runtime.Remoting.Contexts.CrossContextChannel _crossContextSink;

	[Token(Token = "0x4000F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static string CrossContextUrl;

	[Token(Token = "0x4000F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static IList oldStartModeTypes;

	[Token(Token = "0x17000370")]
	internal static System.Runtime.Remoting.Contexts.CrossContextChannel CrossContextChannel
	{
		[Token(Token = "0x6001DEB")]
		[Address(RVA = "0x19F40F0", Offset = "0x19F26F0", VA = "0x1819F40F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x19F1B00", Offset = "0x19F0100", VA = "0x1819F1B00")]
	internal static IMessageSink CreateClientChannelSinkChain(string url, object remoteChannelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x19F19F0", Offset = "0x19EFFF0", VA = "0x1819F19F0")]
	internal static IMessageSink CreateClientChannelSinkChain(IChannelSender sender, string url, object[] channelDataArray, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x19F3C10", Offset = "0x19F2210", VA = "0x1819F3C10")]
	[Obsolete("Use RegisterChannel(IChannel,Boolean)")]
	public static void RegisterChannel(IChannel chnl)
	{
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x19F35E0", Offset = "0x19F1BE0", VA = "0x1819F35E0")]
	public static void RegisterChannel(IChannel chnl, bool ensureSecurity)
	{
	}

	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x19F2760", Offset = "0x19F0D60", VA = "0x1819F2760")]
	internal static void RegisterChannelConfig(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x19F20C0", Offset = "0x19F06C0", VA = "0x1819F20C0")]
	private static object CreateProvider(System.Runtime.Remoting.ProviderData prov)
	{
		return null;
	}

	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x19F3C60", Offset = "0x19F2260", VA = "0x1819F3C60")]
	public static IMessage SyncDispatchMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DF3")]
	[Address(RVA = "0x19F1680", Offset = "0x19EFC80", VA = "0x1819F1680")]
	private static ReturnMessage CheckIncomingMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x19F1880", Offset = "0x19EFE80", VA = "0x1819F1880")]
	internal static IMessage CheckReturnMessage(IMessage callMsg, IMessage retMsg)
	{
		return null;
	}

	[Token(Token = "0x6001DF5")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private static bool IsLocalCall(IMessage callMsg)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x19F23E0", Offset = "0x19F09E0", VA = "0x1819F23E0")]
	internal static object[] GetCurrentChannelInfo()
	{
		return null;
	}
}
