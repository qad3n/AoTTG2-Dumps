// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.TripleDESCryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030F")]
[ComVisible(true)]
public sealed class TripleDESCryptoServiceProvider : TripleDES
{
	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x3B4B570", Offset = "0x3B4B570", VA = "0x3B4B570")]
	public TripleDESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x3B4BAD0", Offset = "0x3B4BAD0", VA = "0x3B4BAD0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x3B4BBF0", Offset = "0x3B4BBF0", VA = "0x3B4BBF0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x3B4BD10", Offset = "0x3B4BD10", VA = "0x3B4BD10", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x3B4BF40", Offset = "0x3B4BF40", VA = "0x3B4BF40", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
