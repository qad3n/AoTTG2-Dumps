// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorScaledPanel
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorScaledPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200084C")]
internal class MapEditorScaledPanel : HeadedPanel
{
	[Token(Token = "0x40029C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _scaledContent;

	[Token(Token = "0x40029C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _panelContent;

	[Token(Token = "0x17000EAA")]
	protected float HUDScale
	{
		[Token(Token = "0x6005039")]
		[Address(RVA = "0x22D1CE0", Offset = "0x22D02E0", VA = "0x1822D1CE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600503A")]
	[Address(RVA = "0x22D19F0", Offset = "0x22CFFF0", VA = "0x1822D19F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600503B")]
	[Address(RVA = "0x22D1520", Offset = "0x22CFB20", VA = "0x1822D1520", Slot = "30")]
	public override float GetPanelWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600503C")]
	[Address(RVA = "0x22D1400", Offset = "0x22CFA00", VA = "0x1822D1400", Slot = "31")]
	public override float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600503D")]
	[Address(RVA = "0x22D1860", Offset = "0x22CFE60", VA = "0x1822D1860", Slot = "45")]
	public virtual void RefreshContentScale()
	{
	}

	[Token(Token = "0x600503E")]
	[Address(RVA = "0x22D15A0", Offset = "0x22CFBA0", VA = "0x1822D15A0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600503F")]
	[Address(RVA = "0x22D1610", Offset = "0x22CFC10", VA = "0x1822D1610")]
	private void RefreshContentDimensions()
	{
	}

	[Token(Token = "0x6005040")]
	[Address(RVA = "0x21D6E20", Offset = "0x21D5420", VA = "0x1821D6E20")]
	public MapEditorScaledPanel()
	{
	}
}
