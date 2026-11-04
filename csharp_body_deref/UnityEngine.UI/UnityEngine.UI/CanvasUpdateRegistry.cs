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
		[Address(RVA = "0x3063640", Offset = "0x3061C40", VA = "0x183063640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3063430", Offset = "0x3061A30", VA = "0x183063430")]
	protected CanvasUpdateRegistry()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3062700", Offset = "0x3060D00", VA = "0x183062700")]
	private bool ObjectValidForUpdate(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3061CD0", Offset = "0x30602D0", VA = "0x183061CD0")]
	private void CleanInvalidItems()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x30628A0", Offset = "0x3060EA0", VA = "0x1830628A0")]
	private void PerformUpdate()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x30627D0", Offset = "0x3060DD0", VA = "0x1830627D0")]
	private static int ParentCount(Transform child)
	{
		return default(int);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3062FF0", Offset = "0x30615F0", VA = "0x183062FF0")]
	private static int SortLayoutList(ICanvasElement x, ICanvasElement y)
	{
		return default(int);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3062F90", Offset = "0x3061590", VA = "0x183062F90")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x3063100", Offset = "0x3061700", VA = "0x183063100")]
	public static bool TryRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x30623B0", Offset = "0x30609B0", VA = "0x1830623B0")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3062F30", Offset = "0x3061530", VA = "0x183062F30")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x30630A0", Offset = "0x30616A0", VA = "0x1830630A0")]
	public static bool TryRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x30622F0", Offset = "0x30608F0", VA = "0x1830622F0")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3063160", Offset = "0x3061760", VA = "0x183063160")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3061E90", Offset = "0x3060490", VA = "0x183061E90")]
	public static void DisableCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3062550", Offset = "0x3060B50", VA = "0x183062550")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3062440", Offset = "0x3060A40", VA = "0x183062440")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x30621E0", Offset = "0x30607E0", VA = "0x1830621E0")]
	private void InternalDisableCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x30620D0", Offset = "0x30606D0", VA = "0x1830620D0")]
	private void InternalDisableCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x30626B0", Offset = "0x3060CB0", VA = "0x1830626B0")]
	public static bool IsRebuildingLayout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3062660", Offset = "0x3060C60", VA = "0x183062660")]
	public static bool IsRebuildingGraphics()
	{
		return default(bool);
	}
}
