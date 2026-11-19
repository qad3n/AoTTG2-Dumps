// ==================== AoTTG2 cross-reference ====================
// Type: UI.ItemHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ItemHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ItemHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000847")]
internal class ItemHandler : MonoBehaviour
{
	[Token(Token = "0x2000848")]
	[CompilerGenerated]
	private sealed class _003CUpdateForever_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40029C6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40029C7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40029C8")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x40029C9")]
		[FieldOffset(Offset = "0x28")]
		public ItemHandler _003C_003E4__this;

		[Token(Token = "0x17000DBA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004F22")]
			[Address(RVA = "0x5C31FD0", Offset = "0x5C30FD0", VA = "0x5C31FD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DBB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004F24")]
			[Address(RVA = "0x5C32020", Offset = "0x5C31020", VA = "0x5C32020", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004F1F")]
		[Address(RVA = "0x5C31BB0", Offset = "0x5C30BB0", VA = "0x5C31BB0")]
		[DebuggerHidden]
		public _003CUpdateForever_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004F20")]
		[Address(RVA = "0x5C31DA0", Offset = "0x5C30DA0", VA = "0x5C31DA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004F21")]
		[Address(RVA = "0x5C31DB0", Offset = "0x5C30DB0", VA = "0x5C31DB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004F23")]
		[Address(RVA = "0x5C31FE0", Offset = "0x5C30FE0", VA = "0x5C31FE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40029C3")]
	[FieldOffset(Offset = "0x20")]
	private BasePopup _itemWheelPopup;

	[Token(Token = "0x40029C4")]
	[FieldOffset(Offset = "0x28")]
	public bool IsActive;

	[Token(Token = "0x40029C5")]
	[FieldOffset(Offset = "0x30")]
	private InGameManager _inGameManager;

	[Token(Token = "0x6004F14")]
	[Address(RVA = "0x5C314A0", Offset = "0x5C304A0", VA = "0x5C314A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004F15")]
	[Address(RVA = "0x5C31690", Offset = "0x5C30690", VA = "0x5C31690")]
	private void Start()
	{
	}

	[Token(Token = "0x6004F16")]
	[Address(RVA = "0x5C31790", Offset = "0x5C30790", VA = "0x5C31790")]
	public void ToggleItemWheel()
	{
	}

	[Token(Token = "0x6004F17")]
	[Address(RVA = "0x5C30820", Offset = "0x5C2F820", VA = "0x5C30820")]
	public void SetItemWheel(bool enable)
	{
	}

	[Token(Token = "0x6004F18")]
	[Address(RVA = "0x5C31710", Offset = "0x5C30710", VA = "0x5C31710")]
	[IteratorStateMachine(typeof(_003CUpdateForever_003Ed__7))]
	private IEnumerator UpdateForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x6004F19")]
	[Address(RVA = "0x5C31BD0", Offset = "0x5C30BD0", VA = "0x5C31BD0")]
	private void OnItemWheelSelect()
	{
	}

	[Token(Token = "0x6004F1A")]
	[Address(RVA = "0x5C317A0", Offset = "0x5C307A0", VA = "0x5C317A0")]
	private List<string> GetItemWheelOptions()
	{
		return null;
	}

	[Token(Token = "0x6004F1B")]
	[Address(RVA = "0x5C31D60", Offset = "0x5C30D60", VA = "0x5C31D60")]
	public ItemHandler()
	{
	}
}
