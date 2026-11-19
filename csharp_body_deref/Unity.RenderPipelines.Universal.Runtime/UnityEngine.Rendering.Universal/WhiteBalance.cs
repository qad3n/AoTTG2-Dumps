// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.WhiteBalance
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000118")]
[VolumeComponentMenu("Post-processing/White Balance")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class WhiteBalance : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Sets the white balance to a custom color temperature.")]
	public ClampedFloatParameter temperature;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Sets the white balance to compensate for a green or magenta tint.")]
	public ClampedFloatParameter tint;

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x664CC40", Offset = "0x664BC40", VA = "0x664CC40", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x664CCA0", Offset = "0x664BCA0", VA = "0x664CCA0", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x664CCB0", Offset = "0x664BCB0", VA = "0x664CCB0")]
	public WhiteBalance()
	{
	}
}
