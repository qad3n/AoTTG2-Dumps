// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.GpuTimeProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200000D")]
internal class GpuTimeProvider
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x10")]
	private UnityEngine.FrameTiming[] m_FrameTiming;

	[Token(Token = "0x1700002D")]
	public float GpuFrameTime
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x6880A60", Offset = "0x687FA60", VA = "0x6880A60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x6882DB0", Offset = "0x6881DB0", VA = "0x6882DB0")]
	public GpuTimeProvider()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6885D90", Offset = "0x6884D90", VA = "0x6885D90", Slot = "4")]
	protected virtual uint GetLatestTimings()
	{
		return default(uint);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x687F640", Offset = "0x687E640", VA = "0x687F640")]
	public void Measure()
	{
	}
}
