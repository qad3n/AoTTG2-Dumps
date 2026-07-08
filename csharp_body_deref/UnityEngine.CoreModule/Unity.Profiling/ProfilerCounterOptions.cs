using System;
using Il2CppDummyDll;

namespace Unity.Profiling;

[Token(Token = "0x200001F")]
[Flags]
public enum ProfilerCounterOptions : ushort
{
	[Token(Token = "0x400003A")]
	None = 0,
	[Token(Token = "0x400003B")]
	FlushOnEndOfFrame = 2,
	[Token(Token = "0x400003C")]
	ResetToZeroOnFlush = 4
}
