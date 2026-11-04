// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTreeAtlas
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005C1")]
internal static class RenderTreeAtlas
{
	[Token(Token = "0x20005C2")]
	public struct AtlasBlock
	{
		[Token(Token = "0x400150B")]
		[FieldOffset(Offset = "0x0")]
		public int width;

		[Token(Token = "0x400150C")]
		[FieldOffset(Offset = "0x4")]
		public int height;

		[Token(Token = "0x400150D")]
		[FieldOffset(Offset = "0x8")]
		public RectInt rect;

		[Token(Token = "0x400150E")]
		[FieldOffset(Offset = "0x18")]
		public Rect uvRect;

		[Token(Token = "0x400150F")]
		[FieldOffset(Offset = "0x28")]
		public RenderTexture texture;

		[Token(Token = "0x6002AA9")]
		[Address(RVA = "0x31A21C0", Offset = "0x31A07C0", VA = "0x1831A21C0")]
		public AtlasBlock(int w, int h, RectInt r, Rect uv)
		{
		}
	}

	[Token(Token = "0x6002AA7")]
	[Address(RVA = "0x31A6470", Offset = "0x31A4A70", VA = "0x1831A6470")]
	public static bool ReserveSize(int width, int height, out AtlasBlock block)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AA8")]
	[Address(RVA = "0x31A61B0", Offset = "0x31A47B0", VA = "0x1831A61B0")]
	public static bool CreateTextureForAtlasBlock(ref AtlasBlock block, bool forceGammaRendering, out bool allocatedNewTexture)
	{
		return default(bool);
	}
}
