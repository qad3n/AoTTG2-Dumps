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

[Token(Token = "0x20000B5")]
public class GisketchController : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<GisketchActionContext>> _actions;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GisketchUIRoot _root;

	[Token(Token = "0x17000077")]
	protected GisketchUIRoot Root
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x3A93830", Offset = "0x3A93830", VA = "0x3A93830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	protected GisketchUIState State
	{
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x3A93890", Offset = "0x3A93890", VA = "0x3A93890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x3A93900", Offset = "0x3A93900", VA = "0x3A93900", Slot = "5")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x3A93990", Offset = "0x3A93990", VA = "0x3A93990", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x3A93AB0", Offset = "0x3A93AB0", VA = "0x3A93AB0")]
	protected void RegisterAction(string actionId, Action<GisketchActionContext> action)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x3A93B20", Offset = "0x3A93B20", VA = "0x3A93B20")]
	protected bool TryBeginOperation(string operationKey, string message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x3A93BB0", Offset = "0x3A93BB0", VA = "0x3A93BB0")]
	protected void EndOperation(string operationKey)
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x3A93C40", Offset = "0x3A93C40", VA = "0x3A93C40")]
	protected bool IsOperationActive(string operationKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x3A93CD0", Offset = "0x3A93CD0", VA = "0x3A93CD0")]
	public GisketchController()
	{
	}
}
