// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200003B")]
[PostProcess(typeof(ScreenSpaceReflectionsRenderer), "Unity/Screen-space reflections", true)]
public sealed class ScreenSpaceReflections : PostProcessEffectSettings
{
	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Choose a quality preset, or use \"Custom\" to create your own custom preset. Don't use a preset higher than \"Medium\" if you desire good performance on consoles.")]
	public ScreenSpaceReflectionPresetParameter preset;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 256f)]
	[Tooltip("Maximum number of steps in the raymarching pass. Higher values mean more reflections.")]
	public IntParameter maximumIterationCount;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Changes the size of the SSR buffer. Downsample it to maximize performances or supersample it for higher quality results with reduced performance.")]
	public ScreenSpaceReflectionResolutionParameter resolution;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x48")]
	[Range(1f, 64f)]
	[Tooltip("Ray thickness. Lower values are more expensive but allow the effect to detect smaller details.")]
	public FloatParameter thickness;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Maximum distance to traverse after which it will stop drawing reflections.")]
	public FloatParameter maximumMarchDistance;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x58")]
	[Range(0f, 1f)]
	[Tooltip("Fades reflections close to the near planes.")]
	public FloatParameter distanceFade;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x60")]
	[Range(0f, 1f)]
	[Tooltip("Fades reflections close to the screen edges.")]
	public FloatParameter vignette;

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4B43C80", Offset = "0x4B43C80", VA = "0x4B43C80", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4B43DD0", Offset = "0x4B43DD0", VA = "0x4B43DD0")]
	public ScreenSpaceReflections()
	{
	}
}
