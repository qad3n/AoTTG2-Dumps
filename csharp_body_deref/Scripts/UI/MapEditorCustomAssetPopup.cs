// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCustomAssetPopup
// Update status: CHANGED in this game update
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
using Map;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000823")]
internal class MapEditorCustomAssetPopup : PromptPopup
{
	[Token(Token = "0x2000824")]
	[CompilerGenerated]
	private sealed class _003CLoadAssetBundle_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40028D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40028D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40028D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x40028D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MapEditorCustomAssetPopup _003C_003E4__this;

		[Token(Token = "0x40028D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MapEditorMenu _003Cmenu_003E5__2;

		[Token(Token = "0x17000E77")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004EA3")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E78")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004EA5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004EA0")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadAssetBundle_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004EA1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004EA2")]
		[Address(RVA = "0x22B8B30", Offset = "0x22B7130", VA = "0x1822B8B30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004EA4")]
		[Address(RVA = "0x22B8E70", Offset = "0x22B7470", VA = "0x1822B8E70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40028CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40028CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _elements;

	[Token(Token = "0x40028CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<StringSetting> _settings;

	[Token(Token = "0x40028D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private List<CustomAssetEntry> _entries;

	[Token(Token = "0x40028D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private StringSetting _platform;

	[Token(Token = "0x40028D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string _platformKey;

	[Token(Token = "0x40028D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] PlatformOptions;

	[Token(Token = "0x17000E73")]
	protected override string Title
	{
		[Token(Token = "0x6004E8D")]
		[Address(RVA = "0x22AC940", Offset = "0x22AAF40", VA = "0x1822AC940", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E74")]
	protected override float Width
	{
		[Token(Token = "0x6004E8E")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E75")]
	protected override float Height
	{
		[Token(Token = "0x6004E8F")]
		[Address(RVA = "0x22AC930", Offset = "0x22AAF30", VA = "0x1822AC930", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E76")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E90")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004E91")]
	[Address(RVA = "0x22ABE90", Offset = "0x22AA490", VA = "0x1822ABE90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E92")]
	[Address(RVA = "0x22AC240", Offset = "0x22AA840", VA = "0x1822AC240", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004E93")]
	[Address(RVA = "0x22ABBD0", Offset = "0x22AA1D0", VA = "0x1822ABBD0")]
	private void RebuildAssetRows()
	{
	}

	[Token(Token = "0x6004E94")]
	[Address(RVA = "0x22AB000", Offset = "0x22A9600", VA = "0x1822AB000")]
	private void AddAssetRow(CustomAssetEntry entry)
	{
	}

	[Token(Token = "0x6004E95")]
	[Address(RVA = "0x22AB2B0", Offset = "0x22A98B0", VA = "0x1822AB2B0")]
	private void ApplyAssetRows()
	{
	}

	[Token(Token = "0x6004E96")]
	[Address(RVA = "0x22ABB30", Offset = "0x22AA130", VA = "0x1822ABB30")]
	private void OnPlatformChange()
	{
	}

	[Token(Token = "0x6004E97")]
	[Address(RVA = "0x22AB460", Offset = "0x22A9A60", VA = "0x1822AB460")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004E98")]
	[Address(RVA = "0x22AB3D0", Offset = "0x22A99D0", VA = "0x1822AB3D0")]
	[IteratorStateMachine(typeof(_003CLoadAssetBundle_003Ed__22))]
	private IEnumerator LoadAssetBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x6004E99")]
	[Address(RVA = "0x22AC7B0", Offset = "0x22AADB0", VA = "0x1822AC7B0")]
	public MapEditorCustomAssetPopup()
	{
	}
}
