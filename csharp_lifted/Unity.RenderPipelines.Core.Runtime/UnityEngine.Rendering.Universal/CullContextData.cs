// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CullContextData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000236")]
public class CullContextData : ContextItem
{
	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x10")]
	internal ScriptableRenderContext? m_RenderContext;

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x655CB70", Offset = "0x655BB70", VA = "0x655CB70", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x655CB80", Offset = "0x655BB80", VA = "0x655CB80")]
	public void SetRenderContext(in ScriptableRenderContext renderContext)
	{
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x655CBE0", Offset = "0x655BBE0", VA = "0x655CBE0")]
	public CullingResults Cull(ref ScriptableCullingParameters parameters)
	{
		return default(CullingResults);
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x655CCC0", Offset = "0x655BCC0", VA = "0x655CCC0")]
	public void CullShadowCasters(CullingResults cullingResults, ShadowCastersCullingInfos shadowCastersCullingInfos)
	{
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x655CDC0", Offset = "0x655BDC0", VA = "0x655CDC0")]
	public CullContextData()
	{
	}
}
