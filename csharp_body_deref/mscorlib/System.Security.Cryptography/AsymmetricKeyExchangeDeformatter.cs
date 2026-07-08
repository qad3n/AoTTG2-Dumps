using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CA")]
[ComVisible(true)]
public abstract class AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x17000292")]
	public abstract string Parameters
	{
		[Token(Token = "0x600188F")]
		get;
		[Token(Token = "0x6001890")]
		set;
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x4E46BF0", Offset = "0x4E46BF0", VA = "0x4E46BF0")]
	protected AsymmetricKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001891")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x6001892")]
	public abstract byte[] DecryptKeyExchange(byte[] rgb);
}
