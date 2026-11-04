// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ChannelMixer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000F8")]
[VolumeComponentMenu("Post-processing/Channel Mixer")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class ChannelMixer : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Modify influence of the red channel in the overall mix.")]
	public ClampedFloatParameter redOutRedIn;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Modify influence of the green channel in the overall mix.")]
	public ClampedFloatParameter redOutGreenIn;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Modify influence of the blue channel in the overall mix.")]
	public ClampedFloatParameter redOutBlueIn;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Modify influence of the red channel in the overall mix.")]
	public ClampedFloatParameter greenOutRedIn;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Modify influence of the green channel in the overall mix.")]
	public ClampedFloatParameter greenOutGreenIn;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("Modify influence of the blue channel in the overall mix.")]
	public ClampedFloatParameter greenOutBlueIn;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("Modify influence of the red channel in the overall mix.")]
	public ClampedFloatParameter blueOutRedIn;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("Modify influence of the green channel in the overall mix.")]
	public ClampedFloatParameter blueOutGreenIn;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x78")]
	[Tooltip("Modify influence of the blue channel in the overall mix.")]
	public ClampedFloatParameter blueOutBlueIn;

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x2C553F0", Offset = "0x2C539F0", VA = "0x182C553F0", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x2C55590", Offset = "0x2C53B90", VA = "0x182C55590")]
	public ChannelMixer()
	{
	}
}
