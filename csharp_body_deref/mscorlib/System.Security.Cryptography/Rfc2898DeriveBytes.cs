// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Rfc2898DeriveBytes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B238F0", Offset = "0x3B238F0", VA = "0x3B238F0")]
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
		[Address(RVA = "0x3B24190", Offset = "0x3B24190", VA = "0x3B24190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017F1")]
		[Address(RVA = "0x3B241A0", Offset = "0x3B241A0", VA = "0x3B241A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	public byte[] Salt
	{
		[Token(Token = "0x60017F2")]
		[Address(RVA = "0x3B24280", Offset = "0x3B24280", VA = "0x3B24280")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017F3")]
		[Address(RVA = "0x3B24290", Offset = "0x3B24290", VA = "0x3B24290")]
		set
		{
		}
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x3B23900", Offset = "0x3B23900", VA = "0x3B23900")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x3B23940", Offset = "0x3B23940", VA = "0x3B23940")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x3B23DD0", Offset = "0x3B23DD0", VA = "0x3B23DD0")]
	public Rfc2898DeriveBytes(string password, byte[] salt)
	{
	}

	[Token(Token = "0x60017EB")]
	[Address(RVA = "0x3B23E40", Offset = "0x3B23E40", VA = "0x3B23E40")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x3B23EA0", Offset = "0x3B23EA0", VA = "0x3B23EA0")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x3B23F00", Offset = "0x3B23F00", VA = "0x3B23F00")]
	public Rfc2898DeriveBytes(string password, int saltSize)
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x3B23F30", Offset = "0x3B23F30", VA = "0x3B23F30")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations)
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x3B23F70", Offset = "0x3B23F70", VA = "0x3B23F70")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x3B243B0", Offset = "0x3B243B0", VA = "0x3B243B0", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x3B24440", Offset = "0x3B24440", VA = "0x3B24440", Slot = "5")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x3B24C40", Offset = "0x3B24C40", VA = "0x3B24C40")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x3B24C80", Offset = "0x3B24C80", VA = "0x3B24C80", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x3B23B70", Offset = "0x3B23B70", VA = "0x3B23B70")]
	private HMAC OpenHmac()
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x3B23D50", Offset = "0x3B23D50", VA = "0x3B23D50")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x3B245D0", Offset = "0x3B245D0", VA = "0x3B245D0")]
	private byte[] Func()
	{
		return null;
	}
}
