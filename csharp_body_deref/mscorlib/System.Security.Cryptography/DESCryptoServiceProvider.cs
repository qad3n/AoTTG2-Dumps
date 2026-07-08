using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DA")]
[ComVisible(true)]
public sealed class DESCryptoServiceProvider : DES
{
	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x4E49060", Offset = "0x4E49060", VA = "0x4E49060")]
	public DESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x4E49490", Offset = "0x4E49490", VA = "0x4E49490", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x4E495F0", Offset = "0x4E495F0", VA = "0x4E495F0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x4E49740", Offset = "0x4E49740", VA = "0x4E49740", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x4E498B0", Offset = "0x4E498B0", VA = "0x4E498B0", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
