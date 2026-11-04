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

[Token(Token = "0x2000053")]
public class AuthenticodeBase
{
	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x10")]
	private byte[] fileblock;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x18")]
	private Stream fs;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x20")]
	private int blockNo;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x24")]
	private int blockLength;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x28")]
	private int peOffset;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x2C")]
	private int dirSecurityOffset;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x30")]
	private int dirSecuritySize;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x34")]
	private int coffSymbolTableOffset;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x38")]
	private bool pe64;

	[Token(Token = "0x17000085")]
	internal int PEOffset
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x192BE50", Offset = "0x192A450", VA = "0x18192BE50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x192BDF0", Offset = "0x192A3F0", VA = "0x18192BDF0")]
	public AuthenticodeBase()
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x192B930", Offset = "0x1929F30", VA = "0x18192B930")]
	internal void Open(string filename)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x192B9F0", Offset = "0x1929FF0", VA = "0x18192B9F0")]
	internal void Open(byte[] rawdata)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x192B350", Offset = "0x1929950", VA = "0x18192B350")]
	internal void Close()
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x192BD20", Offset = "0x192A320", VA = "0x18192BD20")]
	internal void ReadFirstBlock()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x192BAA0", Offset = "0x192A0A0", VA = "0x18192BAA0")]
	internal int ProcessFirstBlock()
	{
		return default(int);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x192B860", Offset = "0x1929E60", VA = "0x18192B860")]
	internal byte[] GetSecurityEntry()
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x192B3A0", Offset = "0x19299A0", VA = "0x18192B3A0")]
	internal byte[] GetHash(HashAlgorithm hash)
	{
		return null;
	}
}
