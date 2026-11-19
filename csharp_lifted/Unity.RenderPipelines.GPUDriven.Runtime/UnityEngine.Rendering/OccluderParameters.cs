// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000033")]
public struct OccluderParameters
{
	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x0")]
	public int viewInstanceID;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x4")]
	public int subviewCount;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x8")]
	public TextureHandle depthTexture;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x18")]
	public Vector2Int depthSize;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x20")]
	public bool depthIsArray;

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x65C1F50", Offset = "0x65C0F50", VA = "0x65C1F50")]
	public OccluderParameters(int viewInstanceID)
	{
	}
}
