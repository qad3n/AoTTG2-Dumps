// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200052D")]
internal abstract class HierarchyTraversal
{
	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x4FBC6C0", Offset = "0x4FBC6C0", VA = "0x4FBC6C0", Slot = "4")]
	public virtual void Traverse(VisualElement element)
	{
	}

	[Token(Token = "0x6001F6C")]
	public abstract void TraverseRecursive(VisualElement element, int depth);

	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x4FBC6E0", Offset = "0x4FBC6E0", VA = "0x4FBC6E0")]
	protected void Recurse(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x4FBC7C0", Offset = "0x4FBC7C0", VA = "0x4FBC7C0")]
	protected HierarchyTraversal()
	{
	}
}
