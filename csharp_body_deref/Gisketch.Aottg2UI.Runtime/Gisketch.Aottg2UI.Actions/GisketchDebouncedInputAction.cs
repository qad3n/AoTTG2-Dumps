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

[Token(Token = "0x20000B6")]
internal sealed class GisketchDebouncedInputAction : MonoBehaviour
{
	[Token(Token = "0x20000B7")]
	[CompilerGenerated]
	private sealed class _003CInvokeLater_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003A5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003A6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003A7")]
		[FieldOffset(Offset = "0x20")]
		public GisketchDebouncedInputAction _003C_003E4__this;

		[Token(Token = "0x17000079")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000542")]
			[Address(RVA = "0x3A94390", Offset = "0x3A94390", VA = "0x3A94390", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000544")]
			[Address(RVA = "0x3A943E0", Offset = "0x3A943E0", VA = "0x3A943E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600053F")]
		[Address(RVA = "0x3A940A0", Offset = "0x3A940A0", VA = "0x3A940A0")]
		[DebuggerHidden]
		public _003CInvokeLater_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000540")]
		[Address(RVA = "0x3A941B0", Offset = "0x3A941B0", VA = "0x3A941B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000541")]
		[Address(RVA = "0x3A941C0", Offset = "0x3A941C0", VA = "0x3A941C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000543")]
		[Address(RVA = "0x3A943A0", Offset = "0x3A943A0", VA = "0x3A943A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x38")]
	private string _actionId;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x40")]
	private float _delay;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x48")]
	private Coroutine _pending;

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x3A93DF0", Offset = "0x3A93DF0", VA = "0x3A93DF0")]
	public void Setup(TMP_InputField input, IGisketchActionHandler actions, GisketchNodeDefinition node, float delay)
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x3A93F50", Offset = "0x3A93F50", VA = "0x3A93F50")]
	private void OnInputChanged(string _)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x3A93F60", Offset = "0x3A93F60", VA = "0x3A93F60")]
	private void Schedule()
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x3A94030", Offset = "0x3A94030", VA = "0x3A94030")]
	[IteratorStateMachine(typeof(_003CInvokeLater_003Ed__9))]
	private IEnumerator InvokeLater()
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x3A940C0", Offset = "0x3A940C0", VA = "0x3A940C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x3A941A0", Offset = "0x3A941A0", VA = "0x3A941A0")]
	public GisketchDebouncedInputAction()
	{
	}
}
