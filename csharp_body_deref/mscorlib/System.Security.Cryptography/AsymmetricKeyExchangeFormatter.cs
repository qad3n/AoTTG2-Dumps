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

[Token(Token = "0x20002FA")]
[ComVisible(true)]
public abstract class AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x17000295")]
	public abstract string Parameters
	{
		[Token(Token = "0x60018FC")]
		get;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AsymmetricKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x60018FD")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x60018FE")]
	public abstract byte[] CreateKeyExchange(byte[] data);

	[Token(Token = "0x60018FF")]
	public abstract byte[] CreateKeyExchange(byte[] data, Type symAlgType);
}
