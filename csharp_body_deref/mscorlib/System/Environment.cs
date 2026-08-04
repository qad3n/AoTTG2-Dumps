// ==================== AoTTG2 cross-reference ====================
// Type: System.Environment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000175")]
[ComVisible(true)]
public static class Environment
{
	[Token(Token = "0x2000176")]
	[ComVisible(true)]
	public enum SpecialFolder
	{
		[Token(Token = "0x4000627")]
		MyDocuments = 5,
		[Token(Token = "0x4000628")]
		Desktop = 0,
		[Token(Token = "0x4000629")]
		MyComputer = 17,
		[Token(Token = "0x400062A")]
		Programs = 2,
		[Token(Token = "0x400062B")]
		Personal = 5,
		[Token(Token = "0x400062C")]
		Favorites = 6,
		[Token(Token = "0x400062D")]
		Startup = 7,
		[Token(Token = "0x400062E")]
		Recent = 8,
		[Token(Token = "0x400062F")]
		SendTo = 9,
		[Token(Token = "0x4000630")]
		StartMenu = 11,
		[Token(Token = "0x4000631")]
		MyMusic = 13,
		[Token(Token = "0x4000632")]
		DesktopDirectory = 16,
		[Token(Token = "0x4000633")]
		Templates = 21,
		[Token(Token = "0x4000634")]
		ApplicationData = 26,
		[Token(Token = "0x4000635")]
		LocalApplicationData = 28,
		[Token(Token = "0x4000636")]
		InternetCache = 32,
		[Token(Token = "0x4000637")]
		Cookies = 33,
		[Token(Token = "0x4000638")]
		History = 34,
		[Token(Token = "0x4000639")]
		CommonApplicationData = 35,
		[Token(Token = "0x400063A")]
		System = 37,
		[Token(Token = "0x400063B")]
		ProgramFiles = 38,
		[Token(Token = "0x400063C")]
		MyPictures = 39,
		[Token(Token = "0x400063D")]
		CommonProgramFiles = 43,
		[Token(Token = "0x400063E")]
		MyVideos = 14,
		[Token(Token = "0x400063F")]
		NetworkShortcuts = 19,
		[Token(Token = "0x4000640")]
		Fonts = 20,
		[Token(Token = "0x4000641")]
		CommonStartMenu = 22,
		[Token(Token = "0x4000642")]
		CommonPrograms = 23,
		[Token(Token = "0x4000643")]
		CommonStartup = 24,
		[Token(Token = "0x4000644")]
		CommonDesktopDirectory = 25,
		[Token(Token = "0x4000645")]
		PrinterShortcuts = 27,
		[Token(Token = "0x4000646")]
		Windows = 36,
		[Token(Token = "0x4000647")]
		UserProfile = 40,
		[Token(Token = "0x4000648")]
		SystemX86 = 41,
		[Token(Token = "0x4000649")]
		ProgramFilesX86 = 42,
		[Token(Token = "0x400064A")]
		CommonProgramFilesX86 = 44,
		[Token(Token = "0x400064B")]
		CommonTemplates = 45,
		[Token(Token = "0x400064C")]
		CommonDocuments = 46,
		[Token(Token = "0x400064D")]
		CommonAdminTools = 47,
		[Token(Token = "0x400064E")]
		AdminTools = 48,
		[Token(Token = "0x400064F")]
		CommonMusic = 53,
		[Token(Token = "0x4000650")]
		CommonPictures = 54,
		[Token(Token = "0x4000651")]
		CommonVideos = 55,
		[Token(Token = "0x4000652")]
		Resources = 56,
		[Token(Token = "0x4000653")]
		LocalizedResources = 57,
		[Token(Token = "0x4000654")]
		CommonOemLinks = 58,
		[Token(Token = "0x4000655")]
		CDBurning = 59
	}

	[Token(Token = "0x2000177")]
	public enum SpecialFolderOption
	{
		[Token(Token = "0x4000657")]
		None = 0,
		[Token(Token = "0x4000658")]
		DoNotVerify = 0x4000,
		[Token(Token = "0x4000659")]
		Create = 0x8000
	}

	[Token(Token = "0x4000623")]
	private const string mono_corlib_version = "1A5E0066-58DC-428A-B21C-0AD6CDAE2789";

	[Token(Token = "0x4000624")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string nl;

	[Token(Token = "0x4000625")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static OperatingSystem os;

	[Token(Token = "0x17000155")]
	public static string CurrentDirectory
	{
		[Token(Token = "0x6000F1A")]
		[Address(RVA = "0x3D063A0", Offset = "0x3D063A0", VA = "0x3D063A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	public static int CurrentManagedThreadId
	{
		[Token(Token = "0x6000F1B")]
		[Address(RVA = "0x3D063B0", Offset = "0x3D063B0", VA = "0x3D063B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000157")]
	public static extern bool HasShutdownStarted
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F1C")]
		[Address(RVA = "0x3D063D0", Offset = "0x3D063D0", VA = "0x3D063D0")]
		get;
	}

	[Token(Token = "0x17000158")]
	public static extern string MachineName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F1D")]
		[Address(RVA = "0x3D063E0", Offset = "0x3D063E0", VA = "0x3D063E0")]
		get;
	}

	[Token(Token = "0x17000159")]
	public static string NewLine
	{
		[Token(Token = "0x6000F1F")]
		[Address(RVA = "0x3D06400", Offset = "0x3D06400", VA = "0x3D06400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	internal static extern PlatformID Platform
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x3D06470", Offset = "0x3D06470", VA = "0x3D06470")]
		[CompilerGenerated]
		get;
	}

	[Token(Token = "0x1700015B")]
	public static OperatingSystem OSVersion
	{
		[Token(Token = "0x6000F22")]
		[Address(RVA = "0x3D06490", Offset = "0x3D06490", VA = "0x3D06490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015C")]
	public static string StackTrace
	{
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x3D06750", Offset = "0x3D06750", VA = "0x3D06750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015D")]
	public static extern int TickCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x3D067C0", Offset = "0x3D067C0", VA = "0x3D067C0")]
		get;
	}

	[Token(Token = "0x1700015E")]
	public static string UserDomainName
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x3D067D0", Offset = "0x3D067D0", VA = "0x3D067D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public static extern string UserName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F27")]
		[Address(RVA = "0x3D067E0", Offset = "0x3D067E0", VA = "0x3D067E0")]
		get;
	}

	[Token(Token = "0x17000160")]
	public static extern int ProcessorCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000F36")]
		[Address(RVA = "0x3D073C0", Offset = "0x3D073C0", VA = "0x3D073C0")]
		get;
	}

	[Token(Token = "0x17000161")]
	internal static bool IsRunningOnWindows
	{
		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x3D06A20", Offset = "0x3D06A20", VA = "0x3D06A20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000162")]
	internal static bool IsUnix
	{
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x3D073F0", Offset = "0x3D073F0", VA = "0x3D073F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x3D028E0", Offset = "0x3D028E0", VA = "0x3D028E0")]
	internal static string GetResourceString(string key)
	{
		return null;
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x3D047C0", Offset = "0x3D047C0", VA = "0x3D047C0")]
	internal static string GetResourceString(string key, params object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x3D06220", Offset = "0x3D06220", VA = "0x3D06220")]
	internal static string GetResourceStringEncodingName(int codePage)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x3D063F0", Offset = "0x3D063F0", VA = "0x3D063F0")]
	private static extern string GetNewLine();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x3D06480", Offset = "0x3D06480", VA = "0x3D06480")]
	internal static extern string GetOSVersionString();

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x3D06550", Offset = "0x3D06550", VA = "0x3D06550")]
	internal static Version CreateVersionFromString(string info)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x3D067F0", Offset = "0x3D067F0", VA = "0x3D067F0")]
	public static extern void Exit(int exitCode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x3D06800", Offset = "0x3D06800", VA = "0x3D06800")]
	public static extern string[] GetCommandLineArgs();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x3D06810", Offset = "0x3D06810", VA = "0x3D06810")]
	internal static extern string internalGetEnvironmentVariable_native(IntPtr variable);

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x3D06820", Offset = "0x3D06820", VA = "0x3D06820")]
	internal static string internalGetEnvironmentVariable(string variable)
	{
		return null;
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x3D068E0", Offset = "0x3D068E0", VA = "0x3D068E0")]
	public static string GetEnvironmentVariable(string variable)
	{
		return null;
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x3D068F0", Offset = "0x3D068F0", VA = "0x3D068F0")]
	public static IDictionary GetEnvironmentVariables()
	{
		return null;
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x3D069D0", Offset = "0x3D069D0", VA = "0x3D069D0")]
	public static string GetFolderPath(SpecialFolder folder)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x3D06A10", Offset = "0x3D06A10", VA = "0x3D06A10")]
	private static extern string GetWindowsFolderPath(int folder);

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x3D069F0", Offset = "0x3D069F0", VA = "0x3D069F0")]
	public static string GetFolderPath(SpecialFolder folder, SpecialFolderOption option)
	{
		return null;
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x3D06EE0", Offset = "0x3D06EE0", VA = "0x3D06EE0")]
	private static string ReadXdgUserDir(string config_dir, string home_dir, string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x3D06A30", Offset = "0x3D06A30", VA = "0x3D06A30")]
	internal static string UnixGetFolderPath(SpecialFolder folder, SpecialFolderOption option)
	{
		return null;
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x3D07390", Offset = "0x3D07390", VA = "0x3D07390")]
	public static void FailFast(string message)
	{
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x3D073B0", Offset = "0x3D073B0", VA = "0x3D073B0")]
	public static void FailFast(string message, Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x3D073A0", Offset = "0x3D073A0", VA = "0x3D073A0")]
	internal static extern void FailFast(string message, Exception exception, string errorSource);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x3D069C0", Offset = "0x3D069C0", VA = "0x3D069C0")]
	private static extern string[] GetEnvironmentVariableNames();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x3D073D0", Offset = "0x3D073D0", VA = "0x3D073D0")]
	internal static extern string GetMachineConfigPath();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x3D07380", Offset = "0x3D07380", VA = "0x3D07380")]
	internal static extern string internalGetHome();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x3D073E0", Offset = "0x3D073E0", VA = "0x3D073E0")]
	internal static extern int GetPageSize();

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x3D07420", Offset = "0x3D07420", VA = "0x3D07420")]
	internal static string GetStackTrace(Exception e, bool needFileInfo)
	{
		return null;
	}
}
