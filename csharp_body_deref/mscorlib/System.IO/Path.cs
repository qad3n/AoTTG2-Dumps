// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Path
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x20006A5")]
[ComVisible(true)]
public static class Path
{
	[Token(Token = "0x4001AF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[Obsolete("see GetInvalidPathChars and GetInvalidFileNameChars methods.")]
	public static readonly char[] InvalidPathChars;

	[Token(Token = "0x4001AF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char AltDirectorySeparatorChar;

	[Token(Token = "0x4001AF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	public static readonly char DirectorySeparatorChar;

	[Token(Token = "0x4001AF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly char PathSeparator;

	[Token(Token = "0x4001AFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly string DirectorySeparatorStr;

	[Token(Token = "0x4001AFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly char VolumeSeparatorChar;

	[Token(Token = "0x4001AFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly char[] PathSeparatorChars;

	[Token(Token = "0x4001AFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly bool dirEqualsVolume;

	[Token(Token = "0x4001AFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static readonly char[] trimEndCharsWindows;

	[Token(Token = "0x4001AFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal static readonly char[] trimEndCharsUnix;

	[Token(Token = "0x17000845")]
	internal static StringComparison StringComparison
	{
		[Token(Token = "0x60033A1")]
		[Address(RVA = "0x1AF68E0", Offset = "0x1AF4EE0", VA = "0x181AF68E0")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x17000846")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x60033A2")]
		[Address(RVA = "0x1AF6840", Offset = "0x1AF4E40", VA = "0x181AF6840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000847")]
	private static bool IsWindows
	{
		[Token(Token = "0x60033A3")]
		[Address(RVA = "0x1AF68B0", Offset = "0x1AF4EB0", VA = "0x181AF68B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600337D")]
	[Address(RVA = "0x1AF1DF0", Offset = "0x1AF03F0", VA = "0x181AF1DF0")]
	public static string ChangeExtension(string path, string extension)
	{
		return null;
	}

	[Token(Token = "0x600337E")]
	[Address(RVA = "0x1AF2430", Offset = "0x1AF0A30", VA = "0x181AF2430")]
	public static string Combine(string path1, string path2)
	{
		return null;
	}

	[Token(Token = "0x600337F")]
	[Address(RVA = "0x1AF2010", Offset = "0x1AF0610", VA = "0x181AF2010")]
	internal static string CleanPath(string s)
	{
		return null;
	}

	[Token(Token = "0x6003380")]
	[Address(RVA = "0x1AF2DB0", Offset = "0x1AF13B0", VA = "0x181AF2DB0")]
	public static string GetDirectoryName(string path)
	{
		return null;
	}

	[Token(Token = "0x6003381")]
	[Address(RVA = "0x1AF2CD0", Offset = "0x1AF12D0", VA = "0x181AF2CD0")]
	public static ReadOnlySpan<char> GetDirectoryName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6003382")]
	[Address(RVA = "0x1AF31E0", Offset = "0x1AF17E0", VA = "0x181AF31E0")]
	public static string GetExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6003383")]
	[Address(RVA = "0x1AF34D0", Offset = "0x1AF1AD0", VA = "0x181AF34D0")]
	public static string GetFileName(string path)
	{
		return null;
	}

	[Token(Token = "0x6003384")]
	[Address(RVA = "0x1AF32F0", Offset = "0x1AF18F0", VA = "0x181AF32F0")]
	public static string GetFileNameWithoutExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6003385")]
	[Address(RVA = "0x1AF39B0", Offset = "0x1AF1FB0", VA = "0x181AF39B0")]
	public static string GetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6003386")]
	[Address(RVA = "0x1AF35E0", Offset = "0x1AF1BE0", VA = "0x181AF35E0")]
	internal static string GetFullPathInternal(string path)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6003387")]
	[Address(RVA = "0x1AF38E0", Offset = "0x1AF1EE0", VA = "0x181AF38E0")]
	private static extern int GetFullPathName(string path, int numBufferChars, StringBuilder buffer, ref IntPtr lpFilePartOrNull);

	[Token(Token = "0x6003388")]
	[Address(RVA = "0x1AF3630", Offset = "0x1AF1C30", VA = "0x181AF3630")]
	internal static string GetFullPathName(string path)
	{
		return null;
	}

	[Token(Token = "0x6003389")]
	[Address(RVA = "0x1AF6220", Offset = "0x1AF4820", VA = "0x181AF6220")]
	internal static string WindowsDriveAdjustment(string path)
	{
		return null;
	}

	[Token(Token = "0x600338A")]
	[Address(RVA = "0x1AF4980", Offset = "0x1AF2F80", VA = "0x181AF4980")]
	internal static string InsecureGetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x600338B")]
	[Address(RVA = "0x1AF5080", Offset = "0x1AF3680", VA = "0x181AF5080")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600338C")]
	[Address(RVA = "0x1AF3B30", Offset = "0x1AF2130", VA = "0x181AF3B30")]
	public static string GetPathRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x600338D")]
	[Address(RVA = "0x1AF4870", Offset = "0x1AF2E70", VA = "0x181AF4870")]
	public static string GetTempPath()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600338E")]
	[Address(RVA = "0x1AF6980", Offset = "0x1AF4F80", VA = "0x181AF6980")]
	private static extern string get_temp_path();

	[Token(Token = "0x600338F")]
	[Address(RVA = "0x1AF5330", Offset = "0x1AF3930", VA = "0x181AF5330")]
	public static bool IsPathRooted(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003390")]
	[Address(RVA = "0x1AF5100", Offset = "0x1AF3700", VA = "0x181AF5100")]
	public static bool IsPathRooted(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003391")]
	[Address(RVA = "0x1AF3A10", Offset = "0x1AF2010", VA = "0x181AF3A10")]
	public static char[] GetInvalidFileNameChars()
	{
		return null;
	}

	[Token(Token = "0x6003392")]
	[Address(RVA = "0x1AF3AB0", Offset = "0x1AF20B0", VA = "0x181AF3AB0")]
	public static char[] GetInvalidPathChars()
	{
		return null;
	}

	[Token(Token = "0x6003393")]
	[Address(RVA = "0x1AF67A0", Offset = "0x1AF4DA0", VA = "0x181AF67A0")]
	private static int findExtension(string path)
	{
		return default(int);
	}

	[Token(Token = "0x6003394")]
	[Address(RVA = "0x1AF6490", Offset = "0x1AF4A90", VA = "0x181AF6490")]
	static Path()
	{
	}

	[Token(Token = "0x6003395")]
	[Address(RVA = "0x1AF4670", Offset = "0x1AF2C70", VA = "0x181AF4670")]
	private static string GetServerAndShare(string path)
	{
		return null;
	}

	[Token(Token = "0x6003396")]
	[Address(RVA = "0x1AF5F10", Offset = "0x1AF4510", VA = "0x181AF5F10")]
	private static bool SameRoot(string root, string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003397")]
	[Address(RVA = "0x1AF16D0", Offset = "0x1AEFCD0", VA = "0x181AF16D0")]
	private static string CanonicalizePath(string path)
	{
		return null;
	}

	[Token(Token = "0x6003398")]
	[Address(RVA = "0x1AF2950", Offset = "0x1AF0F50", VA = "0x181AF2950")]
	public static string Combine(params string[] paths)
	{
		return null;
	}

	[Token(Token = "0x6003399")]
	[Address(RVA = "0x1AF2760", Offset = "0x1AF0D60", VA = "0x181AF2760")]
	public static string Combine(string path1, string path2, string path3)
	{
		return null;
	}

	[Token(Token = "0x600339A")]
	[Address(RVA = "0x1AF3350", Offset = "0x1AF1950", VA = "0x181AF3350")]
	public static ReadOnlySpan<char> GetFileName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600339B")]
	[Address(RVA = "0x1AF5B60", Offset = "0x1AF4160", VA = "0x181AF5B60")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2)
	{
		return null;
	}

	[Token(Token = "0x600339C")]
	[Address(RVA = "0x1AF5C10", Offset = "0x1AF4210", VA = "0x181AF5C10")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, ReadOnlySpan<char> path3)
	{
		return null;
	}

	[Token(Token = "0x600339D")]
	[Address(RVA = "0x1AF5880", Offset = "0x1AF3E80", VA = "0x181AF5880")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second)
	{
		return null;
	}

	[Token(Token = "0x600339E")]
	[Address(RVA = "0x1AF5450", Offset = "0x1AF3A50", VA = "0x181AF5450")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second, ReadOnlySpan<char> third)
	{
		return null;
	}

	[Token(Token = "0x600339F")]
	[Address(RVA = "0x1AF3FE0", Offset = "0x1AF25E0", VA = "0x181AF3FE0")]
	public static string GetRelativePath(string relativeTo, string path)
	{
		return null;
	}

	[Token(Token = "0x60033A0")]
	[Address(RVA = "0x1AF40D0", Offset = "0x1AF26D0", VA = "0x181AF40D0")]
	private static string GetRelativePath(string relativeTo, string path, StringComparison comparisonType)
	{
		return null;
	}
}
