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

[Token(Token = "0x20002F2")]
[ComVisible(true)]
public sealed class RijndaelManaged : Rijndael
{
	[Token(Token = "0x600199E")]
	[Address(RVA = "0x3B37590", Offset = "0x3B37590", VA = "0x3B37590")]
	public RijndaelManaged()
	{
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x3B37900", Offset = "0x3B37900", VA = "0x3B37900", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x3B37A40", Offset = "0x3B37A40", VA = "0x3B37A40", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x3B37A60", Offset = "0x3B37A60", VA = "0x3B37A60", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x3B37AD0", Offset = "0x3B37AD0", VA = "0x3B37AD0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x3B37920", Offset = "0x3B37920", VA = "0x3B37920")]
	private ICryptoTransform NewEncryptor(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int feedbackSize, System.Security.Cryptography.RijndaelManagedTransformMode encryptMode)
	{
		return null;
	}
}
