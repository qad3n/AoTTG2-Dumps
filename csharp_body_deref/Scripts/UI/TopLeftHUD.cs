using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000622")]
internal class TopLeftHUD : BasePanel
{
	[Token(Token = "0x4001E44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public GameObject panel;

	[Token(Token = "0x4001E45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public GameObject telemetryCanvas;

	[Token(Token = "0x4001E46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public GameObject kdrCanvas;

	[Token(Token = "0x4001E47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public GameObject kdrAndLabel;

	[Token(Token = "0x4001E48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private ElementStyle _style;

	[Token(Token = "0x4001E49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Telemetry _telemetry;

	[Token(Token = "0x4001E4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private KDRPanel _kdr;

	[Token(Token = "0x17000BD8")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003E45")]
		[Address(RVA = "0x3FDA800", Offset = "0x3FDA800", VA = "0x3FDA800", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003E46")]
	[Address(RVA = "0x3FDA830", Offset = "0x3FDA830", VA = "0x3FDA830", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E47")]
	[Address(RVA = "0x3FDADB0", Offset = "0x3FDADB0", VA = "0x3FDADB0")]
	public void ApplySettings()
	{
	}

	[Token(Token = "0x6003E48")]
	[Address(RVA = "0x3FDAEA0", Offset = "0x3FDAEA0", VA = "0x3FDAEA0")]
	public TopLeftHUD()
	{
	}
}
