using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001DE")]
internal static class PlatformHelper
{
	[Token(Token = "0x4000959")]
	[FieldOffset(Offset = "0x0")]
	private static int s_processorCount;

	[Token(Token = "0x400095A")]
	[FieldOffset(Offset = "0x4")]
	private static int s_lastProcessorCountRefreshTicks;

	[Token(Token = "0x400095B")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly bool IsSingleProcessor;

	[Token(Token = "0x170001A2")]
	internal static int ProcessorCount
	{
		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x5045DC0", Offset = "0x5045DC0", VA = "0x5045DC0")]
		get
		{
			return default(int);
		}
	}
}
