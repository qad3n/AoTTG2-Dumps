// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanCostumePanel
// Update status: CHANGED in this game update
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

[Token(Token = "0x200071D")]
internal class CharacterEditorTitanCostumePanel : HeadedPanel
{
	[Token(Token = "0x2000722")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousTitanProfilePreview_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x40023A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TitanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x40023A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x40023A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private DummyTitan _003Ccharacter_003E5__4;

		[Token(Token = "0x17000C9B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004600")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C9C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004602")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045FD")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CCapturePreviousTitanProfilePreview_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045FE")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045FF")]
		[Address(RVA = "0x21E6D30", Offset = "0x21E5330", VA = "0x1821E6D30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004601")]
		[Address(RVA = "0x21E7210", Offset = "0x21E5810", VA = "0x1821E7210", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000723")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutineInternal_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000C9D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004606")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C9E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004608")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004603")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutineInternal_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004604")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004605")]
		[Address(RVA = "0x21E7D50", Offset = "0x21E6350", VA = "0x1821E7D50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004607")]
		[Address(RVA = "0x21E7E20", Offset = "0x21E6420", VA = "0x1821E7E20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002396")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4002397")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4002398")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x17000C94")]
	protected override string Title
	{
		[Token(Token = "0x60045D2")]
		[Address(RVA = "0x21E08F0", Offset = "0x21DEEF0", VA = "0x1821E08F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C95")]
	protected override float Width
	{
		[Token(Token = "0x60045D3")]
		[Address(RVA = "0x21C6340", Offset = "0x21C4940", VA = "0x1821C6340", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C96")]
	protected override float Height
	{
		[Token(Token = "0x60045D4")]
		[Address(RVA = "0x21D6E30", Offset = "0x21D5430", VA = "0x1821D6E30", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C97")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60045D5")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C98")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60045D6")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C99")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60045D7")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C9A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60045D8")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60045D9")]
	[Address(RVA = "0x21DF570", Offset = "0x21DDB70", VA = "0x1821DF570", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60045DA")]
	[Address(RVA = "0x21DDF00", Offset = "0x21DC500", VA = "0x1821DDF00")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		return null;
	}

	[Token(Token = "0x60045DB")]
	[Address(RVA = "0x21DDE80", Offset = "0x21DC480", VA = "0x1821DDE80")]
	private int[] GetIntOptionValues(int count)
	{
		return null;
	}

	[Token(Token = "0x60045DC")]
	[Address(RVA = "0x21DDB90", Offset = "0x21DC190", VA = "0x1821DDB90")]
	private string[] GetHairOptions()
	{
		return null;
	}

	[Token(Token = "0x60045DD")]
	[Address(RVA = "0x21DDCE0", Offset = "0x21DC2E0", VA = "0x1821DDCE0")]
	private string[] GetIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x60045DE")]
	[Address(RVA = "0x21DF1E0", Offset = "0x21DD7E0", VA = "0x1821DF1E0")]
	private void OnCustomSetSelected()
	{
	}

	[Token(Token = "0x60045DF")]
	[Address(RVA = "0x21DDA80", Offset = "0x21DC080", VA = "0x1821DDA80")]
	[IteratorStateMachine(typeof(_003CCapturePreviousTitanProfilePreview_003Ed__23))]
	private IEnumerator CapturePreviousTitanProfilePreview(string previousProfileId, string currentProfileId)
	{
		return null;
	}

	[Token(Token = "0x60045E0")]
	[Address(RVA = "0x21DECC0", Offset = "0x21DD2C0", VA = "0x1821DECC0")]
	private void OnCharacterChanged()
	{
	}

	[Token(Token = "0x60045E1")]
	[Address(RVA = "0x21DDAF0", Offset = "0x21DC0F0", VA = "0x1821DDAF0")]
	private void GeneratePreviewForCurrentSet()
	{
	}

	[Token(Token = "0x60045E2")]
	[Address(RVA = "0x21DE0F0", Offset = "0x21DC6F0", VA = "0x1821DE0F0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60045E3")]
	[Address(RVA = "0x21DECF0", Offset = "0x21DD2F0", VA = "0x1821DECF0")]
	private void OnCostumeSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60045E4")]
	[Address(RVA = "0x21DF520", Offset = "0x21DDB20", VA = "0x1821DF520")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutineInternal_003Ed__28))]
	private IEnumerator SaveQuitCaptureCoroutineInternal()
	{
		return null;
	}

	[Token(Token = "0x60045E5")]
	[Address(RVA = "0x21D6E20", Offset = "0x21D5420", VA = "0x1821D6E20")]
	public CharacterEditorTitanCostumePanel()
	{
	}
}
