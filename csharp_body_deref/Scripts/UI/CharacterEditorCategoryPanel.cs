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

[Token(Token = "0x20007AF")]
internal class CharacterEditorCategoryPanel : HeadedPanel
{
	[Token(Token = "0x20007B0")]
	[CompilerGenerated]
	private sealed class _003CCategoryChangeCaptureCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40026B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40026BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40026BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isHuman;

		[Token(Token = "0x40026BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCategoryPanel _003C_003E4__this;

		[Token(Token = "0x40026BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldPreserveSkinPreview;

		[Token(Token = "0x40026BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x40026BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000CE5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004A26")]
			[Address(RVA = "0x5BCA6B0", Offset = "0x5BC96B0", VA = "0x5BCA6B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CE6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004A28")]
			[Address(RVA = "0x5BCA700", Offset = "0x5BC9700", VA = "0x5BCA700", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004A23")]
		[Address(RVA = "0x5BCA140", Offset = "0x5BC9140", VA = "0x5BCA140")]
		[DebuggerHidden]
		public _003CCategoryChangeCaptureCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004A24")]
		[Address(RVA = "0x5BCA230", Offset = "0x5BC9230", VA = "0x5BCA230", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004A25")]
		[Address(RVA = "0x5BCA240", Offset = "0x5BC9240", VA = "0x5BCA240", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004A27")]
		[Address(RVA = "0x5BCA6C0", Offset = "0x5BC96C0", VA = "0x5BCA6C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40026B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private StringSetting _category;

	[Token(Token = "0x40026B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected CharacterEditorGameManager _gameManager;

	[Token(Token = "0x17000CDF")]
	protected override string Title
	{
		[Token(Token = "0x6004A16")]
		[Address(RVA = "0x5BC9700", Offset = "0x5BC8700", VA = "0x5BC9700", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CE0")]
	protected override float Width
	{
		[Token(Token = "0x6004A17")]
		[Address(RVA = "0x5BC9760", Offset = "0x5BC8760", VA = "0x5BC9760", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE1")]
	protected override float Height
	{
		[Token(Token = "0x6004A18")]
		[Address(RVA = "0x5BC9770", Offset = "0x5BC8770", VA = "0x5BC9770", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A19")]
		[Address(RVA = "0x5BC9780", Offset = "0x5BC8780", VA = "0x5BC9780", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A1A")]
		[Address(RVA = "0x5BC9790", Offset = "0x5BC8790", VA = "0x5BC9790", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CE4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A1B")]
		[Address(RVA = "0x5BC97A0", Offset = "0x5BC87A0", VA = "0x5BC97A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004A1C")]
	[Address(RVA = "0x5BC97B0", Offset = "0x5BC87B0", VA = "0x5BC97B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A1D")]
	[Address(RVA = "0x5BC9B80", Offset = "0x5BC8B80", VA = "0x5BC9B80")]
	private string GetCurrentCategory()
	{
		return null;
	}

	[Token(Token = "0x6004A1E")]
	[Address(RVA = "0x5BC9C10", Offset = "0x5BC8C10", VA = "0x5BC9C10")]
	private void OnCategoryChange()
	{
	}

	[Token(Token = "0x6004A1F")]
	[Address(RVA = "0x5BCA120", Offset = "0x5BC9120", VA = "0x5BCA120")]
	private void ResetHumanSkinPreviewToggles()
	{
	}

	[Token(Token = "0x6004A20")]
	[Address(RVA = "0x5BCA0A0", Offset = "0x5BC90A0", VA = "0x5BCA0A0")]
	[IteratorStateMachine(typeof(_003CCategoryChangeCaptureCoroutine_003Ed__18))]
	private IEnumerator CategoryChangeCaptureCoroutine(bool isHuman, bool shouldPreserveSkinPreview)
	{
		return null;
	}

	[Token(Token = "0x6004A21")]
	[Address(RVA = "0x5BCA160", Offset = "0x5BC9160", VA = "0x5BCA160")]
	public CharacterEditorCategoryPanel()
	{
	}
}
