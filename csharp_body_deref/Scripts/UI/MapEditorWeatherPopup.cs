// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorWeatherPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorWeatherPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorWeatherPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006E0")]
internal class MapEditorWeatherPopup : BasePopup
{
	[Token(Token = "0x400217D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private BoolSetting _hasWeather;

	[Token(Token = "0x400217E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ToggleSettingElement _hasWeatherElement;

	[Token(Token = "0x400217F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _elements;

	[Token(Token = "0x17000D65")]
	protected override string Title
	{
		[Token(Token = "0x60044A5")]
		[Address(RVA = "0x433E9D0", Offset = "0x433E9D0", VA = "0x433E9D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D66")]
	protected override float Width
	{
		[Token(Token = "0x60044A6")]
		[Address(RVA = "0x433EA00", Offset = "0x433EA00", VA = "0x433EA00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D67")]
	protected override float Height
	{
		[Token(Token = "0x60044A7")]
		[Address(RVA = "0x433EA10", Offset = "0x433EA10", VA = "0x433EA10", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D68")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60044A8")]
		[Address(RVA = "0x433EA20", Offset = "0x433EA20", VA = "0x433EA20", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D69")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x60044A9")]
		[Address(RVA = "0x433EA30", Offset = "0x433EA30", VA = "0x433EA30", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D6A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60044AA")]
		[Address(RVA = "0x433EA40", Offset = "0x433EA40", VA = "0x433EA40", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60044AB")]
	[Address(RVA = "0x433EA50", Offset = "0x433EA50", VA = "0x433EA50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044AC")]
	[Address(RVA = "0x433F040", Offset = "0x433F040", VA = "0x433F040", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60044AD")]
	[Address(RVA = "0x43405C0", Offset = "0x43405C0", VA = "0x43405C0")]
	private void OnWeatherButtonClick(string name)
	{
	}

	[Token(Token = "0x60044AE")]
	[Address(RVA = "0x4340B80", Offset = "0x4340B80", VA = "0x4340B80")]
	private void OnWeatherSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60044AF")]
	[Address(RVA = "0x4340FB0", Offset = "0x4340FB0", VA = "0x4340FB0")]
	public MapEditorWeatherPopup()
	{
	}
}
