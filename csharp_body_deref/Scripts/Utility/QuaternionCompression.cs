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

[Token(Token = "0x2000920")]
public static class QuaternionCompression
{
	[Token(Token = "0x4002DFA")]
	private const ushort k_PrecisionMask = 511;

	[Token(Token = "0x4002DFB")]
	private const float k_SqrtTwoOverTwoEncoding = 0.70710677f;

	[Token(Token = "0x4002DFC")]
	private const float k_CompressionEcodingMask = 722.66315f;

	[Token(Token = "0x4002DFD")]
	private const ushort k_ShiftNegativeBit = 9;

	[Token(Token = "0x4002DFE")]
	private const float k_DcompressionDecodingMask = 0.0013837706f;

	[Token(Token = "0x4002DFF")]
	private const ushort k_NegShortBit = 512;

	[Token(Token = "0x4002E00")]
	private const ushort k_True = 1;

	[Token(Token = "0x4002E01")]
	private const ushort k_False = 0;

	[Token(Token = "0x4002E02")]
	[FieldOffset(Offset = "0x0")]
	private static Quaternion s_QuatAbsValues;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600565B")]
	[Address(RVA = "0x5CEA980", Offset = "0x5CE9980", VA = "0x5CEA980")]
	public static int CompressQuaternion(ref Quaternion quaternion)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600565C")]
	[Address(RVA = "0x5CEB010", Offset = "0x5CEA010", VA = "0x5CEB010")]
	public static void DecompressQuaternion(ref Quaternion quaternion, int rawCompressed)
	{
	}
}
