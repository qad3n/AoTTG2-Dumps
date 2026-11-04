// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameLabel
// Update status: NEW in this game update
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

[Token(Token = "0x2000796")]
internal sealed class InGameLabel
{
	[Token(Token = "0x40025F1")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _parent;

	[Token(Token = "0x40025F2")]
	[FieldOffset(Offset = "0x18")]
	private readonly ElementStyle _style;

	[Token(Token = "0x40025F3")]
	[FieldOffset(Offset = "0x20")]
	private readonly TextAlignmentOptions _alignment;

	[Token(Token = "0x40025F4")]
	[FieldOffset(Offset = "0x24")]
	private readonly TextAnchor _anchor;

	[Token(Token = "0x40025F5")]
	[FieldOffset(Offset = "0x28")]
	private readonly Vector2 _offset;

	[Token(Token = "0x40025F6")]
	[FieldOffset(Offset = "0x30")]
	private Text _legacyText;

	[Token(Token = "0x40025F7")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x40025F8")]
	[FieldOffset(Offset = "0x40")]
	private GameObject _tmpRoot;

	[Token(Token = "0x40025F9")]
	[FieldOffset(Offset = "0x48")]
	private Image _background;

	[Token(Token = "0x40025FA")]
	[FieldOffset(Offset = "0x50")]
	private bool _legacy;

	[Token(Token = "0x17000D38")]
	public GameObject Root
	{
		[Token(Token = "0x6004995")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004996")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D39")]
	public Transform TextTransform
	{
		[Token(Token = "0x6004997")]
		[Address(RVA = "0x224BFC0", Offset = "0x224A5C0", VA = "0x18224BFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D3A")]
	public string Text
	{
		[Token(Token = "0x6004998")]
		[Address(RVA = "0x224C000", Offset = "0x224A600", VA = "0x18224C000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6004999")]
		[Address(RVA = "0x224C050", Offset = "0x224A650", VA = "0x18224C050")]
		set
		{
		}
	}

	[Token(Token = "0x600499A")]
	[Address(RVA = "0x224BF50", Offset = "0x224A550", VA = "0x18224BF50")]
	public InGameLabel(Transform parent, ElementStyle style, TextAlignmentOptions alignment, TextAnchor anchor, Vector2 offset, bool legacy)
	{
	}

	[Token(Token = "0x600499B")]
	[Address(RVA = "0x224BA40", Offset = "0x224A040", VA = "0x18224BA40")]
	public void SetLegacy(bool legacy)
	{
	}

	[Token(Token = "0x600499C")]
	[Address(RVA = "0x224BA00", Offset = "0x224A000", VA = "0x18224BA00")]
	public void SetBackgroundColor(Color color)
	{
	}

	[Token(Token = "0x600499D")]
	[Address(RVA = "0x224BEE0", Offset = "0x224A4E0", VA = "0x18224BEE0")]
	private void UpdateBackground()
	{
	}
}
