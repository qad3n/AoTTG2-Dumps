// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LensDistortion
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000103")]
[VolumeComponentMenu("Post-processing/Lens Distortion")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class LensDistortion : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Total distortion amount.")]
	public ClampedFloatParameter intensity;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Intensity multiplier on X axis. Set it to 0 to disable distortion on this axis.")]
	public ClampedFloatParameter xMultiplier;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Intensity multiplier on Y axis. Set it to 0 to disable distortion on this axis.")]
	public ClampedFloatParameter yMultiplier;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("Distortion center point. 0.5,0.5 is center of the screen.")]
	public Vector2Parameter center;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Controls global screen scaling for the distortion effect. Use this to hide the screen borders when using high \"Intensity.\"")]
	public ClampedFloatParameter scale;

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x2C5A0A0", Offset = "0x2C586A0", VA = "0x182C5A0A0", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x2C5A150", Offset = "0x2C58750", VA = "0x182C5A150")]
	public LensDistortion()
	{
	}
}
