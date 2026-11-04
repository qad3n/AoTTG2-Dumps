// ==================== AoTTG2 cross-reference ====================
// Type: System.Environment
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A0")]
[ComVisible(true)]
public static class Environment
{
	[Token(Token = "0x20001A1")]
	[ComVisible(true)]
	public enum SpecialFolder
	{
		[Token(Token = "0x400068B")]
		MyDocuments = 5,
		[Token(Token = "0x400068C")]
		Desktop = 0,
		[Token(Token = "0x400068D")]
		MyComputer = 17,
		[Token(Token = "0x400068E")]
		Programs = 2,
		[Token(Token = "0x400068F")]
		Personal = MyDocuments,
		[Token(Token = "0x4000690")]
		Favorites = 6,
		[Token(Token = "0x4000691")]
		Startup = 7,
		[Token(Token = "0x4000692")]
		Recent = 8,
		[Token(Token = "0x4000693")]
		SendTo = 9,
		[Token(Token = "0x4000694")]
		StartMenu = 11,
		[Token(Token = "0x4000695")]
		MyMusic = 13,
		[Token(Token = "0x4000696")]
		DesktopDirectory = 16,
		[Token(Token = "0x4000697")]
		Templates = 21,
		[Token(Token = "0x4000698")]
		ApplicationData = 26,
		[Token(Token = "0x4000699")]
		LocalApplicationData = 28,
		[Token(Token = "0x400069A")]
		InternetCache = 32,
		[Token(Token = "0x400069B")]
		Cookies = 33,
		[Token(Token = "0x400069C")]
		History = 34,
		[Token(Token = "0x400069D")]
		CommonApplicationData = 35,
		[Token(Token = "0x400069E")]
		System = 37,
		[Token(Token = "0x400069F")]
		ProgramFiles = 38,
		[Token(Token = "0x40006A0")]
		MyPictures = 39,
		[Token(Token = "0x40006A1")]
		CommonProgramFiles = 43,
		[Token(Token = "0x40006A2")]
		MyVideos = 14,
		[Token(Token = "0x40006A3")]
		NetworkShortcuts = 19,
		[Token(Token = "0x40006A4")]
		Fonts = 20,
		[Token(Token = "0x40006A5")]
		CommonStartMenu = 22,
		[Token(Token = "0x40006A6")]
		CommonPrograms = 23,
		[Token(Token = "0x40006A7")]
		CommonStartup = 24,
		[Token(Token = "0x40006A8")]
		CommonDesktopDirectory = 25,
		[Token(Token = "0x40006A9")]
		PrinterShortcuts = 27,
		[Token(Token = "0x40006AA")]
		Windows = 36,
		[Token(Token = "0x40006AB")]
		UserProfile = 40,
		[Token(Token = "0x40006AC")]
		SystemX86 = 41,
		[Token(Token = "0x40006AD")]
		ProgramFilesX86 = 42,
		[Token(Token = "0x40006AE")]
		CommonProgramFilesX86 = 44,
		[Token(Token = "0x40006AF")]
		CommonTemplates = 45,
		[Token(Token = "0x40006B0")]
		CommonDocuments = 46,
		[Token(Token = "0x40006B1")]
		CommonAdminTools = 47,
		[Token(Token = "0x40006B2")]
		AdminTools = 48,
		[Token(Token = "0x40006B3")]
		CommonMusic = 53,
		[Token(Token = "0x40006B4")]
		CommonPictures = 54,
		[Token(Token = "0x40006B5")]
		CommonVideos = 55,
		[Token(Token = "0x40006B6")]
		Resources = 56,
		[Token(Token = "0x40006B7")]
		LocalizedResources = 57,
		[Token(Token = "0x40006B8")]
		CommonOemLinks = 58,
		[Token(Token = "0x40006B9")]
		CDBurning = 59
	}

	[Token(Token = "0x20001A2")]
	public enum SpecialFolderOption
	{
		[Token(Token = "0x40006BB")]
		None = 0,
		[Token(Token = "0x40006BC")]
		DoNotVerify = 0x4000,
		[Token(Token = "0x40006BD")]
		Create = 0x8000
	}

	[Token(Token = "0x4000687")]
	private const string mono_corlib_version = "1A5E0066-58DC-428A-B21C-0AD6CDAE2789";

	[Token(Token = "0x4000688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string nl;

	[Token(Token = "0x4000689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static OperatingSystem os;

	[Token(Token = "0x17000156")]
	public static string CurrentDirectory
	{
		[Token(Token = "0x6000F6B")]
		[Address(RVA = "0x1B81DE0", Offset = "0x1B803E0", VA = "0x181B81DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	public static int CurrentManagedThreadId
	{
		[Token(Token = "0x6000F6C")]
		[Address(RVA = "0x1B81DF0", Offset = "0x1B803F0", VA = "0x181B81DF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public static extern bool HasShutdownStarted
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x1B81E20", Offset = "0x1B80420", VA = "0x181B81E20")]
		get;
	}

	[Token(Token = "0x17000159")]
	public static extern string MachineName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x1B81E80", Offset = "0x1B80480", VA = "0x181B81E80")]
		get;
	}

	[Token(Token = "0x1700015A")]
	public static string NewLine
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x1B81E90", Offset = "0x1B80490", VA = "0x181B81E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	internal static extern PlatformID Platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x1B821C0", Offset = "0x1B807C0", VA = "0x181B821C0")]
		[CompilerGenerated]
		get;
	}

	[Token(Token = "0x1700015C")]
	public static OperatingSystem OSVersion
	{
		[Token(Token = "0x6000F73")]
		[Address(RVA = "0x1B81F10", Offset = "0x1B80510", VA = "0x181B81F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	public static string StackTrace
	{
		[Token(Token = "0x6000F75")]
		[Address(RVA = "0x1B821E0", Offset = "0x1B807E0", VA = "0x181B821E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	public static string SystemDirectory
	{
		[Token(Token = "0x6000F76")]
		[Address(RVA = "0x1B82250", Offset = "0x1B80850", VA = "0x181B82250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public static extern int TickCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F77")]
		[Address(RVA = "0x1B824A0", Offset = "0x1B80AA0", VA = "0x181B824A0")]
		get;
	}

	[Token(Token = "0x17000160")]
	public static string UserDomainName
	{
		[Token(Token = "0x6000F78")]
		[Address(RVA = "0x1B81E80", Offset = "0x1B80480", VA = "0x181B81E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000161")]
	public static extern string UserName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x1B824B0", Offset = "0x1B80AB0", VA = "0x181B824B0")]
		get;
	}

	[Token(Token = "0x17000162")]
	public static extern int ProcessorCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x1B821D0", Offset = "0x1B807D0", VA = "0x181B821D0")]
		get;
	}

	[Token(Token = "0x17000163")]
	internal static bool IsRunningOnWindows
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x1B81E30", Offset = "0x1B80430", VA = "0x181B81E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000164")]
	internal static bool IsUnix
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x1B81E50", Offset = "0x1B80450", VA = "0x181B81E50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	internal static string GetResourceString(string key)
	{
		return null;
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x1B81420", Offset = "0x1B7FA20", VA = "0x181B81420")]
	internal static string GetResourceString(string key, params object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x1B812D0", Offset = "0x1B7F8D0", VA = "0x181B812D0")]
	internal static string GetResourceStringEncodingName(int codePage)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x1B812A0", Offset = "0x1B7F8A0", VA = "0x181B812A0")]
	private static extern string GetNewLine();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x1B812B0", Offset = "0x1B7F8B0", VA = "0x181B812B0")]
	internal static extern string GetOSVersionString();

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x1B80A20", Offset = "0x1B7F020", VA = "0x181B80A20")]
	internal static Version CreateVersionFromString(string info)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x1B80C10", Offset = "0x1B7F210", VA = "0x181B80C10")]
	public static extern void Exit(int exitCode);

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x1B80C20", Offset = "0x1B7F220", VA = "0x181B80C20")]
	public static string ExpandEnvironmentVariables(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x1B81020", Offset = "0x1B7F620", VA = "0x181B81020")]
	public static extern string[] GetCommandLineArgs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x1B82560", Offset = "0x1B80B60", VA = "0x181B82560")]
	internal static extern string internalGetEnvironmentVariable_native(IntPtr variable);

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x1B824C0", Offset = "0x1B80AC0", VA = "0x181B824C0")]
	internal static string internalGetEnvironmentVariable(string variable)
	{
		return null;
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x1B81040", Offset = "0x1B7F640", VA = "0x181B81040")]
	public static string GetEnvironmentVariable(string variable)
	{
		return null;
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x1B81050", Offset = "0x1B7F650", VA = "0x181B81050")]
	private static Hashtable GetEnvironmentVariablesNoCase()
	{
		return null;
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x1B81130", Offset = "0x1B7F730", VA = "0x181B81130")]
	public static IDictionary GetEnvironmentVariables()
	{
		return null;
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x1B81200", Offset = "0x1B7F800", VA = "0x181B81200")]
	public static string GetFolderPath(SpecialFolder folder)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x1B81520", Offset = "0x1B7FB20", VA = "0x181B81520")]
	private static extern string GetWindowsFolderPath(int folder);

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x1B81240", Offset = "0x1B7F840", VA = "0x181B81240")]
	public static string GetFolderPath(SpecialFolder folder, SpecialFolderOption option)
	{
		return null;
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x1B81530", Offset = "0x1B7FB30", VA = "0x181B81530")]
	private static string ReadXdgUserDir(string config_dir, string home_dir, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x1B81860", Offset = "0x1B7FE60", VA = "0x181B81860")]
	internal static string UnixGetFolderPath(SpecialFolder folder, SpecialFolderOption option)
	{
		return null;
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x1B81000", Offset = "0x1B7F600", VA = "0x181B81000")]
	public static void FailFast(string message)
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x1B80FF0", Offset = "0x1B7F5F0", VA = "0x181B80FF0")]
	public static void FailFast(string message, Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x1B81010", Offset = "0x1B7F610", VA = "0x181B81010")]
	internal static extern void FailFast(string message, Exception exception, string errorSource);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x1B81030", Offset = "0x1B7F630", VA = "0x181B81030")]
	private static extern string[] GetEnvironmentVariableNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x1B81290", Offset = "0x1B7F890", VA = "0x181B81290")]
	internal static extern string GetMachineConfigPath();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x1B82570", Offset = "0x1B80B70", VA = "0x181B82570")]
	internal static extern string internalGetHome();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x1B812C0", Offset = "0x1B7F8C0", VA = "0x181B812C0")]
	internal static extern int GetPageSize();

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x1B81490", Offset = "0x1B7FA90", VA = "0x181B81490")]
	internal static string GetStackTrace(Exception e, bool needFileInfo)
	{
		return null;
	}
}
