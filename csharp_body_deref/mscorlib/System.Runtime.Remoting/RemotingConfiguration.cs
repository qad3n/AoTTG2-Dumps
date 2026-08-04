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
		[Address(RVA = "0x3B616A0", Offset = "0x3B616A0", VA = "0x3B616A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C47")]
		[Address(RVA = "0x3B61710", Offset = "0x3B61710", VA = "0x3B61710")]
		set
		{
		}
	}

	[Token(Token = "0x17000341")]
	public static string ProcessId
	{
		[Token(Token = "0x6001C48")]
		[Address(RVA = "0x3B61770", Offset = "0x3B61770", VA = "0x3B61770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C49")]
	[Address(RVA = "0x3B61850", Offset = "0x3B61850", VA = "0x3B61850")]
	internal static void LoadDefaultDelayedChannels()
	{
	}

	[Token(Token = "0x6001C4A")]
	[Address(RVA = "0x3B61CA0", Offset = "0x3B61CA0", VA = "0x3B61CA0")]
	public static bool IsActivationAllowed(Type svrType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C4B")]
	[Address(RVA = "0x3B61DF0", Offset = "0x3B61DF0", VA = "0x3B61DF0")]
	public static ActivatedClientTypeEntry IsRemotelyActivatedClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001C4C")]
	[Address(RVA = "0x3B61F90", Offset = "0x3B61F90", VA = "0x3B61F90")]
	public static WellKnownClientTypeEntry IsWellKnownClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001C4D")]
	[Address(RVA = "0x3B62130", Offset = "0x3B62130", VA = "0x3B62130")]
	public static void RegisterActivatedClientType(ActivatedClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C4E")]
	[Address(RVA = "0x3B62420", Offset = "0x3B62420", VA = "0x3B62420")]
	public static void RegisterActivatedServiceType(ActivatedServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C4F")]
	[Address(RVA = "0x3B62570", Offset = "0x3B62570", VA = "0x3B62570")]
	public static void RegisterWellKnownClientType(WellKnownClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C50")]
	[Address(RVA = "0x3B62860", Offset = "0x3B62860", VA = "0x3B62860")]
	public static void RegisterWellKnownServiceType(WellKnownServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001C51")]
	[Address(RVA = "0x3B62B00", Offset = "0x3B62B00", VA = "0x3B62B00")]
	internal static void RegisterChannelTemplate(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001C52")]
	[Address(RVA = "0x3B62BA0", Offset = "0x3B62BA0", VA = "0x3B62BA0")]
	internal static void RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x3B62C40", Offset = "0x3B62C40", VA = "0x3B62C40")]
	internal static void RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001C54")]
	[Address(RVA = "0x3B62CE0", Offset = "0x3B62CE0", VA = "0x3B62CE0")]
	internal static void RegisterChannels(ArrayList channels, bool onlyDelayed)
	{
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x3B65510", Offset = "0x3B65510", VA = "0x3B65510")]
	internal static void RegisterTypes(ArrayList types)
	{
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x3B65B10", Offset = "0x3B65B10", VA = "0x3B65B10")]
	public static bool CustomErrorsEnabled(bool isLocalRequest)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x3B65BC0", Offset = "0x3B65BC0", VA = "0x3B65BC0")]
	internal static void SetCustomErrorsMode(string mode)
	{
	}
}
