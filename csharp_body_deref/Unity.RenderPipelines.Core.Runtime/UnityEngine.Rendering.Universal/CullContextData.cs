// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CullContextData
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B690F0", Offset = "0x2B676F0", VA = "0x182B690F0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x2B69100", Offset = "0x2B67700", VA = "0x182B69100")]
	public void SetRenderContext(in ScriptableRenderContext renderContext)
	{
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x2B68FF0", Offset = "0x2B675F0", VA = "0x182B68FF0")]
	public CullingResults Cull(ref ScriptableCullingParameters parameters)
	{
		return default(CullingResults);
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x2B68EE0", Offset = "0x2B674E0", VA = "0x182B68EE0")]
	public void CullShadowCasters(CullingResults cullingResults, ShadowCastersCullingInfos shadowCastersCullingInfos)
	{
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public CullContextData()
	{
	}
}
