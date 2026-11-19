// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000576")]
internal static class CommandManipulator
{
	[Token(Token = "0x600290A")]
	[Address(RVA = "0x6B7BE10", Offset = "0x6B7AE10", VA = "0x6B7BE10")]
	public static void ReplaceHeadCommands(RenderTreeManager renderTreeManager, RenderData renderData, EntryProcessor processor)
	{
	}

	[Token(Token = "0x600290B")]
	[Address(RVA = "0x6B7C1D0", Offset = "0x6B7B1D0", VA = "0x6B7C1D0")]
	public static void ReplaceTailCommands(RenderTreeManager renderTreeManager, RenderData renderData, EntryProcessor processor)
	{
	}

	[Token(Token = "0x600290C")]
	[Address(RVA = "0x6B7C480", Offset = "0x6B7B480", VA = "0x6B7C480")]
	private static RenderChainCommand FindPrevCommand(RenderData candidate, bool searchFromHead)
	{
		return null;
	}

	[Token(Token = "0x600290D")]
	[Address(RVA = "0x6B7C0D0", Offset = "0x6B7B0D0", VA = "0x6B7C0D0")]
	private static void FindHeadCommandInsertionPoint(RenderData renderData, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x600290E")]
	[Address(RVA = "0x6B7C380", Offset = "0x6B7B380", VA = "0x6B7C380")]
	private static void FindTailCommandInsertionPoint(RenderData renderData, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x600290F")]
	[Address(RVA = "0x6B7BFC0", Offset = "0x6B7AFC0", VA = "0x6B7BFC0")]
	private static void RemoveChain(RenderTree renderTree, RenderChainCommand first, RenderChainCommand last)
	{
	}

	[Token(Token = "0x6002910")]
	[Address(RVA = "0x6B7C500", Offset = "0x6B7B500", VA = "0x6B7C500")]
	public static void ResetCommands(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002911")]
	[Address(RVA = "0x6B7C8C0", Offset = "0x6B7B8C0", VA = "0x6B7C8C0")]
	private static void InjectCommandInBetween(RenderChainCommand cmd, bool isHeadCommand, RenderChainCommand prev, RenderChainCommand next)
	{
	}

	[Token(Token = "0x6002912")]
	[Address(RVA = "0x6B7C9F0", Offset = "0x6B7B9F0", VA = "0x6B7C9F0")]
	public static void DisableElementRendering(RenderTreeManager renderTreeManager, VisualElement ve, bool renderingDisabled)
	{
	}

	[Token(Token = "0x6002913")]
	[Address(RVA = "0x6B7CCA0", Offset = "0x6B7BCA0", VA = "0x6B7CCA0")]
	private static void RemoveSingleCommand(RenderTreeManager renderTreeManager, RenderData renderData, RenderChainCommand cmd)
	{
	}
}
