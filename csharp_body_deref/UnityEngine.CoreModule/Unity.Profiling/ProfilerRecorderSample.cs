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

[Token(Token = "0x200002C")]
[UnityEngine.Scripting.UsedByNativeCode]
[DebuggerDisplay("Value = {Value}; Count = {Count}")]
public struct ProfilerRecorderSample
{
	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x0")]
	private long value;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x8")]
	private long count;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x10")]
	private long refValue;

	[Token(Token = "0x1700000B")]
	public long Count
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return default(long);
		}
	}
}
