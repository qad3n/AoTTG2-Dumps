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

[Token(Token = "0x20000B3")]
internal sealed class GisketchDebouncedInputAction : MonoBehaviour
{
	[Token(Token = "0x20000B4")]
	[CompilerGenerated]
	private sealed class _003CInvokeLater_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000389")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400038A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400038B")]
		[FieldOffset(Offset = "0x20")]
		public GisketchDebouncedInputAction _003C_003E4__this;

		[Token(Token = "0x17000077")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000521")]
			[Address(RVA = "0x3A282E0", Offset = "0x3A282E0", VA = "0x3A282E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000078")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000523")]
			[Address(RVA = "0x3A28330", Offset = "0x3A28330", VA = "0x3A28330", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600051E")]
		[Address(RVA = "0x3A27F90", Offset = "0x3A27F90", VA = "0x3A27F90")]
		[DebuggerHidden]
		public _003CInvokeLater_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600051F")]
		[Address(RVA = "0x3A280A0", Offset = "0x3A280A0", VA = "0x3A280A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000520")]
		[Address(RVA = "0x3A280B0", Offset = "0x3A280B0", VA = "0x3A280B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000522")]
		[Address(RVA = "0x3A282F0", Offset = "0x3A282F0", VA = "0x3A282F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x38")]
	private string _actionId;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x40")]
	private float _delay;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x48")]
	private Coroutine _pending;

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x3A27CE0", Offset = "0x3A27CE0", VA = "0x3A27CE0")]
	public void Setup(TMP_InputField input, IGisketchActionHandler actions, GisketchNodeDefinition node, float delay)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x3A27E40", Offset = "0x3A27E40", VA = "0x3A27E40")]
	private void OnInputChanged(string _)
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x3A27E50", Offset = "0x3A27E50", VA = "0x3A27E50")]
	private void Schedule()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x3A27F20", Offset = "0x3A27F20", VA = "0x3A27F20")]
	[IteratorStateMachine(typeof(_003CInvokeLater_003Ed__9))]
	private IEnumerator InvokeLater()
	{
		return null;
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x3A27FB0", Offset = "0x3A27FB0", VA = "0x3A27FB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x3A28090", Offset = "0x3A28090", VA = "0x3A28090")]
	public GisketchDebouncedInputAction()
	{
	}
}
