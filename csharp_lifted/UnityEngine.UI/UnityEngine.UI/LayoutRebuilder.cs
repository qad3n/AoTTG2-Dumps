// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.LayoutRebuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;
using UnityEngine.Pool;

namespace UnityEngine.UI;

[Token(Token = "0x200004E")]
public class LayoutRebuilder : ICanvasElement
{
	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x10")]
	private RectTransform m_ToRebuild;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x18")]
	private int m_CachedHashFromTransform;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<LayoutRebuilder> s_Rebuilders;

	[Token(Token = "0x170000D5")]
	public Transform transform
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x6CE2A60", Offset = "0x6CE1A60", VA = "0x6CE2A60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x6CE27E0", Offset = "0x6CE17E0", VA = "0x6CE27E0")]
	private void Initialize(RectTransform controller)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x6CE2820", Offset = "0x6CE1820", VA = "0x6CE2820")]
	private void Clear()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x6CE2840", Offset = "0x6CE1840", VA = "0x6CE2840")]
	static LayoutRebuilder()
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x6CE2A00", Offset = "0x6CE1A00", VA = "0x6CE2A00")]
	private static void ReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x6CE2A70", Offset = "0x6CE1A70", VA = "0x6CE2A70", Slot = "8")]
	public bool IsDestroyed()
	{
		return default(bool);
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x6CE2AC0", Offset = "0x6CE1AC0", VA = "0x6CE2AC0")]
	private static void StripDisabledBehavioursFromList(List<Component> components)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x6CE2C10", Offset = "0x6CE1C10", VA = "0x6CE2C10")]
	public static void ForceRebuildLayoutImmediate(RectTransform layoutRoot)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x6CE2D20", Offset = "0x6CE1D20", VA = "0x6CE2D20", Slot = "4")]
	public void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x6CE3300", Offset = "0x6CE2300", VA = "0x6CE3300")]
	private void PerformLayoutControl(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x6CE3050", Offset = "0x6CE2050", VA = "0x6CE3050")]
	private void PerformLayoutCalculation(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x6CDC690", Offset = "0x6CDB690", VA = "0x6CDC690")]
	public static void MarkLayoutForRebuild(RectTransform rect)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x6CE3710", Offset = "0x6CE2710", VA = "0x6CE3710")]
	private static bool ValidController(RectTransform layoutRoot, List<Component> comps)
	{
		return default(bool);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x6CE38D0", Offset = "0x6CE28D0", VA = "0x6CE38D0")]
	private static void MarkLayoutRootForRebuild(RectTransform controller)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x6CE3A40", Offset = "0x6CE2A40", VA = "0x6CE3A40", Slot = "6")]
	public void LayoutComplete()
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x6CE3AE0", Offset = "0x6CE2AE0", VA = "0x6CE3AE0", Slot = "7")]
	public void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x6CE3AF0", Offset = "0x6CE2AF0", VA = "0x6CE3AF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x6CE3B00", Offset = "0x6CE2B00", VA = "0x6CE3B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x6CE3B50", Offset = "0x6CE2B50", VA = "0x6CE3B50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x6CE3BB0", Offset = "0x6CE2BB0", VA = "0x6CE3BB0")]
	public LayoutRebuilder()
	{
	}
}
