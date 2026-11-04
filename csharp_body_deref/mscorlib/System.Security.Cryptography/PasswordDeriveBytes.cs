// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.PasswordDeriveBytes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031B")]
[ComVisible(true)]
public class PasswordDeriveBytes : DeriveBytes
{
	[Token(Token = "0x4000D2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int _extraCount;

	[Token(Token = "0x4000D2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int _prefix;

	[Token(Token = "0x4000D2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _iterations;

	[Token(Token = "0x4000D2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private byte[] _baseValue;

	[Token(Token = "0x4000D2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _extra;

	[Token(Token = "0x4000D30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private byte[] _salt;

	[Token(Token = "0x4000D31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _hashName;

	[Token(Token = "0x4000D32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _password;

	[Token(Token = "0x4000D33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private HashAlgorithm _hash;

	[Token(Token = "0x170002B9")]
	public string HashName
	{
		[Token(Token = "0x60019D1")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019D2")]
		[Address(RVA = "0x19AD510", Offset = "0x19ABB10", VA = "0x1819AD510")]
		set
		{
		}
	}

	[Token(Token = "0x170002BA")]
	public int IterationCount
	{
		[Token(Token = "0x60019D3")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019D4")]
		[Address(RVA = "0x19AD6E0", Offset = "0x19ABCE0", VA = "0x1819AD6E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002BB")]
	public byte[] Salt
	{
		[Token(Token = "0x60019D5")]
		[Address(RVA = "0x19AD490", Offset = "0x19ABA90", VA = "0x1819AD490")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019D6")]
		[Address(RVA = "0x19AD820", Offset = "0x19ABE20", VA = "0x1819AD820")]
		set
		{
		}
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x19AD2D0", Offset = "0x19AB8D0", VA = "0x1819AD2D0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt)
	{
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x19ACDB0", Offset = "0x19AB3B0", VA = "0x1819ACDB0")]
	public PasswordDeriveBytes(byte[] password, byte[] salt)
	{
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x19ACCE0", Offset = "0x19AB2E0", VA = "0x1819ACCE0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations)
	{
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x19ACF30", Offset = "0x19AB530", VA = "0x1819ACF30")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations)
	{
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x19AD3B0", Offset = "0x19AB9B0", VA = "0x1819AD3B0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x19AD420", Offset = "0x19ABA20", VA = "0x1819AD420")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x19ACE90", Offset = "0x19AB490", VA = "0x1819ACE90")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x19AD000", Offset = "0x19AB600", VA = "0x1819AD000")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x19AC920", Offset = "0x19AAF20", VA = "0x1819AC920", Slot = "5")]
	[Obsolete("Rfc2898DeriveBytes replaces PasswordDeriveBytes for deriving key material from a password and is preferred in new applications.")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x19ACCA0", Offset = "0x19AB2A0", VA = "0x1819ACCA0", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x19AC830", Offset = "0x19AAE30", VA = "0x1819AC830", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x19AC770", Offset = "0x19AAD70", VA = "0x1819AC770")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x19AC030", Offset = "0x19AA630", VA = "0x1819AC030")]
	private byte[] ComputeBaseValue()
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x19AC320", Offset = "0x19AA920", VA = "0x1819AC320")]
	private byte[] ComputeBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x19ACAC0", Offset = "0x19AB0C0", VA = "0x1819ACAC0")]
	private void HashPrefix(CryptoStream cs)
	{
	}
}
