// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorScaledPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorScaledPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008CA")]
internal class MapEditorScaledPanel : HeadedPanel
{
	[Token(Token = "0x4002C7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _scaledContent;

	[Token(Token = "0x4002C7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _panelContent;

	[Token(Token = "0x17000EAB")]
	protected float HUDScale
	{
		[Token(Token = "0x60053D9")]
		[Address(RVA = "0x5C99DF0", Offset = "0x5C98DF0", VA = "0x5C99DF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60053DA")]
	[Address(RVA = "0x5C99E50", Offset = "0x5C98E50", VA = "0x5C99E50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60053DB")]
	[Address(RVA = "0x5C9A130", Offset = "0x5C99130", VA = "0x5C9A130", Slot = "30")]
	public override float GetPanelWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60053DC")]
	[Address(RVA = "0x5C9A1A0", Offset = "0x5C991A0", VA = "0x5C9A1A0", Slot = "31")]
	public override float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60053DD")]
	[Address(RVA = "0x5C9A2C0", Offset = "0x5C992C0", VA = "0x5C9A2C0", Slot = "45")]
	public virtual void RefreshContentScale()
	{
	}

	[Token(Token = "0x60053DE")]
	[Address(RVA = "0x5C9A650", Offset = "0x5C99650", VA = "0x5C9A650")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60053DF")]
	[Address(RVA = "0x5C9A3E0", Offset = "0x5C993E0", VA = "0x5C9A3E0")]
	private void RefreshContentDimensions()
	{
	}

	[Token(Token = "0x60053E0")]
	[Address(RVA = "0x5C9A6C0", Offset = "0x5C996C0", VA = "0x5C9A6C0")]
	public MapEditorScaledPanel()
	{
	}
}
