// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Authenticode.AuthenticodeBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Authenticode;

[Token(Token = "0x2000040")]
public class AuthenticodeBase
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x10")]
	private byte[] fileblock;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x18")]
	private Stream fs;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x20")]
	private int blockNo;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x24")]
	private int blockLength;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x28")]
	private int peOffset;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x2C")]
	private int dirSecurityOffset;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x30")]
	private int dirSecuritySize;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x34")]
	private int coffSymbolTableOffset;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x38")]
	private bool pe64;

	[Token(Token = "0x17000082")]
	internal int PEOffset
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x52CFB10", Offset = "0x52CEB10", VA = "0x52CFB10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x52CFAB0", Offset = "0x52CEAB0", VA = "0x52CFAB0")]
	public AuthenticodeBase()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x52CFC00", Offset = "0x52CEC00", VA = "0x52CFC00")]
	internal void Open(string filename)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x52CFCF0", Offset = "0x52CECF0", VA = "0x52CFCF0")]
	internal void Open(byte[] rawdata)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x52CFCB0", Offset = "0x52CECB0", VA = "0x52CFCB0")]
	internal void Close()
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x52CFB30", Offset = "0x52CEB30", VA = "0x52CFB30")]
	internal void ReadFirstBlock()
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x52CFD90", Offset = "0x52CED90", VA = "0x52CFD90")]
	internal int ProcessFirstBlock()
	{
		return default(int);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x52CFFB0", Offset = "0x52CEFB0", VA = "0x52CFFB0")]
	internal byte[] GetSecurityEntry()
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x52D0080", Offset = "0x52CF080", VA = "0x52D0080")]
	internal byte[] GetHash(HashAlgorithm hash)
	{
		return null;
	}
}
