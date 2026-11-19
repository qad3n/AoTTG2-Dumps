// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LiftGammaGain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000104")]
[VolumeComponentMenu("Post-processing/Lift, Gamma, Gain")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class LiftGammaGain : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x38")]
	public Vector4Parameter lift;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x40")]
	public Vector4Parameter gamma;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x48")]
	public Vector4Parameter gain;

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x664B810", Offset = "0x664A810", VA = "0x664B810", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x664B8B0", Offset = "0x664A8B0", VA = "0x664B8B0", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x664B8C0", Offset = "0x664A8C0", VA = "0x664B8C0")]
	public LiftGammaGain()
	{
	}
}
