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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x32D36B0", Offset = "0x32D1CB0", VA = "0x1832D36B0")]
	private void Initialize(RectTransform controller)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x32D3520", Offset = "0x32D1B20", VA = "0x1832D3520")]
	private void Clear()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x32D4B90", Offset = "0x32D3190", VA = "0x1832D4B90")]
	static LayoutRebuilder()
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x32D4480", Offset = "0x32D2A80", VA = "0x1832D4480")]
	private static void ReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x32D3700", Offset = "0x32D1D00", VA = "0x1832D3700", Slot = "8")]
	public bool IsDestroyed()
	{
		return default(bool);
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x32D4820", Offset = "0x32D2E20", VA = "0x1832D4820")]
	private static void StripDisabledBehavioursFromList(List<Component> components)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x32D35B0", Offset = "0x32D1BB0", VA = "0x1832D35B0")]
	public static void ForceRebuildLayoutImmediate(RectTransform layoutRoot)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x32D44D0", Offset = "0x32D2AD0", VA = "0x1832D44D0", Slot = "4")]
	public void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x32D40E0", Offset = "0x32D26E0", VA = "0x1832D40E0")]
	private void PerformLayoutControl(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x32D3E60", Offset = "0x32D2460", VA = "0x1832D3E60")]
	private void PerformLayoutCalculation(RectTransform rect, UnityAction<Component> action)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x32D37D0", Offset = "0x32D1DD0", VA = "0x1832D37D0")]
	public static void MarkLayoutForRebuild(RectTransform rect)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x32D49A0", Offset = "0x32D2FA0", VA = "0x1832D49A0")]
	private static bool ValidController(RectTransform layoutRoot, List<Component> comps)
	{
		return default(bool);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x32D3CF0", Offset = "0x32D22F0", VA = "0x1832D3CF0")]
	private static void MarkLayoutRootForRebuild(RectTransform controller)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x32D3750", Offset = "0x32D1D50", VA = "0x1832D3750", Slot = "6")]
	public void LayoutComplete()
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x32D3550", Offset = "0x32D1B50", VA = "0x1832D3550", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x32D4940", Offset = "0x32D2F40", VA = "0x1832D4940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public LayoutRebuilder()
	{
	}
}
