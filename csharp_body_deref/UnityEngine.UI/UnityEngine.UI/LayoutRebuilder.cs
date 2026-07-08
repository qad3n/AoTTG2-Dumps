using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;
using UnityEngine.Pool;

namespace UnityEngine.UI;

[Token(Token = "0x2000050")]
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

	[Token(Token = "0x170000D4")]
	public Transform transform
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x4DAAF60", Offset = "0x4DAAF60", VA = "0x4DAAF60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4DAACE0", Offset = "0x4DAACE0", VA = "0x4DAACE0")]
	private void Initialize(RectTransform controller)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4DAAD20", Offset = "0x4DAAD20", VA = "0x4DAAD20")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4DAAD40", Offset = "0x4DAAD40", VA = "0x4DAAD40")]
	static LayoutRebuilder()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4DAAF00", Offset = "0x4DAAF00", VA = "0x4DAAF00")]
	private static void ReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x4DAAF70", Offset = "0x4DAAF70", VA = "0x4DAAF70", Slot = "8")]
	public bool IsDestroyed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4DAAFC0", Offset = "0x4DAAFC0", VA = "0x4DAAFC0")]
	private static void StripDisabledBehavioursFromList(List<Component> components)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4DAB110", Offset = "0x4DAB110", VA = "0x4DAB110")]
	public static void ForceRebuildLayoutImmediate(RectTransform layoutRoot)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4DAB220", Offset = "0x4DAB220", VA = "0x4DAB220", Slot = "4")]
	public void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4DAB810", Offset = "0x4DAB810", VA = "0x4DAB810")]
	private void PerformLayoutControl(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4DAB560", Offset = "0x4DAB560", VA = "0x4DAB560")]
	private void PerformLayoutCalculation(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4DA4D20", Offset = "0x4DA4D20", VA = "0x4DA4D20")]
	public static void MarkLayoutForRebuild(RectTransform rect)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4DABC30", Offset = "0x4DABC30", VA = "0x4DABC30")]
	private static bool ValidController(RectTransform layoutRoot, List<Component> comps)
	{
		return default(bool);
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4DABDF0", Offset = "0x4DABDF0", VA = "0x4DABDF0")]
	private static void MarkLayoutRootForRebuild(RectTransform controller)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4DABF60", Offset = "0x4DABF60", VA = "0x4DABF60", Slot = "6")]
	public void LayoutComplete()
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4DAC000", Offset = "0x4DAC000", VA = "0x4DAC000", Slot = "7")]
	public void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4DAC010", Offset = "0x4DAC010", VA = "0x4DAC010", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4DAC020", Offset = "0x4DAC020", VA = "0x4DAC020", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4DAC070", Offset = "0x4DAC070", VA = "0x4DAC070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4DAC0D0", Offset = "0x4DAC0D0", VA = "0x4DAC0D0")]
	public LayoutRebuilder()
	{
	}
}
