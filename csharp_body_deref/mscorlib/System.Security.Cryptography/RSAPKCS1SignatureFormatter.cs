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

[Token(Token = "0x200031C")]
[ComVisible(true)]
public class RSAPKCS1SignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000E05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000E06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hash;

	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x3B560E0", Offset = "0x3B560E0", VA = "0x3B560E0")]
	public RSAPKCS1SignatureFormatter()
	{
	}

	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x3B560F0", Offset = "0x3B560F0", VA = "0x3B560F0")]
	public RSAPKCS1SignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x3B56130", Offset = "0x3B56130", VA = "0x3B56130", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x3B56230", Offset = "0x3B56230", VA = "0x3B56230", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x3B56290", Offset = "0x3B56290", VA = "0x3B56290", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
