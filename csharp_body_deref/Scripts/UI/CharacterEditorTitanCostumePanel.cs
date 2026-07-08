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

[Token(Token = "0x2000565")]
internal class CharacterEditorTitanCostumePanel : HeadedPanel
{
	[Token(Token = "0x200056A")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousTitanProfilePreview_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x4001AD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TitanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x4001AD5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x4001AD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private DummyTitan _003Ccharacter_003E5__4;

		[Token(Token = "0x17000AD9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60038BF")]
			[Address(RVA = "0x3F5BB50", Offset = "0x3F5BB50", VA = "0x3F5BB50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ADA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60038C1")]
			[Address(RVA = "0x3F5BBA0", Offset = "0x3F5BBA0", VA = "0x3F5BBA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60038BC")]
		[Address(RVA = "0x3F59DD0", Offset = "0x3F59DD0", VA = "0x3F59DD0")]
		[DebuggerHidden]
		public _003CCapturePreviousTitanProfilePreview_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60038BD")]
		[Address(RVA = "0x3F5B630", Offset = "0x3F5B630", VA = "0x3F5B630", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60038BE")]
		[Address(RVA = "0x3F5B640", Offset = "0x3F5B640", VA = "0x3F5B640", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60038C0")]
		[Address(RVA = "0x3F5BB60", Offset = "0x3F5BB60", VA = "0x3F5BB60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200056B")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutineInternal_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AD8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000ADB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60038C5")]
			[Address(RVA = "0x3F5BC90", Offset = "0x3F5BC90", VA = "0x3F5BC90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ADC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60038C7")]
			[Address(RVA = "0x3F5BCE0", Offset = "0x3F5BCE0", VA = "0x3F5BCE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60038C2")]
		[Address(RVA = "0x3F5B220", Offset = "0x3F5B220", VA = "0x3F5B220")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutineInternal_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60038C3")]
		[Address(RVA = "0x3F5BBB0", Offset = "0x3F5BBB0", VA = "0x3F5BBB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60038C4")]
		[Address(RVA = "0x3F5BBC0", Offset = "0x3F5BBC0", VA = "0x3F5BBC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60038C6")]
		[Address(RVA = "0x3F5BCA0", Offset = "0x3F5BCA0", VA = "0x3F5BCA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4001AC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4001AC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x17000AD2")]
	protected override string Title
	{
		[Token(Token = "0x6003892")]
		[Address(RVA = "0x3F581F0", Offset = "0x3F581F0", VA = "0x3F581F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AD3")]
	protected override float Width
	{
		[Token(Token = "0x6003893")]
		[Address(RVA = "0x3F58290", Offset = "0x3F58290", VA = "0x3F58290", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD4")]
	protected override float Height
	{
		[Token(Token = "0x6003894")]
		[Address(RVA = "0x3F582A0", Offset = "0x3F582A0", VA = "0x3F582A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003895")]
		[Address(RVA = "0x3F582B0", Offset = "0x3F582B0", VA = "0x3F582B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD6")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003896")]
		[Address(RVA = "0x3F582C0", Offset = "0x3F582C0", VA = "0x3F582C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AD7")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003897")]
		[Address(RVA = "0x3F582D0", Offset = "0x3F582D0", VA = "0x3F582D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AD8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003898")]
		[Address(RVA = "0x3F582E0", Offset = "0x3F582E0", VA = "0x3F582E0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003899")]
	[Address(RVA = "0x3F582F0", Offset = "0x3F582F0", VA = "0x3F582F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600389A")]
	[Address(RVA = "0x3F59320", Offset = "0x3F59320", VA = "0x3F59320")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		return null;
	}

	[Token(Token = "0x600389B")]
	[Address(RVA = "0x3F59730", Offset = "0x3F59730", VA = "0x3F59730")]
	private string[] GetHairOptions()
	{
		return null;
	}

	[Token(Token = "0x600389C")]
	[Address(RVA = "0x3F59530", Offset = "0x3F59530", VA = "0x3F59530")]
	private string[] GetIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x600389D")]
	[Address(RVA = "0x3F59A40", Offset = "0x3F59A40", VA = "0x3F59A40")]
	private void OnCustomSetSelected()
	{
	}

	[Token(Token = "0x600389E")]
	[Address(RVA = "0x3F59D60", Offset = "0x3F59D60", VA = "0x3F59D60")]
	[IteratorStateMachine(typeof(_003CCapturePreviousTitanProfilePreview_003Ed__22))]
	private IEnumerator CapturePreviousTitanProfilePreview(string previousProfileId, string currentProfileId)
	{
		return null;
	}

	[Token(Token = "0x600389F")]
	[Address(RVA = "0x3F59DF0", Offset = "0x3F59DF0", VA = "0x3F59DF0")]
	private void OnCharacterChanged()
	{
	}

	[Token(Token = "0x60038A0")]
	[Address(RVA = "0x3F59E20", Offset = "0x3F59E20", VA = "0x3F59E20")]
	private void GeneratePreviewForCurrentSet()
	{
	}

	[Token(Token = "0x60038A1")]
	[Address(RVA = "0x3F59EC0", Offset = "0x3F59EC0", VA = "0x3F59EC0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60038A2")]
	[Address(RVA = "0x3F5AB50", Offset = "0x3F5AB50", VA = "0x3F5AB50")]
	private void OnCostumeSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60038A3")]
	[Address(RVA = "0x3F5AB00", Offset = "0x3F5AB00", VA = "0x3F5AB00")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutineInternal_003Ed__27))]
	private IEnumerator SaveQuitCaptureCoroutineInternal()
	{
		return null;
	}

	[Token(Token = "0x60038A4")]
	[Address(RVA = "0x3F5B240", Offset = "0x3F5B240", VA = "0x3F5B240")]
	public CharacterEditorTitanCostumePanel()
	{
	}
}
