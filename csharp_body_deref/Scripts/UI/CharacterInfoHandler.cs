using System.Collections.Generic;
using Assets.Scripts.Utility;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005C7")]
internal class CharacterInfoHandler : MonoBehaviour
{
	[Token(Token = "0x4001BDB")]
	[FieldOffset(Offset = "0x20")]
	protected HashSet<SetItem<BaseCharacter, CharacterInfoPopup>> _characterInfoPopups;

	[Token(Token = "0x4001BDC")]
	protected const float TitanRange = 250f;

	[Token(Token = "0x4001BDD")]
	protected const float HumanOffset = 2f;

	[Token(Token = "0x4001BDE")]
	protected const float TitanOffset = 20f;

	[Token(Token = "0x4001BDF")]
	protected const float CrawlerOffset = 5f;

	[Token(Token = "0x4001BE0")]
	protected const float ShifterOffset = 57f;

	[Token(Token = "0x4001BE1")]
	[FieldOffset(Offset = "0x28")]
	protected Color RedColor;

	[Token(Token = "0x4001BE2")]
	[FieldOffset(Offset = "0x38")]
	protected Color GreenColor;

	[Token(Token = "0x4001BE3")]
	[FieldOffset(Offset = "0x48")]
	protected LayerMask CullMask;

	[Token(Token = "0x4001BE4")]
	[FieldOffset(Offset = "0x50")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4001BE5")]
	[FieldOffset(Offset = "0x58")]
	private SetItem<BaseCharacter, CharacterInfoPopup> mockEntry;

	[Token(Token = "0x6003B0B")]
	[Address(RVA = "0x3F90C20", Offset = "0x3F90C20", VA = "0x3F90C20")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003B0C")]
	[Address(RVA = "0x3F90CE0", Offset = "0x3F90CE0", VA = "0x3F90CE0")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6003B0D")]
	[Address(RVA = "0x3F92860", Offset = "0x3F92860", VA = "0x3F92860")]
	protected CharacterInfoPopup CreateInfoPopup(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6003B0E")]
	[Address(RVA = "0x3F91FD0", Offset = "0x3F91FD0", VA = "0x3F91FD0")]
	protected void RefreshDict()
	{
	}

	[Token(Token = "0x6003B0F")]
	[Address(RVA = "0x3F92D10", Offset = "0x3F92D10", VA = "0x3F92D10")]
	public CharacterInfoHandler()
	{
	}
}
