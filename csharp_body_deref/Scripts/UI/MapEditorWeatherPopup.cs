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

[Token(Token = "0x200085E")]
internal class MapEditorWeatherPopup : BasePopup
{
	[Token(Token = "0x4002A02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private BoolSetting _hasWeather;

	[Token(Token = "0x4002A03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ToggleSettingElement _hasWeatherElement;

	[Token(Token = "0x4002A04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _elements;

	[Token(Token = "0x17000EC5")]
	protected override string Title
	{
		[Token(Token = "0x60050D1")]
		[Address(RVA = "0x22DE850", Offset = "0x22DCE50", VA = "0x1822DE850", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EC6")]
	protected override float Width
	{
		[Token(Token = "0x60050D2")]
		[Address(RVA = "0x22D3970", Offset = "0x22D1F70", VA = "0x1822D3970", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC7")]
	protected override float Height
	{
		[Token(Token = "0x60050D3")]
		[Address(RVA = "0x228D430", Offset = "0x228BA30", VA = "0x18228D430", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC8")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60050D4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EC9")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x60050D5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ECA")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60050D6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60050D7")]
	[Address(RVA = "0x22DCD70", Offset = "0x22DB370", VA = "0x1822DCD70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050D8")]
	[Address(RVA = "0x22DD170", Offset = "0x22DB770", VA = "0x1822DD170", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60050D9")]
	[Address(RVA = "0x22DC4B0", Offset = "0x22DAAB0", VA = "0x1822DC4B0")]
	private void OnWeatherButtonClick(string name)
	{
	}

	[Token(Token = "0x60050DA")]
	[Address(RVA = "0x22DCA30", Offset = "0x22DB030", VA = "0x1822DCA30")]
	private void OnWeatherSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60050DB")]
	[Address(RVA = "0x22DE790", Offset = "0x22DCD90", VA = "0x1822DE790")]
	public MapEditorWeatherPopup()
	{
	}
}
