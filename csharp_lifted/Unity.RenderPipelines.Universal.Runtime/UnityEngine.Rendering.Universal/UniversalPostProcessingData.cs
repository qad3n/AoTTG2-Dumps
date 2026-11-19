// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalPostProcessingData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000D6")]
public class UniversalPostProcessingData : ContextItem
{
	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x10")]
	public bool isEnabled;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x14")]
	public ColorGradingMode gradingMode;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x18")]
	public int lutSize;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x1C")]
	public bool useFastSRGBLinearConversion;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x1D")]
	public bool supportScreenSpaceLensFlare;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x1E")]
	public bool supportDataDrivenLensFlare;

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x6641B80", Offset = "0x6640B80", VA = "0x6641B80", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x6641BA0", Offset = "0x6640BA0", VA = "0x6641BA0")]
	public UniversalPostProcessingData()
	{
	}
}
