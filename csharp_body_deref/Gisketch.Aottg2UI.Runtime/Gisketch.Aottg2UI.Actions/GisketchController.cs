// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DC")]
public class GisketchController : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GisketchUIRoot _root;

	[Token(Token = "0x170000A9")]
	protected GisketchUIRoot Root
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x529EE90", Offset = "0x529DE90", VA = "0x529EE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	protected GisketchUIState State
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x529EEF0", Offset = "0x529DEF0", VA = "0x529EEF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x529EF60", Offset = "0x529DF60", VA = "0x529EF60", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x529EFF0", Offset = "0x529DFF0", VA = "0x529EFF0", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x529F0F0", Offset = "0x529E0F0", VA = "0x529F0F0")]
	protected void RegisterAction(string actionId, Action<GisketchActionContext> action)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x529F160", Offset = "0x529E160", VA = "0x529F160")]
	protected bool TryBeginOperation(string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x529F1F0", Offset = "0x529E1F0", VA = "0x529F1F0")]
	protected void EndOperation(string operationKey)
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x529F280", Offset = "0x529E280", VA = "0x529F280")]
	protected bool IsOperationActive(string operationKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x529F310", Offset = "0x529E310", VA = "0x529F310")]
	public GisketchController()
	{
	}
}
