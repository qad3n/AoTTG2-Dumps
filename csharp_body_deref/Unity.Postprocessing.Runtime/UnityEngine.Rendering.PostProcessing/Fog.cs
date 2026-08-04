// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Fog
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B3C3F0", Offset = "0x4B3C3F0", VA = "0x4B3C3F0")]
	internal DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4B3C400", Offset = "0x4B3C400", VA = "0x4B3C400")]
	internal bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4B3C520", Offset = "0x4B3C520", VA = "0x4B3C520")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4B3C960", Offset = "0x4B3C960", VA = "0x4B3C960")]
	public Fog()
	{
	}
}
