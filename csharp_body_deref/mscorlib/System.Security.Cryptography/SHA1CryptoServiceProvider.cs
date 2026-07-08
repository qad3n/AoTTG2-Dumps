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
	[Address(RVA = "0x4E72260", Offset = "0x4E72260", VA = "0x4E72260")]
	public SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x4E722D0", Offset = "0x4E722D0", VA = "0x4E722D0", Slot = "1")]
	~SHA1CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x4E72360", Offset = "0x4E72360", VA = "0x4E72360", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x4E72370", Offset = "0x4E72370", VA = "0x4E72370", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x4E72390", Offset = "0x4E72390", VA = "0x4E72390", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x4E723B0", Offset = "0x4E723B0", VA = "0x4E723B0", Slot = "20")]
	public override void Initialize()
	{
	}
}
