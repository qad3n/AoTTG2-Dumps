using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CB")]
[ComVisible(true)]
public abstract class AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x17000293")]
	public abstract string Parameters
	{
		[Token(Token = "0x6001894")]
		get;
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x4E46C00", Offset = "0x4E46C00", VA = "0x4E46C00")]
	protected AsymmetricKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001895")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x6001896")]
	public abstract byte[] CreateKeyExchange(byte[] data);

	[Token(Token = "0x6001897")]
	public abstract byte[] CreateKeyExchange(byte[] data, Type symAlgType);
}
