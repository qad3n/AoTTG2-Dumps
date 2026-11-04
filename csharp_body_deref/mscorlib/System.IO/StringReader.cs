// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.StringReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200069B")]
[ComVisible(true)]
public class StringReader : TextReader
{
	[Token(Token = "0x4001AAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _s;

	[Token(Token = "0x4001AAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int _pos;

	[Token(Token = "0x4001AAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int _length;

	[Token(Token = "0x6003307")]
	[Address(RVA = "0x1AF9ED0", Offset = "0x1AF84D0", VA = "0x181AF9ED0")]
	public StringReader(string s)
	{
	}

	[Token(Token = "0x6003308")]
	[Address(RVA = "0x19E9D70", Offset = "0x19E8370", VA = "0x1819E9D70", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x6003309")]
	[Address(RVA = "0x1AF98D0", Offset = "0x1AF7ED0", VA = "0x181AF98D0", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600330A")]
	[Address(RVA = "0x1AF9900", Offset = "0x1AF7F00", VA = "0x181AF9900", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x600330B")]
	[Address(RVA = "0x1AF9E80", Offset = "0x1AF8480", VA = "0x181AF9E80", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x600330C")]
	[Address(RVA = "0x1AF9C70", Offset = "0x1AF8270", VA = "0x181AF9C70", Slot = "11")]
	public override int Read([In][Out] char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600330D")]
	[Address(RVA = "0x1AF9C20", Offset = "0x1AF8220", VA = "0x181AF9C20", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x600330E")]
	[Address(RVA = "0x1AF9B20", Offset = "0x1AF8120", VA = "0x181AF9B20", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x600330F")]
	[Address(RVA = "0x1AF9940", Offset = "0x1AF7F40", VA = "0x181AF9940", Slot = "15")]
	[ComVisible(false)]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}
}
