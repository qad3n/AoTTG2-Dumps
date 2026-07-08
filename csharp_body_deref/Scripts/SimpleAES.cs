using System.Security.Cryptography;
using System.Text;
using Il2CppDummyDll;

[Token(Token = "0x2000029")]
public class SimpleAES
{
	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x10")]
	private ICryptoTransform decryptor;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x18")]
	private UTF8Encoding encoder;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x20")]
	private ICryptoTransform encryptor;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] key;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] vector;

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3C72C10", Offset = "0x3C72C10", VA = "0x3C72C10")]
	public SimpleAES()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3C72D40", Offset = "0x3C72D40", VA = "0x3C72D40")]
	public string Decrypt(string encrypted)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3C72DD0", Offset = "0x3C72DD0", VA = "0x3C72DD0")]
	public byte[] Decrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3C73000", Offset = "0x3C73000", VA = "0x3C73000")]
	public string Encrypt(string unencrypted)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3C73080", Offset = "0x3C73080", VA = "0x3C73080")]
	public byte[] Encrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3C72DE0", Offset = "0x3C72DE0", VA = "0x3C72DE0")]
	protected byte[] Transform(byte[] buffer, ICryptoTransform transform)
	{
		return null;
	}
}
