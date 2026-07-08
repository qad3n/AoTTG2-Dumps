using System;
using System.Collections.Generic;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B2")]
public class GisketchController : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GisketchUIRoot _root;

	[Token(Token = "0x17000075")]
	protected GisketchUIRoot Root
	{
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x3A27720", Offset = "0x3A27720", VA = "0x3A27720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	protected GisketchUIState State
	{
		[Token(Token = "0x6000510")]
		[Address(RVA = "0x3A27780", Offset = "0x3A27780", VA = "0x3A27780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x3A277F0", Offset = "0x3A277F0", VA = "0x3A277F0", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x3A27880", Offset = "0x3A27880", VA = "0x3A27880", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x3A279A0", Offset = "0x3A279A0", VA = "0x3A279A0")]
	protected void RegisterAction(string actionId, Action<GisketchActionContext> action)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x3A27A10", Offset = "0x3A27A10", VA = "0x3A27A10")]
	protected bool TryBeginOperation(string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x3A27AA0", Offset = "0x3A27AA0", VA = "0x3A27AA0")]
	protected void EndOperation(string operationKey)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x3A27B30", Offset = "0x3A27B30", VA = "0x3A27B30")]
	protected bool IsOperationActive(string operationKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x3A27BC0", Offset = "0x3A27BC0", VA = "0x3A27BC0")]
	public GisketchController()
	{
	}
}
