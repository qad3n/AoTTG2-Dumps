using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CD")]
[ComVisible(true)]
public abstract class AsymmetricSignatureFormatter
{
	[Token(Token = "0x600189D")]
	[Address(RVA = "0x4E46CE0", Offset = "0x4E46CE0", VA = "0x4E46CE0")]
	protected AsymmetricSignatureFormatter()
	{
	}

	[Token(Token = "0x600189E")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x600189F")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x4E46CF0", Offset = "0x4E46CF0", VA = "0x4E46CF0", Slot = "6")]
	public virtual byte[] CreateSignature(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x60018A1")]
	public abstract byte[] CreateSignature(byte[] rgbHash);
}
