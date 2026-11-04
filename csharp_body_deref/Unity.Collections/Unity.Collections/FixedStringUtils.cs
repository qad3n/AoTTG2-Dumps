// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedStringUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x200007A")]
[GenerateTestsForBurstCompatibility]
internal static class FixedStringUtils
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200007B")]
	internal struct UintFloatUnion
	{
		[Token(Token = "0x400039B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public uint uintValue;

		[Token(Token = "0x400039C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public float floatValue;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x29B3980", Offset = "0x29B1F80", VA = "0x1829B3980")]
	internal static ParseError Base10ToBase2(ref float output, ulong mantissa10, int exponent10)
	{
		return default(ParseError);
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x29B3AB0", Offset = "0x29B20B0", VA = "0x1829B3AB0")]
	internal static void Base2ToBase10(ref ulong mantissa10, ref int exponent10, float input)
	{
	}
}
