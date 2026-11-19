// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTreeAtlas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005AC")]
internal static class RenderTreeAtlas
{
	[Token(Token = "0x20005AD")]
	public struct AtlasBlock
	{
		[Token(Token = "0x400144D")]
		[FieldOffset(Offset = "0x0")]
		public int width;

		[Token(Token = "0x400144E")]
		[FieldOffset(Offset = "0x4")]
		public int height;

		[Token(Token = "0x400144F")]
		[FieldOffset(Offset = "0x8")]
		public RectInt rect;

		[Token(Token = "0x4001450")]
		[FieldOffset(Offset = "0x18")]
		public Rect uvRect;

		[Token(Token = "0x4001451")]
		[FieldOffset(Offset = "0x28")]
		public RenderTexture texture;

		[Token(Token = "0x6002A48")]
		[Address(RVA = "0x6B9FEB0", Offset = "0x6B9EEB0", VA = "0x6B9FEB0")]
		public AtlasBlock(int w, int h, RectInt r, Rect uv)
		{
		}
	}

	[Token(Token = "0x6002A46")]
	[Address(RVA = "0x6B9FD30", Offset = "0x6B9ED30", VA = "0x6B9FD30")]
	public static bool ReserveSize(int width, int height, out AtlasBlock block)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A47")]
	[Address(RVA = "0x6B9FEE0", Offset = "0x6B9EEE0", VA = "0x6B9FEE0")]
	public static bool CreateTextureForAtlasBlock(ref AtlasBlock block, bool forceGammaRendering, out bool allocatedNewTexture)
	{
		return default(bool);
	}
}
