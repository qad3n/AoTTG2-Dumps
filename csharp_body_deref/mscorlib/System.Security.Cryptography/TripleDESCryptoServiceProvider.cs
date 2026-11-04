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

[Token(Token = "0x200033E")]
[ComVisible(true)]
public sealed class TripleDESCryptoServiceProvider : TripleDES
{
	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x19CFC00", Offset = "0x19CE200", VA = "0x1819CFC00")]
	public TripleDESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x19CF940", Offset = "0x19CDF40", VA = "0x1819CF940", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x19CF820", Offset = "0x19CDE20", VA = "0x1819CF820", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x19CFB00", Offset = "0x19CE100", VA = "0x1819CFB00", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x19CFA60", Offset = "0x19CE060", VA = "0x1819CFA60", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
