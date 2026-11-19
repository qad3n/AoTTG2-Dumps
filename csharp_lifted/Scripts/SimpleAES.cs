// ==================== AoTTG2 cross-reference ====================
// Type: SimpleAES
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleAES.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleAES.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/SimpleAES.c (SimpleAES$$.ctor): clean
		RijndaelManaged __this_00;
		ICryptoTransform pSVar1;
		UTF8Encoding __this_01;

		base();
		__this_00 = new RijndaelManaged();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __this_00.CreateEncryptor(SimpleAES.key, SimpleAES.vector);
		this.encryptor = pSVar1;
		pSVar1 = __this_00.CreateDecryptor(SimpleAES.key, SimpleAES.vector);
		this.decryptor = pSVar1;
		__this_01 = new UTF8Encoding();
		this.encoder = __this_01;
		return;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x57523B0", Offset = "0x57513B0", VA = "0x57523B0")]
	public string Decrypt(string encrypted)
	{
		// Lifted from source/cpp/SimpleAES.c (SimpleAES$$Decrypt): clean
		UTF8Encoding pSVar1;
		Byte[] pSVar2;
		String pSVar3;

		pSVar1 = this.encoder;
		pSVar2 = Convert.FromBase64String(encrypted);
		pSVar2 = encrypted.Transform(pSVar2, this.decryptor);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar3;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x5752440", Offset = "0x5751440", VA = "0x5752440")]
	public byte[] Decrypt(byte[] buffer)
	{
		// Lifted from source/cpp/SimpleAES.c (SimpleAES$$Decrypt): clean
		Byte[] pSVar1;

		pSVar1 = this.Transform(buffer, this.decryptor);
		return pSVar1;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x5752600", Offset = "0x5751600", VA = "0x5752600")]
	public string Encrypt(string unencrypted)
	{
		// Lifted from source/cpp/SimpleAES.c (SimpleAES$$Encrypt): clean
		Byte[] pSVar1;
		String pSVar2;
		UTF8Encoding __this_00;

		__this_00 = this.encoder;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __this_00.GetBytes(unencrypted);
		pSVar1 = __this_00.Transform(pSVar1, this.encryptor);
		return pSVar2;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x5752680", Offset = "0x5751680", VA = "0x5752680")]
	public byte[] Encrypt(byte[] buffer)
	{
		// Lifted from source/cpp/SimpleAES.c (SimpleAES$$Encrypt): clean
		Byte[] pSVar1;

		pSVar1 = this.Transform(buffer, this.encryptor);
		return pSVar1;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x5752450", Offset = "0x5751450", VA = "0x5752450")]
	protected byte[] Transform(byte[] buffer, ICryptoTransform transform)
	{
		// Lifted from source/cpp/SimpleAES.c (SimpleAES$$Transform): 2 lines keep C-only constructs
		MemoryStream __this_00;
		CryptoStream pSVar3;
		Byte[] pSVar5;
		CryptoStream local_38;
		byte local_28;

		__this_00 = new MemoryStream();
		pSVar3 = new CryptoStream((Stream)__this_00, transform, 1);
		local_28 = (byte)&local_38;
		local_38 = pSVar3;
		if ((buffer == null) || (pSVar3 == null)) {
			throw new NullReferenceException();
		}
		local_28 = (byte)&local_38;
		pSVar3.Write(buffer, 0, (int32_t)buffer.Length);
		pSVar3 = local_38;
		if (local_38 != null) {
			pSVar3.Dispose();
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pSVar5;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/SimpleAES.c.

	// SimpleAES$$.cctor: clean
	static SimpleAES()
	{
		Byte[] pSVar2;

		pSVar2 = (Byte[])new byte[0x20];
		RuntimeHelpers.InitializeArray((Array)pSVar2, FieldRva_PrivateImplementationDetails_4E5ACEA714611B9D5E49BE72A6BA4F74AA6444E0AA9D11B89108FD01ED5C9D33);
		SimpleAES.key = pSVar2;
		pSVar2 = (Byte[])new byte[0x10];
		RuntimeHelpers.InitializeArray((Array)pSVar2, FieldRva_PrivateImplementationDetails_EC120F573152E9A5B0D14289E7AC9765CDB96735F60BE7664FE88289D77C602C);
		SimpleAES.vector = pSVar2;
		return;
	}
}
