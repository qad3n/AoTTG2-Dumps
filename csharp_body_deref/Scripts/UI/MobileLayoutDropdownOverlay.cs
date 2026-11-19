// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutDropdownOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutDropdownOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000779")]
internal class MobileLayoutDropdownOverlay : MonoBehaviour
{
	[Token(Token = "0x40025B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FieldInfo OptionsPanelField;

	[Token(Token = "0x40025B5")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _optionsPanel;

	[Token(Token = "0x6004812")]
	[Address(RVA = "0x5BA8470", Offset = "0x5BA7470", VA = "0x5BA8470")]
	public void Setup(DropdownSettingElement dropdown, Transform overlayRoot)
	{
	}

	[Token(Token = "0x6004813")]
	[Address(RVA = "0x5BB07C0", Offset = "0x5BAF7C0", VA = "0x5BB07C0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004814")]
	[Address(RVA = "0x5BB0860", Offset = "0x5BAF860", VA = "0x5BB0860")]
	public MobileLayoutDropdownOverlay()
	{
	}
}
