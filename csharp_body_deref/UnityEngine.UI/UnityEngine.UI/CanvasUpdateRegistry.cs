using System;
using Il2CppDummyDll;
using UnityEngine.UI.Collections;

namespace UnityEngine.UI;

[Token(Token = "0x200000A")]
public class CanvasUpdateRegistry
{
	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	private static CanvasUpdateRegistry s_Instance;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x10")]
	private bool m_PerformingLayoutUpdate;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x11")]
	private bool m_PerformingGraphicUpdate;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x18")]
	private string[] m_CanvasUpdateProfilerStrings;

	[Token(Token = "0x4000021")]
	private const string m_CullingUpdateProfilerString = "ClipperRegistry.Cull";

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x20")]
	private readonly IndexedSet<ICanvasElement> m_LayoutRebuildQueue;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x28")]
	private readonly IndexedSet<ICanvasElement> m_GraphicRebuildQueue;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Comparison<ICanvasElement> s_SortLayoutFunction;

	[Token(Token = "0x1700000A")]
	public static CanvasUpdateRegistry instance
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4BC9260", Offset = "0x4BC9260", VA = "0x4BC9260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4BC9040", Offset = "0x4BC9040", VA = "0x4BC9040")]
	protected CanvasUpdateRegistry()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4BC9340", Offset = "0x4BC9340", VA = "0x4BC9340")]
	private bool ObjectValidForUpdate(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4BC9410", Offset = "0x4BC9410", VA = "0x4BC9410")]
	private void CleanInvalidItems()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4BC9790", Offset = "0x4BC9790", VA = "0x4BC9790")]
	private void PerformUpdate()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4BCA260", Offset = "0x4BCA260", VA = "0x4BCA260")]
	private static int ParentCount(Transform child)
	{
		return default(int);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4BCA310", Offset = "0x4BCA310", VA = "0x4BCA310")]
	private static int SortLayoutList(ICanvasElement x, ICanvasElement y)
	{
		return default(int);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4BCA480", Offset = "0x4BCA480", VA = "0x4BCA480")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4BCA610", Offset = "0x4BCA610", VA = "0x4BCA610")]
	public static bool TryRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4BCA580", Offset = "0x4BCA580", VA = "0x4BCA580")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4BCA710", Offset = "0x4BCA710", VA = "0x4BCA710")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4BCA840", Offset = "0x4BCA840", VA = "0x4BCA840")]
	public static bool TryRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4BCA780", Offset = "0x4BCA780", VA = "0x4BCA780")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4BCA8B0", Offset = "0x4BCA8B0", VA = "0x4BCA8B0")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4BCAC00", Offset = "0x4BCAC00", VA = "0x4BCAC00")]
	public static void DisableCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4BCA940", Offset = "0x4BCA940", VA = "0x4BCA940")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4BCAAA0", Offset = "0x4BCAAA0", VA = "0x4BCAAA0")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4BCAC90", Offset = "0x4BCAC90", VA = "0x4BCAC90")]
	private void InternalDisableCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4BCADF0", Offset = "0x4BCADF0", VA = "0x4BCADF0")]
	private void InternalDisableCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4BCAF50", Offset = "0x4BCAF50", VA = "0x4BCAF50")]
	public static bool IsRebuildingLayout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4BCAFC0", Offset = "0x4BCAFC0", VA = "0x4BCAFC0")]
	public static bool IsRebuildingGraphics()
	{
		return default(bool);
	}
}
