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
		[Address(RVA = "0x487AC60", Offset = "0x487AC60", VA = "0x487AC60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x487AC70", Offset = "0x487AC70", VA = "0x487AC70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public int sampleHistorySize
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x487AC80", Offset = "0x487AC80", VA = "0x487AC80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x487AC90", Offset = "0x487AC90", VA = "0x487AC90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x487ACA0", Offset = "0x487ACA0", VA = "0x487ACA0")]
	public DebugFrameTiming()
	{
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x487AD90", Offset = "0x487AD90", VA = "0x487AD90")]
	public void UpdateFrameTiming()
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x487AFC0", Offset = "0x487AFC0", VA = "0x487AFC0")]
	public void RegisterDebugUI(List<DebugUI.Widget> list)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x487C6A0", Offset = "0x487C6A0", VA = "0x487C6A0")]
	internal void Reset()
	{
	}
}
