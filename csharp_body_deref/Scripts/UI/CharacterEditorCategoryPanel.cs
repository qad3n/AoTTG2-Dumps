// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCategoryPanel.cs
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

namespace UI;

[Token(Token = "0x2000704")]
internal class CharacterEditorCategoryPanel : HeadedPanel
{
	[Token(Token = "0x2000705")]
	[CompilerGenerated]
	private sealed class _003CCategoryChangeCaptureCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400233A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400233B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400233C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isHuman;

		[Token(Token = "0x400233D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCategoryPanel _003C_003E4__this;

		[Token(Token = "0x400233E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldPreserveSkinPreview;

		[Token(Token = "0x400233F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4002340")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000C60")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60044F9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C61")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60044FB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60044F6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CCategoryChangeCaptureCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60044F7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60044F8")]
		[Address(RVA = "0x21E7250", Offset = "0x21E5850", VA = "0x1821E7250", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60044FA")]
		[Address(RVA = "0x21E7770", Offset = "0x21E5D70", VA = "0x1821E7770", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002338")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private StringSetting _category;

	[Token(Token = "0x4002339")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected CharacterEditorGameManager _gameManager;

	[Token(Token = "0x17000C5A")]
	protected override string Title
	{
		[Token(Token = "0x60044E9")]
		[Address(RVA = "0x21D1FB0", Offset = "0x21D05B0", VA = "0x1821D1FB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C5B")]
	protected override float Width
	{
		[Token(Token = "0x60044EA")]
		[Address(RVA = "0x21D2010", Offset = "0x21D0610", VA = "0x1821D2010", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5C")]
	protected override float Height
	{
		[Token(Token = "0x60044EB")]
		[Address(RVA = "0x21C11B0", Offset = "0x21BF7B0", VA = "0x1821C11B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60044EC")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C5E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60044ED")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C5F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60044EE")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60044EF")]
	[Address(RVA = "0x21D1BC0", Offset = "0x21D01C0", VA = "0x1821D1BC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044F0")]
	[Address(RVA = "0x21D16C0", Offset = "0x21CFCC0", VA = "0x1821D16C0")]
	private string GetCurrentCategory()
	{
		return null;
	}

	[Token(Token = "0x60044F1")]
	[Address(RVA = "0x21D1740", Offset = "0x21CFD40", VA = "0x1821D1740")]
	private void OnCategoryChange()
	{
	}

	[Token(Token = "0x60044F2")]
	[Address(RVA = "0x21D1B70", Offset = "0x21D0170", VA = "0x1821D1B70")]
	private void ResetHumanSkinPreviewToggles()
	{
	}

	[Token(Token = "0x60044F3")]
	[Address(RVA = "0x21D1640", Offset = "0x21CFC40", VA = "0x1821D1640")]
	[IteratorStateMachine(typeof(_003CCategoryChangeCaptureCoroutine_003Ed__18))]
	private IEnumerator CategoryChangeCaptureCoroutine(bool isHuman, bool shouldPreserveSkinPreview)
	{
		return null;
	}

	[Token(Token = "0x60044F4")]
	[Address(RVA = "0x21D1F30", Offset = "0x21D0530", VA = "0x1821D1F30")]
	public CharacterEditorCategoryPanel()
	{
	}
}
