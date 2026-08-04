// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerRecorderSample
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[Token(Token = "0x2000021")]
[DebuggerDisplay("Value = {Value}; Count = {Count}")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ProfilerRecorderSample
{
	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	private long value;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x8")]
	private long count;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x10")]
	private long refValue;

	[Token(Token = "0x17000004")]
	public long Count
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4DAC330", Offset = "0x4DAC330", VA = "0x4DAC330")]
		get
		{
			return default(long);
		}
	}
}
