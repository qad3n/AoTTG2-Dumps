// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplayStats
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200006C")]
internal class UniversalRenderPipelineDebugDisplayStats : DebugDisplayStats<URPProfileId>
{
	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x30")]
	private DebugFrameTiming m_DebugFrameTiming;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x38")]
	private List<URPProfileId> m_RecordedSamplers;

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x660CC50", Offset = "0x660BC50", VA = "0x660CC50", Slot = "4")]
	public override void EnableProfilingRecorders()
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x660CCA0", Offset = "0x660BCA0", VA = "0x660CCA0", Slot = "5")]
	public override void DisableProfilingRecorders()
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x660CE30", Offset = "0x660BE30", VA = "0x660CE30", Slot = "6")]
	public override void RegisterDebugUI(List<DebugUI.Widget> list)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x660D200", Offset = "0x660C200", VA = "0x660D200", Slot = "7")]
	public override void Update()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x660CA70", Offset = "0x660BA70", VA = "0x660CA70")]
	public UniversalRenderPipelineDebugDisplayStats()
	{
	}
}
