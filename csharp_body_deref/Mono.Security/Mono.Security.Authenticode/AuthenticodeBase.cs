using System.IO;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Authenticode;

[Token(Token = "0x2000040")]
public class AuthenticodeBase
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x10")]
	private byte[] fileblock;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x18")]
	private Stream fs;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x20")]
	private int blockNo;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x24")]
	private int blockLength;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x28")]
	private int peOffset;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x2C")]
	private int dirSecurityOffset;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x30")]
	private int dirSecuritySize;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x34")]
	private int coffSymbolTableOffset;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x38")]
	private bool pe64;

	[Token(Token = "0x17000082")]
	internal int PEOffset
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x3A57460", Offset = "0x3A57460", VA = "0x3A57460")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3A57400", Offset = "0x3A57400", VA = "0x3A57400")]
	public AuthenticodeBase()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3A57550", Offset = "0x3A57550", VA = "0x3A57550")]
	internal void Open(string filename)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x3A57640", Offset = "0x3A57640", VA = "0x3A57640")]
	internal void Open(byte[] rawdata)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x3A57600", Offset = "0x3A57600", VA = "0x3A57600")]
	internal void Close()
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x3A57480", Offset = "0x3A57480", VA = "0x3A57480")]
	internal void ReadFirstBlock()
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x3A576E0", Offset = "0x3A576E0", VA = "0x3A576E0")]
	internal int ProcessFirstBlock()
	{
		return default(int);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x3A57900", Offset = "0x3A57900", VA = "0x3A57900")]
	internal byte[] GetSecurityEntry()
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x3A579D0", Offset = "0x3A579D0", VA = "0x3A579D0")]
	internal byte[] GetHash(HashAlgorithm hash)
	{
		return null;
	}
}
