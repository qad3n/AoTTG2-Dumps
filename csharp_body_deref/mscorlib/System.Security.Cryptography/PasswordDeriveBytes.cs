using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002EC")]
[ComVisible(true)]
public class PasswordDeriveBytes : DeriveBytes
{
	[Token(Token = "0x4000D1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int _extraCount;

	[Token(Token = "0x4000D1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int _prefix;

	[Token(Token = "0x4000D20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _iterations;

	[Token(Token = "0x4000D21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private byte[] _baseValue;

	[Token(Token = "0x4000D22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _extra;

	[Token(Token = "0x4000D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private byte[] _salt;

	[Token(Token = "0x4000D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _hashName;

	[Token(Token = "0x4000D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _password;

	[Token(Token = "0x4000D26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private HashAlgorithm _hash;

	[Token(Token = "0x170002B7")]
	public string HashName
	{
		[Token(Token = "0x6001969")]
		[Address(RVA = "0x4E4F490", Offset = "0x4E4F490", VA = "0x4E4F490")]
		get
		{
			return null;
		}
		[Token(Token = "0x600196A")]
		[Address(RVA = "0x4E4F300", Offset = "0x4E4F300", VA = "0x4E4F300")]
		set
		{
		}
	}

	[Token(Token = "0x170002B8")]
	public int IterationCount
	{
		[Token(Token = "0x600196B")]
		[Address(RVA = "0x4E4F4A0", Offset = "0x4E4F4A0", VA = "0x4E4F4A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600196C")]
		[Address(RVA = "0x4E4F060", Offset = "0x4E4F060", VA = "0x4E4F060")]
		set
		{
		}
	}

	[Token(Token = "0x170002B9")]
	public byte[] Salt
	{
		[Token(Token = "0x600196D")]
		[Address(RVA = "0x4E4F4B0", Offset = "0x4E4F4B0", VA = "0x4E4F4B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600196E")]
		[Address(RVA = "0x4E4F180", Offset = "0x4E4F180", VA = "0x4E4F180")]
		set
		{
		}
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x4E4EAE0", Offset = "0x4E4EAE0", VA = "0x4E4EAE0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt)
	{
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x4E4EC10", Offset = "0x4E4EC10", VA = "0x4E4EC10")]
	public PasswordDeriveBytes(byte[] password, byte[] salt)
	{
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x4E4EDA0", Offset = "0x4E4EDA0", VA = "0x4E4EDA0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations)
	{
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x4E4EF20", Offset = "0x4E4EF20", VA = "0x4E4EF20")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations)
	{
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x4E4EBB0", Offset = "0x4E4EBB0", VA = "0x4E4EBB0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x4E4ED10", Offset = "0x4E4ED10", VA = "0x4E4ED10")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x4E4EE50", Offset = "0x4E4EE50", VA = "0x4E4EE50")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x4E4F000", Offset = "0x4E4F000", VA = "0x4E4F000")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x600196F")]
	[Address(RVA = "0x4E4F520", Offset = "0x4E4F520", VA = "0x4E4F520", Slot = "5")]
	[Obsolete("Rfc2898DeriveBytes replaces PasswordDeriveBytes for deriving key material from a password and is preferred in new applications.")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x6001970")]
	[Address(RVA = "0x4E4FE30", Offset = "0x4E4FE30", VA = "0x4E4FE30", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001971")]
	[Address(RVA = "0x4E4FE70", Offset = "0x4E4FE70", VA = "0x4E4FE70", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001972")]
	[Address(RVA = "0x4E4FF50", Offset = "0x4E4FF50", VA = "0x4E4FF50")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x4E4F6A0", Offset = "0x4E4F6A0", VA = "0x4E4F6A0")]
	private byte[] ComputeBaseValue()
	{
		return null;
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x4E4F880", Offset = "0x4E4F880", VA = "0x4E4F880")]
	private byte[] ComputeBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x4E4FFE0", Offset = "0x4E4FFE0", VA = "0x4E4FFE0")]
	private void HashPrefix(CryptoStream cs)
	{
	}
}
