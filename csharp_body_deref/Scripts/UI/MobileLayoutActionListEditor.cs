// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutActionListEditor
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutActionListEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000775")]
internal class MobileLayoutActionListEditor : MonoBehaviour
{
	[Token(Token = "0x400259A")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<StringSetting> _actions;

	[Token(Token = "0x400259B")]
	[FieldOffset(Offset = "0x28")]
	private readonly Dictionary<StringSetting, Text> _labels;

	[Token(Token = "0x400259C")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _root;

	[Token(Token = "0x400259D")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _rowsRoot;

	[Token(Token = "0x400259E")]
	[FieldOffset(Offset = "0x40")]
	private LayoutElement _layoutElement;

	[Token(Token = "0x400259F")]
	[FieldOffset(Offset = "0x48")]
	private LayoutElement _rowsLayoutElement;

	[Token(Token = "0x40025A0")]
	[FieldOffset(Offset = "0x50")]
	private Transform _overlayRoot;

	[Token(Token = "0x40025A1")]
	[FieldOffset(Offset = "0x58")]
	private ElementStyle _style;

	[Token(Token = "0x40025A2")]
	[FieldOffset(Offset = "0x60")]
	private MobileInputLayoutRole _role;

	[Token(Token = "0x60047EA")]
	[Address(RVA = "0x5BA7A10", Offset = "0x5BA6A10", VA = "0x5BA7A10")]
	public void Setup(ElementStyle style, string title, string[] initialActionIds, Transform overlayRoot, MobileInputLayoutRole role)
	{
	}

	[Token(Token = "0x60047EB")]
	[Address(RVA = "0x5BAA320", Offset = "0x5BA9320", VA = "0x5BAA320")]
	public string GetActionsString()
	{
		return null;
	}

	[Token(Token = "0x60047EC")]
	[Address(RVA = "0x5BAB400", Offset = "0x5BAA400", VA = "0x5BAB400")]
	public void SetVisible(bool visible)
	{
	}

	[Token(Token = "0x60047ED")]
	[Address(RVA = "0x5BADF10", Offset = "0x5BACF10", VA = "0x5BADF10")]
	private void AddAction(string actionId)
	{
	}

	[Token(Token = "0x60047EE")]
	[Address(RVA = "0x5BAE380", Offset = "0x5BAD380", VA = "0x5BAE380")]
	private void UpdateHeight()
	{
	}

	[Token(Token = "0x60047EF")]
	[Address(RVA = "0x5BAE4A0", Offset = "0x5BAD4A0", VA = "0x5BAE4A0")]
	private void RefreshLayout()
	{
	}

	[Token(Token = "0x60047F0")]
	[Address(RVA = "0x5BADD50", Offset = "0x5BACD50", VA = "0x5BADD50")]
	private GameObject CreateRect(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x60047F1")]
	[Address(RVA = "0x5BAE5D0", Offset = "0x5BAD5D0", VA = "0x5BAE5D0")]
	public MobileLayoutActionListEditor()
	{
	}
}
