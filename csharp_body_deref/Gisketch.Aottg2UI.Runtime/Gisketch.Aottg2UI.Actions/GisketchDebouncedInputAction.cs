// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDebouncedInputAction
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000D7")]
internal sealed class GisketchDebouncedInputAction : MonoBehaviour
{
	[Token(Token = "0x20000D8")]
	[CompilerGenerated]
	private sealed class _003CInvokeLater_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400045F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000460")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000461")]
		[FieldOffset(Offset = "0x20")]
		public GisketchDebouncedInputAction _003C_003E4__this;

		[Token(Token = "0x170000AB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000696")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000AC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000698")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000693")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CInvokeLater_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000694")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000695")]
		[Address(RVA = "0x1909F90", Offset = "0x1908590", VA = "0x181909F90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000697")]
		[Address(RVA = "0x190A080", Offset = "0x1908680", VA = "0x18190A080", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x38")]
	private string _actionId;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x40")]
	private string _commitActionId;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x48")]
	private float _delay;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x50")]
	private Coroutine _pending;

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x18FD9D0", Offset = "0x18FBFD0", VA = "0x1818FD9D0")]
	public void Setup(TMP_InputField input, IGisketchActionHandler actions, GisketchNodeDefinition node, float delay)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x18FD8B0", Offset = "0x18FBEB0", VA = "0x1818FD8B0")]
	private void OnInputChanged(string _)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x18FD8B0", Offset = "0x18FBEB0", VA = "0x1818FD8B0")]
	private void Schedule()
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x18FD6E0", Offset = "0x18FBCE0", VA = "0x1818FD6E0")]
	[IteratorStateMachine(typeof(_003CInvokeLater_003Ed__10))]
	private IEnumerator InvokeLater()
	{
		return null;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x18FD970", Offset = "0x18FBF70", VA = "0x1818FD970")]
	private void OnInputCommitted(string _)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x18FD560", Offset = "0x18FBB60", VA = "0x1818FD560")]
	private void Dispatch(string actionId)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x18FD750", Offset = "0x18FBD50", VA = "0x1818FD750")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchDebouncedInputAction()
	{
	}
}
