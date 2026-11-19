// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.PlatformHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E1")]
internal static class PlatformHelper
{
	[Token(Token = "0x400090E")]
	[FieldOffset(Offset = "0x0")]
	private static int s_processorCount;

	[Token(Token = "0x400090F")]
	[FieldOffset(Offset = "0x4")]
	private static int s_lastProcessorCountRefreshTicks;

	[Token(Token = "0x4000910")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly bool IsSingleProcessor;

	[Token(Token = "0x170001A3")]
	internal static int ProcessorCount
	{
		[Token(Token = "0x60011E1")]
		[Address(RVA = "0x552EB20", Offset = "0x552DB20", VA = "0x552EB20")]
		get
		{
			return default(int);
		}
	}
}
