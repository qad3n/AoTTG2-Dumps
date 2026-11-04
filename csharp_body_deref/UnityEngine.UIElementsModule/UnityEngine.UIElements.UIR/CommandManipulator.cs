// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandManipulator
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x317B5E0", Offset = "0x3179BE0", VA = "0x18317B5E0")]
	public static void ReplaceHeadCommands(RenderTreeManager renderTreeManager, RenderData renderData, EntryProcessor processor)
	{
	}

	[Token(Token = "0x600290B")]
	[Address(RVA = "0x317B860", Offset = "0x3179E60", VA = "0x18317B860")]
	public static void ReplaceTailCommands(RenderTreeManager renderTreeManager, RenderData renderData, EntryProcessor processor)
	{
	}

	[Token(Token = "0x600290C")]
	[Address(RVA = "0x317ADE0", Offset = "0x31793E0", VA = "0x18317ADE0")]
	private static RenderChainCommand FindPrevCommand(RenderData candidate, bool searchFromHead)
	{
		return null;
	}

	[Token(Token = "0x600290D")]
	[Address(RVA = "0x317ACA0", Offset = "0x31792A0", VA = "0x18317ACA0")]
	private static void FindHeadCommandInsertionPoint(RenderData renderData, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x600290E")]
	[Address(RVA = "0x317AE70", Offset = "0x3179470", VA = "0x18317AE70")]
	private static void FindTailCommandInsertionPoint(RenderData renderData, out RenderChainCommand prev, out RenderChainCommand next)
	{
	}

	[Token(Token = "0x600290F")]
	[Address(RVA = "0x317B0D0", Offset = "0x31796D0", VA = "0x18317B0D0")]
	private static void RemoveChain(RenderTree renderTree, RenderChainCommand first, RenderChainCommand last)
	{
	}

	[Token(Token = "0x6002910")]
	[Address(RVA = "0x317BB00", Offset = "0x317A100", VA = "0x18317BB00")]
	public static void ResetCommands(RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002911")]
	[Address(RVA = "0x317AF90", Offset = "0x3179590", VA = "0x18317AF90")]
	private static void InjectCommandInBetween(RenderChainCommand cmd, bool isHeadCommand, RenderChainCommand prev, RenderChainCommand next)
	{
	}

	[Token(Token = "0x6002912")]
	[Address(RVA = "0x3179ED0", Offset = "0x31784D0", VA = "0x183179ED0")]
	public static void DisableElementRendering(RenderTreeManager renderTreeManager, VisualElement ve, bool renderingDisabled)
	{
	}

	[Token(Token = "0x6002913")]
	[Address(RVA = "0x317B1E0", Offset = "0x31797E0", VA = "0x18317B1E0")]
	private static void RemoveSingleCommand(RenderTreeManager renderTreeManager, RenderData renderData, RenderChainCommand cmd)
	{
	}
}
