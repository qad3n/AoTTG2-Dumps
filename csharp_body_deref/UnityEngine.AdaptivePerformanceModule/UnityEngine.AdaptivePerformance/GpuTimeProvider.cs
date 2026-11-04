// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.GpuTimeProvider
// Update status: NEW in this game update
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
		[Address(RVA = "0x2E91500", Offset = "0x2E8FB00", VA = "0x182E91500")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2E914A0", Offset = "0x2E8FAA0", VA = "0x182E914A0")]
	public GpuTimeProvider()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2E90E00", Offset = "0x2E8F400", VA = "0x182E90E00", Slot = "4")]
	protected virtual uint GetLatestTimings()
	{
		return default(uint);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2E90E20", Offset = "0x2E8F420", VA = "0x182E90E20")]
	public void Measure()
	{
	}
}
