// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorVersionConversionPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorVersionConversionPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Map;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20008DD")]
internal class MapEditorVersionConversionPopup : ConfirmPopup
{
	[Token(Token = "0x17000EC1")]
	protected override float Width
	{
		[Token(Token = "0x6005477")]
		[Address(RVA = "0x5CA7C90", Offset = "0x5CA6C90", VA = "0x5CA7C90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC2")]
	protected override float Height
	{
		[Token(Token = "0x6005478")]
		[Address(RVA = "0x5CA7CA0", Offset = "0x5CA6CA0", VA = "0x5CA7CA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC3")]
	protected override float LabelHeight
	{
		[Token(Token = "0x6005479")]
		[Address(RVA = "0x5CA7CB0", Offset = "0x5CA6CB0", VA = "0x5CA7CB0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC4")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600547A")]
		[Address(RVA = "0x5CA7CC0", Offset = "0x5CA6CC0", VA = "0x5CA7CC0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EC5")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600547B")]
		[Address(RVA = "0x5CA7CD0", Offset = "0x5CA6CD0", VA = "0x5CA7CD0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x600547C")]
	[Address(RVA = "0x5CA66F0", Offset = "0x5CA56F0", VA = "0x5CA66F0")]
	public void Show(MapVersionConversionResult result, UnityAction onConfirm)
	{
	}

	[Token(Token = "0x600547D")]
	[Address(RVA = "0x5CA7D70", Offset = "0x5CA6D70", VA = "0x5CA7D70")]
	public MapEditorVersionConversionPopup()
	{
	}
}
