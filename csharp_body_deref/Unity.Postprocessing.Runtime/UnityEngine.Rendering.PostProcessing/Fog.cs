using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200002A")]
[Preserve]
public sealed class Fog
{
	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x10")]
	[Tooltip("Enables the internal deferred fog pass. Actual fog settings should be set in the Lighting panel.")]
	public bool enabled;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x11")]
	[Tooltip("Mark true for the fog to ignore the skybox")]
	public bool excludeSkybox;

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4817300", Offset = "0x4817300", VA = "0x4817300")]
	internal DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4817310", Offset = "0x4817310", VA = "0x4817310")]
	internal bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4817430", Offset = "0x4817430", VA = "0x4817430")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4817870", Offset = "0x4817870", VA = "0x4817870")]
	public Fog()
	{
	}
}
