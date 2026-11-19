// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA1CryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000326")]
[ComVisible(true)]
public sealed class SHA1CryptoServiceProvider : SHA1
{
	[Token(Token = "0x4000D7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Security.Cryptography.SHA1Internal sha;

	[Token(Token = "0x6001BAA")]
	[Address(RVA = "0x5361A60", Offset = "0x5360A60", VA = "0x5361A60")]
	public SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x5361AD0", Offset = "0x5360AD0", VA = "0x5361AD0", Slot = "1")]
	~SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BAC")]
	[Address(RVA = "0x5361B70", Offset = "0x5360B70", VA = "0x5361B70", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BAD")]
	[Address(RVA = "0x5361B80", Offset = "0x5360B80", VA = "0x5361B80", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001BAE")]
	[Address(RVA = "0x5361BA0", Offset = "0x5360BA0", VA = "0x5361BA0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001BAF")]
	[Address(RVA = "0x5361BC0", Offset = "0x5360BC0", VA = "0x5361BC0", Slot = "20")]
	public override void Initialize()
	{
	}
}
