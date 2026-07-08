using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005CD")]
internal class CharacterTitanPanel : CharacterCategoryPanel
{
	[Token(Token = "0x4001C08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly string LocaleCategory;

	[Token(Token = "0x6003B3D")]
	[Address(RVA = "0x3F97300", Offset = "0x3F97300", VA = "0x3F97300", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B3E")]
	[Address(RVA = "0x3F98520", Offset = "0x3F98520", VA = "0x3F98520")]
	protected void OnLoadoutClick()
	{
	}

	[Token(Token = "0x6003B3F")]
	[Address(RVA = "0x3F97C90", Offset = "0x3F97C90", VA = "0x3F97C90")]
	protected string[] GetCharOptions()
	{
		return null;
	}

	[Token(Token = "0x6003B40")]
	[Address(RVA = "0x3F97DA0", Offset = "0x3F97DA0", VA = "0x3F97DA0")]
	protected string[] GetCharIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003B41")]
	[Address(RVA = "0x3F98600", Offset = "0x3F98600", VA = "0x3F98600")]
	public CharacterTitanPanel()
	{
	}
}
