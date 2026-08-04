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

[Token(Token = "0x20005AA")]
internal class CharacterEditorTitanCostumePanel : HeadedPanel
{
	[Token(Token = "0x20005AF")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousTitanProfilePreview_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x4001BE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TitanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x4001BE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x4001BE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private DummyTitan _003Ccharacter_003E5__4;

		[Token(Token = "0x17000B43")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003ACE")]
			[Address(RVA = "0x42699D0", Offset = "0x42699D0", VA = "0x42699D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B44")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003AD0")]
			[Address(RVA = "0x4269A20", Offset = "0x4269A20", VA = "0x4269A20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003ACB")]
		[Address(RVA = "0x4267C50", Offset = "0x4267C50", VA = "0x4267C50")]
		[DebuggerHidden]
		public _003CCapturePreviousTitanProfilePreview_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003ACC")]
		[Address(RVA = "0x42694B0", Offset = "0x42694B0", VA = "0x42694B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003ACD")]
		[Address(RVA = "0x42694C0", Offset = "0x42694C0", VA = "0x42694C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003ACF")]
		[Address(RVA = "0x42699E0", Offset = "0x42699E0", VA = "0x42699E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005B0")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutineInternal_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000B45")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003AD4")]
			[Address(RVA = "0x4269B10", Offset = "0x4269B10", VA = "0x4269B10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B46")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003AD6")]
			[Address(RVA = "0x4269B60", Offset = "0x4269B60", VA = "0x4269B60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003AD1")]
		[Address(RVA = "0x42690A0", Offset = "0x42690A0", VA = "0x42690A0")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutineInternal_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003AD2")]
		[Address(RVA = "0x4269A30", Offset = "0x4269A30", VA = "0x4269A30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003AD3")]
		[Address(RVA = "0x4269A40", Offset = "0x4269A40", VA = "0x4269A40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003AD5")]
		[Address(RVA = "0x4269B20", Offset = "0x4269B20", VA = "0x4269B20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4001BDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4001BDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x17000B3C")]
	protected override string Title
	{
		[Token(Token = "0x6003AA1")]
		[Address(RVA = "0x4266070", Offset = "0x4266070", VA = "0x4266070", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B3D")]
	protected override float Width
	{
		[Token(Token = "0x6003AA2")]
		[Address(RVA = "0x4266110", Offset = "0x4266110", VA = "0x4266110", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3E")]
	protected override float Height
	{
		[Token(Token = "0x6003AA3")]
		[Address(RVA = "0x4266120", Offset = "0x4266120", VA = "0x4266120", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B3F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003AA4")]
		[Address(RVA = "0x4266130", Offset = "0x4266130", VA = "0x4266130", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B40")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003AA5")]
		[Address(RVA = "0x4266140", Offset = "0x4266140", VA = "0x4266140", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B41")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003AA6")]
		[Address(RVA = "0x4266150", Offset = "0x4266150", VA = "0x4266150", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B42")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003AA7")]
		[Address(RVA = "0x4266160", Offset = "0x4266160", VA = "0x4266160", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003AA8")]
	[Address(RVA = "0x4266170", Offset = "0x4266170", VA = "0x4266170", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003AA9")]
	[Address(RVA = "0x42671A0", Offset = "0x42671A0", VA = "0x42671A0")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		return null;
	}

	[Token(Token = "0x6003AAA")]
	[Address(RVA = "0x42675B0", Offset = "0x42675B0", VA = "0x42675B0")]
	private string[] GetHairOptions()
	{
		return null;
	}

	[Token(Token = "0x6003AAB")]
	[Address(RVA = "0x42673B0", Offset = "0x42673B0", VA = "0x42673B0")]
	private string[] GetIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x6003AAC")]
	[Address(RVA = "0x42678C0", Offset = "0x42678C0", VA = "0x42678C0")]
	private void OnCustomSetSelected()
	{
	}

	[Token(Token = "0x6003AAD")]
	[Address(RVA = "0x4267BE0", Offset = "0x4267BE0", VA = "0x4267BE0")]
	[IteratorStateMachine(typeof(_003CCapturePreviousTitanProfilePreview_003Ed__22))]
	private IEnumerator CapturePreviousTitanProfilePreview(string previousProfileId, string currentProfileId)
	{
		return null;
	}

	[Token(Token = "0x6003AAE")]
	[Address(RVA = "0x4267C70", Offset = "0x4267C70", VA = "0x4267C70")]
	private void OnCharacterChanged()
	{
	}

	[Token(Token = "0x6003AAF")]
	[Address(RVA = "0x4267CA0", Offset = "0x4267CA0", VA = "0x4267CA0")]
	private void GeneratePreviewForCurrentSet()
	{
	}

	[Token(Token = "0x6003AB0")]
	[Address(RVA = "0x4267D40", Offset = "0x4267D40", VA = "0x4267D40")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003AB1")]
	[Address(RVA = "0x42689D0", Offset = "0x42689D0", VA = "0x42689D0")]
	private void OnCostumeSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6003AB2")]
	[Address(RVA = "0x4268980", Offset = "0x4268980", VA = "0x4268980")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutineInternal_003Ed__27))]
	private IEnumerator SaveQuitCaptureCoroutineInternal()
	{
		return null;
	}

	[Token(Token = "0x6003AB3")]
	[Address(RVA = "0x42690C0", Offset = "0x42690C0", VA = "0x42690C0")]
	public CharacterEditorTitanCostumePanel()
	{
	}
}
