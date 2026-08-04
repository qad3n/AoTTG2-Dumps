// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CA")]
public sealed class GisketchSectionNavigator : MonoBehaviour
{
	[Token(Token = "0x40003F6")]
	private const float ScrollSeconds = 0.22f;

	[Token(Token = "0x40003F7")]
	private const float SpyMargin = 24f;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x20")]
	private string[] _sectionIds;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x28")]
	private string _prefix;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x30")]
	private bool _separate;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x38")]
	private ScrollRect _scroll;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform[] _sections;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x48")]
	private GisketchBrushButtonFeedback[] _buttons;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x50")]
	private Tween _scrollTween;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x58")]
	private int _activeIndex;

	[Token(Token = "0x17000087")]
	internal string ActiveSectionId
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x3A99D10", Offset = "0x3A99D10", VA = "0x3A99D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x3A99D60", Offset = "0x3A99D60", VA = "0x3A99D60")]
	public void Setup(string[] sectionIds, string mode, string prefix)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x3A989D0", Offset = "0x3A989D0", VA = "0x3A989D0")]
	public static void Select(GameObject source, string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x3A99F70", Offset = "0x3A99F70", VA = "0x3A99F70")]
	public void Select(string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x3A9ABA0", Offset = "0x3A9ABA0", VA = "0x3A9ABA0")]
	private void Start()
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x3A9ABC0", Offset = "0x3A9ABC0", VA = "0x3A9ABC0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x3A9AE70", Offset = "0x3A9AE70", VA = "0x3A9AE70")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x3A9A0B0", Offset = "0x3A9A0B0", VA = "0x3A9A0B0")]
	private void Resolve()
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x3A9AE90", Offset = "0x3A9AE90", VA = "0x3A9AE90")]
	private bool IsResolved()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x3A9A3A0", Offset = "0x3A9A3A0", VA = "0x3A9A3A0")]
	private void SetActive(int index, bool animate)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x3A9AA40", Offset = "0x3A9AA40", VA = "0x3A9AA40")]
	private void RefreshSeparateLayout()
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x3A9A5E0", Offset = "0x3A9A5E0", VA = "0x3A9A5E0")]
	private void ScrollTo(RectTransform target, bool instant)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x3A9ABF0", Offset = "0x3A9ABF0", VA = "0x3A9ABF0")]
	private int SectionAtViewportTop()
	{
		return default(int);
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x3A9B280", Offset = "0x3A9B280", VA = "0x3A9B280")]
	private float MaxScrollY()
	{
		return default(float);
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x3A9A330", Offset = "0x3A9A330", VA = "0x3A9A330")]
	private int IndexOf(string sectionId)
	{
		return default(int);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x3A9AFE0", Offset = "0x3A9AFE0", VA = "0x3A9AFE0")]
	private string SectionName(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x3A9B030", Offset = "0x3A9B030", VA = "0x3A9B030")]
	private static void AnimateSection(RectTransform section)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x3A99E50", Offset = "0x3A99E50", VA = "0x3A99E50")]
	private static GisketchSectionNavigator FindNavigator(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x60005CC")]
	private static T ComponentInNamedChild<T>(Transform root, string name) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x3A9B2F0", Offset = "0x3A9B2F0", VA = "0x3A9B2F0")]
	private static Transform FindChild(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x3A9B700", Offset = "0x3A9B700", VA = "0x3A9B700")]
	public GisketchSectionNavigator()
	{
	}
}
