// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DESCryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DA")]
[ComVisible(true)]
public sealed class DESCryptoServiceProvider : DES
{
	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x3B2EB80", Offset = "0x3B2EB80", VA = "0x3B2EB80")]
	public DESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x3B2EFB0", Offset = "0x3B2EFB0", VA = "0x3B2EFB0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x3B2F110", Offset = "0x3B2F110", VA = "0x3B2F110", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x3B2F260", Offset = "0x3B2F260", VA = "0x3B2F260", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x3B2F3D0", Offset = "0x3B2F3D0", VA = "0x3B2F3D0", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
