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

[Token(Token = "0x20002FA")]
[ComVisible(true)]
public sealed class RijndaelManaged : Rijndael
{
	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x5341180", Offset = "0x5340180", VA = "0x5341180")]
	public RijndaelManaged()
	{
	}

	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x53414F0", Offset = "0x53404F0", VA = "0x53414F0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x5341630", Offset = "0x5340630", VA = "0x5341630", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x5341650", Offset = "0x5340650", VA = "0x5341650", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x53416C0", Offset = "0x53406C0", VA = "0x53416C0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x5341510", Offset = "0x5340510", VA = "0x5341510")]
	private ICryptoTransform NewEncryptor(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int feedbackSize, System.Security.Cryptography.RijndaelManagedTransformMode encryptMode)
	{
		return null;
	}
}
