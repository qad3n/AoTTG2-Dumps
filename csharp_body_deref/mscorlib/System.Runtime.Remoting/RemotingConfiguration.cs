// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.RemotingConfiguration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200034D")]
[ComVisible(true)]
public static class RemotingConfiguration
{
	[Token(Token = "0x4000DEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string applicationID;

	[Token(Token = "0x4000DF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string applicationName;

	[Token(Token = "0x4000DF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string processGuid;

	[Token(Token = "0x4000DF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static bool defaultConfigRead;

	[Token(Token = "0x4000DF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private static bool defaultDelayedConfigRead;

	[Token(Token = "0x4000DF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static CustomErrorsModes _errorMode;

	[Token(Token = "0x4000DF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Hashtable wellKnownClientEntries;

	[Token(Token = "0x4000DF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Hashtable activatedClientEntries;

	[Token(Token = "0x4000DF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Hashtable wellKnownServiceEntries;

	[Token(Token = "0x4000DF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Hashtable activatedServiceEntries;

	[Token(Token = "0x4000DF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Hashtable channelTemplates;

	[Token(Token = "0x4000DFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Hashtable clientProviderTemplates;

	[Token(Token = "0x4000DFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Hashtable serverProviderTemplates;

	[Token(Token = "0x17000341")]
	public static string ApplicationName
	{
		[Token(Token = "0x6001C8B")]
		[Address(RVA = "0x536AE10", Offset = "0x5369E10", VA = "0x536AE10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C8C")]
		[Address(RVA = "0x536AE80", Offset = "0x5369E80", VA = "0x536AE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000342")]
	public static string ProcessId
	{
		[Token(Token = "0x6001C8D")]
		[Address(RVA = "0x536AEE0", Offset = "0x5369EE0", VA = "0x536AEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x536AFC0", Offset = "0x5369FC0", VA = "0x536AFC0")]
	internal static void LoadDefaultDelayedChannels()
	{
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x536B3A0", Offset = "0x536A3A0", VA = "0x536B3A0")]
	public static bool IsActivationAllowed(Type svrType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x536B4D0", Offset = "0x536A4D0", VA = "0x536B4D0")]
	public static ActivatedClientTypeEntry IsRemotelyActivatedClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x536B650", Offset = "0x536A650", VA = "0x536B650")]
	public static WellKnownClientTypeEntry IsWellKnownClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x536B7D0", Offset = "0x536A7D0", VA = "0x536B7D0")]
	public static void RegisterActivatedClientType(ActivatedClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x536BA50", Offset = "0x536AA50", VA = "0x536BA50")]
	public static void RegisterActivatedServiceType(ActivatedServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x536BB80", Offset = "0x536AB80", VA = "0x536BB80")]
	public static void RegisterWellKnownClientType(WellKnownClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x536BE00", Offset = "0x536AE00", VA = "0x536BE00")]
	public static void RegisterWellKnownServiceType(WellKnownServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x536C0A0", Offset = "0x536B0A0", VA = "0x536C0A0")]
	internal static void RegisterChannelTemplate(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x536C140", Offset = "0x536B140", VA = "0x536C140")]
	internal static void RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x536C1E0", Offset = "0x536B1E0", VA = "0x536C1E0")]
	internal static void RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x536C280", Offset = "0x536B280", VA = "0x536C280")]
	internal static void RegisterChannels(ArrayList channels, bool onlyDelayed)
	{
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x536E510", Offset = "0x536D510", VA = "0x536E510")]
	internal static void RegisterTypes(ArrayList types)
	{
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x536EA50", Offset = "0x536DA50", VA = "0x536EA50")]
	public static bool CustomErrorsEnabled(bool isLocalRequest)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x536EB00", Offset = "0x536DB00", VA = "0x536EB00")]
	internal static void SetCustomErrorsMode(string mode)
	{
	}
}
