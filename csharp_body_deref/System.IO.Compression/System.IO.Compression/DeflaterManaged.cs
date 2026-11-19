// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.DeflaterManaged
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000018")]
internal sealed class DeflaterManaged
{
	[Token(Token = "0x2000019")]
	private enum DeflaterState
	{
		[Token(Token = "0x400005E")]
		NotStarted,
		[Token(Token = "0x400005F")]
		SlowDownForIncompressible1,
		[Token(Token = "0x4000060")]
		SlowDownForIncompressible2,
		[Token(Token = "0x4000061")]
		StartingSmallData,
		[Token(Token = "0x4000062")]
		CompressThenCheck,
		[Token(Token = "0x4000063")]
		CheckingForIncompressible,
		[Token(Token = "0x4000064")]
		HandlingSmallData
	}

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x10")]
	private readonly FastEncoder _deflateEncoder;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x18")]
	private readonly CopyEncoder _copyEncoder;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x20")]
	private readonly DeflateInput _input;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x28")]
	private readonly OutputBuffer _output;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x30")]
	private DeflaterState _processingState;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x38")]
	private DeflateInput _inputFromHistory;

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x5F65B40", Offset = "0x5F64B40", VA = "0x5F65B40")]
	internal bool NeedsInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x5F657A0", Offset = "0x5F647A0", VA = "0x5F657A0")]
	internal void SetInput(byte[] inputBuffer, int startIndex, int count)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x5F65810", Offset = "0x5F64810", VA = "0x5F65810")]
	internal int GetDeflateOutput(byte[] outputBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5F65CB0", Offset = "0x5F64CB0", VA = "0x5F65CB0")]
	internal bool Finish(byte[] outputBuffer, out int bytesRead)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x5F66B80", Offset = "0x5F65B80", VA = "0x5F66B80")]
	private bool UseCompressed(double ratio)
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5F66BA0", Offset = "0x5F65BA0", VA = "0x5F66BA0")]
	private void FlushInputWindows()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x5F66CB0", Offset = "0x5F65CB0", VA = "0x5F66CB0")]
	private void WriteFinal()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x5F66D10", Offset = "0x5F65D10", VA = "0x5F66D10", Slot = "4")]
	public void Dispose()
	{
	}
}
