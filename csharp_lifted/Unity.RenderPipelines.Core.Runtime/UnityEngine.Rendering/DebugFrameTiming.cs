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
		[Address(RVA = "0x64C8640", Offset = "0x64C7640", VA = "0x64C8640")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x64C8650", Offset = "0x64C7650", VA = "0x64C8650")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int sampleHistorySize
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x64C8660", Offset = "0x64C7660", VA = "0x64C8660")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x64C8670", Offset = "0x64C7670", VA = "0x64C8670")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x64C8680", Offset = "0x64C7680", VA = "0x64C8680")]
	public DebugFrameTiming()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x64C88A0", Offset = "0x64C78A0", VA = "0x64C88A0")]
	public void UpdateFrameTiming()
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x64C9740", Offset = "0x64C8740", VA = "0x64C9740")]
	public void RegisterDebugUI(List<DebugUI.Widget> list)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x64CB400", Offset = "0x64CA400", VA = "0x64CB400")]
	internal void Reset()
	{
	}
}
