// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Gilzoide.FlexUi;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x200002D")]
public sealed class GisketchUIBinding : MonoBehaviour
{
	[Token(Token = "0x40000E9")]
	private const string ProfileHoverBioNodeId = "public-profile-hover-bio";

	[Token(Token = "0x40000EA")]
	private const float ProfileHoverBioLineHeight = 24f;

	[Token(Token = "0x40000EB")]
	private const int ProfileHoverBioMaxLines = 5;

	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIBindingDefinition _definition;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchMotionDefinition _enter;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchMotionDefinition _exit;

	[Token(Token = "0x40000EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GisketchUIState _state;

	[Token(Token = "0x40000F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Tween _visibilityTween;

	[Token(Token = "0x40000F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _visibilityInitialized;

	[Token(Token = "0x40000F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool _targetVisible;

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x18BDA90", Offset = "0x18BC090", VA = "0x1818BDA90")]
	public void Setup(GisketchUIBindingDefinition definition, GisketchUIState state, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x18BBF90", Offset = "0x18BA590", VA = "0x1818BBF90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x18BC030", Offset = "0x18BA630", VA = "0x1818BC030")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x18BD120", Offset = "0x18BB720", VA = "0x1818BD120")]
	public void Refresh()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x18BCD30", Offset = "0x18BB330", VA = "0x1818BCD30")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x1887A10", Offset = "0x1886010", VA = "0x181887A10")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x18BCBB0", Offset = "0x18BB1B0", VA = "0x1818BCBB0")]
	private void RefreshVisibilityLayout()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x18BC7F0", Offset = "0x18BADF0", VA = "0x1818BC7F0")]
	private static void RefreshDescendantButtonWidths(GameObject root)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x18BBDD0", Offset = "0x18BA3D0", VA = "0x1818BBDD0")]
	private static string CurrentValue(AottgSliderControl slider, AottgChoiceControl choice, TMP_InputField input, Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x18BC1B0", Offset = "0x18BA7B0", VA = "0x1818BC1B0")]
	private static void RefreshButtonWidth(GameObject root)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x18BBBC0", Offset = "0x18BA1C0", VA = "0x1818BBBC0")]
	private static bool ApplyWidth(LayoutElement rootLayout, FlexLayout flex, float preferredWidth, float minWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x18BC890", Offset = "0x18BAE90", VA = "0x1818BC890")]
	private void RefreshProfileHoverBioHeight(TextMeshProUGUI text)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchUIBinding()
	{
	}
}
