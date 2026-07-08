using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000120")]
internal static class UniTaskCompletionSourceCoreShared
{
	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Action<object> s_sentinel;

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x46C5D20", Offset = "0x46C5D20", VA = "0x46C5D20")]
	private static void CompletionSentinel(object _)
	{
	}
}
