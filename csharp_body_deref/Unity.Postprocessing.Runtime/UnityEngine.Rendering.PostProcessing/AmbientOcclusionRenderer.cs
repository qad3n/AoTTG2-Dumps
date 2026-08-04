// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.AmbientOcclusionRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000011")]
[Preserve]
internal sealed class AmbientOcclusionRenderer : PostProcessEffectRenderer<AmbientOcclusion>
{
	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x20")]
	private IAmbientOcclusionMethod[] m_Methods;

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4B32EF0", Offset = "0x4B32EF0", VA = "0x4B32EF0", Slot = "4")]
	public override void Init()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B33530", Offset = "0x4B33530", VA = "0x4B33530")]
	public bool IsAmbientOnly(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B335B0", Offset = "0x4B335B0", VA = "0x4B335B0")]
	public IAmbientOcclusionMethod Get()
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B33610", Offset = "0x4B33610", VA = "0x4B33610", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4B33730", Offset = "0x4B33730", VA = "0x4B33730", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B33850", Offset = "0x4B33850", VA = "0x4B33850")]
	public ScalableAO GetScalableAO()
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B338B0", Offset = "0x4B338B0", VA = "0x4B338B0")]
	public MultiScaleVO GetMultiScaleVO()
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B33910", Offset = "0x4B33910", VA = "0x4B33910", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B33920", Offset = "0x4B33920", VA = "0x4B33920")]
	public AmbientOcclusionRenderer()
	{
	}
}
