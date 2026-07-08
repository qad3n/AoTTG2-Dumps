using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000564")]
internal class CharacterEditorTitanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4001AC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _emote;

	[Token(Token = "0x17000AD1")]
	protected override float Height
	{
		[Token(Token = "0x600388D")]
		[Address(RVA = "0x3F57DE0", Offset = "0x3F57DE0", VA = "0x3F57DE0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600388E")]
	[Address(RVA = "0x3F57DF0", Offset = "0x3F57DF0", VA = "0x3F57DF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600388F")]
	[Address(RVA = "0x3F580A0", Offset = "0x3F580A0", VA = "0x3F580A0")]
	private void OnEmote()
	{
	}

	[Token(Token = "0x6003890")]
	[Address(RVA = "0x3F58100", Offset = "0x3F58100", VA = "0x3F58100")]
	public CharacterEditorTitanCategoryPanel()
	{
	}
}
