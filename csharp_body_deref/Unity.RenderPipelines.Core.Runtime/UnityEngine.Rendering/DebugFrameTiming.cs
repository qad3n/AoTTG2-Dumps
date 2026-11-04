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

[Token(Token = "0x2000088")]
public class DebugFrameTiming
{
	[Token(Token = "0x40001BC")]
	private const string k_FpsFormatString = "{0:F1}";

	[Token(Token = "0x40001BD")]
	private const string k_MsFormatString = "{0:F2}ms";

	[Token(Token = "0x40001BE")]
	private const float k_RefreshRate = 0.2f;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x10")]
	internal FrameTimeSampleHistory m_FrameHistory;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x18")]
	internal BottleneckHistory m_BottleneckHistory;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x28")]
	private FrameTiming[] m_Timing;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x30")]
	private FrameTimeSample m_Sample;

	[Token(Token = "0x1700005D")]
	public int bottleneckHistorySize
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600060E")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int sampleHistorySize
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000610")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x2AD9910", Offset = "0x2AD7F10", VA = "0x182AD9910")]
	public DebugFrameTiming()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x2AD92F0", Offset = "0x2AD78F0", VA = "0x182AD92F0")]
	public void UpdateFrameTiming()
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x2AD71F0", Offset = "0x2AD57F0", VA = "0x182AD71F0")]
	public void RegisterDebugUI(List<DebugUI.Widget> list)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x2AD8CD0", Offset = "0x2AD72D0", VA = "0x182AD8CD0")]
	internal void Reset()
	{
	}
}
