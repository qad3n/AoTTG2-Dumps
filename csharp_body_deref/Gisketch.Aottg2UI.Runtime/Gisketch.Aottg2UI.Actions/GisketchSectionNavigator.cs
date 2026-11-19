// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000F5")]
public sealed class GisketchSectionNavigator : MonoBehaviour
{
	[Token(Token = "0x40004E0")]
	private const float ScrollSeconds = 0.22f;

	[Token(Token = "0x40004E1")]
	private const float SpyMargin = 24f;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> PendingActiveSections;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x20")]
	private string[] _sectionIds;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x28")]
	private string _prefix;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x30")]
	private bool _separate;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x38")]
	private ScrollRect _scroll;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform[] _sections;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x48")]
	private GisketchBrushButtonFeedback[] _buttons;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x50")]
	private Tween _scrollTween;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x58")]
	private int _activeIndex;

	[Token(Token = "0x170000BC")]
	internal string ActiveSectionId
	{
		[Token(Token = "0x600077C")]
		[Address(RVA = "0x52A6F70", Offset = "0x52A5F70", VA = "0x52A6F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x52A6FC0", Offset = "0x52A5FC0", VA = "0x52A6FC0")]
	public void Setup(string[] sectionIds, string mode, string prefix)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x52A70B0", Offset = "0x52A60B0", VA = "0x52A70B0")]
	public static void Select(GameObject source, string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x52A73D0", Offset = "0x52A63D0", VA = "0x52A73D0")]
	public static void CaptureActiveSections(GameObject root)
	{
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x52A7280", Offset = "0x52A6280", VA = "0x52A7280")]
	public void Select(string sectionId, bool instant = false)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x52A8250", Offset = "0x52A7250", VA = "0x52A8250")]
	private void Start()
	{
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x52A8400", Offset = "0x52A7400", VA = "0x52A8400")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x52A8750", Offset = "0x52A7750", VA = "0x52A8750")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x52A7770", Offset = "0x52A6770", VA = "0x52A7770")]
	private void Resolve()
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x52A8770", Offset = "0x52A7770", VA = "0x52A8770")]
	private bool IsResolved()
	{
		return default(bool);
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x52A7A90", Offset = "0x52A6A90", VA = "0x52A7A90")]
	private void SetActive(int index, bool animate)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x52A8170", Offset = "0x52A7170", VA = "0x52A8170")]
	private void RefreshSeparateLayout()
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x52A7D00", Offset = "0x52A6D00", VA = "0x52A7D00")]
	private void ScrollTo(RectTransform target, bool instant)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x52A8430", Offset = "0x52A7430", VA = "0x52A8430")]
	private int SectionAtViewportTop()
	{
		return default(int);
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x52A8B60", Offset = "0x52A7B60", VA = "0x52A8B60")]
	private float MaxScrollY()
	{
		return default(float);
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x52A7A20", Offset = "0x52A6A20", VA = "0x52A7A20")]
	private int IndexOf(string sectionId)
	{
		return default(int);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x52A8310", Offset = "0x52A7310", VA = "0x52A8310")]
	private string ConsumePendingActiveSection()
	{
		return null;
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x52A88C0", Offset = "0x52A78C0", VA = "0x52A88C0")]
	private string SectionName(string sectionId)
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x52A7640", Offset = "0x52A6640", VA = "0x52A7640")]
	private void EnsureSectionContent(string sectionId)
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x52A8910", Offset = "0x52A7910", VA = "0x52A8910")]
	private static void AnimateSection(RectTransform section)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x52A7160", Offset = "0x52A6160", VA = "0x52A7160")]
	private static GisketchSectionNavigator FindNavigator(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x52A8BF0", Offset = "0x52A7BF0", VA = "0x52A8BF0")]
	private static IGisketchSectionContentProvider FindSectionContentProvider(Transform root, string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000792")]
	private static T ComponentInNamedChild<T>(Transform root, string name) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x52A8D90", Offset = "0x52A7D90", VA = "0x52A8D90")]
	private static Transform FindChild(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x52A9130", Offset = "0x52A8130", VA = "0x52A9130")]
	public GisketchSectionNavigator()
	{
	}
}
