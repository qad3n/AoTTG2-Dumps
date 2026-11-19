// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorWeatherPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x20008DE")]
internal class MapEditorWeatherPopup : BasePopup
{
	[Token(Token = "0x4002CC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private BoolSetting _hasWeather;

	[Token(Token = "0x4002CC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ToggleSettingElement _hasWeatherElement;

	[Token(Token = "0x4002CC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _elements;

	[Token(Token = "0x17000EC6")]
	protected override string Title
	{
		[Token(Token = "0x600547E")]
		[Address(RVA = "0x5CA7D80", Offset = "0x5CA6D80", VA = "0x5CA7D80", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EC7")]
	protected override float Width
	{
		[Token(Token = "0x600547F")]
		[Address(RVA = "0x5CA7E20", Offset = "0x5CA6E20", VA = "0x5CA7E20", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC8")]
	protected override float Height
	{
		[Token(Token = "0x6005480")]
		[Address(RVA = "0x5CA7E30", Offset = "0x5CA6E30", VA = "0x5CA7E30", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC9")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005481")]
		[Address(RVA = "0x5CA7E40", Offset = "0x5CA6E40", VA = "0x5CA7E40", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ECA")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6005482")]
		[Address(RVA = "0x5CA7E50", Offset = "0x5CA6E50", VA = "0x5CA7E50", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ECB")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005483")]
		[Address(RVA = "0x5CA7E60", Offset = "0x5CA6E60", VA = "0x5CA7E60", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005484")]
	[Address(RVA = "0x5CA7E70", Offset = "0x5CA6E70", VA = "0x5CA7E70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005485")]
	[Address(RVA = "0x5CA8570", Offset = "0x5CA7570", VA = "0x5CA8570", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6005486")]
	[Address(RVA = "0x5CA84D0", Offset = "0x5CA74D0", VA = "0x5CA84D0")]
	private static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x6005487")]
	[Address(RVA = "0x5CA9CC0", Offset = "0x5CA8CC0", VA = "0x5CA9CC0")]
	private static string WeatherLocale(string item)
	{
		return null;
	}

	[Token(Token = "0x6005488")]
	[Address(RVA = "0x5CA9D80", Offset = "0x5CA8D80", VA = "0x5CA9D80")]
	private void OnWeatherButtonClick(string name)
	{
	}

	[Token(Token = "0x6005489")]
	[Address(RVA = "0x5CAA3B0", Offset = "0x5CA93B0", VA = "0x5CAA3B0")]
	private void OnWeatherSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x600548A")]
	[Address(RVA = "0x5CAA810", Offset = "0x5CA9810", VA = "0x5CAA810")]
	public MapEditorWeatherPopup()
	{
	}
}
