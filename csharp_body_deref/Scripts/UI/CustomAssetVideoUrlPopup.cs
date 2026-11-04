// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetVideoUrlPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CustomAssetVideoUrlPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000789")]
internal class CustomAssetVideoUrlPopup : PromptPopup
{
	[Token(Token = "0x4002579")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x400257A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x400257B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public VideoUrlPopupResult Result;

	[Token(Token = "0x17000D0E")]
	protected override string Title
	{
		[Token(Token = "0x6004910")]
		[Address(RVA = "0x2240690", Offset = "0x223EC90", VA = "0x182240690", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D0F")]
	protected override float Width
	{
		[Token(Token = "0x6004911")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D10")]
	protected override float Height
	{
		[Token(Token = "0x6004912")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D11")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004913")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D12")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004914")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D13")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004915")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D14")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004916")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D15")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004917")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004918")]
	[Address(RVA = "0x223FF50", Offset = "0x223E550", VA = "0x18223FF50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004919")]
	[Address(RVA = "0x22402C0", Offset = "0x223E8C0", VA = "0x1822402C0")]
	public void Show(List<string> urls)
	{
	}

	[Token(Token = "0x600491A")]
	[Address(RVA = "0x223F8F0", Offset = "0x223DEF0", VA = "0x18223F8F0", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600491B")]
	[Address(RVA = "0x223FED0", Offset = "0x223E4D0", VA = "0x18223FED0")]
	private void OnButtonClick(VideoUrlPopupResult result)
	{
	}

	[Token(Token = "0x600491C")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public CustomAssetVideoUrlPopup()
	{
	}
}
