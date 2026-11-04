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

[Token(Token = "0x20000D6")]
public class GisketchController : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GisketchUIRoot _root;

	[Token(Token = "0x170000A9")]
	protected GisketchUIRoot Root
	{
		[Token(Token = "0x6000682")]
		[Address(RVA = "0x18FD460", Offset = "0x18FBA60", VA = "0x1818FD460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	protected GisketchUIState State
	{
		[Token(Token = "0x6000683")]
		[Address(RVA = "0x18FD4D0", Offset = "0x18FBAD0", VA = "0x1818FD4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x18FD0A0", Offset = "0x18FB6A0", VA = "0x1818FD0A0", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x18FD160", Offset = "0x18FB760", VA = "0x1818FD160", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x18FD2B0", Offset = "0x18FB8B0", VA = "0x1818FD2B0")]
	protected void RegisterAction(string actionId, Action<GisketchActionContext> action)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x18FD330", Offset = "0x18FB930", VA = "0x1818FD330")]
	protected bool TryBeginOperation(string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x18FD130", Offset = "0x18FB730", VA = "0x1818FD130")]
	protected void EndOperation(string operationKey)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x18FD280", Offset = "0x18FB880", VA = "0x1818FD280")]
	protected bool IsOperationActive(string operationKey)
	{
		return default(bool);
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x18FD370", Offset = "0x18FB970", VA = "0x1818FD370")]
	public GisketchController()
	{
	}
}
