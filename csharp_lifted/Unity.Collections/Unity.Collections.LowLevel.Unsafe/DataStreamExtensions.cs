// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.DataStreamExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x20000FC")]
[GenerateTestsForBurstCompatibility]
public static class DataStreamExtensions
{
	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x638BD40", Offset = "0x638AD40", VA = "0x638BD40")]
	public unsafe static DataStreamWriter Create(byte* data, int length)
	{
		return default(DataStreamWriter);
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x638BDB0", Offset = "0x638ADB0", VA = "0x638BDB0")]
	public unsafe static bool WriteBytesUnsafe(this ref DataStreamWriter writer, byte* data, int bytes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x638BE10", Offset = "0x638AE10", VA = "0x638BE10")]
	public unsafe static void ReadBytesUnsafe(this ref DataStreamReader reader, byte* data, int length)
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x638BE70", Offset = "0x638AE70", VA = "0x638BE70")]
	public unsafe static ushort ReadFixedStringUnsafe(this ref DataStreamReader reader, byte* data, int maxLength)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x638BED0", Offset = "0x638AED0", VA = "0x638BED0")]
	public unsafe static ushort ReadPackedFixedStringDeltaUnsafe(this ref DataStreamReader reader, byte* data, int maxLength, byte* baseData, ushort baseLength, StreamCompressionModel model)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x638BF70", Offset = "0x638AF70", VA = "0x638BF70")]
	public unsafe static void* GetUnsafeReadOnlyPtr(this ref DataStreamReader reader)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
