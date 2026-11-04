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

[Token(Token = "0x20002F9")]
[ComVisible(true)]
public abstract class AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x17000294")]
	public abstract string Parameters
	{
		[Token(Token = "0x60018F7")]
		get;
		[Token(Token = "0x60018F8")]
		set;
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AsymmetricKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x60018F9")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x60018FA")]
	public abstract byte[] DecryptKeyExchange(byte[] rgb);
}
