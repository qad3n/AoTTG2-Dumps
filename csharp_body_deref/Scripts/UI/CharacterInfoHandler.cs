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

[Token(Token = "0x2000812")]
internal class CharacterInfoHandler : MonoBehaviour
{
	[Token(Token = "0x4002814")]
	[FieldOffset(Offset = "0x20")]
	protected HashSet<SetItem<BaseCharacter, CharacterInfoPopup>> _characterInfoPopups;

	[Token(Token = "0x4002815")]
	protected const float TitanRange = 250f;

	[Token(Token = "0x4002816")]
	protected const float HumanOffset = 1.75f;

	[Token(Token = "0x4002817")]
	protected const float TitanOffset = 20f;

	[Token(Token = "0x4002818")]
	protected const float CrawlerOffset = 5f;

	[Token(Token = "0x4002819")]
	protected const float ShifterOffset = 57f;

	[Token(Token = "0x400281A")]
	[FieldOffset(Offset = "0x28")]
	protected Color RedColor;

	[Token(Token = "0x400281B")]
	[FieldOffset(Offset = "0x38")]
	protected Color GreenColor;

	[Token(Token = "0x400281C")]
	[FieldOffset(Offset = "0x48")]
	protected LayerMask CullMask;

	[Token(Token = "0x400281D")]
	[FieldOffset(Offset = "0x50")]
	private InGameManager _inGameManager;

	[Token(Token = "0x400281E")]
	[FieldOffset(Offset = "0x58")]
	private SetItem<BaseCharacter, CharacterInfoPopup> mockEntry;

	[Token(Token = "0x6004D1C")]
	[Address(RVA = "0x5C00300", Offset = "0x5BFF300", VA = "0x5C00300")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004D1D")]
	[Address(RVA = "0x5C003C0", Offset = "0x5BFF3C0", VA = "0x5C003C0")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6004D1E")]
	[Address(RVA = "0x5C01A40", Offset = "0x5C00A40", VA = "0x5C01A40")]
	protected CharacterInfoPopup CreateInfoPopup(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6004D1F")]
	[Address(RVA = "0x5C01280", Offset = "0x5C00280", VA = "0x5C01280")]
	protected void RefreshDict()
	{
	}

	[Token(Token = "0x6004D20")]
	[Address(RVA = "0x5C01FF0", Offset = "0x5C00FF0", VA = "0x5C01FF0")]
	public CharacterInfoHandler()
	{
	}
}
