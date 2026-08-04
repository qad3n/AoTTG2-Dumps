// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Path
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C35970", Offset = "0x3C35970", VA = "0x3C35970")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x17000630")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x6002AD8")]
		[Address(RVA = "0x3C35FF0", Offset = "0x3C35FF0", VA = "0x3C35FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000631")]
	private static bool IsWindows
	{
		[Token(Token = "0x6002AD9")]
		[Address(RVA = "0x3C36060", Offset = "0x3C36060", VA = "0x3C36060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AB7")]
	[Address(RVA = "0x3C32520", Offset = "0x3C32520", VA = "0x3C32520")]
	public static string ChangeExtension(string path, string extension)
	{
		return null;
	}

	[Token(Token = "0x6002AB8")]
	[Address(RVA = "0x3C327E0", Offset = "0x3C327E0", VA = "0x3C327E0")]
	public static string Combine(string path1, string path2)
	{
		return null;
	}

	[Token(Token = "0x6002AB9")]
	[Address(RVA = "0x3C32B60", Offset = "0x3C32B60", VA = "0x3C32B60")]
	internal static string CleanPath(string s)
	{
		return null;
	}

	[Token(Token = "0x6002ABA")]
	[Address(RVA = "0x3C233D0", Offset = "0x3C233D0", VA = "0x3C233D0")]
	public static string GetDirectoryName(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABB")]
	[Address(RVA = "0x3C338D0", Offset = "0x3C338D0", VA = "0x3C338D0")]
	public static ReadOnlySpan<char> GetDirectoryName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6002ABC")]
	[Address(RVA = "0x3C33980", Offset = "0x3C33980", VA = "0x3C33980")]
	public static string GetExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABD")]
	[Address(RVA = "0x3C28A20", Offset = "0x3C28A20", VA = "0x3C28A20")]
	public static string GetFileName(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABE")]
	[Address(RVA = "0x3C33AF0", Offset = "0x3C33AF0", VA = "0x3C33AF0")]
	public static string GetFileNameWithoutExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ABF")]
	[Address(RVA = "0x3C2E350", Offset = "0x3C2E350", VA = "0x3C2E350")]
	public static string GetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC0")]
	[Address(RVA = "0x3C23930", Offset = "0x3C23930", VA = "0x3C23930")]
	internal static string GetFullPathInternal(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC1")]
	[Address(RVA = "0x3C2D8A0", Offset = "0x3C2D8A0", VA = "0x3C2D8A0")]
	internal static string InsecureGetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC2")]
	[Address(RVA = "0x3C28980", Offset = "0x3C28980", VA = "0x3C28980")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AC3")]
	[Address(RVA = "0x3C330C0", Offset = "0x3C330C0", VA = "0x3C330C0")]
	public static string GetPathRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x6002AC4")]
	[Address(RVA = "0x3C341B0", Offset = "0x3C341B0", VA = "0x3C341B0")]
	public static string GetTempPath()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AC5")]
	[Address(RVA = "0x3C342C0", Offset = "0x3C342C0", VA = "0x3C342C0")]
	private static extern string get_temp_path();

	[Token(Token = "0x6002AC6")]
	[Address(RVA = "0x3C342D0", Offset = "0x3C342D0", VA = "0x3C342D0")]
	public static bool IsPathRooted(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AC7")]
	[Address(RVA = "0x3C32A50", Offset = "0x3C32A50", VA = "0x3C32A50")]
	public static bool IsPathRooted(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AC8")]
	[Address(RVA = "0x3C343E0", Offset = "0x3C343E0", VA = "0x3C343E0")]
	public static char[] GetInvalidFileNameChars()
	{
		return null;
	}

	[Token(Token = "0x6002AC9")]
	[Address(RVA = "0x3C34480", Offset = "0x3C34480", VA = "0x3C34480")]
	public static char[] GetInvalidPathChars()
	{
		return null;
	}

	[Token(Token = "0x6002ACA")]
	[Address(RVA = "0x3C32760", Offset = "0x3C32760", VA = "0x3C32760")]
	private static int findExtension(string path)
	{
		return default(int);
	}

	[Token(Token = "0x6002ACB")]
	[Address(RVA = "0x3C344F0", Offset = "0x3C344F0", VA = "0x3C344F0")]
	static Path()
	{
	}

	[Token(Token = "0x6002ACC")]
	[Address(RVA = "0x3C33B40", Offset = "0x3C33B40", VA = "0x3C33B40")]
	private static string CanonicalizePath(string path)
	{
		return null;
	}

	[Token(Token = "0x6002ACD")]
	[Address(RVA = "0x3C34760", Offset = "0x3C34760", VA = "0x3C34760")]
	public static string Combine(params string[] paths)
	{
		return null;
	}

	[Token(Token = "0x6002ACE")]
	[Address(RVA = "0x3C34B20", Offset = "0x3C34B20", VA = "0x3C34B20")]
	public static string Combine(string path1, string path2, string path3)
	{
		return null;
	}

	[Token(Token = "0x6002ACF")]
	[Address(RVA = "0x3C34CA0", Offset = "0x3C34CA0", VA = "0x3C34CA0")]
	public static ReadOnlySpan<char> GetFileName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6002AD0")]
	[Address(RVA = "0x3C34E90", Offset = "0x3C34E90", VA = "0x3C34E90")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2)
	{
		return null;
	}

	[Token(Token = "0x6002AD1")]
	[Address(RVA = "0x3C351D0", Offset = "0x3C351D0", VA = "0x3C351D0")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, ReadOnlySpan<char> path3)
	{
		return null;
	}

	[Token(Token = "0x6002AD2")]
	[Address(RVA = "0x3C356D0", Offset = "0x3C356D0", VA = "0x3C356D0")]
	public static bool TryJoin(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AD3")]
	[Address(RVA = "0x3C34F20", Offset = "0x3C34F20", VA = "0x3C34F20")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second)
	{
		return null;
	}

	[Token(Token = "0x6002AD4")]
	[Address(RVA = "0x3C352C0", Offset = "0x3C352C0", VA = "0x3C352C0")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second, ReadOnlySpan<char> third)
	{
		return null;
	}

	[Token(Token = "0x6002AD5")]
	[Address(RVA = "0x3C35910", Offset = "0x3C35910", VA = "0x3C35910")]
	public static string GetRelativePath(string relativeTo, string path)
	{
		return null;
	}

	[Token(Token = "0x6002AD6")]
	[Address(RVA = "0x3C35A30", Offset = "0x3C35A30", VA = "0x3C35A30")]
	private static string GetRelativePath(string relativeTo, string path, StringComparison comparisonType)
	{
		return null;
	}
}
