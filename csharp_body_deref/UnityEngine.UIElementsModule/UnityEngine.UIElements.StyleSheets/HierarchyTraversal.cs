// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000624")]
internal abstract class HierarchyTraversal
{
	[Token(Token = "0x6002CBD")]
	[Address(RVA = "0x31B8AC0", Offset = "0x31B70C0", VA = "0x1831B8AC0", Slot = "4")]
	public virtual void Traverse(VisualElement element)
	{
	}

	[Token(Token = "0x6002CBE")]
	public abstract void TraverseRecursive(VisualElement element, int depth);

	[Token(Token = "0x6002CBF")]
	[Address(RVA = "0x31B89F0", Offset = "0x31B6FF0", VA = "0x1831B89F0")]
	protected void Recurse(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6002CC0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected HierarchyTraversal()
	{
	}
}
