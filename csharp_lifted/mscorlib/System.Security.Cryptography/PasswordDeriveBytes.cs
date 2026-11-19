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

[Token(Token = "0x20002F4")]
[ComVisible(true)]
public class PasswordDeriveBytes : DeriveBytes
{
	[Token(Token = "0x4000C8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int _extraCount;

	[Token(Token = "0x4000C8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int _prefix;

	[Token(Token = "0x4000C8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _iterations;

	[Token(Token = "0x4000C8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private byte[] _baseValue;

	[Token(Token = "0x4000C8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _extra;

	[Token(Token = "0x4000C90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private byte[] _salt;

	[Token(Token = "0x4000C91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _hashName;

	[Token(Token = "0x4000C92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _password;

	[Token(Token = "0x4000C93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private HashAlgorithm _hash;

	[Token(Token = "0x170002B8")]
	public string HashName
	{
		[Token(Token = "0x60019AE")]
		[Address(RVA = "0x533EDC0", Offset = "0x533DDC0", VA = "0x533EDC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019AF")]
		[Address(RVA = "0x533EC30", Offset = "0x533DC30", VA = "0x533EC30")]
		set
		{
		}
	}

	[Token(Token = "0x170002B9")]
	public int IterationCount
	{
		[Token(Token = "0x60019B0")]
		[Address(RVA = "0x533EDD0", Offset = "0x533DDD0", VA = "0x533EDD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019B1")]
		[Address(RVA = "0x533E990", Offset = "0x533D990", VA = "0x533E990")]
		set
		{
		}
	}

	[Token(Token = "0x170002BA")]
	public byte[] Salt
	{
		[Token(Token = "0x60019B2")]
		[Address(RVA = "0x533EDE0", Offset = "0x533DDE0", VA = "0x533EDE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019B3")]
		[Address(RVA = "0x533EAB0", Offset = "0x533DAB0", VA = "0x533EAB0")]
		set
		{
		}
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x533E410", Offset = "0x533D410", VA = "0x533E410")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt)
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x533E540", Offset = "0x533D540", VA = "0x533E540")]
	public PasswordDeriveBytes(byte[] password, byte[] salt)
	{
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x533E6D0", Offset = "0x533D6D0", VA = "0x533E6D0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations)
	{
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x533E850", Offset = "0x533D850", VA = "0x533E850")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations)
	{
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x533E4E0", Offset = "0x533D4E0", VA = "0x533E4E0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x533E640", Offset = "0x533D640", VA = "0x533E640")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x533E780", Offset = "0x533D780", VA = "0x533E780")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x533E930", Offset = "0x533D930", VA = "0x533E930")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x533EE50", Offset = "0x533DE50", VA = "0x533EE50", Slot = "5")]
	[Obsolete("Rfc2898DeriveBytes replaces PasswordDeriveBytes for deriving key material from a password and is preferred in new applications.")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x533F640", Offset = "0x533E640", VA = "0x533F640", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x533F680", Offset = "0x533E680", VA = "0x533F680", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x533F6F0", Offset = "0x533E6F0", VA = "0x533F6F0")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x533EFD0", Offset = "0x533DFD0", VA = "0x533EFD0")]
	private byte[] ComputeBaseValue()
	{
		return null;
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x533F170", Offset = "0x533E170", VA = "0x533F170")]
	private byte[] ComputeBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x533F780", Offset = "0x533E780", VA = "0x533F780")]
	private void HashPrefix(CryptoStream cs)
	{
	}
}
