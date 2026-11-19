// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsymmetricKeyExchangeFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D3")]
[ComVisible(true)]
public abstract class AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x17000294")]
	public abstract string Parameters
	{
		[Token(Token = "0x60018D9")]
		get;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x5336750", Offset = "0x5335750", VA = "0x5336750")]
	protected AsymmetricKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x60018DA")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x60018DB")]
	public abstract byte[] CreateKeyExchange(byte[] data);

	[Token(Token = "0x60018DC")]
	public abstract byte[] CreateKeyExchange(byte[] data, Type symAlgType);
}
