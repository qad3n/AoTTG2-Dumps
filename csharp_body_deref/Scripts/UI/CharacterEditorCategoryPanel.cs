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

[Token(Token = "0x2000592")]
internal class CharacterEditorCategoryPanel : HeadedPanel
{
	[Token(Token = "0x2000593")]
	[CompilerGenerated]
	private sealed class _003CCategoryChangeCaptureCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isHuman;

		[Token(Token = "0x4001B83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCategoryPanel _003C_003E4__this;

		[Token(Token = "0x4001B84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldPreserveSkinPreview;

		[Token(Token = "0x4001B85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001B86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000B08")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60039C9")]
			[Address(RVA = "0x4257FB0", Offset = "0x4257FB0", VA = "0x4257FB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B09")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60039CB")]
			[Address(RVA = "0x4258000", Offset = "0x4258000", VA = "0x4258000", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60039C6")]
		[Address(RVA = "0x4257A10", Offset = "0x4257A10", VA = "0x4257A10")]
		[DebuggerHidden]
		public _003CCategoryChangeCaptureCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60039C7")]
		[Address(RVA = "0x4257B10", Offset = "0x4257B10", VA = "0x4257B10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60039C8")]
		[Address(RVA = "0x4257B20", Offset = "0x4257B20", VA = "0x4257B20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60039CA")]
		[Address(RVA = "0x4257FC0", Offset = "0x4257FC0", VA = "0x4257FC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private StringSetting _category;

	[Token(Token = "0x4001B7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected CharacterEditorGameManager _gameManager;

	[Token(Token = "0x17000B02")]
	protected override string Title
	{
		[Token(Token = "0x60039B9")]
		[Address(RVA = "0x4256FD0", Offset = "0x4256FD0", VA = "0x4256FD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B03")]
	protected override float Width
	{
		[Token(Token = "0x60039BA")]
		[Address(RVA = "0x4257030", Offset = "0x4257030", VA = "0x4257030", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B04")]
	protected override float Height
	{
		[Token(Token = "0x60039BB")]
		[Address(RVA = "0x4257040", Offset = "0x4257040", VA = "0x4257040", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B05")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60039BC")]
		[Address(RVA = "0x4257050", Offset = "0x4257050", VA = "0x4257050", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B06")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60039BD")]
		[Address(RVA = "0x4257060", Offset = "0x4257060", VA = "0x4257060", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B07")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60039BE")]
		[Address(RVA = "0x4257070", Offset = "0x4257070", VA = "0x4257070", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60039BF")]
	[Address(RVA = "0x4257080", Offset = "0x4257080", VA = "0x4257080", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60039C0")]
	[Address(RVA = "0x4257400", Offset = "0x4257400", VA = "0x4257400")]
	private string GetCurrentCategory()
	{
		return null;
	}

	[Token(Token = "0x60039C1")]
	[Address(RVA = "0x4257490", Offset = "0x4257490", VA = "0x4257490")]
	private void OnCategoryChange()
	{
	}

	[Token(Token = "0x60039C2")]
	[Address(RVA = "0x42579F0", Offset = "0x42579F0", VA = "0x42579F0")]
	private void ResetHumanSkinPreviewToggles()
	{
	}

	[Token(Token = "0x60039C3")]
	[Address(RVA = "0x4257960", Offset = "0x4257960", VA = "0x4257960")]
	[IteratorStateMachine(typeof(_003CCategoryChangeCaptureCoroutine_003Ed__18))]
	private IEnumerator CategoryChangeCaptureCoroutine(bool isHuman, bool shouldPreserveSkinPreview)
	{
		return null;
	}

	[Token(Token = "0x60039C4")]
	[Address(RVA = "0x4257A30", Offset = "0x4257A30", VA = "0x4257A30")]
	public CharacterEditorCategoryPanel()
	{
	}
}
