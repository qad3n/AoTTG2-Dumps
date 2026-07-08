using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C3")]
public static class GisketchSearchSpotlight
{
	[Token(Token = "0x40003C2")]
	private const float Padding = 10f;

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x3A2BF20", Offset = "0x3A2BF20", VA = "0x3A2BF20")]
	public static void Play(GameObject target)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x3A2CC90", Offset = "0x3A2CC90", VA = "0x3A2CC90")]
	private static Rect TargetRect(RectTransform root, RectTransform target)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x3A2CD10", Offset = "0x3A2CD10", VA = "0x3A2CD10")]
	private static void AddDimPanels(Transform parent, Rect root, Rect cutout)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x3A2CE40", Offset = "0x3A2CE40", VA = "0x3A2CE40")]
	private static void AddPanel(Transform parent, Color color, Rect rect)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x3A2CF40", Offset = "0x3A2CF40", VA = "0x3A2CF40")]
	private static RectTransform NewRect(Transform parent, string name, Rect rect)
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x3A2CB90", Offset = "0x3A2CB90", VA = "0x3A2CB90")]
	private static void Stretch(RectTransform rect)
	{
	}
}
