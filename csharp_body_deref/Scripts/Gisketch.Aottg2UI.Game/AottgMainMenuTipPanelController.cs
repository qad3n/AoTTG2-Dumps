// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000180")]
public sealed class AottgMainMenuTipPanelController : MonoBehaviour
{
	[Token(Token = "0x2000181")]
	[CompilerGenerated]
	private sealed class _003CRevealText_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400085F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000860")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000861")]
		[FieldOffset(Offset = "0x20")]
		public AottgMainMenuTipPanelController _003C_003E4__this;

		[Token(Token = "0x4000862")]
		[FieldOffset(Offset = "0x28")]
		public string text;

		[Token(Token = "0x4000863")]
		[FieldOffset(Offset = "0x30")]
		private float _003Celapsed_003E5__2;

		[Token(Token = "0x17000136")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000882")]
			[Address(RVA = "0x43F8D10", Offset = "0x43F8D10", VA = "0x43F8D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000137")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000884")]
			[Address(RVA = "0x43F8D60", Offset = "0x43F8D60", VA = "0x43F8D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600087F")]
		[Address(RVA = "0x43F8B20", Offset = "0x43F8B20", VA = "0x43F8B20")]
		[DebuggerHidden]
		public _003CRevealText_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000880")]
		[Address(RVA = "0x43F8B50", Offset = "0x43F8B50", VA = "0x43F8B50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000881")]
		[Address(RVA = "0x43F8B60", Offset = "0x43F8B60", VA = "0x43F8B60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000883")]
		[Address(RVA = "0x43F8D20", Offset = "0x43F8D20", VA = "0x43F8D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400085B")]
	private const float RevealSeconds = 0.45f;

	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _reveal;

	[Token(Token = "0x400085E")]
	[FieldOffset(Offset = "0x30")]
	private int _currentTipIndex;

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x43F8550", Offset = "0x43F8550", VA = "0x43F8550")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x43F8610", Offset = "0x43F8610", VA = "0x43F8610")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x43F8570", Offset = "0x43F8570", VA = "0x43F8570")]
	public void ShowRandomTip(bool animate)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x43F8630", Offset = "0x43F8630", VA = "0x43F8630")]
	private string RandomTipText()
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x43F88C0", Offset = "0x43F88C0", VA = "0x43F88C0")]
	private void SetTipText(string text, bool animate)
	{
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x43F8AA0", Offset = "0x43F8AA0", VA = "0x43F8AA0")]
	[IteratorStateMachine(typeof(_003CRevealText_003Ed__9))]
	private IEnumerator RevealText(string text)
	{
		return null;
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x43F8A00", Offset = "0x43F8A00", VA = "0x43F8A00")]
	private void SetStateText(string text)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x43F8B40", Offset = "0x43F8B40", VA = "0x43F8B40")]
	public AottgMainMenuTipPanelController()
	{
	}
}
