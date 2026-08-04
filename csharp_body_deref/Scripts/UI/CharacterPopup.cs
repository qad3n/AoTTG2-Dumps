// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200060F")]
internal class CharacterPopup : BasePopup
{
	[Token(Token = "0x4001D17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001D18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<string> _allowedCategories;

	[Token(Token = "0x17000BA3")]
	protected override string Title
	{
		[Token(Token = "0x6003D3B")]
		[Address(RVA = "0x42A40E0", Offset = "0x42A40E0", VA = "0x42A40E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BA4")]
	protected override float Width
	{
		[Token(Token = "0x6003D3C")]
		[Address(RVA = "0x42A4100", Offset = "0x42A4100", VA = "0x42A4100", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BA5")]
	protected override float Height
	{
		[Token(Token = "0x6003D3D")]
		[Address(RVA = "0x42A4110", Offset = "0x42A4110", VA = "0x42A4110", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BA6")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003D3E")]
		[Address(RVA = "0x42A4120", Offset = "0x42A4120", VA = "0x42A4120", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA7")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003D3F")]
		[Address(RVA = "0x42A4130", Offset = "0x42A4130", VA = "0x42A4130", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA8")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003D40")]
		[Address(RVA = "0x42A4140", Offset = "0x42A4140", VA = "0x42A4140", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003D41")]
	[Address(RVA = "0x42A4170", Offset = "0x42A4170", VA = "0x42A4170", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D42")]
	[Address(RVA = "0x42A42A0", Offset = "0x42A42A0", VA = "0x42A42A0", Slot = "59")]
	protected virtual void SetAllowedCategories()
	{
	}

	[Token(Token = "0x6003D43")]
	[Address(RVA = "0x42A45A0", Offset = "0x42A45A0", VA = "0x42A45A0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003D44")]
	[Address(RVA = "0x42A4960", Offset = "0x42A4960", VA = "0x42A4960", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003D45")]
	[Address(RVA = "0x42A4AA0", Offset = "0x42A4AA0", VA = "0x42A4AA0", Slot = "60")]
	protected virtual void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003D46")]
	[Address(RVA = "0x42A4C80", Offset = "0x42A4C80", VA = "0x42A4C80")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003D47")]
	[Address(RVA = "0x429BFB0", Offset = "0x429BFB0", VA = "0x429BFB0")]
	protected void SaveLastCharacter()
	{
	}

	[Token(Token = "0x6003D48")]
	[Address(RVA = "0x429C2A0", Offset = "0x429C2A0", VA = "0x429C2A0")]
	public CharacterPopup()
	{
	}
}
