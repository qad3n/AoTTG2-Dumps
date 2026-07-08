using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006E2")]
public static class QuaternionCompression
{
	[Token(Token = "0x4002127")]
	private const ushort k_PrecisionMask = 511;

	[Token(Token = "0x4002128")]
	private const float k_SqrtTwoOverTwoEncoding = 0.70710677f;

	[Token(Token = "0x4002129")]
	private const float k_CompressionEcodingMask = 722.66315f;

	[Token(Token = "0x400212A")]
	private const ushort k_ShiftNegativeBit = 9;

	[Token(Token = "0x400212B")]
	private const float k_DcompressionDecodingMask = 0.0013837706f;

	[Token(Token = "0x400212C")]
	private const ushort k_NegShortBit = 512;

	[Token(Token = "0x400212D")]
	private const ushort k_True = 1;

	[Token(Token = "0x400212E")]
	private const ushort k_False = 0;

	[Token(Token = "0x400212F")]
	[FieldOffset(Offset = "0x0")]
	private static Quaternion s_QuatAbsValues;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6004440")]
	[Address(RVA = "0x405B2F0", Offset = "0x405B2F0", VA = "0x405B2F0")]
	public static int CompressQuaternion(ref Quaternion quaternion)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6004441")]
	[Address(RVA = "0x405B960", Offset = "0x405B960", VA = "0x405B960")]
	public static void DecompressQuaternion(ref Quaternion quaternion, int rawCompressed)
	{
	}
}
