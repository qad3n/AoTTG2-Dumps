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

[Token(Token = "0x2000374")]
[ComVisible(true)]
public static class RemotingConfiguration
{
	[Token(Token = "0x4000E8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string applicationID;

	[Token(Token = "0x4000E90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string applicationName;

	[Token(Token = "0x4000E91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string processGuid;

	[Token(Token = "0x4000E92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static bool defaultConfigRead;

	[Token(Token = "0x4000E93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private static bool defaultDelayedConfigRead;

	[Token(Token = "0x4000E94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static CustomErrorsModes _errorMode;

	[Token(Token = "0x4000E95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Hashtable wellKnownClientEntries;

	[Token(Token = "0x4000E96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Hashtable activatedClientEntries;

	[Token(Token = "0x4000E97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Hashtable wellKnownServiceEntries;

	[Token(Token = "0x4000E98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Hashtable activatedServiceEntries;

	[Token(Token = "0x4000E99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Hashtable channelTemplates;

	[Token(Token = "0x4000E9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Hashtable clientProviderTemplates;

	[Token(Token = "0x4000E9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Hashtable serverProviderTemplates;

	[Token(Token = "0x17000342")]
	public static string ApplicationName
	{
		[Token(Token = "0x6001CB5")]
		[Address(RVA = "0x19DFF70", Offset = "0x19DE570", VA = "0x1819DFF70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CB6")]
		[Address(RVA = "0x19E00A0", Offset = "0x19DE6A0", VA = "0x1819E00A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000343")]
	public static string ProcessId
	{
		[Token(Token = "0x6001CB7")]
		[Address(RVA = "0x19DFFC0", Offset = "0x19DE5C0", VA = "0x1819DFFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x19DE100", Offset = "0x19DC700", VA = "0x1819DE100")]
	internal static void LoadDefaultDelayedChannels()
	{
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x19DDCB0", Offset = "0x19DC2B0", VA = "0x1819DDCB0")]
	public static bool IsActivationAllowed(Type svrType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x19DDDE0", Offset = "0x19DC3E0", VA = "0x1819DDDE0")]
	public static ActivatedClientTypeEntry IsRemotelyActivatedClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x19DDF70", Offset = "0x19DC570", VA = "0x1819DDF70")]
	public static WellKnownClientTypeEntry IsWellKnownClientType(Type svrType)
	{
		return null;
	}

	[Token(Token = "0x6001CBC")]
	[Address(RVA = "0x19DE460", Offset = "0x19DCA60", VA = "0x1819DE460")]
	public static void RegisterActivatedClientType(ActivatedClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001CBD")]
	[Address(RVA = "0x19DE6F0", Offset = "0x19DCCF0", VA = "0x1819DE6F0")]
	public static void RegisterActivatedServiceType(ActivatedServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x19DF660", Offset = "0x19DDC60", VA = "0x1819DF660")]
	public static void RegisterWellKnownClientType(WellKnownClientTypeEntry entry)
	{
	}

	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x19DF8F0", Offset = "0x19DDEF0", VA = "0x1819DF8F0")]
	public static void RegisterWellKnownServiceType(WellKnownServiceTypeEntry entry)
	{
	}

	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x19DE820", Offset = "0x19DCE20", VA = "0x1819DE820")]
	internal static void RegisterChannelTemplate(System.Runtime.Remoting.ChannelData channel)
	{
	}

	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x19DF0F0", Offset = "0x19DD6F0", VA = "0x1819DF0F0")]
	internal static void RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x19DF170", Offset = "0x19DD770", VA = "0x1819DF170")]
	internal static void RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData prov)
	{
	}

	[Token(Token = "0x6001CC3")]
	[Address(RVA = "0x19DE8A0", Offset = "0x19DCEA0", VA = "0x1819DE8A0")]
	internal static void RegisterChannels(ArrayList channels, bool onlyDelayed)
	{
	}

	[Token(Token = "0x6001CC4")]
	[Address(RVA = "0x19DF1F0", Offset = "0x19DD7F0", VA = "0x1819DF1F0")]
	internal static void RegisterTypes(ArrayList types)
	{
	}

	[Token(Token = "0x6001CC5")]
	[Address(RVA = "0x19DDC20", Offset = "0x19DC220", VA = "0x1819DDC20")]
	public static bool CustomErrorsEnabled(bool isLocalRequest)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CC6")]
	[Address(RVA = "0x19DFA70", Offset = "0x19DE070", VA = "0x1819DFA70")]
	internal static void SetCustomErrorsMode(string mode)
	{
	}
}
