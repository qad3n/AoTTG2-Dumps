using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200014E")]
public sealed class AottgMainMenuTipPanelController : MonoBehaviour
{
	[Token(Token = "0x200014F")]
	[CompilerGenerated]
	private sealed class _003CRevealText_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007A0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007A1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40007A2")]
		[FieldOffset(Offset = "0x20")]
		public AottgMainMenuTipPanelController _003C_003E4__this;

		[Token(Token = "0x40007A3")]
		[FieldOffset(Offset = "0x28")]
		public string text;

		[Token(Token = "0x40007A4")]
		[FieldOffset(Offset = "0x30")]
		private float _003Celapsed_003E5__2;

		[Token(Token = "0x170000E0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000715")]
			[Address(RVA = "0x40C7E90", Offset = "0x40C7E90", VA = "0x40C7E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000717")]
			[Address(RVA = "0x40C7EE0", Offset = "0x40C7EE0", VA = "0x40C7EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000712")]
		[Address(RVA = "0x40C7CA0", Offset = "0x40C7CA0", VA = "0x40C7CA0")]
		[DebuggerHidden]
		public _003CRevealText_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000713")]
		[Address(RVA = "0x40C7CD0", Offset = "0x40C7CD0", VA = "0x40C7CD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000714")]
		[Address(RVA = "0x40C7CE0", Offset = "0x40C7CE0", VA = "0x40C7CE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000716")]
		[Address(RVA = "0x40C7EA0", Offset = "0x40C7EA0", VA = "0x40C7EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400079C")]
	private const float RevealSeconds = 0.45f;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x400079E")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _reveal;

	[Token(Token = "0x400079F")]
	[FieldOffset(Offset = "0x30")]
	private int _currentTipIndex;

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x40C76D0", Offset = "0x40C76D0", VA = "0x40C76D0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x40C7790", Offset = "0x40C7790", VA = "0x40C7790")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x40C76F0", Offset = "0x40C76F0", VA = "0x40C76F0")]
	public void ShowRandomTip(bool animate)
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x40C77B0", Offset = "0x40C77B0", VA = "0x40C77B0")]
	private string RandomTipText()
	{
		return null;
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x40C7A40", Offset = "0x40C7A40", VA = "0x40C7A40")]
	private void SetTipText(string text, bool animate)
	{
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x40C7C20", Offset = "0x40C7C20", VA = "0x40C7C20")]
	[IteratorStateMachine(typeof(_003CRevealText_003Ed__9))]
	private IEnumerator RevealText(string text)
	{
		return null;
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x40C7B80", Offset = "0x40C7B80", VA = "0x40C7B80")]
	private void SetStateText(string text)
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x40C7CC0", Offset = "0x40C7CC0", VA = "0x40C7CC0")]
	public AottgMainMenuTipPanelController()
	{
	}
}
