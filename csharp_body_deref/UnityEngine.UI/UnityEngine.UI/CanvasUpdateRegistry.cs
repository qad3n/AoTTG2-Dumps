// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.CanvasUpdateRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EF0B90", Offset = "0x4EF0B90", VA = "0x4EF0B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4EF0970", Offset = "0x4EF0970", VA = "0x4EF0970")]
	protected CanvasUpdateRegistry()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4EF0C70", Offset = "0x4EF0C70", VA = "0x4EF0C70")]
	private bool ObjectValidForUpdate(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4EF0D40", Offset = "0x4EF0D40", VA = "0x4EF0D40")]
	private void CleanInvalidItems()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4EF10C0", Offset = "0x4EF10C0", VA = "0x4EF10C0")]
	private void PerformUpdate()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4EF1B90", Offset = "0x4EF1B90", VA = "0x4EF1B90")]
	private static int ParentCount(Transform child)
	{
		return default(int);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4EF1C40", Offset = "0x4EF1C40", VA = "0x4EF1C40")]
	private static int SortLayoutList(ICanvasElement x, ICanvasElement y)
	{
		return default(int);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4EF1DB0", Offset = "0x4EF1DB0", VA = "0x4EF1DB0")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4EF1F40", Offset = "0x4EF1F40", VA = "0x4EF1F40")]
	public static bool TryRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4EF1EB0", Offset = "0x4EF1EB0", VA = "0x4EF1EB0")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4EF2040", Offset = "0x4EF2040", VA = "0x4EF2040")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4EF2170", Offset = "0x4EF2170", VA = "0x4EF2170")]
	public static bool TryRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4EF20B0", Offset = "0x4EF20B0", VA = "0x4EF20B0")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4EF21E0", Offset = "0x4EF21E0", VA = "0x4EF21E0")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4EF2530", Offset = "0x4EF2530", VA = "0x4EF2530")]
	public static void DisableCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4EF2270", Offset = "0x4EF2270", VA = "0x4EF2270")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4EF23D0", Offset = "0x4EF23D0", VA = "0x4EF23D0")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4EF25C0", Offset = "0x4EF25C0", VA = "0x4EF25C0")]
	private void InternalDisableCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4EF2720", Offset = "0x4EF2720", VA = "0x4EF2720")]
	private void InternalDisableCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4EF2880", Offset = "0x4EF2880", VA = "0x4EF2880")]
	public static bool IsRebuildingLayout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4EF28F0", Offset = "0x4EF28F0", VA = "0x4EF28F0")]
	public static bool IsRebuildingGraphics()
	{
		return default(bool);
	}
}
