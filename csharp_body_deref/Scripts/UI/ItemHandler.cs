// ==================== AoTTG2 cross-reference ====================
// Type: UI.ItemHandler
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200063E")]
internal class ItemHandler : MonoBehaviour
{
	[Token(Token = "0x200063F")]
	[CompilerGenerated]
	private sealed class _003CUpdateForever_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E83")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E84")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E85")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001E86")]
		[FieldOffset(Offset = "0x28")]
		public ItemHandler _003C_003E4__this;

		[Token(Token = "0x17000BE7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003EED")]
			[Address(RVA = "0x42CE3A0", Offset = "0x42CE3A0", VA = "0x42CE3A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003EEF")]
			[Address(RVA = "0x42CE3F0", Offset = "0x42CE3F0", VA = "0x42CE3F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003EEA")]
		[Address(RVA = "0x42CDE00", Offset = "0x42CDE00", VA = "0x42CDE00")]
		[DebuggerHidden]
		public _003CUpdateForever_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003EEB")]
		[Address(RVA = "0x42CE1C0", Offset = "0x42CE1C0", VA = "0x42CE1C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003EEC")]
		[Address(RVA = "0x42CE1D0", Offset = "0x42CE1D0", VA = "0x42CE1D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003EEE")]
		[Address(RVA = "0x42CE3B0", Offset = "0x42CE3B0", VA = "0x42CE3B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001E7F")]
	[FieldOffset(Offset = "0x0")]
	public static List<string> AvailableItems;

	[Token(Token = "0x4001E80")]
	[FieldOffset(Offset = "0x20")]
	private BasePopup _itemWheelPopup;

	[Token(Token = "0x4001E81")]
	[FieldOffset(Offset = "0x28")]
	public bool IsActive;

	[Token(Token = "0x4001E82")]
	[FieldOffset(Offset = "0x30")]
	private InGameManager _inGameManager;

	[Token(Token = "0x6003EDF")]
	[Address(RVA = "0x42CD570", Offset = "0x42CD570", VA = "0x42CD570")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003EE0")]
	[Address(RVA = "0x42CD6B0", Offset = "0x42CD6B0", VA = "0x42CD6B0")]
	private void Start()
	{
	}

	[Token(Token = "0x6003EE1")]
	[Address(RVA = "0x42CD7B0", Offset = "0x42CD7B0", VA = "0x42CD7B0")]
	public void ToggleItemWheel()
	{
	}

	[Token(Token = "0x6003EE2")]
	[Address(RVA = "0x42CD7C0", Offset = "0x42CD7C0", VA = "0x42CD7C0")]
	public void SetItemWheel(bool enable)
	{
	}

	[Token(Token = "0x6003EE3")]
	[Address(RVA = "0x42CD730", Offset = "0x42CD730", VA = "0x42CD730")]
	[IteratorStateMachine(typeof(_003CUpdateForever_003Ed__8))]
	private IEnumerator UpdateForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003EE4")]
	[Address(RVA = "0x42CDE20", Offset = "0x42CDE20", VA = "0x42CDE20")]
	private void OnItemWheelSelect()
	{
	}

	[Token(Token = "0x6003EE5")]
	[Address(RVA = "0x42CD930", Offset = "0x42CD930", VA = "0x42CD930")]
	private List<string> GetItemWheelOptions()
	{
		return null;
	}

	[Token(Token = "0x6003EE6")]
	[Address(RVA = "0x42CDFB0", Offset = "0x42CDFB0", VA = "0x42CDFB0")]
	public ItemHandler()
	{
	}
}
