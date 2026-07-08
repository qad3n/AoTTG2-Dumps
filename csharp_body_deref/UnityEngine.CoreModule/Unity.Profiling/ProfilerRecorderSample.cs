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
		[Address(RVA = "0x4A84B10", Offset = "0x4A84B10", VA = "0x4A84B10")]
		get
		{
			return default(long);
		}
	}
}
