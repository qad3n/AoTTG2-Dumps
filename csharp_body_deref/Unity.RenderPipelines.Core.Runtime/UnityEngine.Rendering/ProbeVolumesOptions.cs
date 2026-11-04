// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumesOptions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000145")]
[VolumeComponentMenu("Lighting/Adaptive Probe Volumes Options")]
[SupportedOnRenderPipeline(new Type[] { })]
[DisplayInfo(name = "Adaptive Probe Volumes Options")]
public sealed class ProbeVolumesOptions : VolumeComponent
{
	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("The overridden normal bias to be applied to the world position when sampling the Adaptive Probe Volumes data structure. Unit is meters.")]
	public ClampedFloatParameter normalBias;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("A bias alongside the view vector to be applied to the world position when sampling the Adaptive Probe Volumes data structure. Unit is meters.")]
	public ClampedFloatParameter viewBias;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Whether to scale the bias for Adaptive Probe Volumes by the minimum distance between probes.")]
	public BoolParameter scaleBiasWithMinProbeDistance;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Noise to be applied to the sampling position. It can hide seams issues between subdivision levels, but introduces noise.")]
	public ClampedFloatParameter samplingNoise;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Whether to animate the noise when TAA is enabled. It can potentially remove the visible noise patterns.")]
	public BoolParameter animateSamplingNoise;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("Method used to reduce leaks. Currently available modes are crude, but cheap methods.")]
	public APVLeakReductionModeParameter leakReductionMode;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x68")]
	[Obsolete("This parameter isn't used anymore. #from(6000.0)")]
	public ClampedFloatParameter minValidDotProductValue;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("When enabled, reflection probe normalization can only decrease the reflection intensity.")]
	public BoolParameter occlusionOnlyReflectionNormalization;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x78")]
	[AdditionalProperty]
	[Tooltip("Global probe volumes weight. Allows for fading out probe volumes influence falling back to ambient probe.")]
	public ClampedFloatParameter intensityMultiplier;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x80")]
	[AdditionalProperty]
	[Tooltip("Multiplier applied on the sky lighting when using sky occlusion.")]
	public ClampedFloatParameter skyOcclusionIntensityMultiplier;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x88")]
	[AdditionalProperty]
	[Tooltip("Offset applied at runtime to probe positions in world space.\nThis is not considered while baking.")]
	public Vector3Parameter worldOffset;

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x2B2D7A0", Offset = "0x2B2BDA0", VA = "0x182B2D7A0")]
	public ProbeVolumesOptions()
	{
	}
}
