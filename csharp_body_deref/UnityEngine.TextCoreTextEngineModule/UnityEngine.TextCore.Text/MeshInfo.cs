// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.MeshInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal struct MeshInfo
{
	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x0")]
	public int vertexCount;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x8")]
	public TextCoreVertex[] vertexData;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x10")]
	public Material material;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.Ignore]
	public int vertexBufferSize;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.Ignore]
	public bool applySDF;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal GlyphRenderMode glyphRenderMode;

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6A100F0", Offset = "0x6A0F0F0", VA = "0x6A100F0")]
	public MeshInfo(int size, bool isIMGUI)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6A101B0", Offset = "0x6A0F1B0", VA = "0x6A101B0")]
	internal void ResizeMeshInfo(int size, bool isIMGUI)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6A10210", Offset = "0x6A0F210", VA = "0x6A10210")]
	internal void Clear(bool uploadChanges)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6A10250", Offset = "0x6A0F250", VA = "0x6A10250")]
	internal void ClearUnusedVertices()
	{
	}
}
