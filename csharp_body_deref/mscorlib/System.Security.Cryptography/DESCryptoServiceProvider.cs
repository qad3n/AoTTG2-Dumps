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

[Token(Token = "0x2000309")]
[ComVisible(true)]
public sealed class DESCryptoServiceProvider : DES
{
	[Token(Token = "0x6001954")]
	[Address(RVA = "0x19A4120", Offset = "0x19A2720", VA = "0x1819A4120")]
	public DESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x19A3DC0", Offset = "0x19A23C0", VA = "0x1819A3DC0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001956")]
	[Address(RVA = "0x19A3C20", Offset = "0x19A2220", VA = "0x1819A3C20", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x19A4000", Offset = "0x19A2600", VA = "0x1819A4000", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x19A3F60", Offset = "0x19A2560", VA = "0x1819A3F60", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
