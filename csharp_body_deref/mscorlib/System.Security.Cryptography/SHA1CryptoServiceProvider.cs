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

[Token(Token = "0x200031E")]
[ComVisible(true)]
public sealed class SHA1CryptoServiceProvider : SHA1
{
	[Token(Token = "0x4000E0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Security.Cryptography.SHA1Internal sha;

	[Token(Token = "0x6001B65")]
	[Address(RVA = "0x3B57D80", Offset = "0x3B57D80", VA = "0x3B57D80")]
	public SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x3B57DF0", Offset = "0x3B57DF0", VA = "0x3B57DF0", Slot = "1")]
	~SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x3B57E80", Offset = "0x3B57E80", VA = "0x3B57E80", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x3B57E90", Offset = "0x3B57E90", VA = "0x3B57E90", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x3B57EB0", Offset = "0x3B57EB0", VA = "0x3B57EB0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x3B57ED0", Offset = "0x3B57ED0", VA = "0x3B57ED0", Slot = "20")]
	public override void Initialize()
	{
	}
}
