// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1SignatureFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200034B")]
[ComVisible(true)]
public class RSAPKCS1SignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000E12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000E13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hash;

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RSAPKCS1SignatureFormatter()
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x19DD8E0", Offset = "0x19DBEE0", VA = "0x1819DD8E0")]
	public RSAPKCS1SignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x19DD920", Offset = "0x19DBF20", VA = "0x1819DD920", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x19DDAA0", Offset = "0x19DC0A0", VA = "0x1819DDAA0", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x19DDB10", Offset = "0x19DC110", VA = "0x1819DDB10", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
