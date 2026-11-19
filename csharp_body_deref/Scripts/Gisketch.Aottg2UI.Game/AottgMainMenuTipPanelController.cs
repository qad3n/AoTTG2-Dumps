// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Update status: CHANGED in this game update
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

[Token(Token = "0x20002B1")]
public sealed class AottgMainMenuTipPanelController : MonoBehaviour
{
	[Token(Token = "0x20002B2")]
	[CompilerGenerated]
	private sealed class _003CRevealText_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000DC6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000DC7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000DC8")]
		[FieldOffset(Offset = "0x20")]
		public AottgMainMenuTipPanelController _003C_003E4__this;

		[Token(Token = "0x4000DC9")]
		[FieldOffset(Offset = "0x28")]
		public string text;

		[Token(Token = "0x4000DCA")]
		[FieldOffset(Offset = "0x30")]
		private float _003Celapsed_003E5__2;

		[Token(Token = "0x170001C9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600105D")]
			[Address(RVA = "0x57C2940", Offset = "0x57C1940", VA = "0x57C2940", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001CA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600105F")]
			[Address(RVA = "0x57C2990", Offset = "0x57C1990", VA = "0x57C2990", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600105A")]
		[Address(RVA = "0x57C2710", Offset = "0x57C1710", VA = "0x57C2710")]
		[DebuggerHidden]
		public _003CRevealText_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600105B")]
		[Address(RVA = "0x57C2740", Offset = "0x57C1740", VA = "0x57C2740", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600105C")]
		[Address(RVA = "0x57C2750", Offset = "0x57C1750", VA = "0x57C2750", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600105E")]
		[Address(RVA = "0x57C2950", Offset = "0x57C1950", VA = "0x57C2950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000DC2")]
	private const float RevealSeconds = 0.45f;

	[Token(Token = "0x4000DC3")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000DC4")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _reveal;

	[Token(Token = "0x4000DC5")]
	[FieldOffset(Offset = "0x30")]
	private int _currentTipIndex;

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x57C23D0", Offset = "0x57C13D0", VA = "0x57C23D0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x57C2490", Offset = "0x57C1490", VA = "0x57C2490")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x57C23F0", Offset = "0x57C13F0", VA = "0x57C23F0")]
	public void ShowRandomTip(bool animate)
	{
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x57C24B0", Offset = "0x57C14B0", VA = "0x57C24B0")]
	private void SetTipText(string text, bool animate)
	{
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x57C2690", Offset = "0x57C1690", VA = "0x57C2690")]
	[IteratorStateMachine(typeof(_003CRevealText_003Ed__8))]
	private IEnumerator RevealText(string text)
	{
		return null;
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x57C25F0", Offset = "0x57C15F0", VA = "0x57C25F0")]
	private void SetStateText(string text)
	{
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x57C2730", Offset = "0x57C1730", VA = "0x57C2730")]
	public AottgMainMenuTipPanelController()
	{
	}
}
