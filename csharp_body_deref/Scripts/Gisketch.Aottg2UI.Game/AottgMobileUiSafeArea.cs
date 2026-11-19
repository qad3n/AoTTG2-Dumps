// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMobileUiSafeArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUiSafeArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BD")]
internal sealed class AottgMobileUiSafeArea : MonoBehaviour
{
	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] LayerPaths;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x20")]
	private readonly RectTransform[] _layers;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000DEA")]
	[FieldOffset(Offset = "0x30")]
	private Transform _screen;

	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x38")]
	private Image _source;

	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x40")]
	private Image _backdrop;

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasSource;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x4C")]
	private float _inset;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x50")]
	private string _screenId;

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x57C5300", Offset = "0x57C4300", VA = "0x57C5300")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x57C5350", Offset = "0x57C4350", VA = "0x57C5350")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x57C5740", Offset = "0x57C4740", VA = "0x57C5740")]
	private void UpdateBackdrop(float inset)
	{
	}

	[Token(Token = "0x6001092")]
	[Address(RVA = "0x57C5DC0", Offset = "0x57C4DC0", VA = "0x57C5DC0")]
	private Image FindBackground(Transform screen)
	{
		return null;
	}

	[Token(Token = "0x6001093")]
	[Address(RVA = "0x57C61E0", Offset = "0x57C51E0", VA = "0x57C61E0")]
	public AottgMobileUiSafeArea()
	{
	}
}
