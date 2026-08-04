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

[Token(Token = "0x200072A")]
public static class QuaternionCompression
{
	[Token(Token = "0x4002280")]
	private const ushort k_PrecisionMask = 511;

	[Token(Token = "0x4002281")]
	private const float k_SqrtTwoOverTwoEncoding = 0.70710677f;

	[Token(Token = "0x4002282")]
	private const float k_CompressionEcodingMask = 722.66315f;

	[Token(Token = "0x4002283")]
	private const ushort k_ShiftNegativeBit = 9;

	[Token(Token = "0x4002284")]
	private const float k_DcompressionDecodingMask = 0.0013837706f;

	[Token(Token = "0x4002285")]
	private const ushort k_NegShortBit = 512;

	[Token(Token = "0x4002286")]
	private const ushort k_True = 1;

	[Token(Token = "0x4002287")]
	private const ushort k_False = 0;

	[Token(Token = "0x4002288")]
	[FieldOffset(Offset = "0x0")]
	private static Quaternion s_QuatAbsValues;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600468B")]
	[Address(RVA = "0x438BC50", Offset = "0x438BC50", VA = "0x438BC50")]
	public static int CompressQuaternion(ref Quaternion quaternion)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600468C")]
	[Address(RVA = "0x438C2C0", Offset = "0x438C2C0", VA = "0x438C2C0")]
	public static void DecompressQuaternion(ref Quaternion quaternion, int rawCompressed)
	{
	}
}
