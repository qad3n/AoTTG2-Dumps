// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.CpuTimeProvider
// Update status: NEW in this game update
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
		[Address(RVA = "0x2E90E90", Offset = "0x2E8F490", VA = "0x182E90E90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2E90E30", Offset = "0x2E8F430", VA = "0x182E90E30")]
	public CpuTimeProvider()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2E90E00", Offset = "0x2E8F400", VA = "0x182E90E00", Slot = "4")]
	protected virtual uint GetLatestTimings()
	{
		return default(uint);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2E90E20", Offset = "0x2E8F420", VA = "0x182E90E20")]
	public void Measure()
	{
	}
}
