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

[Token(Token = "0x2000787")]
internal class CustomAssetUrlPopup : PromptPopup
{
	[Token(Token = "0x4002571")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4002572")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x4002573")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB1")]
	public bool Confirmed;

	[Token(Token = "0x17000D06")]
	protected override string Title
	{
		[Token(Token = "0x6004901")]
		[Address(RVA = "0x223FE70", Offset = "0x223E470", VA = "0x18223FE70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D07")]
	protected override float Width
	{
		[Token(Token = "0x6004902")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D08")]
	protected override float Height
	{
		[Token(Token = "0x6004903")]
		[Address(RVA = "0x2182BD0", Offset = "0x21811D0", VA = "0x182182BD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D09")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004904")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D0A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004905")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D0B")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004906")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D0C")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004907")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D0D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004908")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004909")]
	[Address(RVA = "0x223F910", Offset = "0x223DF10", VA = "0x18223F910", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600490A")]
	[Address(RVA = "0x223FC10", Offset = "0x223E210", VA = "0x18223FC10")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x600490B")]
	[Address(RVA = "0x223F8F0", Offset = "0x223DEF0", VA = "0x18223F8F0", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600490C")]
	[Address(RVA = "0x223F880", Offset = "0x223DE80", VA = "0x18223F880")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600490D")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public CustomAssetUrlPopup()
	{
	}
}
