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

[Token(Token = "0x20002D2")]
[ComVisible(true)]
public abstract class AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x17000293")]
	public abstract string Parameters
	{
		[Token(Token = "0x60018D4")]
		get;
		[Token(Token = "0x60018D5")]
		set;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x5336740", Offset = "0x5335740", VA = "0x5336740")]
	protected AsymmetricKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x60018D6")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x60018D7")]
	public abstract byte[] DecryptKeyExchange(byte[] rgb);
}
