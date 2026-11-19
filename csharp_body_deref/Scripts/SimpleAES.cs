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

[Token(Token = "0x200002A")]
public class SimpleAES
{
	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x10")]
	private ICryptoTransform decryptor;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x18")]
	private UTF8Encoding encoder;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x20")]
	private ICryptoTransform encryptor;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] key;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] vector;

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x5752280", Offset = "0x5751280", VA = "0x5752280")]
	public SimpleAES()
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x57523B0", Offset = "0x57513B0", VA = "0x57523B0")]
	public string Decrypt(string encrypted)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x5752440", Offset = "0x5751440", VA = "0x5752440")]
	public byte[] Decrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x5752600", Offset = "0x5751600", VA = "0x5752600")]
	public string Encrypt(string unencrypted)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x5752680", Offset = "0x5751680", VA = "0x5752680")]
	public byte[] Encrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x5752450", Offset = "0x5751450", VA = "0x5752450")]
	protected byte[] Transform(byte[] buffer, ICryptoTransform transform)
	{
		return null;
	}
}
