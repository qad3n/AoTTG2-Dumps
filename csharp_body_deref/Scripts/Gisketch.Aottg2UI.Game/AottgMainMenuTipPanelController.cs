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

[Token(Token = "0x2000286")]
public sealed class AottgMainMenuTipPanelController : MonoBehaviour
{
	[Token(Token = "0x2000287")]
	[CompilerGenerated]
	private sealed class _003CRevealText_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000D00")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000D01")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000D02")]
		[FieldOffset(Offset = "0x20")]
		public AottgMainMenuTipPanelController _003C_003E4__this;

		[Token(Token = "0x4000D03")]
		[FieldOffset(Offset = "0x28")]
		public string text;

		[Token(Token = "0x4000D04")]
		[FieldOffset(Offset = "0x30")]
		private float _003Celapsed_003E5__2;

		[Token(Token = "0x170001BA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000F36")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F38")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F33")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRevealText_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F34")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F35")]
		[Address(RVA = "0x1DE7C70", Offset = "0x1DE6270", VA = "0x181DE7C70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x1DE7E40", Offset = "0x1DE6440", VA = "0x181DE7E40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000CFC")]
	private const float RevealSeconds = 0.45f;

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _reveal;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x30")]
	private int _currentTipIndex;

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x1DE39C0", Offset = "0x1DE1FC0", VA = "0x181DE39C0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x1DE34B0", Offset = "0x1DE1AB0", VA = "0x181DE34B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x1DE3AC0", Offset = "0x1DE20C0", VA = "0x181DE3AC0")]
	public void ShowRandomTip(bool animate)
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x1DE34D0", Offset = "0x1DE1AD0", VA = "0x181DE34D0")]
	private string RandomTipText()
	{
		return null;
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x1DE3890", Offset = "0x1DE1E90", VA = "0x181DE3890")]
	private void SetTipText(string text, bool animate)
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x1DE3750", Offset = "0x1DE1D50", VA = "0x181DE3750")]
	[IteratorStateMachine(typeof(_003CRevealText_003Ed__9))]
	private IEnumerator RevealText(string text)
	{
		return null;
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x1DE37E0", Offset = "0x1DE1DE0", VA = "0x181DE37E0")]
	private void SetStateText(string text)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x1DE3C80", Offset = "0x1DE2280", VA = "0x181DE3C80")]
	public AottgMainMenuTipPanelController()
	{
	}
}
