// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.CpuTimeProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200000B")]
internal class CpuTimeProvider
{
	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x10")]
	private UnityEngine.FrameTiming[] m_FrameTimings;

	[Token(Token = "0x17000023")]
	public float CpuFrameTime
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x6880AC0", Offset = "0x687FAC0", VA = "0x6880AC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x6882D60", Offset = "0x6881D60", VA = "0x6882D60")]
	public CpuTimeProvider()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x6885C90", Offset = "0x6884C90", VA = "0x6885C90", Slot = "4")]
	protected virtual uint GetLatestTimings()
	{
		return default(uint);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x687F630", Offset = "0x687E630", VA = "0x687F630")]
	public void Measure()
	{
	}
}
