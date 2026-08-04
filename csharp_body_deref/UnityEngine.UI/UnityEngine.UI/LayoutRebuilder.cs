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
		[Address(RVA = "0x50D2890", Offset = "0x50D2890", VA = "0x50D2890", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x50D2610", Offset = "0x50D2610", VA = "0x50D2610")]
	private void Initialize(RectTransform controller)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x50D2650", Offset = "0x50D2650", VA = "0x50D2650")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x50D2670", Offset = "0x50D2670", VA = "0x50D2670")]
	static LayoutRebuilder()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x50D2830", Offset = "0x50D2830", VA = "0x50D2830")]
	private static void ReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x50D28A0", Offset = "0x50D28A0", VA = "0x50D28A0", Slot = "8")]
	public bool IsDestroyed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x50D28F0", Offset = "0x50D28F0", VA = "0x50D28F0")]
	private static void StripDisabledBehavioursFromList(List<Component> components)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x50D2A40", Offset = "0x50D2A40", VA = "0x50D2A40")]
	public static void ForceRebuildLayoutImmediate(RectTransform layoutRoot)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x50D2B50", Offset = "0x50D2B50", VA = "0x50D2B50", Slot = "4")]
	public void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x50D3140", Offset = "0x50D3140", VA = "0x50D3140")]
	private void PerformLayoutControl(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x50D2E90", Offset = "0x50D2E90", VA = "0x50D2E90")]
	private void PerformLayoutCalculation(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x50CC650", Offset = "0x50CC650", VA = "0x50CC650")]
	public static void MarkLayoutForRebuild(RectTransform rect)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x50D3560", Offset = "0x50D3560", VA = "0x50D3560")]
	private static bool ValidController(RectTransform layoutRoot, List<Component> comps)
	{
		return default(bool);
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x50D3720", Offset = "0x50D3720", VA = "0x50D3720")]
	private static void MarkLayoutRootForRebuild(RectTransform controller)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x50D3890", Offset = "0x50D3890", VA = "0x50D3890", Slot = "6")]
	public void LayoutComplete()
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x50D3930", Offset = "0x50D3930", VA = "0x50D3930", Slot = "7")]
	public void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x50D3940", Offset = "0x50D3940", VA = "0x50D3940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x50D3950", Offset = "0x50D3950", VA = "0x50D3950", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x50D39A0", Offset = "0x50D39A0", VA = "0x50D39A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x50D3A00", Offset = "0x50D3A00", VA = "0x50D3A00")]
	public LayoutRebuilder()
	{
	}
}
