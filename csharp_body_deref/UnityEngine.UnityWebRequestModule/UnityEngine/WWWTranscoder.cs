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
	[Address(RVA = "0x5105390", Offset = "0x5105390", VA = "0x5105390")]
	private static byte Hex2Byte(byte[] b, int offset)
	{
		return default(byte);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x5105440", Offset = "0x5105440", VA = "0x5105440")]
	private static void Byte2Hex(byte b, byte[] hexChars, out byte byte0, out byte byte1)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x5105480", Offset = "0x5105480", VA = "0x5105480")]
	public static byte[] URLEncode(byte[] toEncode)
	{
		return null;
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x51054E0", Offset = "0x51054E0", VA = "0x51054E0")]
	public static byte[] Encode(byte[] input, byte escapeChar, byte[] space, byte[] forbidden, bool uppercase)
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5105A10", Offset = "0x5105A10", VA = "0x5105A10")]
	private static bool ByteArrayContains(byte[] array, byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x5104FD0", Offset = "0x5104FD0", VA = "0x5104FD0")]
	public static byte[] URLDecode(byte[] toEncode)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x5105EB0", Offset = "0x5105EB0", VA = "0x5105EB0")]
	private static bool ByteSubArrayEquals(byte[] array, int index, byte[] comperand)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5105A40", Offset = "0x5105A40", VA = "0x5105A40")]
	public static byte[] Decode(byte[] input, byte escapeChar, byte[] space)
	{
		return null;
	}
}
