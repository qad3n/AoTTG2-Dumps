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
		[Address(RVA = "0x675E4C0", Offset = "0x675D4C0", VA = "0x675E4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x675E550", Offset = "0x675D550", VA = "0x675E550")]
	protected TMP_UpdateRegistry()
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x675E6C0", Offset = "0x675D6C0", VA = "0x675E6C0")]
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x675E760", Offset = "0x675D760", VA = "0x675E760")]
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x675E8B0", Offset = "0x675D8B0", VA = "0x675E8B0")]
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x675E950", Offset = "0x675D950", VA = "0x675E950")]
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x675EAA0", Offset = "0x675DAA0", VA = "0x675EAA0")]
	private void PerformUpdateForCanvasRendererObjects()
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x675EE20", Offset = "0x675DE20", VA = "0x675EE20")]
	private void PerformUpdateForMeshRendererObjects()
	{
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x675EE80", Offset = "0x675DE80", VA = "0x675EE80")]
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x675EFA0", Offset = "0x675DFA0", VA = "0x675EFA0")]
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x675F0F0", Offset = "0x675E0F0", VA = "0x675F0F0")]
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
	{
	}
}
