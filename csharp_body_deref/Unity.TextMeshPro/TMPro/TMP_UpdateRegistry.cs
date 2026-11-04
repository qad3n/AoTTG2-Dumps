// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_UpdateRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x20000A2")]
public class TMP_UpdateRegistry
{
	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_UpdateRegistry s_Instance;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<ICanvasElement> m_LayoutRebuildQueue;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<int> m_LayoutQueueLookup;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ICanvasElement> m_GraphicRebuildQueue;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<int> m_GraphicQueueLookup;

	[Token(Token = "0x17000188")]
	public static TMP_UpdateRegistry instance
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x2D68F50", Offset = "0x2D67550", VA = "0x182D68F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x2D68DF0", Offset = "0x2D673F0", VA = "0x182D68DF0")]
	protected TMP_UpdateRegistry()
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x2D68AC0", Offset = "0x2D670C0", VA = "0x182D68AC0")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x2D68340", Offset = "0x2D66940", VA = "0x182D68340")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x2D68990", Offset = "0x2D66F90", VA = "0x182D68990")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x2D68200", Offset = "0x2D66800", VA = "0x182D68200")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x2D68680", Offset = "0x2D66C80", VA = "0x182D68680")]
	private void PerformUpdateForCanvasRendererObjects()
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x2D68930", Offset = "0x2D66F30", VA = "0x182D68930")]
	private void PerformUpdateForMeshRendererObjects()
	{
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x2D68BF0", Offset = "0x2D671F0", VA = "0x182D68BF0")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x2D68580", Offset = "0x2D66B80", VA = "0x182D68580")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x2D68480", Offset = "0x2D66A80", VA = "0x182D68480")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}
}
