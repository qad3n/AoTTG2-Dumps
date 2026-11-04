// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.VectorImageRenderInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005DF")]
internal class VectorImageRenderInfo : LinkedPoolItem<VectorImageRenderInfo>
{
	[Token(Token = "0x40015D5")]
	[FieldOffset(Offset = "0x18")]
	public int useCount;

	[Token(Token = "0x40015D6")]
	[FieldOffset(Offset = "0x20")]
	public GradientRemap firstGradientRemap;

	[Token(Token = "0x40015D7")]
	[FieldOffset(Offset = "0x28")]
	public Alloc gradientSettingsAlloc;

	[Token(Token = "0x40015D8")]
	[FieldOffset(Offset = "0x40")]
	public Texture2D atlas;

	[Token(Token = "0x6002B84")]
	[Address(RVA = "0x31B7460", Offset = "0x31B5A60", VA = "0x1831B7460")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B85")]
	[Address(RVA = "0x31B74B0", Offset = "0x31B5AB0", VA = "0x1831B74B0")]
	public VectorImageRenderInfo()
	{
	}
}
