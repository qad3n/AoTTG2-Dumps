using System;
using Il2CppDummyDll;

namespace Unity.Jobs.LowLevel.Unsafe;

[Token(Token = "0x2000013")]
public struct JobRanges
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	internal int BatchSize;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x4")]
	internal int NumJobs;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x8")]
	public int TotalIterationCount;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr StartEndIndex;
}
