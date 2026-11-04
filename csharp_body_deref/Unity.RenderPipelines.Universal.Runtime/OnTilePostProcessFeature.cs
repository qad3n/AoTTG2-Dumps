// ==================== AoTTG2 cross-reference ====================
// Type: OnTilePostProcessFeature
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000005")]
[SupportedOnRenderer(typeof(UniversalRendererData))]
[DisallowMultipleRendererFeature("On Tile Post Processing (Untethered XR)")]
public class OnTilePostProcessFeature : ScriptableRendererFeature
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[HideInInspector]
	private PostProcessData m_PostProcessData;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x28")]
	private Shader m_UberPostShader;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x30")]
	private RenderPassEvent postProcessingEvent;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x38")]
	private Material m_OnTilePostProcessMaterial;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x40")]
	private ColorGradingLutPass m_ColorGradingLutPass;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x48")]
	private OnTilePostProcessPass m_OnTilePostProcessPass;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2C065B0", Offset = "0x2C04BB0", VA = "0x182C065B0")]
	private bool TryLoadResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2C06410", Offset = "0x2C04A10", VA = "0x182C06410", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2C06560", Offset = "0x2C04B60", VA = "0x182C06560")]
	private bool IsRuntimePlatformUntetheredXR()
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2C06010", Offset = "0x2C04610", VA = "0x182C06010", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2C06540", Offset = "0x2C04B40", VA = "0x182C06540", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2C06760", Offset = "0x2C04D60", VA = "0x182C06760")]
	public OnTilePostProcessFeature()
	{
	}
}
