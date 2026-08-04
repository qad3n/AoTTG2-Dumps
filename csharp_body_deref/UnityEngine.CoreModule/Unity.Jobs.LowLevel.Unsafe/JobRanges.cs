// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.LowLevel.Unsafe.JobRanges
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
