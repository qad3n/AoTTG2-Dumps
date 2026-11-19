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

[Token(Token = "0x2000008")]
public class CanvasUpdateRegistry
{
	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x0")]
	private static CanvasUpdateRegistry s_Instance;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x10")]
	private bool m_PerformingLayoutUpdate;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x11")]
	private bool m_PerformingGraphicUpdate;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x18")]
	private string[] m_CanvasUpdateProfilerStrings;

	[Token(Token = "0x400001C")]
	private const string m_CullingUpdateProfilerString = "ClipperRegistry.Cull";

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x20")]
	private readonly IndexedSet<ICanvasElement> m_LayoutRebuildQueue;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x28")]
	private readonly IndexedSet<ICanvasElement> m_GraphicRebuildQueue;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Comparison<ICanvasElement> s_SortLayoutFunction;

	[Token(Token = "0x1700000A")]
	public static CanvasUpdateRegistry instance
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x6A5DCE0", Offset = "0x6A5CCE0", VA = "0x6A5DCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6A5DAC0", Offset = "0x6A5CAC0", VA = "0x6A5DAC0")]
	protected CanvasUpdateRegistry()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6A5DDC0", Offset = "0x6A5CDC0", VA = "0x6A5DDC0")]
	private bool ObjectValidForUpdate(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6A5DE90", Offset = "0x6A5CE90", VA = "0x6A5DE90")]
	private void CleanInvalidItems()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6A5E1F0", Offset = "0x6A5D1F0", VA = "0x6A5E1F0")]
	private void PerformUpdate()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6A5EDC0", Offset = "0x6A5DDC0", VA = "0x6A5EDC0")]
	private static int ParentCount(Transform child)
	{
		return default(int);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6A5EE60", Offset = "0x6A5DE60", VA = "0x6A5EE60")]
	private static int SortLayoutList(ICanvasElement x, ICanvasElement y)
	{
		return default(int);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6A5EFD0", Offset = "0x6A5DFD0", VA = "0x6A5EFD0")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6A5F150", Offset = "0x6A5E150", VA = "0x6A5F150")]
	public static bool TryRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6A5F0C0", Offset = "0x6A5E0C0", VA = "0x6A5F0C0")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6A5F240", Offset = "0x6A5E240", VA = "0x6A5F240")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6A5F370", Offset = "0x6A5E370", VA = "0x6A5F370")]
	public static bool TryRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6A5F2B0", Offset = "0x6A5E2B0", VA = "0x6A5F2B0")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6A5F3E0", Offset = "0x6A5E3E0", VA = "0x6A5F3E0")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6A5F730", Offset = "0x6A5E730", VA = "0x6A5F730")]
	public static void DisableCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6A5F470", Offset = "0x6A5E470", VA = "0x6A5F470")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6A5F5D0", Offset = "0x6A5E5D0", VA = "0x6A5F5D0")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6A5F7C0", Offset = "0x6A5E7C0", VA = "0x6A5F7C0")]
	private void InternalDisableCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6A5F920", Offset = "0x6A5E920", VA = "0x6A5F920")]
	private void InternalDisableCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6A5FA80", Offset = "0x6A5EA80", VA = "0x6A5FA80")]
	public static bool IsRebuildingLayout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6A5FAF0", Offset = "0x6A5EAF0", VA = "0x6A5FAF0")]
	public static bool IsRebuildingGraphics()
	{
		return default(bool);
	}
}
