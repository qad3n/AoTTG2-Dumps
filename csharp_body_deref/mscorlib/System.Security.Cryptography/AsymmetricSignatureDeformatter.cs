using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CC")]
[ComVisible(true)]
public abstract class AsymmetricSignatureDeformatter
{
	[Token(Token = "0x6001898")]
	[Address(RVA = "0x4E46C10", Offset = "0x4E46C10", VA = "0x4E46C10")]
	protected AsymmetricSignatureDeformatter()
	{
	}

	[Token(Token = "0x6001899")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x600189A")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x4E46C20", Offset = "0x4E46C20", VA = "0x4E46C20", Slot = "6")]
	public virtual bool VerifySignature(HashAlgorithm hash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x600189C")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);
}
