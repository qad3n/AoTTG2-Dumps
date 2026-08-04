// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExportPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExportPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000577")]
internal class ExportPopup : PromptPopup
{
	[Token(Token = "0x4001B17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _element;

	[Token(Token = "0x4001B18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting ExportSetting;

	[Token(Token = "0x17000AA3")]
	protected override string Title
	{
		[Token(Token = "0x60038CD")]
		[Address(RVA = "0x424B5E0", Offset = "0x424B5E0", VA = "0x424B5E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AA4")]
	protected override float Width
	{
		[Token(Token = "0x60038CE")]
		[Address(RVA = "0x424B640", Offset = "0x424B640", VA = "0x424B640", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AA5")]
	protected override float Height
	{
		[Token(Token = "0x60038CF")]
		[Address(RVA = "0x424B650", Offset = "0x424B650", VA = "0x424B650", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AA6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038D0")]
		[Address(RVA = "0x424B660", Offset = "0x424B660", VA = "0x424B660", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA7")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038D1")]
		[Address(RVA = "0x424B670", Offset = "0x424B670", VA = "0x424B670", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60038D2")]
	[Address(RVA = "0x424B680", Offset = "0x424B680", VA = "0x424B680", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60038D3")]
	[Address(RVA = "0x424B7C0", Offset = "0x424B7C0", VA = "0x424B7C0")]
	public void Show(string value)
	{
	}

	[Token(Token = "0x60038D4")]
	[Address(RVA = "0x424B9B0", Offset = "0x424B9B0", VA = "0x424B9B0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60038D5")]
	[Address(RVA = "0x424BA20", Offset = "0x424BA20", VA = "0x424BA20")]
	public ExportPopup()
	{
	}
}
