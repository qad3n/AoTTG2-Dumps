// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDebouncedInputAction.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DD")]
internal sealed class GisketchDebouncedInputAction : MonoBehaviour
{
	[Token(Token = "0x20000DE")]
	[CompilerGenerated]
	private sealed class _003CInvokeLater_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000486")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000487")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000488")]
		[FieldOffset(Offset = "0x20")]
		public GisketchDebouncedInputAction _003C_003E4__this;

		[Token(Token = "0x170000AB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60006E4")]
			[Address(RVA = "0x529FBF0", Offset = "0x529EBF0", VA = "0x529FBF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000AC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006E6")]
			[Address(RVA = "0x529FC40", Offset = "0x529EC40", VA = "0x529FC40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x529F760", Offset = "0x529E760", VA = "0x529F760")]
		[DebuggerHidden]
		public _003CInvokeLater_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x529FB00", Offset = "0x529EB00", VA = "0x529FB00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x529FB10", Offset = "0x529EB10", VA = "0x529FB10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x529FC00", Offset = "0x529EC00", VA = "0x529FC00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x38")]
	private string _actionId;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x40")]
	private string _commitActionId;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x48")]
	private float _delay;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x50")]
	private Coroutine _pending;

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x529F430", Offset = "0x529E430", VA = "0x529F430")]
	public void Setup(TMP_InputField input, IGisketchActionHandler actions, GisketchNodeDefinition node, float delay)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x529F620", Offset = "0x529E620", VA = "0x529F620")]
	private void OnInputChanged(string _)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x529F630", Offset = "0x529E630", VA = "0x529F630")]
	private void Schedule()
	{
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x529F6F0", Offset = "0x529E6F0", VA = "0x529F6F0")]
	[IteratorStateMachine(typeof(_003CInvokeLater_003Ed__10))]
	private IEnumerator InvokeLater()
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x529F780", Offset = "0x529E780", VA = "0x529F780")]
	private void OnInputCommitted(string _)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x529F7E0", Offset = "0x529E7E0", VA = "0x529F7E0")]
	private void Dispatch(string actionId)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x529F990", Offset = "0x529E990", VA = "0x529F990")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x529FAF0", Offset = "0x529EAF0", VA = "0x529FAF0")]
	public GisketchDebouncedInputAction()
	{
	}
}
