// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.UnexceptionalStreamReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000681")]
internal class UnexceptionalStreamReader : StreamReader
{
	[Token(Token = "0x4001A69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool[] newline;

	[Token(Token = "0x4001A6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static char newlineChar;

	[Token(Token = "0x6003371")]
	[Address(RVA = "0x548E8F0", Offset = "0x548D8F0", VA = "0x548E8F0")]
	static UnexceptionalStreamReader()
	{
	}

	[Token(Token = "0x6003372")]
	[Address(RVA = "0x548E990", Offset = "0x548D990", VA = "0x548E990")]
	public UnexceptionalStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6003373")]
	[Address(RVA = "0x548E9F0", Offset = "0x548D9F0", VA = "0x548E9F0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6003374")]
	[Address(RVA = "0x548EA70", Offset = "0x548DA70", VA = "0x548EA70", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6003375")]
	[Address(RVA = "0x548EAF0", Offset = "0x548DAF0", VA = "0x548EAF0", Slot = "11")]
	public override int Read([In][Out] char[] dest_buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003376")]
	[Address(RVA = "0x548ED90", Offset = "0x548DD90", VA = "0x548ED90")]
	private bool CheckEOL(char current)
	{
		return default(bool);
	}

	[Token(Token = "0x6003377")]
	[Address(RVA = "0x548EF30", Offset = "0x548DF30", VA = "0x548EF30", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6003378")]
	[Address(RVA = "0x548EFB0", Offset = "0x548DFB0", VA = "0x548EFB0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
