// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TransparentSettingsPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000159")]
internal class TransparentSettingsPass : ScriptableRenderPass
{
	[Token(Token = "0x40007E9")]
	[FieldOffset(Offset = "0x5C")]
	private bool m_shouldReceiveShadows;

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x6672E60", Offset = "0x6671E60", VA = "0x6672E60")]
	public TransparentSettingsPass(RenderPassEvent evt, bool shadowReceiveSupported)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x6672EF0", Offset = "0x6671EF0", VA = "0x6672EF0")]
	public bool Setup()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x6672F00", Offset = "0x6671F00", VA = "0x6672F00")]
	public static void ExecutePass(RasterCommandBuffer rasterCommandBuffer)
	{
	}
}
