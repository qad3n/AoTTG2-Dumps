using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000579")]
internal class CreateGameGeneralPanel : CreateGameCategoryPanel
{
	[Token(Token = "0x4001AFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly StringSetting AddonSelection;

	[Token(Token = "0x17000AF3")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003923")]
		[Address(RVA = "0x3F64390", Offset = "0x3F64390", VA = "0x3F64390", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003924")]
	[Address(RVA = "0x3F643A0", Offset = "0x3F643A0", VA = "0x3F643A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003925")]
	[Address(RVA = "0x3F65EE0", Offset = "0x3F65EE0", VA = "0x3F65EE0")]
	private static void RemoveAddon(ListSetting<StringSetting> addons, string addonName)
	{
	}

	[Token(Token = "0x6003926")]
	[Address(RVA = "0x3F65CB0", Offset = "0x3F65CB0", VA = "0x3F65CB0")]
	public static void SetDefaultMisc()
	{
	}

	[Token(Token = "0x6003927")]
	[Address(RVA = "0x3F65FE0", Offset = "0x3F65FE0", VA = "0x3F65FE0")]
	public CreateGameGeneralPanel()
	{
	}
}
