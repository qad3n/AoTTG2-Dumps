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

[Token(Token = "0x2000317")]
[ComVisible(true)]
public sealed class TripleDESCryptoServiceProvider : TripleDES
{
	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x5354D30", Offset = "0x5353D30", VA = "0x5354D30")]
	public TripleDESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x53552C0", Offset = "0x53542C0", VA = "0x53552C0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x53553E0", Offset = "0x53543E0", VA = "0x53553E0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x5355500", Offset = "0x5354500", VA = "0x5355500", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x5355730", Offset = "0x5354730", VA = "0x5355730", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
