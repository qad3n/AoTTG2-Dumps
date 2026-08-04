// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugFrameTiming
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000BA")]
public class DebugFrameTiming
{
	[Token(Token = "0x400028B")]
	private const string k_FpsFormatString = "{0:F1}";

	[Token(Token = "0x400028C")]
	private const string k_MsFormatString = "{0:F2}ms";

	[Token(Token = "0x400028D")]
	private const float k_RefreshRate = 0.2f;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x10")]
	internal FrameTimeSampleHistory m_FrameHistory;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x18")]
	internal BottleneckHistory m_BottleneckHistory;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x28")]
	private FrameTiming[] m_Timing;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x30")]
	private FrameTimeSample m_Sample;

	[Token(Token = "0x17000080")]
	public int bottleneckHistorySize
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x4B9FD50", Offset = "0x4B9FD50", VA = "0x4B9FD50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x4B9FD60", Offset = "0x4B9FD60", VA = "0x4B9FD60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public int sampleHistorySize
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x4B9FD70", Offset = "0x4B9FD70", VA = "0x4B9FD70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x4B9FD80", Offset = "0x4B9FD80", VA = "0x4B9FD80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4B9FD90", Offset = "0x4B9FD90", VA = "0x4B9FD90")]
	public DebugFrameTiming()
	{
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4B9FE80", Offset = "0x4B9FE80", VA = "0x4B9FE80")]
	public void UpdateFrameTiming()
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4BA00B0", Offset = "0x4BA00B0", VA = "0x4BA00B0")]
	public void RegisterDebugUI(List<DebugUI.Widget> list)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4BA1790", Offset = "0x4BA1790", VA = "0x4BA1790")]
	internal void Reset()
	{
	}
}
