using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DE")]
[ComVisible(true)]
public class DSASignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x4E4BCF0", Offset = "0x4E4BCF0", VA = "0x4E4BCF0")]
	public DSASignatureFormatter()
	{
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x4E4BD70", Offset = "0x4E4BD70", VA = "0x4E4BD70")]
	public DSASignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x4E4BEC0", Offset = "0x4E4BEC0", VA = "0x4E4BEC0", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x4E4BFA0", Offset = "0x4E4BFA0", VA = "0x4E4BFA0", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x4E4C060", Offset = "0x4E4C060", VA = "0x4E4C060", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}
}
