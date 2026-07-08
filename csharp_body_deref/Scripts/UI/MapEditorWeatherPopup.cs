using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000692")]
internal class MapEditorWeatherPopup : BasePopup
{
	[Token(Token = "0x4002020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private BoolSetting _hasWeather;

	[Token(Token = "0x4002021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private ToggleSettingElement _hasWeatherElement;

	[Token(Token = "0x4002022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _elements;

	[Token(Token = "0x17000CEB")]
	protected override string Title
	{
		[Token(Token = "0x600423E")]
		[Address(RVA = "0x4029600", Offset = "0x4029600", VA = "0x4029600", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CEC")]
	protected override float Width
	{
		[Token(Token = "0x600423F")]
		[Address(RVA = "0x4029630", Offset = "0x4029630", VA = "0x4029630", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CED")]
	protected override float Height
	{
		[Token(Token = "0x6004240")]
		[Address(RVA = "0x4029640", Offset = "0x4029640", VA = "0x4029640", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CEE")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004241")]
		[Address(RVA = "0x4029650", Offset = "0x4029650", VA = "0x4029650", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CEF")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6004242")]
		[Address(RVA = "0x4029660", Offset = "0x4029660", VA = "0x4029660", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CF0")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004243")]
		[Address(RVA = "0x4029670", Offset = "0x4029670", VA = "0x4029670", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004244")]
	[Address(RVA = "0x4029680", Offset = "0x4029680", VA = "0x4029680", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004245")]
	[Address(RVA = "0x4029C70", Offset = "0x4029C70", VA = "0x4029C70", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004246")]
	[Address(RVA = "0x402B1F0", Offset = "0x402B1F0", VA = "0x402B1F0")]
	private void OnWeatherButtonClick(string name)
	{
	}

	[Token(Token = "0x6004247")]
	[Address(RVA = "0x402B7B0", Offset = "0x402B7B0", VA = "0x402B7B0")]
	private void OnWeatherSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6004248")]
	[Address(RVA = "0x402BBE0", Offset = "0x402BBE0", VA = "0x402BBE0")]
	public MapEditorWeatherPopup()
	{
	}
}
