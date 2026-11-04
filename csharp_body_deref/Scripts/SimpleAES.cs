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

[Token(Token = "0x200002B")]
public class SimpleAES
{
	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x10")]
	private ICryptoTransform decryptor;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x18")]
	private UTF8Encoding encoder;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x20")]
	private ICryptoTransform encryptor;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] key;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] vector;

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x1DAE880", Offset = "0x1DACE80", VA = "0x181DAE880")]
	public SimpleAES()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x1DAE4D0", Offset = "0x1DACAD0", VA = "0x181DAE4D0")]
	public string Decrypt(string encrypted)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x1DAE570", Offset = "0x1DACB70", VA = "0x181DAE570")]
	public byte[] Decrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x1DAE590", Offset = "0x1DACB90", VA = "0x181DAE590")]
	public string Encrypt(string unencrypted)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x1DAE580", Offset = "0x1DACB80", VA = "0x181DAE580")]
	public byte[] Encrypt(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x1DAE620", Offset = "0x1DACC20", VA = "0x181DAE620")]
	protected byte[] Transform(byte[] buffer, ICryptoTransform transform)
	{
		return null;
	}
}
