using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200057D")]
[ComVisible(true)]
public static class Path
{
	[Token(Token = "0x400171B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[Obsolete("see GetInvalidPathChars and GetInvalidFileNameChars methods.")]
	public static readonly char[] InvalidPathChars;

	[Token(Token = "0x400171C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char AltDirectorySeparatorChar;

	[Token(Token = "0x400171D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	public static readonly char DirectorySeparatorChar;

	[Token(Token = "0x400171E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly char PathSeparator;

	[Token(Token = "0x400171F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly string DirectorySeparatorStr;

	[Token(Token = "0x4001720")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly char VolumeSeparatorChar;

	[Token(Token = "0x4001721")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly char[] PathSeparatorChars;

	[Token(Token = "0x4001722")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly bool dirEqualsVolume;

	[Token(Token = "0x4001723")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static readonly char[] trimEndCharsWindows;

	[Token(Token = "0x4001724")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal static readonly char[] trimEndCharsUnix;

	[Token(Token = "0x1700062F")]
	internal static StringComparison StringComparison
	{
		[Token(Token = "0x6002AD7")]
		[Address(RVA = "0x4F4FE50", Offset = "0x4F4FE50", VA = "0x4F4FE50")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x17000630")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x6002AD8")]
		[Address(RVA = "0x4F504D0", Offset = "0x4F504D0", VA = "0x4F504D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000631")]
	private static bool IsWindows
	{
		[Token(Token = "0x6002AD9")]
		[Address(RVA = "0x4F50540", Offset = "0x4F50540", VA = "0x4F50540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AB7")]
	[Address(RVA = "0x4F4CA00", Offset = "0x4F4CA00", VA = "0x4F4CA00")]
	public static string ChangeExtension(string path, string extension)
	{
		return null;
	}

	[Token(Token = "0x6002AB8")]
	[Address(RVA = "0x4F4CCC0", Offset = "0x4F4CCC0", VA = "0x4F4CCC0")]
	public static string Combine(string path1, string path2)
	{
		return null;
	}

	[Token(Token = "0x6002AB9")]
	[Address(RVA = "0x4F4D040", Offset = "0x4F4D040", VA = "0x4F4D040")]
	internal static string CleanPath(string s)
	{
		return null;
	}

	[Token(Token = "0x6002ABA")]
	[Address(RVA = "0x4F3D8B0", Offset = "0x4F3D8B0", VA = "0x4F3D8B0")]
	public static string GetDirectoryName(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABB")]
	[Address(RVA = "0x4F4DDB0", Offset = "0x4F4DDB0", VA = "0x4F4DDB0")]
	public static ReadOnlySpan<char> GetDirectoryName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6002ABC")]
	[Address(RVA = "0x4F4DE60", Offset = "0x4F4DE60", VA = "0x4F4DE60")]
	public static string GetExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABD")]
	[Address(RVA = "0x4F42F00", Offset = "0x4F42F00", VA = "0x4F42F00")]
	public static string GetFileName(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABE")]
	[Address(RVA = "0x4F4DFD0", Offset = "0x4F4DFD0", VA = "0x4F4DFD0")]
	public static string GetFileNameWithoutExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABF")]
	[Address(RVA = "0x4F48830", Offset = "0x4F48830", VA = "0x4F48830")]
	public static string GetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC0")]
	[Address(RVA = "0x4F3DE10", Offset = "0x4F3DE10", VA = "0x4F3DE10")]
	internal static string GetFullPathInternal(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC1")]
	[Address(RVA = "0x4F47D80", Offset = "0x4F47D80", VA = "0x4F47D80")]
	internal static string InsecureGetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC2")]
	[Address(RVA = "0x4F42E60", Offset = "0x4F42E60", VA = "0x4F42E60")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AC3")]
	[Address(RVA = "0x4F4D5A0", Offset = "0x4F4D5A0", VA = "0x4F4D5A0")]
	public static string GetPathRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC4")]
	[Address(RVA = "0x4F4E690", Offset = "0x4F4E690", VA = "0x4F4E690")]
	public static string GetTempPath()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AC5")]
	[Address(RVA = "0x4F4E7A0", Offset = "0x4F4E7A0", VA = "0x4F4E7A0")]
	private static extern string get_temp_path();

	[Token(Token = "0x6002AC6")]
	[Address(RVA = "0x4F4E7B0", Offset = "0x4F4E7B0", VA = "0x4F4E7B0")]
	public static bool IsPathRooted(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AC7")]
	[Address(RVA = "0x4F4CF30", Offset = "0x4F4CF30", VA = "0x4F4CF30")]
	public static bool IsPathRooted(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AC8")]
	[Address(RVA = "0x4F4E8C0", Offset = "0x4F4E8C0", VA = "0x4F4E8C0")]
	public static char[] GetInvalidFileNameChars()
	{
		return null;
	}

	[Token(Token = "0x6002AC9")]
	[Address(RVA = "0x4F4E960", Offset = "0x4F4E960", VA = "0x4F4E960")]
	public static char[] GetInvalidPathChars()
	{
		return null;
	}

	[Token(Token = "0x6002ACA")]
	[Address(RVA = "0x4F4CC40", Offset = "0x4F4CC40", VA = "0x4F4CC40")]
	private static int findExtension(string path)
	{
		return default(int);
	}

	[Token(Token = "0x6002ACB")]
	[Address(RVA = "0x4F4E9D0", Offset = "0x4F4E9D0", VA = "0x4F4E9D0")]
	static Path()
	{
	}

	[Token(Token = "0x6002ACC")]
	[Address(RVA = "0x4F4E020", Offset = "0x4F4E020", VA = "0x4F4E020")]
	private static string CanonicalizePath(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ACD")]
	[Address(RVA = "0x4F4EC40", Offset = "0x4F4EC40", VA = "0x4F4EC40")]
	public static string Combine(params string[] paths)
	{
		return null;
	}

	[Token(Token = "0x6002ACE")]
	[Address(RVA = "0x4F4F000", Offset = "0x4F4F000", VA = "0x4F4F000")]
	public static string Combine(string path1, string path2, string path3)
	{
		return null;
	}

	[Token(Token = "0x6002ACF")]
	[Address(RVA = "0x4F4F180", Offset = "0x4F4F180", VA = "0x4F4F180")]
	public static ReadOnlySpan<char> GetFileName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6002AD0")]
	[Address(RVA = "0x4F4F370", Offset = "0x4F4F370", VA = "0x4F4F370")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2)
	{
		return null;
	}

	[Token(Token = "0x6002AD1")]
	[Address(RVA = "0x4F4F6B0", Offset = "0x4F4F6B0", VA = "0x4F4F6B0")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, ReadOnlySpan<char> path3)
	{
		return null;
	}

	[Token(Token = "0x6002AD2")]
	[Address(RVA = "0x4F4FBB0", Offset = "0x4F4FBB0", VA = "0x4F4FBB0")]
	public static bool TryJoin(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AD3")]
	[Address(RVA = "0x4F4F400", Offset = "0x4F4F400", VA = "0x4F4F400")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second)
	{
		return null;
	}

	[Token(Token = "0x6002AD4")]
	[Address(RVA = "0x4F4F7A0", Offset = "0x4F4F7A0", VA = "0x4F4F7A0")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second, ReadOnlySpan<char> third)
	{
		return null;
	}

	[Token(Token = "0x6002AD5")]
	[Address(RVA = "0x4F4FDF0", Offset = "0x4F4FDF0", VA = "0x4F4FDF0")]
	public static string GetRelativePath(string relativeTo, string path)
	{
		return null;
	}

	[Token(Token = "0x6002AD6")]
	[Address(RVA = "0x4F4FF10", Offset = "0x4F4FF10", VA = "0x4F4FF10")]
	private static string GetRelativePath(string relativeTo, string path, StringComparison comparisonType)
	{
		return null;
	}
}
