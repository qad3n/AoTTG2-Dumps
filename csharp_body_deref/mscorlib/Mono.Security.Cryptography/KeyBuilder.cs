// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.KeyBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000043")]
internal sealed class KeyBuilder
{
	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x0")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000019")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x52EB2B0", Offset = "0x52EA2B0", VA = "0x52EB2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x52EB320", Offset = "0x52EA320", VA = "0x52EB320")]
	public static byte[] Key(int size)
	{
		return null;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x52EB3F0", Offset = "0x52EA3F0", VA = "0x52EB3F0")]
	public static byte[] IV(int size)
	{
		return null;
	}
}
