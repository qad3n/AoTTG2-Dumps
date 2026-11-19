// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutPanel
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200073A")]
internal sealed class MobileLayoutPanel : CategoryPanel
{
	[Token(Token = "0x6004630")]
	[Address(RVA = "0x5B6DB30", Offset = "0x5B6CB30", VA = "0x5B6DB30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MobileLayoutPanel.c (UI.MobileLayoutPanel$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		AottgInGameView __this_00;
		String text;
		String value;
		Enum local_30;

		this.Setup(parent);
		__this_00 = new AottgInGameView();
		text = UIManager.GetLocale("SettingsPopup", "Keybinds", "MobileLayoutEdit", "", "");
		parent_00 = this.SinglePanel;
		local_30.klass = (Enum)typeof(MobileInputLayoutRole);
		local_30.monitor = (IntPtr)0xffffffffffffffff;
		value = local_30.ToString();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Button(parent_00, text, "mobile.layout.open", value, 280.0, 44.0, 3);
		return;
	}

	[Token(Token = "0x6004631")]
	[Address(RVA = "0x5B6DCB0", Offset = "0x5B6CCB0", VA = "0x5B6DCB0")]
	public MobileLayoutPanel()
	{
		// Lifted from source/cpp/UI/MobileLayoutPanel.c (UI.MobileLayoutPanel$$.ctor): clean
		base();
		return;
	}
}
