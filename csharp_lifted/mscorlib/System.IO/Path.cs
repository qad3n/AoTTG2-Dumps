// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Path
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200067F")]
[ComVisible(true)]
public static class Path
{
	[Token(Token = "0x4001A5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[Obsolete("see GetInvalidPathChars and GetInvalidFileNameChars methods.")]
	public static readonly char[] InvalidPathChars;

	[Token(Token = "0x4001A5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char AltDirectorySeparatorChar;

	[Token(Token = "0x4001A5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	public static readonly char DirectorySeparatorChar;

	[Token(Token = "0x4001A5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static readonly char PathSeparator;

	[Token(Token = "0x4001A60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly string DirectorySeparatorStr;

	[Token(Token = "0x4001A61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly char VolumeSeparatorChar;

	[Token(Token = "0x4001A62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly char[] PathSeparatorChars;

	[Token(Token = "0x4001A63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly bool dirEqualsVolume;

	[Token(Token = "0x4001A64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static readonly char[] trimEndCharsWindows;

	[Token(Token = "0x4001A65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal static readonly char[] trimEndCharsUnix;

	[Token(Token = "0x17000845")]
	internal static StringComparison StringComparison
	{
		[Token(Token = "0x600336A")]
		[Address(RVA = "0x548DDF0", Offset = "0x548CDF0", VA = "0x548DDF0")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x17000846")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x600336B")]
		[Address(RVA = "0x548E490", Offset = "0x548D490", VA = "0x548E490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000847")]
	private static bool IsWindows
	{
		[Token(Token = "0x600336C")]
		[Address(RVA = "0x548E500", Offset = "0x548D500", VA = "0x548E500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600334A")]
	[Address(RVA = "0x548AD70", Offset = "0x5489D70", VA = "0x548AD70")]
	public static string ChangeExtension(string path, string extension)
	{
		return null;
	}

	[Token(Token = "0x600334B")]
	[Address(RVA = "0x548B020", Offset = "0x548A020", VA = "0x548B020")]
	public static string Combine(string path1, string path2)
	{
		return null;
	}

	[Token(Token = "0x600334C")]
	[Address(RVA = "0x548B390", Offset = "0x548A390", VA = "0x548B390")]
	internal static string CleanPath(string s)
	{
		return null;
	}

	[Token(Token = "0x600334D")]
	[Address(RVA = "0x547B0D0", Offset = "0x547A0D0", VA = "0x547B0D0")]
	public static string GetDirectoryName(string path)
	{
		return null;
	}

	[Token(Token = "0x600334E")]
	[Address(RVA = "0x548C030", Offset = "0x548B030", VA = "0x548C030")]
	public static ReadOnlySpan<char> GetDirectoryName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600334F")]
	[Address(RVA = "0x548C0E0", Offset = "0x548B0E0", VA = "0x548C0E0")]
	public static string GetExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6003350")]
	[Address(RVA = "0x547ACB0", Offset = "0x5479CB0", VA = "0x547ACB0")]
	public static string GetFileName(string path)
	{
		return null;
	}

	[Token(Token = "0x6003351")]
	[Address(RVA = "0x548C250", Offset = "0x548B250", VA = "0x548C250")]
	public static string GetFileNameWithoutExtension(string path)
	{
		return null;
	}

	[Token(Token = "0x6003352")]
	[Address(RVA = "0x5476C30", Offset = "0x5475C30", VA = "0x5476C30")]
	public static string GetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6003353")]
	[Address(RVA = "0x547C2D0", Offset = "0x547B2D0", VA = "0x547C2D0")]
	internal static string GetFullPathInternal(string path)
	{
		return null;
	}

	[Token(Token = "0x6003354")]
	[Address(RVA = "0x5486300", Offset = "0x5485300", VA = "0x5486300")]
	internal static string InsecureGetFullPath(string path)
	{
		return null;
	}

	[Token(Token = "0x6003355")]
	[Address(RVA = "0x5481040", Offset = "0x5480040", VA = "0x5481040")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6003356")]
	[Address(RVA = "0x548B8E0", Offset = "0x548A8E0", VA = "0x548B8E0")]
	public static string GetPathRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x6003357")]
	[Address(RVA = "0x548C850", Offset = "0x548B850", VA = "0x548C850")]
	public static string GetTempPath()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003358")]
	[Address(RVA = "0x548C960", Offset = "0x548B960", VA = "0x548C960")]
	private static extern string get_temp_path();

	[Token(Token = "0x6003359")]
	[Address(RVA = "0x548C970", Offset = "0x548B970", VA = "0x548C970")]
	public static bool IsPathRooted(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x600335A")]
	[Address(RVA = "0x548B280", Offset = "0x548A280", VA = "0x548B280")]
	public static bool IsPathRooted(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600335B")]
	[Address(RVA = "0x548CA70", Offset = "0x548BA70", VA = "0x548CA70")]
	public static char[] GetInvalidFileNameChars()
	{
		return null;
	}

	[Token(Token = "0x600335C")]
	[Address(RVA = "0x548CB10", Offset = "0x548BB10", VA = "0x548CB10")]
	public static char[] GetInvalidPathChars()
	{
		return null;
	}

	[Token(Token = "0x600335D")]
	[Address(RVA = "0x548AFA0", Offset = "0x5489FA0", VA = "0x548AFA0")]
	private static int findExtension(string path)
	{
		return default(int);
	}

	[Token(Token = "0x600335E")]
	[Address(RVA = "0x548CB80", Offset = "0x548BB80", VA = "0x548CB80")]
	static Path()
	{
	}

	[Token(Token = "0x600335F")]
	[Address(RVA = "0x548C2A0", Offset = "0x548B2A0", VA = "0x548C2A0")]
	private static string CanonicalizePath(string path)
	{
		return null;
	}

	[Token(Token = "0x6003360")]
	[Address(RVA = "0x548CDF0", Offset = "0x548BDF0", VA = "0x548CDF0")]
	public static string Combine(params string[] paths)
	{
		return null;
	}

	[Token(Token = "0x6003361")]
	[Address(RVA = "0x548D180", Offset = "0x548C180", VA = "0x548D180")]
	public static string Combine(string path1, string path2, string path3)
	{
		return null;
	}

	[Token(Token = "0x6003362")]
	[Address(RVA = "0x5477FC0", Offset = "0x5476FC0", VA = "0x5477FC0")]
	public static ReadOnlySpan<char> GetFileName(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6003363")]
	[Address(RVA = "0x548D300", Offset = "0x548C300", VA = "0x548D300")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2)
	{
		return null;
	}

	[Token(Token = "0x6003364")]
	[Address(RVA = "0x548D660", Offset = "0x548C660", VA = "0x548D660")]
	public static string Join(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, ReadOnlySpan<char> path3)
	{
		return null;
	}

	[Token(Token = "0x6003365")]
	[Address(RVA = "0x548DB40", Offset = "0x548CB40", VA = "0x548DB40")]
	public static bool TryJoin(ReadOnlySpan<char> path1, ReadOnlySpan<char> path2, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6003366")]
	[Address(RVA = "0x548D3A0", Offset = "0x548C3A0", VA = "0x548D3A0")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second)
	{
		return null;
	}

	[Token(Token = "0x6003367")]
	[Address(RVA = "0x548D750", Offset = "0x548C750", VA = "0x548D750")]
	private static string JoinInternal(ReadOnlySpan<char> first, ReadOnlySpan<char> second, ReadOnlySpan<char> third)
	{
		return null;
	}

	[Token(Token = "0x6003368")]
	[Address(RVA = "0x548DD90", Offset = "0x548CD90", VA = "0x548DD90")]
	public static string GetRelativePath(string relativeTo, string path)
	{
		return null;
	}

	[Token(Token = "0x6003369")]
	[Address(RVA = "0x548DEB0", Offset = "0x548CEB0", VA = "0x548DEB0")]
	private static string GetRelativePath(string relativeTo, string path, StringComparison comparisonType)
	{
		return null;
	}
}
