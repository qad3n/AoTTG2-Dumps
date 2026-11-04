// ==================== AoTTG2 cross-reference ====================
// Type: System.FixedBufferExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200015D")]
internal static class FixedBufferExtensions
{
	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x1B440E0", Offset = "0x1B426E0", VA = "0x181B440E0")]
	internal static string GetStringFromFixedBuffer(this ReadOnlySpan<char> span)
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x1B44080", Offset = "0x1B42680", VA = "0x181B44080")]
	internal static int GetFixedBufferStringLength(this ReadOnlySpan<char> span)
	{
		return default(int);
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x1B43FB0", Offset = "0x1B425B0", VA = "0x181B43FB0")]
	internal static bool FixedBufferEqualsString(this ReadOnlySpan<char> span, string value)
	{
		return default(bool);
	}
}
