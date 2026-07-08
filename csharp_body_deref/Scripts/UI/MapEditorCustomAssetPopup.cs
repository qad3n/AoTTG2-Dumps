using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000679")]
internal class MapEditorCustomAssetPopup : PromptPopup
{
	[Token(Token = "0x200067A")]
	[CompilerGenerated]
	private sealed class _003CLoadAssetBundle_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001F99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001F9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001F9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4001F9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MapEditorCustomAssetPopup _003C_003E4__this;

		[Token(Token = "0x4001F9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MapEditorMenu _003Cmenu_003E5__2;

		[Token(Token = "0x17000CB5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004139")]
			[Address(RVA = "0x4011650", Offset = "0x4011650", VA = "0x4011650", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CB6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600413B")]
			[Address(RVA = "0x40116A0", Offset = "0x40116A0", VA = "0x40116A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004136")]
		[Address(RVA = "0x40110A0", Offset = "0x40110A0", VA = "0x40110A0")]
		[DebuggerHidden]
		public _003CLoadAssetBundle_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004137")]
		[Address(RVA = "0x40112D0", Offset = "0x40112D0", VA = "0x40112D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004138")]
		[Address(RVA = "0x40112E0", Offset = "0x40112E0", VA = "0x40112E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600413A")]
		[Address(RVA = "0x4011660", Offset = "0x4011660", VA = "0x4011660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001F96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4001F97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _elements;

	[Token(Token = "0x4001F98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<StringSetting> _settings;

	[Token(Token = "0x17000CB1")]
	protected override string Title
	{
		[Token(Token = "0x6004127")]
		[Address(RVA = "0x400FA10", Offset = "0x400FA10", VA = "0x400FA10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CB2")]
	protected override float Width
	{
		[Token(Token = "0x6004128")]
		[Address(RVA = "0x400FA40", Offset = "0x400FA40", VA = "0x400FA40", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB3")]
	protected override float Height
	{
		[Token(Token = "0x6004129")]
		[Address(RVA = "0x400FA50", Offset = "0x400FA50", VA = "0x400FA50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600412A")]
		[Address(RVA = "0x400FA60", Offset = "0x400FA60", VA = "0x400FA60", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600412B")]
	[Address(RVA = "0x400FA70", Offset = "0x400FA70", VA = "0x400FA70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600412C")]
	[Address(RVA = "0x400FCC0", Offset = "0x400FCC0", VA = "0x400FCC0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600412D")]
	[Address(RVA = "0x40100C0", Offset = "0x40100C0", VA = "0x40100C0")]
	private void AddAssetRow(string str)
	{
	}

	[Token(Token = "0x600412E")]
	[Address(RVA = "0x4010340", Offset = "0x4010340", VA = "0x4010340")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600412F")]
	[Address(RVA = "0x4011010", Offset = "0x4011010", VA = "0x4011010")]
	[IteratorStateMachine(typeof(_003CLoadAssetBundle_003Ed__15))]
	private IEnumerator LoadAssetBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x6004130")]
	[Address(RVA = "0x40110C0", Offset = "0x40110C0", VA = "0x40110C0")]
	public MapEditorCustomAssetPopup()
	{
	}
}
