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

[Token(Token = "0x20002E6")]
public class Rfc2898DeriveBytes : DeriveBytes
{
	[Token(Token = "0x4000C75")]
	private const int MinimumSaltSize = 8;

	[Token(Token = "0x4000C76")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _password;

	[Token(Token = "0x4000C77")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _salt;

	[Token(Token = "0x4000C78")]
	[FieldOffset(Offset = "0x20")]
	private uint _iterations;

	[Token(Token = "0x4000C79")]
	[FieldOffset(Offset = "0x28")]
	private HMAC _hmac;

	[Token(Token = "0x4000C7A")]
	[FieldOffset(Offset = "0x30")]
	private int _blockSize;

	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _buffer;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x40")]
	private uint _block;

	[Token(Token = "0x4000C7D")]
	[FieldOffset(Offset = "0x44")]
	private int _startIndex;

	[Token(Token = "0x4000C7E")]
	[FieldOffset(Offset = "0x48")]
	private int _endIndex;

	[Token(Token = "0x1700026F")]
	public HashAlgorithmName HashAlgorithm
	{
		[Token(Token = "0x600184F")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000270")]
	public int IterationCount
	{
		[Token(Token = "0x6001858")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001859")]
		[Address(RVA = "0x19983F0", Offset = "0x19969F0", VA = "0x1819983F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000271")]
	public byte[] Salt
	{
		[Token(Token = "0x600185A")]
		[Address(RVA = "0x19983E0", Offset = "0x19969E0", VA = "0x1819983E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600185B")]
		[Address(RVA = "0x1998480", Offset = "0x1996A80", VA = "0x181998480")]
		set
		{
		}
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x19980B0", Offset = "0x19966B0", VA = "0x1819980B0")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x1998100", Offset = "0x1996700", VA = "0x181998100")]
	public Rfc2898DeriveBytes(byte[] password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x1998320", Offset = "0x1996920", VA = "0x181998320")]
	public Rfc2898DeriveBytes(string password, byte[] salt)
	{
	}

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x1998030", Offset = "0x1996630", VA = "0x181998030")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations)
	{
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x1997FC0", Offset = "0x19965C0", VA = "0x181997FC0")]
	public Rfc2898DeriveBytes(string password, byte[] salt, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x1997D50", Offset = "0x1996350", VA = "0x181997D50")]
	public Rfc2898DeriveBytes(string password, int saltSize)
	{
	}

	[Token(Token = "0x6001856")]
	[Address(RVA = "0x1998390", Offset = "0x1996990", VA = "0x181998390")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations)
	{
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x1997DB0", Offset = "0x19963B0", VA = "0x181997DB0")]
	public Rfc2898DeriveBytes(string password, int saltSize, int iterations, HashAlgorithmName hashAlgorithm)
	{
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x1997370", Offset = "0x1995970", VA = "0x181997370", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x19978C0", Offset = "0x1995EC0", VA = "0x1819978C0", Slot = "5")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x1997330", Offset = "0x1995930", VA = "0x181997330")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x1997D40", Offset = "0x1996340", VA = "0x181997D40", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x1997AF0", Offset = "0x19960F0", VA = "0x181997AF0")]
	private HMAC OpenHmac()
	{
		return null;
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x1997A70", Offset = "0x1996070", VA = "0x181997A70")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x1997420", Offset = "0x1995A20", VA = "0x181997420")]
	private byte[] Func()
	{
		return null;
	}
}
