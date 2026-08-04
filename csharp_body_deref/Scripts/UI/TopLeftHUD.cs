// ==================== AoTTG2 cross-reference ====================
// Type: UI.TopLeftHUD
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TopLeftHUD.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200066D")]
internal class TopLeftHUD : BasePanel
{
	[Token(Token = "0x4001F8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public GameObject panel;

	[Token(Token = "0x4001F8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public GameObject telemetryCanvas;

	[Token(Token = "0x4001F8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public GameObject kdrCanvas;

	[Token(Token = "0x4001F8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public GameObject kdrAndLabel;

	[Token(Token = "0x4001F8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private ElementStyle _style;

	[Token(Token = "0x4001F90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Telemetry _telemetry;

	[Token(Token = "0x4001F91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private KDRPanel _kdr;

	[Token(Token = "0x17000C50")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004092")]
		[Address(RVA = "0x42ED220", Offset = "0x42ED220", VA = "0x42ED220", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004093")]
	[Address(RVA = "0x42ED250", Offset = "0x42ED250", VA = "0x42ED250", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004094")]
	[Address(RVA = "0x42ED7D0", Offset = "0x42ED7D0", VA = "0x42ED7D0")]
	public void ApplySettings()
	{
	}

	[Token(Token = "0x6004095")]
	[Address(RVA = "0x42ED8C0", Offset = "0x42ED8C0", VA = "0x42ED8C0")]
	public TopLeftHUD()
	{
	}
}
