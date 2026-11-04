// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RijndaelManaged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000321")]
[ComVisible(true)]
public sealed class RijndaelManaged : Rijndael
{
	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x19B5EE0", Offset = "0x19B44E0", VA = "0x1819B5EE0")]
	public RijndaelManaged()
	{
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x19B5BF0", Offset = "0x19B41F0", VA = "0x1819B5BF0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x19B5AE0", Offset = "0x19B40E0", VA = "0x1819B5AE0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x19B5D60", Offset = "0x19B4360", VA = "0x1819B5D60", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x19B5CF0", Offset = "0x19B42F0", VA = "0x1819B5CF0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x19B5DD0", Offset = "0x19B43D0", VA = "0x1819B5DD0")]
	private ICryptoTransform NewEncryptor(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int feedbackSize, System.Security.Cryptography.RijndaelManagedTransformMode encryptMode)
	{
		return null;
	}
}
