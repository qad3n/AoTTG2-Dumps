using System.Collections.Generic;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200068C")]
internal class MapEditorTexturePanel : MapEditorAddObjectPanel
{
	[Token(Token = "0x60041F3")]
	[Address(RVA = "0x4024750", Offset = "0x4024750", VA = "0x4024750", Slot = "35")]
	protected override List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x60041F4")]
	[Address(RVA = "0x4024940", Offset = "0x4024940", VA = "0x4024940", Slot = "36")]
	protected override string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x60041F5")]
	[Address(RVA = "0x4024980", Offset = "0x4024980", VA = "0x4024980", Slot = "37")]
	protected override void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x60041F6")]
	[Address(RVA = "0x4024AC0", Offset = "0x4024AC0", VA = "0x4024AC0")]
	public MapEditorTexturePanel()
	{
	}
}
