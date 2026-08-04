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
	[Address(RVA = "0x3B2C720", Offset = "0x3B2C720", VA = "0x3B2C720")]
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
