using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000090")]
public class TMP_UpdateRegistry
{
	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_UpdateRegistry s_Instance;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<ICanvasElement> m_LayoutRebuildQueue;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<int> m_LayoutQueueLookup;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ICanvasElement> m_GraphicRebuildQueue;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<int> m_GraphicQueueLookup;

	[Token(Token = "0x17000151")]
	public static TMP_UpdateRegistry instance
	{
		[Token(Token = "0x6000555")]
		[Address(RVA = "0x49650D0", Offset = "0x49650D0", VA = "0x49650D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x4965160", Offset = "0x4965160", VA = "0x4965160")]
	protected TMP_UpdateRegistry()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x49652D0", Offset = "0x49652D0", VA = "0x49652D0")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x4965360", Offset = "0x4965360", VA = "0x4965360")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x49654A0", Offset = "0x49654A0", VA = "0x49654A0")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x4965530", Offset = "0x4965530", VA = "0x4965530")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4965670", Offset = "0x4965670", VA = "0x4965670")]
	private void PerformUpdateForCanvasRendererObjects()
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x4965A10", Offset = "0x4965A10", VA = "0x4965A10")]
	private void PerformUpdateForMeshRendererObjects()
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x4965A70", Offset = "0x4965A70", VA = "0x4965A70")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x4965B90", Offset = "0x4965B90", VA = "0x4965B90")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x4965CE0", Offset = "0x4965CE0", VA = "0x4965CE0")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}
}
