using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200068E")]
internal class MapEditorTexturePopup : MapEditorAddObjectPopup
{
	[Token(Token = "0x17000CDF")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60041FA")]
		[Address(RVA = "0x4024B90", Offset = "0x4024B90", VA = "0x4024B90", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE0")]
	protected override float Height
	{
		[Token(Token = "0x60041FB")]
		[Address(RVA = "0x4024BA0", Offset = "0x4024BA0", VA = "0x4024BA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE1")]
	protected override bool TwoRows
	{
		[Token(Token = "0x60041FC")]
		[Address(RVA = "0x4024BB0", Offset = "0x4024BB0", VA = "0x4024BB0", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CE2")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60041FD")]
		[Address(RVA = "0x4024BC0", Offset = "0x4024BC0", VA = "0x4024BC0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60041FE")]
	[Address(RVA = "0x4024BF0", Offset = "0x4024BF0", VA = "0x4024BF0", Slot = "60")]
	protected override string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x60041FF")]
	[Address(RVA = "0x4024D70", Offset = "0x4024D70", VA = "0x4024D70", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004200")]
	[Address(RVA = "0x4024F60", Offset = "0x4024F60", VA = "0x4024F60")]
	public MapEditorTexturePopup()
	{
	}
}
