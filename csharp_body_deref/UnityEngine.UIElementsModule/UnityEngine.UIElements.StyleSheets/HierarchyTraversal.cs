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
	[Address(RVA = "0x6BC5B00", Offset = "0x6BC4B00", VA = "0x6BC5B00", Slot = "4")]
	public virtual void Traverse(VisualElement element)
	{
	}

	[Token(Token = "0x6002CBE")]
	public abstract void TraverseRecursive(VisualElement element, int depth);

	[Token(Token = "0x6002CBF")]
	[Address(RVA = "0x6BC5B20", Offset = "0x6BC4B20", VA = "0x6BC5B20")]
	protected void Recurse(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6002CC0")]
	[Address(RVA = "0x6BC5BF0", Offset = "0x6BC4BF0", VA = "0x6BC5BF0")]
	protected HierarchyTraversal()
	{
	}
}
