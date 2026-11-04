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

[Token(Token = "0x200034D")]
[ComVisible(true)]
public sealed class SHA1CryptoServiceProvider : SHA1
{
	[Token(Token = "0x4000E1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Security.Cryptography.SHA1Internal sha;

	[Token(Token = "0x6001BCD")]
	[Address(RVA = "0x19E48D0", Offset = "0x19E2ED0", VA = "0x1819E48D0")]
	public SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BCE")]
	[Address(RVA = "0x19BF8A0", Offset = "0x19BDEA0", VA = "0x1819BF8A0", Slot = "1")]
	~SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x19E4660", Offset = "0x19E2C60", VA = "0x1819E4660", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x19E4670", Offset = "0x19E2C70", VA = "0x1819E4670", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x19E47C0", Offset = "0x19E2DC0", VA = "0x1819E47C0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x19E48B0", Offset = "0x19E2EB0", VA = "0x1819E48B0", Slot = "20")]
	public override void Initialize()
	{
	}
}
