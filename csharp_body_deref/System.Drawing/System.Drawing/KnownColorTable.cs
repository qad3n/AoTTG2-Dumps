// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.KnownColorTable
// Update status: NEW in this game update
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
	[Address(RVA = "0x25B1280", Offset = "0x25AF880", VA = "0x1825B1280")]
	private static void EnsureColorTable()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x25B3450", Offset = "0x25B1A50", VA = "0x1825B3450")]
	private static void InitColorTable()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x25B1230", Offset = "0x25AF830", VA = "0x1825B1230")]
	private static void EnsureColorNameTable()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x25B12D0", Offset = "0x25AF8D0", VA = "0x1825B12D0")]
	private static void InitColorNameTable()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x25B4050", Offset = "0x25B2650", VA = "0x1825B4050")]
	public static int KnownColorToArgb(KnownColor color)
	{
		return default(int);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x25B40E0", Offset = "0x25B26E0", VA = "0x1825B40E0")]
	public static string KnownColorToName(KnownColor color)
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x25B4170", Offset = "0x25B2770", VA = "0x1825B4170")]
	private static void UpdateSystemColors(int[] colorTable)
	{
	}
}
