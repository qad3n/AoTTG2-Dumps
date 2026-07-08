using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000345")]
[ComVisible(true)]
public static class RemotingConfiguration
{
	[Token(Token = "0x4000E82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string applicationID;

	[Token(Token = "0x4000E83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string applicationName;

	[Token(Token = "0x4000E84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string processGuid;

	[Token(Token = "0x4000E85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static bool defaultConfigRead;

	[Token(Token = "0x4000E86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private static bool defaultDelayedConfigRead;

	[Token(Token = "0x4000E87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static CustomErrorsModes _errorMode;

	[Token(Token = "0x4000E88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Hashtable wellKnownClientEntries;

	[Token(Token = "0x4000E89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Hashtable activatedClientEntries;

	[Token(Token = "0x4000E8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Hashtable wellKnownServiceEntries;

	[Token(Token = "0x4000E8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Hashtable activatedServiceEntries;

	[Token(Token = "0x4000E8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Hashtable channelTemplates;

	[Token(Token = "0x4000E8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Hashtable clientProviderTemplates;

	[Token(Token = "0x4000E8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Hashtable serverProviderTemplates;

	[Token(Token = "0x17000340")]
	public static string ApplicationName
	{
		[Token(Token = "0x6001C46")]
		[Address(RVA = "0x4E7BB80", Offset = "0x4E7BB80", VA = "0x4E7BB80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C47")]
		[Address(RVA = "0x4E7BBF0", Offset = "0x4E7BBF0", VA = "0x4E7BBF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000341")]
	public static string ProcessId
	{
		[Token(Token = "0x6001C48")]
		[Address(RVA = "0x4E7BC50", Offset = "0x4E7BC50", VA = "0x4E7BC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C49")]
	[Address(RVA = "0x4E7BD30", Offset = "0x4E7BD30", VA = "0x4E7BD30")]
	internal static void LoadDefaultDelayedChannels()
	{
	}

	[Token(Token = "0x6001C4A")]
	[Address(RVA = "0x4E7C180", Offset = "0x4E7C180", VA = "0x4E7C180")]
	public static bool IsActivationAllowed(Type svrType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C4B")]
	[Address(RVA = "0x4E7C2D0", Offset = "0x4E7C2D0", VA = "0x4E7C2D0")]
	public static ActivatedClientTypeEntry IsRemotelyActivatedClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001C4C")]
	[Address(RVA = "0x4E7C470", Offset = "0x4E7C470", VA = "0x4E7C470")]
	public static WellKnownClientTypeEntry IsWellKnownClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001C4D")]
	[Address(RVA = "0x4E7C610", Offset = "0x4E7C610", VA = "0x4E7C610")]
	public static void RegisterActivatedClientType(ActivatedClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C4E")]
	[Address(RVA = "0x4E7C900", Offset = "0x4E7C900", VA = "0x4E7C900")]
	public static void RegisterActivatedServiceType(ActivatedServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C4F")]
	[Address(RVA = "0x4E7CA50", Offset = "0x4E7CA50", VA = "0x4E7CA50")]
	public static void RegisterWellKnownClientType(WellKnownClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C50")]
	[Address(RVA = "0x4E7CD40", Offset = "0x4E7CD40", VA = "0x4E7CD40")]
	public static void RegisterWellKnownServiceType(WellKnownServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C51")]
	[Address(RVA = "0x4E7CFE0", Offset = "0x4E7CFE0", VA = "0x4E7CFE0")]
	internal static void RegisterChannelTemplate(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001C52")]
	[Address(RVA = "0x4E7D080", Offset = "0x4E7D080", VA = "0x4E7D080")]
	internal static void RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x4E7D120", Offset = "0x4E7D120", VA = "0x4E7D120")]
	internal static void RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001C54")]
	[Address(RVA = "0x4E7D1C0", Offset = "0x4E7D1C0", VA = "0x4E7D1C0")]
	internal static void RegisterChannels(ArrayList channels, bool onlyDelayed)
	{
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x4E7F9F0", Offset = "0x4E7F9F0", VA = "0x4E7F9F0")]
	internal static void RegisterTypes(ArrayList types)
	{
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x4E7FFF0", Offset = "0x4E7FFF0", VA = "0x4E7FFF0")]
	public static bool CustomErrorsEnabled(bool isLocalRequest)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x4E800A0", Offset = "0x4E800A0", VA = "0x4E800A0")]
	internal static void SetCustomErrorsMode(string mode)
	{
	}
}
