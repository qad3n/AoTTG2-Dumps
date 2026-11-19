// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanCostumePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanCostumePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCostumePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007C7")]
internal class CharacterEditorTitanCostumePanel : HeadedPanel
{
	[Token(Token = "0x20007CA")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousTitanProfilePreview_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400271D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400271E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400271F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x4002720")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TitanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x4002721")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x4002722")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private DummyTitan _003Ccharacter_003E5__4;

		[Token(Token = "0x17000D20")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B29")]
			[Address(RVA = "0x5BDE000", Offset = "0x5BDD000", VA = "0x5BDE000", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D21")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B2B")]
			[Address(RVA = "0x5BDE050", Offset = "0x5BDD050", VA = "0x5BDE050", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004B26")]
		[Address(RVA = "0x5BDC250", Offset = "0x5BDB250", VA = "0x5BDC250")]
		[DebuggerHidden]
		public _003CCapturePreviousTitanProfilePreview_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004B27")]
		[Address(RVA = "0x5BDDAE0", Offset = "0x5BDCAE0", VA = "0x5BDDAE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004B28")]
		[Address(RVA = "0x5BDDAF0", Offset = "0x5BDCAF0", VA = "0x5BDDAF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004B2A")]
		[Address(RVA = "0x5BDE010", Offset = "0x5BDD010", VA = "0x5BDE010", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20007CB")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutineInternal_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002723")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002724")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000D22")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B2F")]
			[Address(RVA = "0x5BDE140", Offset = "0x5BDD140", VA = "0x5BDE140", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D23")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B31")]
			[Address(RVA = "0x5BDE190", Offset = "0x5BDD190", VA = "0x5BDE190", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004B2C")]
		[Address(RVA = "0x5BDD710", Offset = "0x5BDC710", VA = "0x5BDD710")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutineInternal_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004B2D")]
		[Address(RVA = "0x5BDE060", Offset = "0x5BDD060", VA = "0x5BDE060", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004B2E")]
		[Address(RVA = "0x5BDE070", Offset = "0x5BDD070", VA = "0x5BDE070", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004B30")]
		[Address(RVA = "0x5BDE150", Offset = "0x5BDD150", VA = "0x5BDE150", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002716")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4002717")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4002718")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x17000D19")]
	protected override string Title
	{
		[Token(Token = "0x6004AFF")]
		[Address(RVA = "0x5BDA120", Offset = "0x5BD9120", VA = "0x5BDA120", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D1A")]
	protected override float Width
	{
		[Token(Token = "0x6004B00")]
		[Address(RVA = "0x5BDA1C0", Offset = "0x5BD91C0", VA = "0x5BDA1C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1B")]
	protected override float Height
	{
		[Token(Token = "0x6004B01")]
		[Address(RVA = "0x5BDA1D0", Offset = "0x5BD91D0", VA = "0x5BDA1D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1C")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B02")]
		[Address(RVA = "0x5BDA1E0", Offset = "0x5BD91E0", VA = "0x5BDA1E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B03")]
		[Address(RVA = "0x5BDA1F0", Offset = "0x5BD91F0", VA = "0x5BDA1F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D1E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B04")]
		[Address(RVA = "0x5BDA200", Offset = "0x5BD9200", VA = "0x5BDA200", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D1F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004B05")]
		[Address(RVA = "0x5BDA210", Offset = "0x5BD9210", VA = "0x5BDA210", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004B06")]
	[Address(RVA = "0x5BDA220", Offset = "0x5BD9220", VA = "0x5BDA220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B07")]
	[Address(RVA = "0x5BDB690", Offset = "0x5BDA690", VA = "0x5BDB690")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		return null;
	}

	[Token(Token = "0x6004B08")]
	[Address(RVA = "0x5BDBAE0", Offset = "0x5BDAAE0", VA = "0x5BDBAE0")]
	private int[] GetIntOptionValues(int count)
	{
		return null;
	}

	[Token(Token = "0x6004B09")]
	[Address(RVA = "0x5BDBCA0", Offset = "0x5BDACA0", VA = "0x5BDBCA0")]
	private string[] GetHairOptions()
	{
		return null;
	}

	[Token(Token = "0x6004B0A")]
	[Address(RVA = "0x5BDB8E0", Offset = "0x5BDA8E0", VA = "0x5BDB8E0")]
	private string[] GetIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004B0B")]
	[Address(RVA = "0x5BDBED0", Offset = "0x5BDAED0", VA = "0x5BDBED0")]
	private void OnCustomSetSelected()
	{
	}

	[Token(Token = "0x6004B0C")]
	[Address(RVA = "0x5BDC1E0", Offset = "0x5BDB1E0", VA = "0x5BDC1E0")]
	[IteratorStateMachine(typeof(_003CCapturePreviousTitanProfilePreview_003Ed__23))]
	private IEnumerator CapturePreviousTitanProfilePreview(string previousProfileId, string currentProfileId)
	{
		return null;
	}

	[Token(Token = "0x6004B0D")]
	[Address(RVA = "0x5BDC270", Offset = "0x5BDB270", VA = "0x5BDC270")]
	private void OnCharacterChanged()
	{
	}

	[Token(Token = "0x6004B0E")]
	[Address(RVA = "0x5BDC2A0", Offset = "0x5BDB2A0", VA = "0x5BDC2A0")]
	private void GeneratePreviewForCurrentSet()
	{
	}

	[Token(Token = "0x6004B0F")]
	[Address(RVA = "0x5BDC340", Offset = "0x5BDB340", VA = "0x5BDC340")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004B10")]
	[Address(RVA = "0x5BDD050", Offset = "0x5BDC050", VA = "0x5BDD050")]
	private void OnCostumeSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6004B11")]
	[Address(RVA = "0x5BDD000", Offset = "0x5BDC000", VA = "0x5BDD000")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutineInternal_003Ed__28))]
	private IEnumerator SaveQuitCaptureCoroutineInternal()
	{
		return null;
	}

	[Token(Token = "0x6004B12")]
	[Address(RVA = "0x5BDD730", Offset = "0x5BDC730", VA = "0x5BDD730")]
	public CharacterEditorTitanCostumePanel()
	{
	}
}
