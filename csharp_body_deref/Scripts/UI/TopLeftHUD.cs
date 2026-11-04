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

[Token(Token = "0x20007C9")]
internal class TopLeftHUD : BasePanel
{
	[Token(Token = "0x4002766")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public GameObject panel;

	[Token(Token = "0x4002767")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public GameObject telemetryCanvas;

	[Token(Token = "0x4002768")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public GameObject kdrCanvas;

	[Token(Token = "0x4002769")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public GameObject kdrAndLabel;

	[Token(Token = "0x400276A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private ElementStyle _style;

	[Token(Token = "0x400276B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Telemetry _telemetry;

	[Token(Token = "0x400276C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private KDRPanel _kdr;

	[Token(Token = "0x17000D9B")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004B8F")]
		[Address(RVA = "0x2283030", Offset = "0x2281630", VA = "0x182283030", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004B90")]
	[Address(RVA = "0x2282920", Offset = "0x2280F20", VA = "0x182282920", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B91")]
	[Address(RVA = "0x2282810", Offset = "0x2280E10", VA = "0x182282810")]
	public void ApplySettings()
	{
	}

	[Token(Token = "0x6004B92")]
	[Address(RVA = "0x21BC920", Offset = "0x21BAF20", VA = "0x1821BC920")]
	public TopLeftHUD()
	{
	}
}
