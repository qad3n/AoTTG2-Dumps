// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIBinding.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000023")]
public sealed class GisketchUIBinding : MonoBehaviour
{
	[Token(Token = "0x40000BD")]
	private const string ProfileHoverBioNodeId = "public-profile-hover-bio";

	[Token(Token = "0x40000BE")]
	private const float ProfileHoverBioLineHeight = 24f;

	[Token(Token = "0x40000BF")]
	private const int ProfileHoverBioMaxLines = 5;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIBindingDefinition _definition;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchMotionDefinition _enter;

	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchMotionDefinition _exit;

	[Token(Token = "0x40000C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GisketchUIState _state;

	[Token(Token = "0x40000C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Tween _visibilityTween;

	[Token(Token = "0x40000C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _visibilityInitialized;

	[Token(Token = "0x40000C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool _targetVisible;

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3A44B10", Offset = "0x3A44B10", VA = "0x3A44B10")]
	public void Setup(GisketchUIBindingDefinition definition, GisketchUIState state, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3A45160", Offset = "0x3A45160", VA = "0x3A45160")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3A45330", Offset = "0x3A45330", VA = "0x3A45330")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3A44D20", Offset = "0x3A44D20", VA = "0x3A44D20")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3A45D60", Offset = "0x3A45D60", VA = "0x3A45D60")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3A464F0", Offset = "0x3A464F0", VA = "0x3A464F0")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3A46350", Offset = "0x3A46350", VA = "0x3A46350")]
	private void RefreshVisibilityLayout()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3A462C0", Offset = "0x3A462C0", VA = "0x3A462C0")]
	private static void RefreshDescendantButtonWidths(GameObject root)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3A45590", Offset = "0x3A45590", VA = "0x3A45590")]
	private static void RefreshButtonWidth(GameObject root)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3A45A10", Offset = "0x3A45A10", VA = "0x3A45A10")]
	private void RefreshProfileHoverBioHeight(TextMeshProUGUI text)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3A46510", Offset = "0x3A46510", VA = "0x3A46510")]
	public GisketchUIBinding()
	{
	}
}
