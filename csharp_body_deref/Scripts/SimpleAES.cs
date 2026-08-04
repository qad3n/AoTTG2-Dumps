// ==================== AoTTG2 cross-reference ====================
// Type: SimpleAES
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleAES.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleAES.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F68560", Offset = "0x3F68560", VA = "0x3F68560")]
	public SimpleAES()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3F68690", Offset = "0x3F68690", VA = "0x3F68690")]
	public string Decrypt(string encrypted)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3F68720", Offset = "0x3F68720", VA = "0x3F68720")]
	public byte[] Decrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3F68950", Offset = "0x3F68950", VA = "0x3F68950")]
	public string Encrypt(string unencrypted)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3F689D0", Offset = "0x3F689D0", VA = "0x3F689D0")]
	public byte[] Encrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3F68730", Offset = "0x3F68730", VA = "0x3F68730")]
	protected byte[] Transform(byte[] buffer, ICryptoTransform transform)
	{
		return null;
	}
}
