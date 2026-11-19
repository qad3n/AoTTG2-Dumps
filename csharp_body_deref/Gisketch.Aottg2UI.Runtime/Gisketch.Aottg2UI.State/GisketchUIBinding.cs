// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000034")]
public sealed class GisketchUIBinding : MonoBehaviour
{
	[Token(Token = "0x400010C")]
	private const string ProfileHoverBioNodeId = "public-profile-hover-bio";

	[Token(Token = "0x400010D")]
	private const float ProfileHoverBioLineHeight = 24f;

	[Token(Token = "0x400010E")]
	private const int ProfileHoverBioMaxLines = 5;

	[Token(Token = "0x400010F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIBindingDefinition _definition;

	[Token(Token = "0x4000110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchMotionDefinition _enter;

	[Token(Token = "0x4000111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchMotionDefinition _exit;

	[Token(Token = "0x4000112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GisketchUIState _state;

	[Token(Token = "0x4000113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Tween _visibilityTween;

	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _visibilityInitialized;

	[Token(Token = "0x4000115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool _targetVisible;

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x5243C90", Offset = "0x5242C90", VA = "0x5243C90")]
	public void Setup(GisketchUIBindingDefinition definition, GisketchUIState state, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x5244700", Offset = "0x5243700", VA = "0x5244700")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x52448B0", Offset = "0x52438B0", VA = "0x52448B0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x5243E80", Offset = "0x5242E80", VA = "0x5243E80")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5245720", Offset = "0x5244720", VA = "0x5245720")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5245E60", Offset = "0x5244E60", VA = "0x5245E60")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x5245CF0", Offset = "0x5244CF0", VA = "0x5245CF0")]
	private void RefreshVisibilityLayout()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x5245C60", Offset = "0x5244C60", VA = "0x5245C60")]
	private static void RefreshDescendantButtonWidths(GameObject root)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x5245570", Offset = "0x5244570", VA = "0x5245570")]
	private static string CurrentValue(AottgSliderControl slider, AottgChoiceControl choice, TMP_InputField input, Toggle toggle)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x5244B10", Offset = "0x5243B10", VA = "0x5244B10")]
	private static void RefreshButtonWidth(GameObject root)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x5245E80", Offset = "0x5244E80", VA = "0x5245E80")]
	private static bool ApplyWidth(LayoutElement rootLayout, FlexLayout flex, float preferredWidth, float minWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x52451F0", Offset = "0x52441F0", VA = "0x52451F0")]
	private void RefreshProfileHoverBioHeight(TextMeshProUGUI text)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x5246210", Offset = "0x5245210", VA = "0x5246210")]
	public GisketchUIBinding()
	{
	}
}
