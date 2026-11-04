// ==================== AoTTG2 cross-reference ====================
// Type: UI.ActionHandler
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ActionHandler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200075E")]
internal class ActionHandler : MonoBehaviour
{
	[Token(Token = "0x4002480")]
	[FieldOffset(Offset = "0x0")]
	private static readonly (string Name, Action<Human> Execute)[] Actions;

	[Token(Token = "0x4002481")]
	[FieldOffset(Offset = "0x20")]
	private WheelPopup _wheel;

	[Token(Token = "0x4002482")]
	[FieldOffset(Offset = "0x28")]
	private InGameManager _gameManager;

	[Token(Token = "0x4002483")]
	[FieldOffset(Offset = "0x30")]
	private Human _human;

	[Token(Token = "0x4002484")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<(string Name, Action<Human> Execute)> _visibleActions;

	[Token(Token = "0x4002485")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasCloak;

	[Token(Token = "0x4002486")]
	[FieldOffset(Offset = "0x41")]
	private bool _hasHorse;

	[Token(Token = "0x4002487")]
	[FieldOffset(Offset = "0x44")]
	private int _lastCloseFrame;

	[Token(Token = "0x17000CDE")]
	public bool IsActive
	{
		[Token(Token = "0x60047B6")]
		[Address(RVA = "0x221CF90", Offset = "0x221B590", VA = "0x18221CF90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CDF")]
	public bool BlocksInput
	{
		[Token(Token = "0x60047B7")]
		[Address(RVA = "0x221CF50", Offset = "0x221B550", VA = "0x18221CF50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60047B8")]
	[Address(RVA = "0x221BE00", Offset = "0x221A400", VA = "0x18221BE00")]
	private static void ExecuteHorseCommand(Human human, Func<Horse, bool> command, string sound)
	{
	}

	[Token(Token = "0x60047B9")]
	[Address(RVA = "0x221BA70", Offset = "0x221A070", VA = "0x18221BA70")]
	private void Awake()
	{
	}

	[Token(Token = "0x60047BA")]
	[Address(RVA = "0x221C970", Offset = "0x221AF70", VA = "0x18221C970")]
	public void ToggleActionWheel()
	{
	}

	[Token(Token = "0x60047BB")]
	[Address(RVA = "0x221C400", Offset = "0x221AA00", VA = "0x18221C400")]
	public void SetActionWheel(bool enable)
	{
	}

	[Token(Token = "0x60047BC")]
	[Address(RVA = "0x221C4B0", Offset = "0x221AAB0", VA = "0x18221C4B0")]
	private void ShowActions()
	{
	}

	[Token(Token = "0x60047BD")]
	[Address(RVA = "0x221BC30", Offset = "0x221A230", VA = "0x18221BC30")]
	private bool CanUseActions(out Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x60047BE")]
	[Address(RVA = "0x221BEF0", Offset = "0x221A4F0", VA = "0x18221BEF0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60047BF")]
	[Address(RVA = "0x221C170", Offset = "0x221A770", VA = "0x18221C170")]
	private void OnSelect()
	{
	}

	[Token(Token = "0x60047C0")]
	[Address(RVA = "0x221C0E0", Offset = "0x221A6E0", VA = "0x18221C0E0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60047C1")]
	[Address(RVA = "0x221CED0", Offset = "0x221B4D0", VA = "0x18221CED0")]
	public ActionHandler()
	{
	}
}
