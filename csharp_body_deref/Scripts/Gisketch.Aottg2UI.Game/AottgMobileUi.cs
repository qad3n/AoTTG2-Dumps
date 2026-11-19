// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMobileUi
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BB")]
internal static class AottgMobileUi
{
	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x0")]
	private static AottgInGameView _view;

	[Token(Token = "0x170001D5")]
	private static AottgInGameView View
	{
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x57C4F90", Offset = "0x57C3F90", VA = "0x57C4F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x57C4EA0", Offset = "0x57C3EA0", VA = "0x57C4EA0")]
	static AottgMobileUi()
	{
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x57C4D50", Offset = "0x57C3D50", VA = "0x57C4D50")]
	public static GameObject CreateRect(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x57C5070", Offset = "0x57C4070", VA = "0x57C5070")]
	public static TMP_Text AddText(Transform parent, string value)
	{
		return null;
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x57C5250", Offset = "0x57C4250", VA = "0x57C5250")]
	public static void CreateControls(Transform parent, InGameMenu menu)
	{
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x57C5260", Offset = "0x57C4260", VA = "0x57C5260")]
	public static void CreateControls(Transform parent, MapEditorMenu menu)
	{
	}
}
