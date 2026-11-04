// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.WWWTranscoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UnityWebRequestWWWModule" })]
internal class WWWTranscoder
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] ucHexChars;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] lcHexChars;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x10")]
	private static byte urlEscapeChar;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] urlSpace;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x20")]
	private static byte[] dataSpace;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x28")]
	private static byte[] urlForbidden;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x30")]
	private static byte qpEscapeChar;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x38")]
	private static byte[] qpSpace;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x40")]
	private static byte[] qpForbidden;

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x330E690", Offset = "0x330CC90", VA = "0x18330E690")]
	private static byte Hex2Byte(byte[] b, int offset)
	{
		return default(byte);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x330DE90", Offset = "0x330C490", VA = "0x18330DE90")]
	private static void Byte2Hex(byte b, byte[] hexChars, out byte byte0, out byte byte1)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x330E780", Offset = "0x330CD80", VA = "0x18330E780")]
	public static byte[] URLEncode(byte[] toEncode)
	{
		return null;
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x330E270", Offset = "0x330C870", VA = "0x18330E270")]
	public static byte[] Encode(byte[] input, byte escapeChar, byte[] space, byte[] forbidden, bool uppercase)
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x330DED0", Offset = "0x330C4D0", VA = "0x18330DED0")]
	private static bool ByteArrayContains(byte[] array, byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x330E710", Offset = "0x330CD10", VA = "0x18330E710")]
	public static byte[] URLDecode(byte[] toEncode)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x330DF20", Offset = "0x330C520", VA = "0x18330DF20")]
	private static bool ByteSubArrayEquals(byte[] array, int index, byte[] comperand)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x330DFB0", Offset = "0x330C5B0", VA = "0x18330DFB0")]
	public static byte[] Decode(byte[] input, byte escapeChar, byte[] space)
	{
		return null;
	}
}
