using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C5")]
public sealed class GisketchSectionNavigator : MonoBehaviour
{
	[Token(Token = "0x40003C5")]
	private const float ScrollSeconds = 0.22f;

	[Token(Token = "0x40003C6")]
	private const float SpyMargin = 24f;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x20")]
	private string[] _sectionIds;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x28")]
	private string _prefix;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x30")]
	private bool _separate;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x38")]
	private ScrollRect _scroll;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform[] _sections;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x48")]
	private GisketchBrushButtonFeedback[] _buttons;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x50")]
	private Tween _scrollTween;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x58")]
	private int _activeIndex;

	[Token(Token = "0x17000084")]
	internal string ActiveSectionId
	{
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x3A2D1E0", Offset = "0x3A2D1E0", VA = "0x3A2D1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x3A2D230", Offset = "0x3A2D230", VA = "0x3A2D230")]
	public void Setup(string[] sectionIds, string mode, string prefix)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x3A2BEA0", Offset = "0x3A2BEA0", VA = "0x3A2BEA0")]
	public static void Select(GameObject source, string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x3A2D440", Offset = "0x3A2D440", VA = "0x3A2D440")]
	public void Select(string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x3A2E070", Offset = "0x3A2E070", VA = "0x3A2E070")]
	private void Start()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x3A2E090", Offset = "0x3A2E090", VA = "0x3A2E090")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x3A2E340", Offset = "0x3A2E340", VA = "0x3A2E340")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x3A2D580", Offset = "0x3A2D580", VA = "0x3A2D580")]
	private void Resolve()
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x3A2E360", Offset = "0x3A2E360", VA = "0x3A2E360")]
	private bool IsResolved()
	{
		return default(bool);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x3A2D870", Offset = "0x3A2D870", VA = "0x3A2D870")]
	private void SetActive(int index, bool animate)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x3A2DF10", Offset = "0x3A2DF10", VA = "0x3A2DF10")]
	private void RefreshSeparateLayout()
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x3A2DAB0", Offset = "0x3A2DAB0", VA = "0x3A2DAB0")]
	private void ScrollTo(RectTransform target, bool instant)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x3A2E0C0", Offset = "0x3A2E0C0", VA = "0x3A2E0C0")]
	private int SectionAtViewportTop()
	{
		return default(int);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x3A2E750", Offset = "0x3A2E750", VA = "0x3A2E750")]
	private float MaxScrollY()
	{
		return default(float);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x3A2D800", Offset = "0x3A2D800", VA = "0x3A2D800")]
	private int IndexOf(string sectionId)
	{
		return default(int);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x3A2E4B0", Offset = "0x3A2E4B0", VA = "0x3A2E4B0")]
	private string SectionName(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x3A2E500", Offset = "0x3A2E500", VA = "0x3A2E500")]
	private static void AnimateSection(RectTransform section)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x3A2D320", Offset = "0x3A2D320", VA = "0x3A2D320")]
	private static GisketchSectionNavigator FindNavigator(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x600059B")]
	private static T ComponentInNamedChild<T>(Transform root, string name) where T : Component
	{
		return null;
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x3A2E7C0", Offset = "0x3A2E7C0", VA = "0x3A2E7C0")]
	private static Transform FindChild(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x3A2EBD0", Offset = "0x3A2EBD0", VA = "0x3A2EBD0")]
	public GisketchSectionNavigator()
	{
	}
}
