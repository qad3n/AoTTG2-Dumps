// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterInfoHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterInfoHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Assets.Scripts.Utility;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000768")]
internal class CharacterInfoHandler : MonoBehaviour
{
	[Token(Token = "0x400249F")]
	[FieldOffset(Offset = "0x20")]
	protected HashSet<SetItem<BaseCharacter, CharacterInfoPopup>> _characterInfoPopups;

	[Token(Token = "0x40024A0")]
	protected const float TitanRange = 250f;

	[Token(Token = "0x40024A1")]
	protected const float HumanOffset = 1.75f;

	[Token(Token = "0x40024A2")]
	protected const float TitanOffset = 20f;

	[Token(Token = "0x40024A3")]
	protected const float CrawlerOffset = 5f;

	[Token(Token = "0x40024A4")]
	protected const float ShifterOffset = 57f;

	[Token(Token = "0x40024A5")]
	[FieldOffset(Offset = "0x28")]
	protected Color RedColor;

	[Token(Token = "0x40024A6")]
	[FieldOffset(Offset = "0x38")]
	protected Color GreenColor;

	[Token(Token = "0x40024A7")]
	[FieldOffset(Offset = "0x48")]
	protected LayerMask CullMask;

	[Token(Token = "0x40024A8")]
	[FieldOffset(Offset = "0x50")]
	private InGameManager _inGameManager;

	[Token(Token = "0x40024A9")]
	[FieldOffset(Offset = "0x58")]
	private SetItem<BaseCharacter, CharacterInfoPopup> mockEntry;

	[Token(Token = "0x60047FC")]
	[Address(RVA = "0x2220910", Offset = "0x221EF10", VA = "0x182220910")]
	private void Awake()
	{
	}

	[Token(Token = "0x60047FD")]
	[Address(RVA = "0x2220F80", Offset = "0x221F580", VA = "0x182220F80")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x60047FE")]
	[Address(RVA = "0x22209F0", Offset = "0x221EFF0", VA = "0x1822209F0")]
	protected CharacterInfoPopup CreateInfoPopup(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x60047FF")]
	[Address(RVA = "0x2221B70", Offset = "0x2220170", VA = "0x182221B70")]
	protected void RefreshDict()
	{
	}

	[Token(Token = "0x6004800")]
	[Address(RVA = "0x2221F70", Offset = "0x2220570", VA = "0x182221F70")]
	public CharacterInfoHandler()
	{
	}
}
