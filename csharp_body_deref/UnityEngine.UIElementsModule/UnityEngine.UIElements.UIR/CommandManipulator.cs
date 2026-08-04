// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000494")]
internal static class CommandManipulator
{
	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x4F81260", Offset = "0x4F81260", VA = "0x4F81260")]
	private static bool IsParentOrAncestorOf(this VisualElement ve, VisualElement child)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C71")]
	[Address(RVA = "0x4F812F0", Offset = "0x4F812F0", VA = "0x4F812F0")]
	public static void ReplaceCommands(RenderChain renderChain, VisualElement ve, EntryProcessor processor)
	{
	}

	[Token(Token = "0x6001C72")]
	[Address(RVA = "0x4F81B70", Offset = "0x4F81B70", VA = "0x4F81B70")]
	private static void FindHeadCommandInsertionPoint(VisualElement ve, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001C73")]
	[Address(RVA = "0x4F81E50", Offset = "0x4F81E50", VA = "0x4F81E50")]
	private static void FindTailCommandInsertionPoint(VisualElement ve, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x4F81A70", Offset = "0x4F81A70", VA = "0x4F81A70")]
	private static void RemoveChain(RenderChain renderChain, RenderChainCommand first, RenderChainCommand last)
	{
	}

	[Token(Token = "0x6001C75")]
	[Address(RVA = "0x4F816A0", Offset = "0x4F816A0", VA = "0x4F816A0")]
	public static void ResetCommands(RenderChain renderChain, VisualElement ve)
	{
	}

	[Token(Token = "0x6001C76")]
	[Address(RVA = "0x4F820C0", Offset = "0x4F820C0", VA = "0x4F820C0")]
	private static void InjectCommandInBetween(RenderChain renderChain, RenderChainCommand cmd, RenderChainCommand prev, RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001C77")]
	[Address(RVA = "0x4F82210", Offset = "0x4F82210", VA = "0x4F82210")]
	public static void DisableElementRendering(RenderChain renderChain, VisualElement ve, bool renderingDisabled)
	{
	}

	[Token(Token = "0x6001C78")]
	[Address(RVA = "0x4F824C0", Offset = "0x4F824C0", VA = "0x4F824C0")]
	private static void RemoveSingleCommand(RenderChain renderChain, VisualElement ve, RenderChainCommand cmd)
	{
	}
}
