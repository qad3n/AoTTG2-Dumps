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
using Map;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008A1")]
internal class MapEditorCustomAssetPopup : PromptPopup
{
	[Token(Token = "0x20008A2")]
	[CompilerGenerated]
	private sealed class _003CLoadAssetBundle_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002B90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MapEditorCustomAssetPopup _003C_003E4__this;

		[Token(Token = "0x4002B91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MapEditorMenu _003Cmenu_003E5__2;

		[Token(Token = "0x17000E78")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005240")]
			[Address(RVA = "0x5C70C60", Offset = "0x5C6FC60", VA = "0x5C70C60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E79")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005242")]
			[Address(RVA = "0x5C70CB0", Offset = "0x5C6FCB0", VA = "0x5C70CB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600523D")]
		[Address(RVA = "0x5C703D0", Offset = "0x5C6F3D0", VA = "0x5C703D0")]
		[DebuggerHidden]
		public _003CLoadAssetBundle_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600523E")]
		[Address(RVA = "0x5C707F0", Offset = "0x5C6F7F0", VA = "0x5C707F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600523F")]
		[Address(RVA = "0x5C70800", Offset = "0x5C6F800", VA = "0x5C70800", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005241")]
		[Address(RVA = "0x5C70C70", Offset = "0x5C6FC70", VA = "0x5C70C70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002B86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002B87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _elements;

	[Token(Token = "0x4002B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<StringSetting> _settings;

	[Token(Token = "0x4002B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private List<CustomAssetEntry> _entries;

	[Token(Token = "0x4002B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private StringSetting _platform;

	[Token(Token = "0x4002B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string _platformKey;

	[Token(Token = "0x4002B8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] PlatformOptions;

	[Token(Token = "0x17000E74")]
	protected override string Title
	{
		[Token(Token = "0x600522A")]
		[Address(RVA = "0x5C6EB10", Offset = "0x5C6DB10", VA = "0x5C6EB10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E75")]
	protected override float Width
	{
		[Token(Token = "0x600522B")]
		[Address(RVA = "0x5C6EBB0", Offset = "0x5C6DBB0", VA = "0x5C6EBB0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E76")]
	protected override float Height
	{
		[Token(Token = "0x600522C")]
		[Address(RVA = "0x5C6EBC0", Offset = "0x5C6DBC0", VA = "0x5C6EBC0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E77")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600522D")]
		[Address(RVA = "0x5C6EBD0", Offset = "0x5C6DBD0", VA = "0x5C6EBD0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600522E")]
	[Address(RVA = "0x5C6EBE0", Offset = "0x5C6DBE0", VA = "0x5C6EBE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600522F")]
	[Address(RVA = "0x5C6F030", Offset = "0x5C6E030", VA = "0x5C6F030", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6005230")]
	[Address(RVA = "0x5C6F340", Offset = "0x5C6E340", VA = "0x5C6F340")]
	private void RebuildAssetRows()
	{
	}

	[Token(Token = "0x6005231")]
	[Address(RVA = "0x5C6F640", Offset = "0x5C6E640", VA = "0x5C6F640")]
	private void AddAssetRow(CustomAssetEntry entry)
	{
	}

	[Token(Token = "0x6005232")]
	[Address(RVA = "0x5C6F970", Offset = "0x5C6E970", VA = "0x5C6F970")]
	private void ApplyAssetRows()
	{
	}

	[Token(Token = "0x6005233")]
	[Address(RVA = "0x5C6FA70", Offset = "0x5C6EA70", VA = "0x5C6FA70")]
	private void OnPlatformChange()
	{
	}

	[Token(Token = "0x6005234")]
	[Address(RVA = "0x5C6FB10", Offset = "0x5C6EB10", VA = "0x5C6FB10")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005235")]
	[Address(RVA = "0x5C70350", Offset = "0x5C6F350", VA = "0x5C70350")]
	[IteratorStateMachine(typeof(_003CLoadAssetBundle_003Ed__22))]
	private IEnumerator LoadAssetBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x6005236")]
	[Address(RVA = "0x5C703F0", Offset = "0x5C6F3F0", VA = "0x5C703F0")]
	public MapEditorCustomAssetPopup()
	{
	}
}
