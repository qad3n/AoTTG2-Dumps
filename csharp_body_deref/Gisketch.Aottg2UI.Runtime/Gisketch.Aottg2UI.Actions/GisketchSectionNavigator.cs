// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSectionNavigator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000EF")]
public sealed class GisketchSectionNavigator : MonoBehaviour
{
	[Token(Token = "0x40004B9")]
	private const float ScrollSeconds = 0.22f;

	[Token(Token = "0x40004BA")]
	private const float SpyMargin = 24f;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> PendingActiveSections;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x20")]
	private string[] _sectionIds;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x28")]
	private string _prefix;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x30")]
	private bool _separate;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x38")]
	private ScrollRect _scroll;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform[] _sections;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x48")]
	private GisketchBrushButtonFeedback[] _buttons;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x50")]
	private Tween _scrollTween;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x58")]
	private int _activeIndex;

	[Token(Token = "0x170000BC")]
	internal string ActiveSectionId
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x190E090", Offset = "0x190C690", VA = "0x18190E090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x190DD70", Offset = "0x190C370", VA = "0x18190DD70")]
	public void Setup(string[] sectionIds, string mode, string prefix)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x190D770", Offset = "0x190BD70", VA = "0x18190D770")]
	public static void Select(GameObject source, string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x190BD10", Offset = "0x190A310", VA = "0x18190BD10")]
	public static void CaptureActiveSections(GameObject root)
	{
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x190D920", Offset = "0x190BF20", VA = "0x18190D920")]
	public void Select(string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x190DE40", Offset = "0x190C440", VA = "0x18190DE40")]
	private void Start()
	{
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x190C8B0", Offset = "0x190AEB0", VA = "0x18190C8B0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x190C9A0", Offset = "0x190AFA0", VA = "0x18190C9A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x190CAB0", Offset = "0x190B0B0", VA = "0x18190CAB0")]
	private void Resolve()
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x190C760", Offset = "0x190AD60", VA = "0x18190C760")]
	private bool IsResolved()
	{
		return default(bool);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x190DB20", Offset = "0x190C120", VA = "0x18190DB20")]
	private void SetActive(int index, bool animate)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x190C9C0", Offset = "0x190AFC0", VA = "0x18190C9C0")]
	private void RefreshSeparateLayout()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x190CE90", Offset = "0x190B490", VA = "0x18190CE90")]
	private void ScrollTo(RectTransform target, bool instant)
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x190D3C0", Offset = "0x190B9C0", VA = "0x18190D3C0")]
	private int SectionAtViewportTop()
	{
		return default(int);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x190C900", Offset = "0x190AF00", VA = "0x18190C900")]
	private float MaxScrollY()
	{
		return default(float);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x190C6C0", Offset = "0x190ACC0", VA = "0x18190C6C0")]
	private int IndexOf(string sectionId)
	{
		return default(int);
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x190BF10", Offset = "0x190A510", VA = "0x18190BF10")]
	private string ConsumePendingActiveSection()
	{
		return null;
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x190D720", Offset = "0x190BD20", VA = "0x18190D720")]
	private string SectionName(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x190C010", Offset = "0x190A610", VA = "0x18190C010")]
	private void EnsureSectionContent(string sectionId)
	{
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x190BAE0", Offset = "0x190A0E0", VA = "0x18190BAE0")]
	private static void AnimateSection(RectTransform section)
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x190C480", Offset = "0x190AA80", VA = "0x18190C480")]
	private static GisketchSectionNavigator FindNavigator(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x190C5A0", Offset = "0x190ABA0", VA = "0x18190C5A0")]
	private static IGisketchSectionContentProvider FindSectionContentProvider(Transform root, string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000744")]
	private static T ComponentInNamedChild<T>(Transform root, string name) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x190C230", Offset = "0x190A830", VA = "0x18190C230")]
	private static Transform FindChild(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x190E080", Offset = "0x190C680", VA = "0x18190E080")]
	public GisketchSectionNavigator()
	{
	}
}
