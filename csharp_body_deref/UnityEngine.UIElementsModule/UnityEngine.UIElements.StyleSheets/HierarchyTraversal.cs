using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200052D")]
internal abstract class HierarchyTraversal
{
	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x4C94D90", Offset = "0x4C94D90", VA = "0x4C94D90", Slot = "4")]
	public virtual void Traverse(VisualElement element)
	{
	}

	[Token(Token = "0x6001F6C")]
	public abstract void TraverseRecursive(VisualElement element, int depth);

	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x4C94DB0", Offset = "0x4C94DB0", VA = "0x4C94DB0")]
	protected void Recurse(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x4C94E90", Offset = "0x4C94E90", VA = "0x4C94E90")]
	protected HierarchyTraversal()
	{
	}
}
