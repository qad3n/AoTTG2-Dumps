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

[Token(Token = "0x200037F")]
[ComVisible(true)]
public sealed class ChannelServices
{
	[Token(Token = "0x4000E73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ArrayList registeredChannels;

	[Token(Token = "0x4000E74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static ArrayList delayedClientChannels;

	[Token(Token = "0x4000E75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static System.Runtime.Remoting.Contexts.CrossContextChannel _crossContextSink;

	[Token(Token = "0x4000E76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static string CrossContextUrl;

	[Token(Token = "0x4000E77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static IList oldStartModeTypes;

	[Token(Token = "0x1700036F")]
	internal static System.Runtime.Remoting.Contexts.CrossContextChannel CrossContextChannel
	{
		[Token(Token = "0x6001DC1")]
		[Address(RVA = "0x5385620", Offset = "0x5384620", VA = "0x5385620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DC2")]
	[Address(RVA = "0x5385690", Offset = "0x5384690", VA = "0x5385690")]
	internal static IMessageSink CreateClientChannelSinkChain(string url, object remoteChannelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001DC3")]
	[Address(RVA = "0x5385F80", Offset = "0x5384F80", VA = "0x5385F80")]
	internal static IMessageSink CreateClientChannelSinkChain(IChannelSender sender, string url, object[] channelDataArray, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001DC4")]
	[Address(RVA = "0x53861C0", Offset = "0x53851C0", VA = "0x53861C0")]
	[Obsolete("Use RegisterChannel(IChannel,Boolean)")]
	public static void RegisterChannel(IChannel chnl)
	{
	}

	[Token(Token = "0x6001DC5")]
	[Address(RVA = "0x5386230", Offset = "0x5385230", VA = "0x5386230")]
	public static void RegisterChannel(IChannel chnl, bool ensureSecurity)
	{
	}

	[Token(Token = "0x6001DC6")]
	[Address(RVA = "0x5386B20", Offset = "0x5385B20", VA = "0x5386B20")]
	internal static void RegisterChannelConfig(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x5387990", Offset = "0x5386990", VA = "0x5387990")]
	private static object CreateProvider(System.Runtime.Remoting.ProviderData prov)
	{
		return null;
	}

	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x5387CA0", Offset = "0x5386CA0", VA = "0x5387CA0")]
	public static IMessage SyncDispatchMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x5387D50", Offset = "0x5386D50", VA = "0x5387D50")]
	private static ReturnMessage CheckIncomingMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x5387FE0", Offset = "0x5386FE0", VA = "0x5387FE0")]
	internal static IMessage CheckReturnMessage(IMessage callMsg, IMessage retMsg)
	{
		return null;
	}

	[Token(Token = "0x6001DCB")]
	[Address(RVA = "0x53881D0", Offset = "0x53871D0", VA = "0x53881D0")]
	private static bool IsLocalCall(IMessage callMsg)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x5388320", Offset = "0x5387320", VA = "0x5388320")]
	internal static object[] GetCurrentChannelInfo()
	{
		return null;
	}
}
