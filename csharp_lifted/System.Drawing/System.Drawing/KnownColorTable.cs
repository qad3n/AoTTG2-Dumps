// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.KnownColorTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Token(Token = "0x2000004")]
internal static class KnownColorTable
{
	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x0")]
	private static int[] s_colorTable;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x8")]
	private static string[] s_colorNameTable;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x5F5A0C0", Offset = "0x5F590C0", VA = "0x5F5A0C0")]
	private static void EnsureColorTable()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x5F5A100", Offset = "0x5F59100", VA = "0x5F5A100")]
	private static void InitColorTable()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x5F5AD70", Offset = "0x5F59D70", VA = "0x5F5AD70")]
	private static void EnsureColorNameTable()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5F5ADB0", Offset = "0x5F59DB0", VA = "0x5F5ADB0")]
	private static void InitColorNameTable()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5F5D130", Offset = "0x5F5C130", VA = "0x5F5D130")]
	public static int KnownColorToArgb(KnownColor color)
	{
		return default(int);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x5F5D1C0", Offset = "0x5F5C1C0", VA = "0x5F5D1C0")]
	public static string KnownColorToName(KnownColor color)
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x5F5AC40", Offset = "0x5F59C40", VA = "0x5F5AC40")]
	private static void UpdateSystemColors(int[] colorTable)
	{
	}
}
