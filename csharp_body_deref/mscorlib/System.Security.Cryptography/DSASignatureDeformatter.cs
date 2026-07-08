using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DD")]
[ComVisible(true)]
public class DSASignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x4E4B8A0", Offset = "0x4E4B8A0", VA = "0x4E4B8A0")]
	public DSASignatureDeformatter()
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x4E4B920", Offset = "0x4E4B920", VA = "0x4E4B920")]
	public DSASignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x4E4BA70", Offset = "0x4E4BA70", VA = "0x4E4BA70", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x4E4BB50", Offset = "0x4E4BB50", VA = "0x4E4BB50", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x4E4BC10", Offset = "0x4E4BC10", VA = "0x4E4BC10", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
