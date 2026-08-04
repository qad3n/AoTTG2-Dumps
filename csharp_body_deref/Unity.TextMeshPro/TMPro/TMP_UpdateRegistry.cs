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

[Token(Token = "0x20000A6")]
public class TMP_UpdateRegistry
{
	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_UpdateRegistry s_Instance;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<ICanvasElement> m_LayoutRebuildQueue;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<int> m_LayoutQueueLookup;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ICanvasElement> m_GraphicRebuildQueue;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<int> m_GraphicQueueLookup;

	[Token(Token = "0x17000172")]
	public static TMP_UpdateRegistry instance
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x4C9D410", Offset = "0x4C9D410", VA = "0x4C9D410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4C9D4A0", Offset = "0x4C9D4A0", VA = "0x4C9D4A0")]
	protected TMP_UpdateRegistry()
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4C9D610", Offset = "0x4C9D610", VA = "0x4C9D610")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4C9D6A0", Offset = "0x4C9D6A0", VA = "0x4C9D6A0")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4C9D7E0", Offset = "0x4C9D7E0", VA = "0x4C9D7E0")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4C9D870", Offset = "0x4C9D870", VA = "0x4C9D870")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4C9D9B0", Offset = "0x4C9D9B0", VA = "0x4C9D9B0")]
	private void PerformUpdateForCanvasRendererObjects()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4C9DD50", Offset = "0x4C9DD50", VA = "0x4C9DD50")]
	private void PerformUpdateForMeshRendererObjects()
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4C9DDB0", Offset = "0x4C9DDB0", VA = "0x4C9DDB0")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x4C9DED0", Offset = "0x4C9DED0", VA = "0x4C9DED0")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x4C9E020", Offset = "0x4C9E020", VA = "0x4C9E020")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}
}
