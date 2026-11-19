// ==================== AoTTG2 cross-reference ====================
// Type: UI.TopLeftHUD
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/TopLeftHUD.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000875")]
internal class TopLeftHUD : BasePanel
{
	[Token(Token = "0x4002AE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public GameObject panel;

	[Token(Token = "0x4002AE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public GameObject telemetryCanvas;

	[Token(Token = "0x4002AE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public GameObject kdrCanvas;

	[Token(Token = "0x4002AE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public GameObject kdrAndLabel;

	[Token(Token = "0x4002AEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private ElementStyle _style;

	[Token(Token = "0x4002AEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Telemetry _telemetry;

	[Token(Token = "0x4002AEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private KDRPanel _kdr;

	[Token(Token = "0x17000E0C")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60050AF")]
		[Address(RVA = "0x5C53210", Offset = "0x5C52210", VA = "0x5C53210", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E0D")]
	public KDRPanel KDR
	{
		[Token(Token = "0x60050B0")]
		[Address(RVA = "0x5C53240", Offset = "0x5C52240", VA = "0x5C53240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60050B1")]
	[Address(RVA = "0x5C53250", Offset = "0x5C52250", VA = "0x5C53250", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050B2")]
	[Address(RVA = "0x5C537D0", Offset = "0x5C527D0", VA = "0x5C537D0")]
	public void ApplySettings()
	{
	}

	[Token(Token = "0x60050B3")]
	[Address(RVA = "0x5C538C0", Offset = "0x5C528C0", VA = "0x5C538C0")]
	public TopLeftHUD()
	{
	}
}
