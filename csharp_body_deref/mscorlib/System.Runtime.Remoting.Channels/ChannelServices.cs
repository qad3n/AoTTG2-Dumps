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
		[Address(RVA = "0x3B7D480", Offset = "0x3B7D480", VA = "0x3B7D480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D7D")]
	[Address(RVA = "0x3B7D4F0", Offset = "0x3B7D4F0", VA = "0x3B7D4F0")]
	internal static IMessageSink CreateClientChannelSinkChain(string url, object remoteChannelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001D7E")]
	[Address(RVA = "0x3B7DF30", Offset = "0x3B7DF30", VA = "0x3B7DF30")]
	internal static IMessageSink CreateClientChannelSinkChain(IChannelSender sender, string url, object[] channelDataArray, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x3B7E170", Offset = "0x3B7E170", VA = "0x3B7E170")]
	[Obsolete("Use RegisterChannel(IChannel,Boolean)")]
	public static void RegisterChannel(IChannel chnl)
	{
	}

	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x3B7E1D0", Offset = "0x3B7E1D0", VA = "0x3B7E1D0")]
	public static void RegisterChannel(IChannel chnl, bool ensureSecurity)
	{
	}

	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x3B7EC60", Offset = "0x3B7EC60", VA = "0x3B7EC60")]
	internal static void RegisterChannelConfig(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x3B7FB40", Offset = "0x3B7FB40", VA = "0x3B7FB40")]
	private static object CreateProvider(System.Runtime.Remoting.ProviderData prov)
	{
		return null;
	}

	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x3B7FE50", Offset = "0x3B7FE50", VA = "0x3B7FE50")]
	public static IMessage SyncDispatchMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x3B7FEF0", Offset = "0x3B7FEF0", VA = "0x3B7FEF0")]
	private static ReturnMessage CheckIncomingMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x3B80170", Offset = "0x3B80170", VA = "0x3B80170")]
	internal static IMessage CheckReturnMessage(IMessage callMsg, IMessage retMsg)
	{
		return null;
	}

	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x3B80360", Offset = "0x3B80360", VA = "0x3B80360")]
	private static bool IsLocalCall(IMessage callMsg)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x3B804B0", Offset = "0x3B804B0", VA = "0x3B804B0")]
	internal static object[] GetCurrentChannelInfo()
	{
		return null;
	}
}
