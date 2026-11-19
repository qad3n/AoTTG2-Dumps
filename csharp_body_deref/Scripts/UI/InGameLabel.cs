// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameLabel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/InGameLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000841")]
internal sealed class InGameLabel
{
	[Token(Token = "0x4002964")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _parent;

	[Token(Token = "0x4002965")]
	[FieldOffset(Offset = "0x18")]
	private readonly ElementStyle _style;

	[Token(Token = "0x4002966")]
	[FieldOffset(Offset = "0x20")]
	private readonly TextAlignmentOptions _alignment;

	[Token(Token = "0x4002967")]
	[FieldOffset(Offset = "0x24")]
	private readonly TextAnchor _anchor;

	[Token(Token = "0x4002968")]
	[FieldOffset(Offset = "0x28")]
	private readonly Vector2 _offset;

	[Token(Token = "0x4002969")]
	[FieldOffset(Offset = "0x30")]
	private Text _legacyText;

	[Token(Token = "0x400296A")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x400296B")]
	[FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _tmpFont;

	[Token(Token = "0x400296C")]
	[FieldOffset(Offset = "0x48")]
	private GameObject _tmpRoot;

	[Token(Token = "0x400296D")]
	[FieldOffset(Offset = "0x50")]
	private Image _background;

	[Token(Token = "0x400296E")]
	[FieldOffset(Offset = "0x58")]
	private bool _legacy;

	[Token(Token = "0x17000DB4")]
	public GameObject Root
	{
		[Token(Token = "0x6004EBC")]
		[Address(RVA = "0x5C28280", Offset = "0x5C27280", VA = "0x5C28280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004EBD")]
		[Address(RVA = "0x5C28290", Offset = "0x5C27290", VA = "0x5C28290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB5")]
	public Transform TextTransform
	{
		[Token(Token = "0x6004EBE")]
		[Address(RVA = "0x5C282A0", Offset = "0x5C272A0", VA = "0x5C282A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DB6")]
	public string Text
	{
		[Token(Token = "0x6004EBF")]
		[Address(RVA = "0x5C282D0", Offset = "0x5C272D0", VA = "0x5C282D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6004EC0")]
		[Address(RVA = "0x5C28320", Offset = "0x5C27320", VA = "0x5C28320")]
		set
		{
		}
	}

	[Token(Token = "0x6004EC1")]
	[Address(RVA = "0x5C28500", Offset = "0x5C27500", VA = "0x5C28500")]
	public InGameLabel(Transform parent, ElementStyle style, TextAlignmentOptions alignment, TextAnchor anchor, Vector2 offset, bool legacy)
	{
	}

	[Token(Token = "0x6004EC2")]
	[Address(RVA = "0x5C28580", Offset = "0x5C27580", VA = "0x5C28580")]
	public void SetLegacy(bool legacy)
	{
	}

	[Token(Token = "0x6004EC3")]
	[Address(RVA = "0x5C28A30", Offset = "0x5C27A30", VA = "0x5C28A30")]
	public void SetBackgroundColor(Color color)
	{
	}

	[Token(Token = "0x6004EC4")]
	[Address(RVA = "0x5C284B0", Offset = "0x5C274B0", VA = "0x5C284B0")]
	private void UpdateBackground()
	{
	}
}
