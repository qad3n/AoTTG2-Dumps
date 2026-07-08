using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005F3")]
internal class ItemHandler : MonoBehaviour
{
	[Token(Token = "0x20005F4")]
	[CompilerGenerated]
	private sealed class _003CUpdateForever_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D45")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D46")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D47")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001D48")]
		[FieldOffset(Offset = "0x28")]
		public ItemHandler _003C_003E4__this;

		[Token(Token = "0x17000B6F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CA2")]
			[Address(RVA = "0x3FBC180", Offset = "0x3FBC180", VA = "0x3FBC180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B70")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CA4")]
			[Address(RVA = "0x3FBC1D0", Offset = "0x3FBC1D0", VA = "0x3FBC1D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003C9F")]
		[Address(RVA = "0x3FBBBE0", Offset = "0x3FBBBE0", VA = "0x3FBBBE0")]
		[DebuggerHidden]
		public _003CUpdateForever_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003CA0")]
		[Address(RVA = "0x3FBBFA0", Offset = "0x3FBBFA0", VA = "0x3FBBFA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003CA1")]
		[Address(RVA = "0x3FBBFB0", Offset = "0x3FBBFB0", VA = "0x3FBBFB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003CA3")]
		[Address(RVA = "0x3FBC190", Offset = "0x3FBC190", VA = "0x3FBC190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001D41")]
	[FieldOffset(Offset = "0x0")]
	public static List<string> AvailableItems;

	[Token(Token = "0x4001D42")]
	[FieldOffset(Offset = "0x20")]
	private BasePopup _itemWheelPopup;

	[Token(Token = "0x4001D43")]
	[FieldOffset(Offset = "0x28")]
	public bool IsActive;

	[Token(Token = "0x4001D44")]
	[FieldOffset(Offset = "0x30")]
	private InGameManager _inGameManager;

	[Token(Token = "0x6003C94")]
	[Address(RVA = "0x3FBB4C0", Offset = "0x3FBB4C0", VA = "0x3FBB4C0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003C95")]
	[Address(RVA = "0x3FBB600", Offset = "0x3FBB600", VA = "0x3FBB600")]
	private void Start()
	{
	}

	[Token(Token = "0x6003C96")]
	[Address(RVA = "0x3FBB700", Offset = "0x3FBB700", VA = "0x3FBB700")]
	public void ToggleItemWheel()
	{
	}

	[Token(Token = "0x6003C97")]
	[Address(RVA = "0x3FBA510", Offset = "0x3FBA510", VA = "0x3FBA510")]
	public void SetItemWheel(bool enable)
	{
	}

	[Token(Token = "0x6003C98")]
	[Address(RVA = "0x3FBB680", Offset = "0x3FBB680", VA = "0x3FBB680")]
	[IteratorStateMachine(typeof(_003CUpdateForever_003Ed__8))]
	private IEnumerator UpdateForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x6003C99")]
	[Address(RVA = "0x3FBBC00", Offset = "0x3FBBC00", VA = "0x3FBBC00")]
	private void OnItemWheelSelect()
	{
	}

	[Token(Token = "0x6003C9A")]
	[Address(RVA = "0x3FBB710", Offset = "0x3FBB710", VA = "0x3FBB710")]
	private List<string> GetItemWheelOptions()
	{
		return null;
	}

	[Token(Token = "0x6003C9B")]
	[Address(RVA = "0x3FBBD90", Offset = "0x3FBBD90", VA = "0x3FBBD90")]
	public ItemHandler()
	{
	}
}
