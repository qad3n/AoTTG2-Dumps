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
		[Address(RVA = "0x3B34FB0", Offset = "0x3B34FB0", VA = "0x3B34FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600196A")]
		[Address(RVA = "0x3B34E20", Offset = "0x3B34E20", VA = "0x3B34E20")]
		set
		{
		}
	}

	[Token(Token = "0x170002B8")]
	public int IterationCount
	{
		[Token(Token = "0x600196B")]
		[Address(RVA = "0x3B34FC0", Offset = "0x3B34FC0", VA = "0x3B34FC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600196C")]
		[Address(RVA = "0x3B34B80", Offset = "0x3B34B80", VA = "0x3B34B80")]
		set
		{
		}
	}

	[Token(Token = "0x170002B9")]
	public byte[] Salt
	{
		[Token(Token = "0x600196D")]
		[Address(RVA = "0x3B34FD0", Offset = "0x3B34FD0", VA = "0x3B34FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600196E")]
		[Address(RVA = "0x3B34CA0", Offset = "0x3B34CA0", VA = "0x3B34CA0")]
		set
		{
		}
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x3B34600", Offset = "0x3B34600", VA = "0x3B34600")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt)
	{
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x3B34730", Offset = "0x3B34730", VA = "0x3B34730")]
	public PasswordDeriveBytes(byte[] password, byte[] salt)
	{
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x3B348C0", Offset = "0x3B348C0", VA = "0x3B348C0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations)
	{
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x3B34A40", Offset = "0x3B34A40", VA = "0x3B34A40")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations)
	{
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x3B346D0", Offset = "0x3B346D0", VA = "0x3B346D0")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x3B34830", Offset = "0x3B34830", VA = "0x3B34830")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x3B34970", Offset = "0x3B34970", VA = "0x3B34970")]
	public PasswordDeriveBytes(string strPassword, byte[] rgbSalt, string strHashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x3B34B20", Offset = "0x3B34B20", VA = "0x3B34B20")]
	public PasswordDeriveBytes(byte[] password, byte[] salt, string hashName, int iterations, CspParameters cspParams)
	{
	}

	[Token(Token = "0x600196F")]
	[Address(RVA = "0x3B35040", Offset = "0x3B35040", VA = "0x3B35040", Slot = "5")]
	[Obsolete("Rfc2898DeriveBytes replaces PasswordDeriveBytes for deriving key material from a password and is preferred in new applications.")]
	public override byte[] GetBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x6001970")]
	[Address(RVA = "0x3B35950", Offset = "0x3B35950", VA = "0x3B35950", Slot = "6")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001971")]
	[Address(RVA = "0x3B35990", Offset = "0x3B35990", VA = "0x3B35990", Slot = "7")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001972")]
	[Address(RVA = "0x3B35A70", Offset = "0x3B35A70", VA = "0x3B35A70")]
	public byte[] CryptDeriveKey(string algname, string alghashname, int keySize, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x3B351C0", Offset = "0x3B351C0", VA = "0x3B351C0")]
	private byte[] ComputeBaseValue()
	{
		return null;
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x3B353A0", Offset = "0x3B353A0", VA = "0x3B353A0")]
	private byte[] ComputeBytes(int cb)
	{
		return null;
	}

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x3B35B00", Offset = "0x3B35B00", VA = "0x3B35B00")]
	private void HashPrefix(CryptoStream cs)
	{
	}
}
