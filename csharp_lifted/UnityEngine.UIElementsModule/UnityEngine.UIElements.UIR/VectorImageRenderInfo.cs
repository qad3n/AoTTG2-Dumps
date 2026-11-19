// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.VectorImageRenderInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005CF")]
internal class VectorImageRenderInfo : LinkedPoolItem<VectorImageRenderInfo>
{
	[Token(Token = "0x4001544")]
	[FieldOffset(Offset = "0x18")]
	public int useCount;

	[Token(Token = "0x4001545")]
	[FieldOffset(Offset = "0x20")]
	public GradientRemap firstGradientRemap;

	[Token(Token = "0x4001546")]
	[FieldOffset(Offset = "0x28")]
	public Alloc gradientSettingsAlloc;

	[Token(Token = "0x4001547")]
	[FieldOffset(Offset = "0x40")]
	public Texture2D atlas;

	[Token(Token = "0x6002B4F")]
	[Address(RVA = "0x6BAFF50", Offset = "0x6BAEF50", VA = "0x6BAFF50")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B50")]
	[Address(RVA = "0x6BAFED0", Offset = "0x6BAEED0", VA = "0x6BAFED0")]
	public VectorImageRenderInfo()
	{
	}
}
