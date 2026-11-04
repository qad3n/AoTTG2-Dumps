// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstRuntime
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x2000018")]
public static class BurstRuntime
{
	[Token(Token = "0x2000019")]
	private struct HashCode32<T>
	{
		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int Value;
	}

	[Token(Token = "0x200001A")]
	private struct HashCode64<T>
	{
		[Token(Token = "0x40000CE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly long Value;
	}

	[Token(Token = "0x200001B")]
	internal class PreserveAttribute : Attribute
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public PreserveAttribute()
		{
		}
	}

	[Token(Token = "0x6000081")]
	public static int GetHashCode32<T>()
	{
		return default(int);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2955240", Offset = "0x2953840", VA = "0x182955240")]
	public static int GetHashCode32(Type type)
	{
		return default(int);
	}

	[Token(Token = "0x6000083")]
	public static long GetHashCode64<T>()
	{
		return default(long);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x29552C0", Offset = "0x29538C0", VA = "0x1829552C0")]
	public static long GetHashCode64(Type type)
	{
		return default(long);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x29553B0", Offset = "0x29539B0", VA = "0x1829553B0")]
	internal static int HashStringWithFNV1A32(string text)
	{
		return default(int);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2955420", Offset = "0x2953A20", VA = "0x182955420")]
	internal static long HashStringWithFNV1A64(string text)
	{
		return default(long);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x29555F0", Offset = "0x2953BF0", VA = "0x1829555F0")]
	public static bool LoadAdditionalLibrary(string pathToLibBurstGenerated)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x29554B0", Offset = "0x2953AB0", VA = "0x1829554B0")]
	internal static bool LoadAdditionalLibraryInternal(string pathToLibBurstGenerated)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x29558C0", Offset = "0x2953EC0", VA = "0x1829558C0")]
	[Preserve]
	internal unsafe static void RuntimeLog(byte* message, int logType, byte* fileName, int lineNumber)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x29557F0", Offset = "0x2953DF0", VA = "0x1829557F0")]
	[Preserve]
	internal static void PreventRequiredAttributeStrip()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x29557C0", Offset = "0x2953DC0", VA = "0x1829557C0")]
	[Preserve]
	internal unsafe static void Log(byte* message, int logType, byte* fileName, int lineNumber)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2955360", Offset = "0x2953960", VA = "0x182955360")]
	public unsafe static byte* GetUTF8LiteralPointer(string str, out int byteCount)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}
}
