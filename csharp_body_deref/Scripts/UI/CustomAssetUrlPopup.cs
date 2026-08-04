// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetUrlPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CustomAssetUrlPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomAssetUrlPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200062C")]
internal class CustomAssetUrlPopup : PromptPopup
{
	[Token(Token = "0x4001DBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4001DBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x4001DBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB1")]
	public bool Confirmed;

	[Token(Token = "0x17000BB7")]
	protected override string Title
	{
		[Token(Token = "0x6003E14")]
		[Address(RVA = "0x42BA190", Offset = "0x42BA190", VA = "0x42BA190", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BB8")]
	protected override float Width
	{
		[Token(Token = "0x6003E15")]
		[Address(RVA = "0x42BA1F0", Offset = "0x42BA1F0", VA = "0x42BA1F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BB9")]
	protected override float Height
	{
		[Token(Token = "0x6003E16")]
		[Address(RVA = "0x42BA200", Offset = "0x42BA200", VA = "0x42BA200", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BBA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E17")]
		[Address(RVA = "0x42BA210", Offset = "0x42BA210", VA = "0x42BA210", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BBB")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003E18")]
		[Address(RVA = "0x42BA220", Offset = "0x42BA220", VA = "0x42BA220", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BBC")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003E19")]
		[Address(RVA = "0x42BA230", Offset = "0x42BA230", VA = "0x42BA230", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BBD")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003E1A")]
		[Address(RVA = "0x42BA240", Offset = "0x42BA240", VA = "0x42BA240", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003E1B")]
	[Address(RVA = "0x42BA250", Offset = "0x42BA250", VA = "0x42BA250", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E1C")]
	[Address(RVA = "0x42BA540", Offset = "0x42BA540", VA = "0x42BA540")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x6003E1D")]
	[Address(RVA = "0x42BA650", Offset = "0x42BA650", VA = "0x42BA650")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003E1E")]
	[Address(RVA = "0x42BA6C0", Offset = "0x42BA6C0", VA = "0x42BA6C0")]
	public CustomAssetUrlPopup()
	{
	}
}
