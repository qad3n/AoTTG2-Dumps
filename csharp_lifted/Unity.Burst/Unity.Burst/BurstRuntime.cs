// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstRuntime
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x63125E0", Offset = "0x63115E0", VA = "0x63125E0")]
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
	[Address(RVA = "0x63120B0", Offset = "0x63110B0", VA = "0x63120B0")]
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
	[Address(RVA = "0x6312180", Offset = "0x6311180", VA = "0x6312180")]
	public static long GetHashCode64(Type type)
	{
		return default(long);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x6312120", Offset = "0x6311120", VA = "0x6312120")]
	internal static int HashStringWithFNV1A32(string text)
	{
		return default(int);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6312220", Offset = "0x6311220", VA = "0x6312220")]
	internal static long HashStringWithFNV1A64(string text)
	{
		return default(long);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x63122A0", Offset = "0x63112A0", VA = "0x63122A0")]
	public static bool LoadAdditionalLibrary(string pathToLibBurstGenerated)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x6312310", Offset = "0x6311310", VA = "0x6312310")]
	internal static bool LoadAdditionalLibraryInternal(string pathToLibBurstGenerated)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x6312460", Offset = "0x6311460", VA = "0x6312460")]
	[Preserve]
	internal unsafe static void RuntimeLog(byte* message, int logType, byte* fileName, int lineNumber)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6312480", Offset = "0x6311480", VA = "0x6312480")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6312490", Offset = "0x6311490", VA = "0x6312490")]
	[Preserve]
	internal static void PreventRequiredAttributeStrip()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6312570", Offset = "0x6311570", VA = "0x6312570")]
	[Preserve]
	internal unsafe static void Log(byte* message, int logType, byte* fileName, int lineNumber)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6312590", Offset = "0x6311590", VA = "0x6312590")]
	public unsafe static byte* GetUTF8LiteralPointer(string str, out int byteCount)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}
}
