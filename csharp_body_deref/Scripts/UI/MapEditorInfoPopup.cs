using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000680")]
internal class MapEditorInfoPopup : PromptPopup
{
	[Token(Token = "0x4001FB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _description;

	[Token(Token = "0x4001FB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4001FB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<BaseSettingElement> _inputs;

	[Token(Token = "0x17000CC8")]
	protected override string Title
	{
		[Token(Token = "0x6004167")]
		[Address(RVA = "0x4014860", Offset = "0x4014860", VA = "0x4014860", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CC9")]
	protected override float Width
	{
		[Token(Token = "0x6004168")]
		[Address(RVA = "0x4014890", Offset = "0x4014890", VA = "0x4014890", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCA")]
	protected override float Height
	{
		[Token(Token = "0x6004169")]
		[Address(RVA = "0x40148A0", Offset = "0x40148A0", VA = "0x40148A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCB")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600416A")]
		[Address(RVA = "0x40148B0", Offset = "0x40148B0", VA = "0x40148B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600416B")]
	[Address(RVA = "0x40148C0", Offset = "0x40148C0", VA = "0x40148C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600416C")]
	[Address(RVA = "0x4014B90", Offset = "0x4014B90", VA = "0x4014B90", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600416D")]
	[Address(RVA = "0x4014E00", Offset = "0x4014E00", VA = "0x4014E00")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600416E")]
	[Address(RVA = "0x4014F70", Offset = "0x4014F70", VA = "0x4014F70")]
	public MapEditorInfoPopup()
	{
	}
}
