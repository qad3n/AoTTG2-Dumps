// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.DataStreamExtensions
// Update status: NEW in this game update
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
	[Address(RVA = "0x29B32C0", Offset = "0x29B18C0", VA = "0x1829B32C0")]
	public unsafe static DataStreamWriter Create(byte* data, int length)
	{
		return default(DataStreamWriter);
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x29B3550", Offset = "0x29B1B50", VA = "0x1829B3550")]
	public unsafe static bool WriteBytesUnsafe(this ref DataStreamWriter writer, byte* data, int bytes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x29B3360", Offset = "0x29B1960", VA = "0x1829B3360")]
	public unsafe static void ReadBytesUnsafe(this ref DataStreamReader reader, byte* data, int length)
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x29B33F0", Offset = "0x29B19F0", VA = "0x1829B33F0")]
	public unsafe static ushort ReadFixedStringUnsafe(this ref DataStreamReader reader, byte* data, int maxLength)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x29B3480", Offset = "0x29B1A80", VA = "0x1829B3480")]
	public unsafe static ushort ReadPackedFixedStringDeltaUnsafe(this ref DataStreamReader reader, byte* data, int maxLength, byte* baseData, ushort baseLength, StreamCompressionModel model)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
	public unsafe static void* GetUnsafeReadOnlyPtr(this ref DataStreamReader reader)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
