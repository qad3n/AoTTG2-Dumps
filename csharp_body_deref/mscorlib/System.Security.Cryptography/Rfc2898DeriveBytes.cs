using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002B7")]
public class Rfc2898DeriveBytes : DeriveBytes
{
	[Token(Token = "0x4000C68")]
	private const int MinimumSaltSize = 8;

	[Token(Token = "0x4000C69")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _password;

	[Token(Token = "0x4000C6A")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _salt;

	[Token(Token = "0x4000C6B")]
	[FieldOffset(Offset = "0x20")]
	private uint _iterations;

	[Token(Token = "0x4000C6C")]
	[FieldOffset(Offset = "0x28")]
	private HMAC _hmac;

	[Token(Token = "0x4000C6D")]
	[FieldOffset(Offset = "0x30")]
	private int _blockSize;

	[Token(Token = "0x4000C6E")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _buffer;

	[Token(Token = "0x4000C6F")]
	[FieldOffset(Offset = "0x40")]
	private uint _block;

	[Token(Token = "0x4000C70")]
	[FieldOffset(Offset = "0x44")]
	private int _startIndex;

	[Token(Token = "0x4000C71")]
	[FieldOffset(Offset = "0x48")]
	private int _endIndex;

	[Token(Token = "0x1700026D")]
	public HashAlgorithmName HashAlgorithm
	{
		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x4E3DDD0", Offset = "0x4E3DDD0", VA = "0x4E3DDD0")]
		[CompilerGenerated]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x1700026E")]
	public int IterationCount
	{
		[Token(Token = "0x60017F0")]
		[Address(RVA = "0x4E3E670", Offset = "0x4E3E670", VA = "0x4E3E670")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017F1")]
		[Address(RVA = "0x4E3E680", Offset = "0x4E3E680", VA = "0x4E3E680")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	public byte[] Salt
	{
		[Token(Token = "0x60017F2")]
		[Address(RVA = "0x4E3E760", Offset = "0x4E3E760", VA = "0x4E3E760")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017F3")]
		[Address(RVA = "0x4E3E770", Offset = "0x4E3E770", VA = "0x4E3E770")]
		set
		{
		}
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x4E3DDE0", Offset = "0x4E3DDE0", VA = "0x4E3DDE0")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x4E3DE20", Offset = "0x4E3DE20", VA = "0x4E3DE20")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x4E3E2B0", Offset = "0x4E3E2B0", VA = "0x4E3E2B0")]
	public Rfc2898DeriveBytes(string password, byte[] salt)
	{
	}

	[Token(Token = "0x60017EB")]
	[Address(RVA = "0x4E3E320", Offset = "0x4E3E320", VA = "0x4E3E320")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x4E3E380", Offset = "0x4E3E380", VA = "0x4E3E380")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x4E3E3E0", Offset = "0x4E3E3E0", VA = "0x4E3E3E0")]
	public Rfc2898DeriveBytes(string password, int saltSize)
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x4E3E410", Offset = "0x4E3E410", VA = "0x4E3E410")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations)
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x4E3E450", Offset = "0x4E3E450", VA = "0x4E3E450")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x4E3E890", Offset = "0x4E3E890", VA = "0x4E3E890", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x4E3E920", Offset = "0x4E3E920", VA = "0x4E3E920", Slot = "5")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x4E3F120", Offset = "0x4E3F120", VA = "0x4E3F120")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x4E3F160", Offset = "0x4E3F160", VA = "0x4E3F160", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x4E3E050", Offset = "0x4E3E050", VA = "0x4E3E050")]
	private HMAC OpenHmac()
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x4E3E230", Offset = "0x4E3E230", VA = "0x4E3E230")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x4E3EAB0", Offset = "0x4E3EAB0", VA = "0x4E3EAB0")]
	private byte[] Func()
	{
		return null;
	}
}
