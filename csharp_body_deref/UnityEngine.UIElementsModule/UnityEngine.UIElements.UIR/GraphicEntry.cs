// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GraphicEntry
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005BA")]
internal struct GraphicEntry
{
	[Token(Token = "0x40014B3")]
	[FieldOffset(Offset = "0x0")]
	public Texture source;

	[Token(Token = "0x40014B4")]
	[FieldOffset(Offset = "0x8")]
	public TextureId actual;

	[Token(Token = "0x40014B5")]
	[FieldOffset(Offset = "0xC")]
	public bool replaced;

	[Token(Token = "0x40014B6")]
	[FieldOffset(Offset = "0x10")]
	public VectorImage vectorImage;
}
