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

[Token(Token = "0x2000178")]
[ComVisible(true)]
public static class Environment
{
	[Token(Token = "0x2000179")]
	[ComVisible(true)]
	public enum SpecialFolder
	{
		[Token(Token = "0x40005E9")]
		MyDocuments = 5,
		[Token(Token = "0x40005EA")]
		Desktop = 0,
		[Token(Token = "0x40005EB")]
		MyComputer = 17,
		[Token(Token = "0x40005EC")]
		Programs = 2,
		[Token(Token = "0x40005ED")]
		Personal = MyDocuments,
		[Token(Token = "0x40005EE")]
		Favorites = 6,
		[Token(Token = "0x40005EF")]
		Startup = 7,
		[Token(Token = "0x40005F0")]
		Recent = 8,
		[Token(Token = "0x40005F1")]
		SendTo = 9,
		[Token(Token = "0x40005F2")]
		StartMenu = 11,
		[Token(Token = "0x40005F3")]
		MyMusic = 13,
		[Token(Token = "0x40005F4")]
		DesktopDirectory = 16,
		[Token(Token = "0x40005F5")]
		Templates = 21,
		[Token(Token = "0x40005F6")]
		ApplicationData = 26,
		[Token(Token = "0x40005F7")]
		LocalApplicationData = 28,
		[Token(Token = "0x40005F8")]
		InternetCache = 32,
		[Token(Token = "0x40005F9")]
		Cookies = 33,
		[Token(Token = "0x40005FA")]
		History = 34,
		[Token(Token = "0x40005FB")]
		CommonApplicationData = 35,
		[Token(Token = "0x40005FC")]
		System = 37,
		[Token(Token = "0x40005FD")]
		ProgramFiles = 38,
		[Token(Token = "0x40005FE")]
		MyPictures = 39,
		[Token(Token = "0x40005FF")]
		CommonProgramFiles = 43,
		[Token(Token = "0x4000600")]
		MyVideos = 14,
		[Token(Token = "0x4000601")]
		NetworkShortcuts = 19,
		[Token(Token = "0x4000602")]
		Fonts = 20,
		[Token(Token = "0x4000603")]
		CommonStartMenu = 22,
		[Token(Token = "0x4000604")]
		CommonPrograms = 23,
		[Token(Token = "0x4000605")]
		CommonStartup = 24,
		[Token(Token = "0x4000606")]
		CommonDesktopDirectory = 25,
		[Token(Token = "0x4000607")]
		PrinterShortcuts = 27,
		[Token(Token = "0x4000608")]
		Windows = 36,
		[Token(Token = "0x4000609")]
		UserProfile = 40,
		[Token(Token = "0x400060A")]
		SystemX86 = 41,
		[Token(Token = "0x400060B")]
		ProgramFilesX86 = 42,
		[Token(Token = "0x400060C")]
		CommonProgramFilesX86 = 44,
		[Token(Token = "0x400060D")]
		CommonTemplates = 45,
		[Token(Token = "0x400060E")]
		CommonDocuments = 46,
		[Token(Token = "0x400060F")]
		CommonAdminTools = 47,
		[Token(Token = "0x4000610")]
		AdminTools = 48,
		[Token(Token = "0x4000611")]
		CommonMusic = 53,
		[Token(Token = "0x4000612")]
		CommonPictures = 54,
		[Token(Token = "0x4000613")]
		CommonVideos = 55,
		[Token(Token = "0x4000614")]
		Resources = 56,
		[Token(Token = "0x4000615")]
		LocalizedResources = 57,
		[Token(Token = "0x4000616")]
		CommonOemLinks = 58,
		[Token(Token = "0x4000617")]
		CDBurning = 59
	}

	[Token(Token = "0x200017A")]
	public enum SpecialFolderOption
	{
		[Token(Token = "0x4000619")]
		None = 0,
		[Token(Token = "0x400061A")]
		DoNotVerify = 0x4000,
		[Token(Token = "0x400061B")]
		Create = 0x8000
	}

	[Token(Token = "0x40005E5")]
	private const string mono_corlib_version = "1A5E0066-58DC-428A-B21C-0AD6CDAE2789";

	[Token(Token = "0x40005E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string nl;

	[Token(Token = "0x40005E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static OperatingSystem os;

	[Token(Token = "0x17000156")]
	public static string CurrentDirectory
	{
		[Token(Token = "0x6000F45")]
		[Address(RVA = "0x5509C10", Offset = "0x5508C10", VA = "0x5509C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	public static int CurrentManagedThreadId
	{
		[Token(Token = "0x6000F46")]
		[Address(RVA = "0x5509C20", Offset = "0x5508C20", VA = "0x5509C20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public static extern bool HasShutdownStarted
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F47")]
		[Address(RVA = "0x5509C40", Offset = "0x5508C40", VA = "0x5509C40")]
		get;
	}

	[Token(Token = "0x17000159")]
	public static extern string MachineName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x5509C50", Offset = "0x5508C50", VA = "0x5509C50")]
		get;
	}

	[Token(Token = "0x1700015A")]
	public static string NewLine
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x5509C70", Offset = "0x5508C70", VA = "0x5509C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	internal static extern PlatformID Platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x5509CE0", Offset = "0x5508CE0", VA = "0x5509CE0")]
		[CompilerGenerated]
		get;
	}

	[Token(Token = "0x1700015C")]
	public static OperatingSystem OSVersion
	{
		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x5509D00", Offset = "0x5508D00", VA = "0x5509D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	public static string StackTrace
	{
		[Token(Token = "0x6000F4F")]
		[Address(RVA = "0x5509FB0", Offset = "0x5508FB0", VA = "0x5509FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	public static extern int TickCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F50")]
		[Address(RVA = "0x550A020", Offset = "0x5509020", VA = "0x550A020")]
		get;
	}

	[Token(Token = "0x1700015F")]
	public static string UserDomainName
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x550A030", Offset = "0x5509030", VA = "0x550A030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	public static extern string UserName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x550A040", Offset = "0x5509040", VA = "0x550A040")]
		get;
	}

	[Token(Token = "0x17000161")]
	public static extern int ProcessorCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x550AC80", Offset = "0x5509C80", VA = "0x550AC80")]
		get;
	}

	[Token(Token = "0x17000162")]
	internal static bool IsRunningOnWindows
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x550A2A0", Offset = "0x55092A0", VA = "0x550A2A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000163")]
	internal static bool IsUnix
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x550ACB0", Offset = "0x5509CB0", VA = "0x550ACB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x5506140", Offset = "0x5505140", VA = "0x5506140")]
	internal static string GetResourceString(string key)
	{
		return null;
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x5507F40", Offset = "0x5506F40", VA = "0x5507F40")]
	internal static string GetResourceString(string key, params object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x5509AA0", Offset = "0x5508AA0", VA = "0x5509AA0")]
	internal static string GetResourceStringEncodingName(int codePage)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x5509C60", Offset = "0x5508C60", VA = "0x5509C60")]
	private static extern string GetNewLine();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x5509CF0", Offset = "0x5508CF0", VA = "0x5509CF0")]
	internal static extern string GetOSVersionString();

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x5509DC0", Offset = "0x5508DC0", VA = "0x5509DC0")]
	internal static Version CreateVersionFromString(string info)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x550A050", Offset = "0x5509050", VA = "0x550A050")]
	public static extern void Exit(int exitCode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x550A060", Offset = "0x5509060", VA = "0x550A060")]
	public static extern string[] GetCommandLineArgs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x550A070", Offset = "0x5509070", VA = "0x550A070")]
	internal static extern string internalGetEnvironmentVariable_native(IntPtr variable);

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x550A080", Offset = "0x5509080", VA = "0x550A080")]
	internal static string internalGetEnvironmentVariable(string variable)
	{
		return null;
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x550A140", Offset = "0x5509140", VA = "0x550A140")]
	public static string GetEnvironmentVariable(string variable)
	{
		return null;
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x550A150", Offset = "0x5509150", VA = "0x550A150")]
	public static IDictionary GetEnvironmentVariables()
	{
		return null;
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x550A230", Offset = "0x5509230", VA = "0x550A230")]
	public static string GetFolderPath(SpecialFolder folder)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x550A290", Offset = "0x5509290", VA = "0x550A290")]
	private static extern string GetWindowsFolderPath(int folder);

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x550A260", Offset = "0x5509260", VA = "0x550A260")]
	public static string GetFolderPath(SpecialFolder folder, SpecialFolderOption option)
	{
		return null;
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x550A770", Offset = "0x5509770", VA = "0x550A770")]
	private static string ReadXdgUserDir(string config_dir, string home_dir, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x550A2B0", Offset = "0x55092B0", VA = "0x550A2B0")]
	internal static string UnixGetFolderPath(SpecialFolder folder, SpecialFolderOption option)
	{
		return null;
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x550AC50", Offset = "0x5509C50", VA = "0x550AC50")]
	public static void FailFast(string message)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x550AC70", Offset = "0x5509C70", VA = "0x550AC70")]
	public static void FailFast(string message, Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x550AC60", Offset = "0x5509C60", VA = "0x550AC60")]
	internal static extern void FailFast(string message, Exception exception, string errorSource);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x550A220", Offset = "0x5509220", VA = "0x550A220")]
	private static extern string[] GetEnvironmentVariableNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x550AC90", Offset = "0x5509C90", VA = "0x550AC90")]
	internal static extern string GetMachineConfigPath();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x550AC40", Offset = "0x5509C40", VA = "0x550AC40")]
	internal static extern string internalGetHome();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x550ACA0", Offset = "0x5509CA0", VA = "0x550ACA0")]
	internal static extern int GetPageSize();

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x550ACE0", Offset = "0x5509CE0", VA = "0x550ACE0")]
	internal static string GetStackTrace(Exception e, bool needFileInfo)
	{
		return null;
	}
}
