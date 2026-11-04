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

[Token(Token = "0x2000061")]
internal sealed class KeyBuilder
{
	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x0")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000019")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x1947430", Offset = "0x1945A30", VA = "0x181947430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x19473C0", Offset = "0x19459C0", VA = "0x1819473C0")]
	public static byte[] Key(int size)
	{
		return null;
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x1947350", Offset = "0x1945950", VA = "0x181947350")]
	public static byte[] IV(int size)
	{
		return null;
	}
}
