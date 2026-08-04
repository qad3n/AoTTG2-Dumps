// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCustomAssetPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorCustomAssetPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomAssetPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20006C5")]
internal class MapEditorCustomAssetPopup : PromptPopup
{
	[Token(Token = "0x20006C6")]
	[CompilerGenerated]
	private sealed class _003CLoadAssetBundle_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x40020F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MapEditorCustomAssetPopup _003C_003E4__this;

		[Token(Token = "0x40020F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MapEditorMenu _003Cmenu_003E5__2;

		[Token(Token = "0x17000D2F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004397")]
			[Address(RVA = "0x4325B20", Offset = "0x4325B20", VA = "0x4325B20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D30")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004399")]
			[Address(RVA = "0x4325B70", Offset = "0x4325B70", VA = "0x4325B70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004394")]
		[Address(RVA = "0x4325570", Offset = "0x4325570", VA = "0x4325570")]
		[DebuggerHidden]
		public _003CLoadAssetBundle_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004395")]
		[Address(RVA = "0x43257A0", Offset = "0x43257A0", VA = "0x43257A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004396")]
		[Address(RVA = "0x43257B0", Offset = "0x43257B0", VA = "0x43257B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004398")]
		[Address(RVA = "0x4325B30", Offset = "0x4325B30", VA = "0x4325B30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40020EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40020EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _elements;

	[Token(Token = "0x40020ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<StringSetting> _settings;

	[Token(Token = "0x17000D2B")]
	protected override string Title
	{
		[Token(Token = "0x6004385")]
		[Address(RVA = "0x4323EE0", Offset = "0x4323EE0", VA = "0x4323EE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D2C")]
	protected override float Width
	{
		[Token(Token = "0x6004386")]
		[Address(RVA = "0x4323F10", Offset = "0x4323F10", VA = "0x4323F10", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2D")]
	protected override float Height
	{
		[Token(Token = "0x6004387")]
		[Address(RVA = "0x4323F20", Offset = "0x4323F20", VA = "0x4323F20", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004388")]
		[Address(RVA = "0x4323F30", Offset = "0x4323F30", VA = "0x4323F30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004389")]
	[Address(RVA = "0x4323F40", Offset = "0x4323F40", VA = "0x4323F40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600438A")]
	[Address(RVA = "0x4324190", Offset = "0x4324190", VA = "0x4324190", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600438B")]
	[Address(RVA = "0x4324590", Offset = "0x4324590", VA = "0x4324590")]
	private void AddAssetRow(string str)
	{
	}

	[Token(Token = "0x600438C")]
	[Address(RVA = "0x4324810", Offset = "0x4324810", VA = "0x4324810")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600438D")]
	[Address(RVA = "0x43254E0", Offset = "0x43254E0", VA = "0x43254E0")]
	[IteratorStateMachine(typeof(_003CLoadAssetBundle_003Ed__15))]
	private IEnumerator LoadAssetBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x600438E")]
	[Address(RVA = "0x4325590", Offset = "0x4325590", VA = "0x4325590")]
	public MapEditorCustomAssetPopup()
	{
	}
}
