using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000494")]
internal static class CommandManipulator
{
	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x4C59930", Offset = "0x4C59930", VA = "0x4C59930")]
	private static bool IsParentOrAncestorOf(this VisualElement ve, VisualElement child)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C71")]
	[Address(RVA = "0x4C599C0", Offset = "0x4C599C0", VA = "0x4C599C0")]
	public static void ReplaceCommands(RenderChain renderChain, VisualElement ve, EntryProcessor processor)
	{
	}

	[Token(Token = "0x6001C72")]
	[Address(RVA = "0x4C5A240", Offset = "0x4C5A240", VA = "0x4C5A240")]
	private static void FindHeadCommandInsertionPoint(VisualElement ve, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001C73")]
	[Address(RVA = "0x4C5A520", Offset = "0x4C5A520", VA = "0x4C5A520")]
	private static void FindTailCommandInsertionPoint(VisualElement ve, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x4C5A140", Offset = "0x4C5A140", VA = "0x4C5A140")]
	private static void RemoveChain(RenderChain renderChain, RenderChainCommand first, RenderChainCommand last)
	{
	}

	[Token(Token = "0x6001C75")]
	[Address(RVA = "0x4C59D70", Offset = "0x4C59D70", VA = "0x4C59D70")]
	public static void ResetCommands(RenderChain renderChain, VisualElement ve)
	{
	}

	[Token(Token = "0x6001C76")]
	[Address(RVA = "0x4C5A790", Offset = "0x4C5A790", VA = "0x4C5A790")]
	private static void InjectCommandInBetween(RenderChain renderChain, RenderChainCommand cmd, RenderChainCommand prev, RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001C77")]
	[Address(RVA = "0x4C5A8E0", Offset = "0x4C5A8E0", VA = "0x4C5A8E0")]
	public static void DisableElementRendering(RenderChain renderChain, VisualElement ve, bool renderingDisabled)
	{
	}

	[Token(Token = "0x6001C78")]
	[Address(RVA = "0x4C5AB90", Offset = "0x4C5AB90", VA = "0x4C5AB90")]
	private static void RemoveSingleCommand(RenderChain renderChain, VisualElement ve, RenderChainCommand cmd)
	{
	}
}
