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

[Token(Token = "0x200079A")]
internal class ItemHandler : MonoBehaviour
{
	[Token(Token = "0x200079B")]
	[CompilerGenerated]
	private sealed class _003CUpdateForever_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002646")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002647")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002648")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4002649")]
		[FieldOffset(Offset = "0x28")]
		public ItemHandler _003C_003E4__this;

		[Token(Token = "0x17000D3E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60049F4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D3F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60049F6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60049F1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CUpdateForever_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60049F2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60049F3")]
		[Address(RVA = "0x226DF00", Offset = "0x226C500", VA = "0x18226DF00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60049F5")]
		[Address(RVA = "0x226E150", Offset = "0x226C750", VA = "0x18226E150", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002642")]
	[FieldOffset(Offset = "0x0")]
	public static List<string> AvailableItems;

	[Token(Token = "0x4002643")]
	[FieldOffset(Offset = "0x20")]
	private BasePopup _itemWheelPopup;

	[Token(Token = "0x4002644")]
	[FieldOffset(Offset = "0x28")]
	public bool IsActive;

	[Token(Token = "0x4002645")]
	[FieldOffset(Offset = "0x30")]
	private InGameManager _inGameManager;

	[Token(Token = "0x60049E5")]
	[Address(RVA = "0x2255030", Offset = "0x2253630", VA = "0x182255030")]
	private void Awake()
	{
	}

	[Token(Token = "0x60049E6")]
	[Address(RVA = "0x22558D0", Offset = "0x2253ED0", VA = "0x1822558D0")]
	private void Start()
	{
	}

	[Token(Token = "0x60049E7")]
	[Address(RVA = "0x2255950", Offset = "0x2253F50", VA = "0x182255950")]
	public void ToggleItemWheel()
	{
	}

	[Token(Token = "0x60049E8")]
	[Address(RVA = "0x22556E0", Offset = "0x2253CE0", VA = "0x1822556E0")]
	public void SetItemWheel(bool enable)
	{
	}

	[Token(Token = "0x60049E9")]
	[Address(RVA = "0x2255A10", Offset = "0x2254010", VA = "0x182255A10")]
	[IteratorStateMachine(typeof(_003CUpdateForever_003Ed__8))]
	private IEnumerator UpdateForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x60049EA")]
	[Address(RVA = "0x2255520", Offset = "0x2253B20", VA = "0x182255520")]
	private void OnItemWheelSelect()
	{
	}

	[Token(Token = "0x60049EB")]
	[Address(RVA = "0x2255270", Offset = "0x2253870", VA = "0x182255270")]
	private List<string> GetItemWheelOptions()
	{
		return null;
	}

	[Token(Token = "0x60049EC")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ItemHandler()
	{
	}
}
