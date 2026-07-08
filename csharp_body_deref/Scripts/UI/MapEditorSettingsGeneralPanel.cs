using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000687")]
internal class MapEditorSettingsGeneralPanel : CategoryPanel
{
	[Token(Token = "0x17000CD6")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60041D8")]
		[Address(RVA = "0x4022880", Offset = "0x4022880", VA = "0x4022880", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60041D9")]
	[Address(RVA = "0x4022890", Offset = "0x4022890", VA = "0x4022890", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60041DA")]
	[Address(RVA = "0x4022F40", Offset = "0x4022F40", VA = "0x4022F40")]
	public MapEditorSettingsGeneralPanel()
	{
	}
}
