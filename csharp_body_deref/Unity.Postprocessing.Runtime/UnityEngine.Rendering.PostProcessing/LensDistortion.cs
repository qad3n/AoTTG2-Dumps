// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.LensDistortion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200002D")]
[PostProcess(typeof(LensDistortionRenderer), "Unity/Lens Distortion", true)]
public sealed class LensDistortion : PostProcessEffectSettings
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x30")]
	[Range(-100f, 100f)]
	[Tooltip("Total distortion amount.")]
	public FloatParameter intensity;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 1f)]
	[DisplayName("X Multiplier")]
	[Tooltip("Intensity multiplier on the x-axis. Set it to 0 to disable distortion on this axis.")]
	public FloatParameter intensityX;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x40")]
	[Range(0f, 1f)]
	[DisplayName("Y Multiplier")]
	[Tooltip("Intensity multiplier on the y-axis. Set it to 0 to disable distortion on this axis.")]
	public FloatParameter intensityY;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x48")]
	[Space]
	[Range(-1f, 1f)]
	[Tooltip("Distortion center point (x-axis).")]
	public FloatParameter centerX;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x50")]
	[Range(-1f, 1f)]
	[Tooltip("Distortion center point (y-axis).")]
	public FloatParameter centerY;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x58")]
	[Space]
	[Range(0.01f, 5f)]
	[Tooltip("Global screen scaling.")]
	public FloatParameter scale;

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4B3D3D0", Offset = "0x4B3D3D0", VA = "0x4B3D3D0", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4B3D4F0", Offset = "0x4B3D4F0", VA = "0x4B3D4F0")]
	public LensDistortion()
	{
	}
}
