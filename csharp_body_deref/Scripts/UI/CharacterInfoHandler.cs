// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterInfoHandler
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200060C")]
internal class CharacterInfoHandler : MonoBehaviour
{
	[Token(Token = "0x4001CEE")]
	[FieldOffset(Offset = "0x20")]
	protected HashSet<SetItem<BaseCharacter, CharacterInfoPopup>> _characterInfoPopups;

	[Token(Token = "0x4001CEF")]
	protected const float TitanRange = 250f;

	[Token(Token = "0x4001CF0")]
	protected const float HumanOffset = 2f;

	[Token(Token = "0x4001CF1")]
	protected const float TitanOffset = 20f;

	[Token(Token = "0x4001CF2")]
	protected const float CrawlerOffset = 5f;

	[Token(Token = "0x4001CF3")]
	protected const float ShifterOffset = 57f;

	[Token(Token = "0x4001CF4")]
	[FieldOffset(Offset = "0x28")]
	protected Color RedColor;

	[Token(Token = "0x4001CF5")]
	[FieldOffset(Offset = "0x38")]
	protected Color GreenColor;

	[Token(Token = "0x4001CF6")]
	[FieldOffset(Offset = "0x48")]
	protected LayerMask CullMask;

	[Token(Token = "0x4001CF7")]
	[FieldOffset(Offset = "0x50")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4001CF8")]
	[FieldOffset(Offset = "0x58")]
	private SetItem<BaseCharacter, CharacterInfoPopup> mockEntry;

	[Token(Token = "0x6003D1B")]
	[Address(RVA = "0x429EB90", Offset = "0x429EB90", VA = "0x429EB90")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003D1C")]
	[Address(RVA = "0x429EC50", Offset = "0x429EC50", VA = "0x429EC50")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6003D1D")]
	[Address(RVA = "0x42A07D0", Offset = "0x42A07D0", VA = "0x42A07D0")]
	protected CharacterInfoPopup CreateInfoPopup(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6003D1E")]
	[Address(RVA = "0x429FF40", Offset = "0x429FF40", VA = "0x429FF40")]
	protected void RefreshDict()
	{
	}

	[Token(Token = "0x6003D1F")]
	[Address(RVA = "0x42A0D10", Offset = "0x42A0D10", VA = "0x42A0D10")]
	public CharacterInfoHandler()
	{
	}
}
