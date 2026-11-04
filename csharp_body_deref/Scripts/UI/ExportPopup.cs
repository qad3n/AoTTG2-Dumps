// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExportPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ExportPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExportPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006E9")]
internal class ExportPopup : PromptPopup
{
	[Token(Token = "0x40022CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _element;

	[Token(Token = "0x40022CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _versionElement;

	[Token(Token = "0x40022CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _mapExportSource;

	[Token(Token = "0x40022CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private StringSetting _version;

	[Token(Token = "0x40022CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public StringSetting ExportSetting;

	[Token(Token = "0x17000BF9")]
	protected override string Title
	{
		[Token(Token = "0x60043F4")]
		[Address(RVA = "0x21C1EB0", Offset = "0x21C04B0", VA = "0x1821C1EB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BFA")]
	protected override float Width
	{
		[Token(Token = "0x60043F5")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BFB")]
	protected override float Height
	{
		[Token(Token = "0x60043F6")]
		[Address(RVA = "0x21C1EA0", Offset = "0x21C04A0", VA = "0x1821C1EA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BFC")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60043F7")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BFD")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60043F8")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60043F9")]
	[Address(RVA = "0x21C12A0", Offset = "0x21BF8A0", VA = "0x1821C12A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043FA")]
	[Address(RVA = "0x21C13F0", Offset = "0x21BF9F0", VA = "0x1821C13F0")]
	public void Show(string value)
	{
	}

	[Token(Token = "0x60043FB")]
	[Address(RVA = "0x21C1660", Offset = "0x21BFC60", VA = "0x1821C1660")]
	public void Show(MapScript mapScript)
	{
	}

	[Token(Token = "0x60043FC")]
	[Address(RVA = "0x21C1C40", Offset = "0x21C0240", VA = "0x1821C1C40")]
	private void UpdateMapExport()
	{
	}

	[Token(Token = "0x60043FD")]
	[Address(RVA = "0x21C1240", Offset = "0x21BF840", VA = "0x1821C1240")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60043FE")]
	[Address(RVA = "0x21C1DC0", Offset = "0x21C03C0", VA = "0x1821C1DC0")]
	public ExportPopup()
	{
	}
}
