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

[Token(Token = "0x20002BF")]
public class Rfc2898DeriveBytes : DeriveBytes
{
	[Token(Token = "0x4000BD5")]
	private const int MinimumSaltSize = 8;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _password;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _salt;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x20")]
	private uint _iterations;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x28")]
	private HMAC _hmac;

	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x30")]
	private int _blockSize;

	[Token(Token = "0x4000BDB")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _buffer;

	[Token(Token = "0x4000BDC")]
	[FieldOffset(Offset = "0x40")]
	private uint _block;

	[Token(Token = "0x4000BDD")]
	[FieldOffset(Offset = "0x44")]
	private int _startIndex;

	[Token(Token = "0x4000BDE")]
	[FieldOffset(Offset = "0x48")]
	private int _endIndex;

	[Token(Token = "0x1700026E")]
	public HashAlgorithmName HashAlgorithm
	{
		[Token(Token = "0x600182C")]
		[Address(RVA = "0x532D8F0", Offset = "0x532C8F0", VA = "0x532D8F0")]
		[CompilerGenerated]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x1700026F")]
	public int IterationCount
	{
		[Token(Token = "0x6001835")]
		[Address(RVA = "0x532E390", Offset = "0x532D390", VA = "0x532E390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001836")]
		[Address(RVA = "0x532E3A0", Offset = "0x532D3A0", VA = "0x532E3A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000270")]
	public byte[] Salt
	{
		[Token(Token = "0x6001837")]
		[Address(RVA = "0x532E480", Offset = "0x532D480", VA = "0x532E480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001838")]
		[Address(RVA = "0x532E490", Offset = "0x532D490", VA = "0x532E490")]
		set
		{
		}
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x532D900", Offset = "0x532C900", VA = "0x532D900")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x600182E")]
	[Address(RVA = "0x532D9B0", Offset = "0x532C9B0", VA = "0x532D9B0")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x532DF00", Offset = "0x532CF00", VA = "0x532DF00")]
	public Rfc2898DeriveBytes(string password, byte[] salt)
	{
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x532DF90", Offset = "0x532CF90", VA = "0x532DF90")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x6001831")]
	[Address(RVA = "0x532E030", Offset = "0x532D030", VA = "0x532E030")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x532E090", Offset = "0x532D090", VA = "0x532E090")]
	public Rfc2898DeriveBytes(string password, int saltSize)
	{
	}

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x532E100", Offset = "0x532D100", VA = "0x532E100")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations)
	{
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x532E170", Offset = "0x532D170", VA = "0x532E170")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x532E5B0", Offset = "0x532D5B0", VA = "0x532E5B0", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x532E710", Offset = "0x532D710", VA = "0x532E710", Slot = "5")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x600183B")]
	[Address(RVA = "0x532EE40", Offset = "0x532DE40", VA = "0x532EE40")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x600183C")]
	[Address(RVA = "0x532EE80", Offset = "0x532DE80", VA = "0x532EE80", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x532DBE0", Offset = "0x532CBE0", VA = "0x532DBE0")]
	private HMAC OpenHmac()
	{
		return null;
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x532DE80", Offset = "0x532CE80", VA = "0x532DE80")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x532E8B0", Offset = "0x532D8B0", VA = "0x532E8B0")]
	private byte[] Func()
	{
		return null;
	}
}
