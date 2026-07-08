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

[Token(Token = "0x200054D")]
internal class CharacterEditorCategoryPanel : HeadedPanel
{
	[Token(Token = "0x200054E")]
	[CompilerGenerated]
	private sealed class _003CCategoryChangeCaptureCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isHuman;

		[Token(Token = "0x4001A70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCategoryPanel _003C_003E4__this;

		[Token(Token = "0x4001A71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldPreserveSkinPreview;

		[Token(Token = "0x4001A72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001A73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000A9E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60037BA")]
			[Address(RVA = "0x3F2E7D0", Offset = "0x3F2E7D0", VA = "0x3F2E7D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A9F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60037BC")]
			[Address(RVA = "0x3F2E820", Offset = "0x3F2E820", VA = "0x3F2E820", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60037B7")]
		[Address(RVA = "0x3F2E230", Offset = "0x3F2E230", VA = "0x3F2E230")]
		[DebuggerHidden]
		public _003CCategoryChangeCaptureCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60037B8")]
		[Address(RVA = "0x3F2E330", Offset = "0x3F2E330", VA = "0x3F2E330", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60037B9")]
		[Address(RVA = "0x3F2E340", Offset = "0x3F2E340", VA = "0x3F2E340", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60037BB")]
		[Address(RVA = "0x3F2E7E0", Offset = "0x3F2E7E0", VA = "0x3F2E7E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001A6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private StringSetting _category;

	[Token(Token = "0x4001A6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected CharacterEditorGameManager _gameManager;

	[Token(Token = "0x17000A98")]
	protected override string Title
	{
		[Token(Token = "0x60037AA")]
		[Address(RVA = "0x3F2D7F0", Offset = "0x3F2D7F0", VA = "0x3F2D7F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A99")]
	protected override float Width
	{
		[Token(Token = "0x60037AB")]
		[Address(RVA = "0x3F2D850", Offset = "0x3F2D850", VA = "0x3F2D850", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9A")]
	protected override float Height
	{
		[Token(Token = "0x60037AC")]
		[Address(RVA = "0x3F2D860", Offset = "0x3F2D860", VA = "0x3F2D860", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9B")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60037AD")]
		[Address(RVA = "0x3F2D870", Offset = "0x3F2D870", VA = "0x3F2D870", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A9C")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60037AE")]
		[Address(RVA = "0x3F2D880", Offset = "0x3F2D880", VA = "0x3F2D880", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A9D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60037AF")]
		[Address(RVA = "0x3F2D890", Offset = "0x3F2D890", VA = "0x3F2D890", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60037B0")]
	[Address(RVA = "0x3F2D8A0", Offset = "0x3F2D8A0", VA = "0x3F2D8A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60037B1")]
	[Address(RVA = "0x3F2DC20", Offset = "0x3F2DC20", VA = "0x3F2DC20")]
	private string GetCurrentCategory()
	{
		return null;
	}

	[Token(Token = "0x60037B2")]
	[Address(RVA = "0x3F2DCB0", Offset = "0x3F2DCB0", VA = "0x3F2DCB0")]
	private void OnCategoryChange()
	{
	}

	[Token(Token = "0x60037B3")]
	[Address(RVA = "0x3F2E210", Offset = "0x3F2E210", VA = "0x3F2E210")]
	private void ResetHumanSkinPreviewToggles()
	{
	}

	[Token(Token = "0x60037B4")]
	[Address(RVA = "0x3F2E180", Offset = "0x3F2E180", VA = "0x3F2E180")]
	[IteratorStateMachine(typeof(_003CCategoryChangeCaptureCoroutine_003Ed__18))]
	private IEnumerator CategoryChangeCaptureCoroutine(bool isHuman, bool shouldPreserveSkinPreview)
	{
		return null;
	}

	[Token(Token = "0x60037B5")]
	[Address(RVA = "0x3F2E250", Offset = "0x3F2E250", VA = "0x3F2E250")]
	public CharacterEditorCategoryPanel()
	{
	}
}
