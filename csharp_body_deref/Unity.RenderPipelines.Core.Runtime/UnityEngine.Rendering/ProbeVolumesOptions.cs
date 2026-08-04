// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumesOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000151")]
[VolumeComponentMenu("Lighting/Probe Volumes Options")]
[SupportedOnRenderPipeline(new Type[] { })]
public sealed class ProbeVolumesOptions : VolumeComponent
{
	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("The overridden normal bias to be applied to the world position when sampling the Probe Volumes data structure. Unit is meters.")]
	public ClampedFloatParameter normalBias;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("A bias alongside the view vector to be applied to the world position when sampling the Probe Volumes data structure. Unit is meters.")]
	public ClampedFloatParameter viewBias;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Whether to scale the bias for Probe Volumes by the minimum distance between probes.")]
	public BoolParameter scaleBiasWithMinProbeDistance;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x50")]
	[AdditionalProperty]
	[Tooltip("Noise to be applied to the sampling position. It can hide seams issues between subdivision levels, but introduces noise.")]
	public ClampedFloatParameter samplingNoise;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x58")]
	[AdditionalProperty]
	[Tooltip("Whether to animate the noise when TAA is enabled. It can potentially remove the visible noise patterns.")]
	public BoolParameter animateSamplingNoise;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x60")]
	[AdditionalProperty]
	[Tooltip("Method used to reduce leaks. Currently available modes are crude, but cheap methods.")]
	public APVLeakReductionModeParameter leakReductionMode;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x68")]
	[AdditionalProperty]
	[Tooltip("Controls how normal based leak reduction is applied. Lower values would consider all probes equally important, while higher ones would favor probes further along the normal direction of the surface.")]
	public ClampedFloatParameter minValidDotProductValue;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x70")]
	[AdditionalProperty]
	[Tooltip("When enabled, reflection probe normalization can only decrease the reflection intensity.")]
	public BoolParameter occlusionOnlyReflectionNormalization;

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x4BD36C0", Offset = "0x4BD36C0", VA = "0x4BD36C0")]
	public ProbeVolumesOptions()
	{
	}
}
