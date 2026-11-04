// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextJobSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004A9")]
internal class TextJobSystem
{
	[Token(Token = "0x4000FF1")]
	[FieldOffset(Offset = "0x10")]
	internal UITKTextJobSystem m_UITKTextJobSystem;

	[Token(Token = "0x4000FF2")]
	[FieldOffset(Offset = "0x18")]
	private ATGTextJobSystem m_ATGTextJobSystem;

	[Token(Token = "0x600247A")]
	[Address(RVA = "0x313FD80", Offset = "0x313E380", VA = "0x18313FD80")]
	internal void GenerateText(MeshGenerationContext mgc, TextElement textElement)
	{
	}

	[Token(Token = "0x600247B")]
	[Address(RVA = "0x3140110", Offset = "0x313E710", VA = "0x183140110")]
	internal void PrepareShapingBeforeLayout(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x600247C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TextJobSystem()
	{
	}
}
