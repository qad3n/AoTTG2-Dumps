using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F6")]
[ComVisible(true)]
public class RIPEMD160Managed : RIPEMD160
{
	[Token(Token = "0x4000D4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateMD160;

	[Token(Token = "0x4000D4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _blockDWords;

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x4E4D040", Offset = "0x4E4D040", VA = "0x4E4D040")]
	public RIPEMD160Managed()
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x4E55740", Offset = "0x4E55740", VA = "0x4E55740", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x4E557D0", Offset = "0x4E557D0", VA = "0x4E557D0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x4E55980", Offset = "0x4E55980", VA = "0x4E55980", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x4E556E0", Offset = "0x4E556E0", VA = "0x4E556E0")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x4E557E0", Offset = "0x4E557E0", VA = "0x4E557E0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x4E55990", Offset = "0x4E55990", VA = "0x4E55990")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x4E55B40", Offset = "0x4E55B40", VA = "0x4E55B40")]
	private unsafe static void MDTransform(uint* blockDWords, uint* state, byte* block)
	{
	}

	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x4E57120", Offset = "0x4E57120", VA = "0x4E57120")]
	private static uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x4E57130", Offset = "0x4E57130", VA = "0x4E57130")]
	private static uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x4E57140", Offset = "0x4E57140", VA = "0x4E57140")]
	private static uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x4E57150", Offset = "0x4E57150", VA = "0x4E57150")]
	private static uint I(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x4E57160", Offset = "0x4E57160", VA = "0x4E57160")]
	private static uint J(uint x, uint y, uint z)
	{
		return default(uint);
	}
}
