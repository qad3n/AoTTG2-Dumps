// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B2C710", Offset = "0x3B2C710", VA = "0x3B2C710")]
	protected AsymmetricKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001891")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x6001892")]
	public abstract byte[] DecryptKeyExchange(byte[] rgb);
}
