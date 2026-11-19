// ==================== AoTTG2 cross-reference ====================
// Type: UI.ActionHandler
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000805")]
internal class ActionHandler : MonoBehaviour
{
	[Token(Token = "0x40027EE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly (string Name, Action<Human> Execute)[] Actions;

	[Token(Token = "0x40027EF")]
	[FieldOffset(Offset = "0x20")]
	private WheelPopup _wheel;

	[Token(Token = "0x40027F0")]
	[FieldOffset(Offset = "0x28")]
	private InGameManager _gameManager;

	[Token(Token = "0x40027F1")]
	[FieldOffset(Offset = "0x30")]
	private Human _human;

	[Token(Token = "0x40027F2")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<(string Name, Action<Human> Execute)> _visibleActions;

	[Token(Token = "0x40027F3")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasCloak;

	[Token(Token = "0x40027F4")]
	[FieldOffset(Offset = "0x41")]
	private bool _hasHorse;

	[Token(Token = "0x40027F5")]
	[FieldOffset(Offset = "0x44")]
	private int _lastCloseFrame;

	[Token(Token = "0x17000D5A")]
	public bool IsActive
	{
		[Token(Token = "0x6004CCB")]
		[Address(RVA = "0x5BFA6D0", Offset = "0x5BF96D0", VA = "0x5BFA6D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D5B")]
	public bool BlocksInput
	{
		[Token(Token = "0x6004CCC")]
		[Address(RVA = "0x5BFA750", Offset = "0x5BF9750", VA = "0x5BFA750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004CCD")]
	[Address(RVA = "0x5BFA7E0", Offset = "0x5BF97E0", VA = "0x5BFA7E0")]
	private static void ExecuteHorseCommand(Human human, Func<Horse, bool> command, string sound)
	{
	}

	[Token(Token = "0x6004CCE")]
	[Address(RVA = "0x5BFA8E0", Offset = "0x5BF98E0", VA = "0x5BFA8E0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004CCF")]
	[Address(RVA = "0x5BFAA80", Offset = "0x5BF9A80", VA = "0x5BFAA80")]
	public void ToggleActionWheel()
	{
	}

	[Token(Token = "0x6004CD0")]
	[Address(RVA = "0x5BFAB00", Offset = "0x5BF9B00", VA = "0x5BFAB00")]
	public void SetActionWheel(bool enable)
	{
	}

	[Token(Token = "0x6004CD1")]
	[Address(RVA = "0x5BFADB0", Offset = "0x5BF9DB0", VA = "0x5BFADB0")]
	private void ShowActions()
	{
	}

	[Token(Token = "0x6004CD2")]
	[Address(RVA = "0x5BFABF0", Offset = "0x5BF9BF0", VA = "0x5BFABF0")]
	private bool CanUseActions(out Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6004CD3")]
	[Address(RVA = "0x5BFB350", Offset = "0x5BFA350", VA = "0x5BFB350")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004CD4")]
	[Address(RVA = "0x5BFB510", Offset = "0x5BFA510", VA = "0x5BFB510")]
	private void OnSelect()
	{
	}

	[Token(Token = "0x6004CD5")]
	[Address(RVA = "0x5BFB780", Offset = "0x5BFA780", VA = "0x5BFB780")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004CD6")]
	[Address(RVA = "0x5BFB810", Offset = "0x5BFA810", VA = "0x5BFB810")]
	public ActionHandler()
	{
	}
}
