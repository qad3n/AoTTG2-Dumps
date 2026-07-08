using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000022")]
public sealed class GisketchUIBinding : MonoBehaviour
{
	[Token(Token = "0x40000B7")]
	private const string ProfileHoverBioNodeId = "public-profile-hover-bio";

	[Token(Token = "0x40000B8")]
	private const float ProfileHoverBioLineHeight = 24f;

	[Token(Token = "0x40000B9")]
	private const int ProfileHoverBioMaxLines = 5;

	[Token(Token = "0x40000BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIBindingDefinition _definition;

	[Token(Token = "0x40000BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchMotionDefinition _enter;

	[Token(Token = "0x40000BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchMotionDefinition _exit;

	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GisketchUIState _state;

	[Token(Token = "0x40000BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Tween _visibilityTween;

	[Token(Token = "0x40000BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _visibilityInitialized;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool _targetVisible;

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x39DA490", Offset = "0x39DA490", VA = "0x39DA490")]
	public void Setup(GisketchUIBindingDefinition definition, GisketchUIState state, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x39DAAE0", Offset = "0x39DAAE0", VA = "0x39DAAE0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x39DACB0", Offset = "0x39DACB0", VA = "0x39DACB0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x39DA6A0", Offset = "0x39DA6A0", VA = "0x39DA6A0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x39DB6E0", Offset = "0x39DB6E0", VA = "0x39DB6E0")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x39DBE70", Offset = "0x39DBE70", VA = "0x39DBE70")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x39DBCD0", Offset = "0x39DBCD0", VA = "0x39DBCD0")]
	private void RefreshVisibilityLayout()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x39DBC40", Offset = "0x39DBC40", VA = "0x39DBC40")]
	private static void RefreshDescendantButtonWidths(GameObject root)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x39DAF10", Offset = "0x39DAF10", VA = "0x39DAF10")]
	private static void RefreshButtonWidth(GameObject root)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x39DB390", Offset = "0x39DB390", VA = "0x39DB390")]
	private void RefreshProfileHoverBioHeight(TextMeshProUGUI text)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x39DBE90", Offset = "0x39DBE90", VA = "0x39DBE90")]
	public GisketchUIBinding()
	{
	}
}
