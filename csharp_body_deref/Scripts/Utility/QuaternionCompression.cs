// ==================== AoTTG2 cross-reference ====================
// Type: Utility.QuaternionCompression
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/QuaternionCompression.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/QuaternionCompression.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20008B5")]
public static class QuaternionCompression
{
	[Token(Token = "0x4002B43")]
	private const ushort k_PrecisionMask = 511;

	[Token(Token = "0x4002B44")]
	private const float k_SqrtTwoOverTwoEncoding = 0.70710677f;

	[Token(Token = "0x4002B45")]
	private const float k_CompressionEcodingMask = 722.66315f;

	[Token(Token = "0x4002B46")]
	private const ushort k_ShiftNegativeBit = 9;

	[Token(Token = "0x4002B47")]
	private const float k_DcompressionDecodingMask = 0.0013837706f;

	[Token(Token = "0x4002B48")]
	private const ushort k_NegShortBit = 512;

	[Token(Token = "0x4002B49")]
	private const ushort k_True = 1;

	[Token(Token = "0x4002B4A")]
	private const ushort k_False = 0;

	[Token(Token = "0x4002B4B")]
	[FieldOffset(Offset = "0x0")]
	private static Quaternion s_QuatAbsValues;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6005304")]
	[Address(RVA = "0x233E1E0", Offset = "0x233C7E0", VA = "0x18233E1E0")]
	public static int CompressQuaternion(ref Quaternion quaternion)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6005305")]
	[Address(RVA = "0x208D520", Offset = "0x208BB20", VA = "0x18208D520")]
	public static void DecompressQuaternion(ref Quaternion quaternion, int rawCompressed)
	{
	}
}
