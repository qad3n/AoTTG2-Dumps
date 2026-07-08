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

[Token(Token = "0x200054F")]
internal class CharacterEditorCostumePanel : HeadedPanel
{
	[Token(Token = "0x2000554")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterCostumeChange_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001A83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000AA7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003803")]
			[Address(RVA = "0x3F4FC50", Offset = "0x3F4FC50", VA = "0x3F4FC50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AA8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003805")]
			[Address(RVA = "0x3F4FCA0", Offset = "0x3F4FCA0", VA = "0x3F4FCA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003800")]
		[Address(RVA = "0x3F4F8C0", Offset = "0x3F4F8C0", VA = "0x3F4F8C0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterCostumeChange_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003801")]
		[Address(RVA = "0x3F4F8E0", Offset = "0x3F4F8E0", VA = "0x3F4F8E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003802")]
		[Address(RVA = "0x3F4F8F0", Offset = "0x3F4F8F0", VA = "0x3F4F8F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003804")]
		[Address(RVA = "0x3F4FC60", Offset = "0x3F4FC60", VA = "0x3F4FC60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000555")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001A87")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000AA9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003809")]
			[Address(RVA = "0x3F50040", Offset = "0x3F50040", VA = "0x3F50040", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AAA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600380B")]
			[Address(RVA = "0x3F50090", Offset = "0x3F50090", VA = "0x3F50090", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003806")]
		[Address(RVA = "0x3F4FCB0", Offset = "0x3F4FCB0", VA = "0x3F4FCB0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterReset_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003807")]
		[Address(RVA = "0x3F4FCD0", Offset = "0x3F4FCD0", VA = "0x3F4FCD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003808")]
		[Address(RVA = "0x3F4FCE0", Offset = "0x3F4FCE0", VA = "0x3F4FCE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600380A")]
		[Address(RVA = "0x3F50050", Offset = "0x3F50050", VA = "0x3F50050", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000556")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousProfilePreviewAndApplySkins_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A88")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A89")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A8A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x4001A8B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCostumePanel _003C_003E4__this;

		[Token(Token = "0x4001A8C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldApplySkinPreview;

		[Token(Token = "0x4001A8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HumanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x4001A8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x4001A8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private DummyHuman _003Ccharacter_003E5__4;

		[Token(Token = "0x17000AAB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600380F")]
			[Address(RVA = "0x3F50820", Offset = "0x3F50820", VA = "0x3F50820", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AAC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003811")]
			[Address(RVA = "0x3F50870", Offset = "0x3F50870", VA = "0x3F50870", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600380C")]
		[Address(RVA = "0x3F500A0", Offset = "0x3F500A0", VA = "0x3F500A0")]
		[DebuggerHidden]
		public _003CCapturePreviousProfilePreviewAndApplySkins_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600380D")]
		[Address(RVA = "0x3F500C0", Offset = "0x3F500C0", VA = "0x3F500C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600380E")]
		[Address(RVA = "0x3F500D0", Offset = "0x3F500D0", VA = "0x3F500D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003810")]
		[Address(RVA = "0x3F50830", Offset = "0x3F50830", VA = "0x3F50830", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000557")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutine_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000AAD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003815")]
			[Address(RVA = "0x3F509B0", Offset = "0x3F509B0", VA = "0x3F509B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AAE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003817")]
			[Address(RVA = "0x3F50A00", Offset = "0x3F50A00", VA = "0x3F50A00", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003812")]
		[Address(RVA = "0x3F50880", Offset = "0x3F50880", VA = "0x3F50880")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutine_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003813")]
		[Address(RVA = "0x3F508A0", Offset = "0x3F508A0", VA = "0x3F508A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003814")]
		[Address(RVA = "0x3F508B0", Offset = "0x3F508B0", VA = "0x3F508B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003816")]
		[Address(RVA = "0x3F509C0", Offset = "0x3F509C0", VA = "0x3F509C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001A74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4001A75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4001A76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x4001A77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x17000AA0")]
	protected override string Title
	{
		[Token(Token = "0x60037BD")]
		[Address(RVA = "0x3F2E830", Offset = "0x3F2E830", VA = "0x3F2E830", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AA1")]
	protected override float Width
	{
		[Token(Token = "0x60037BE")]
		[Address(RVA = "0x3F2E8D0", Offset = "0x3F2E8D0", VA = "0x3F2E8D0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AA2")]
	protected override float Height
	{
		[Token(Token = "0x60037BF")]
		[Address(RVA = "0x3F2E8E0", Offset = "0x3F2E8E0", VA = "0x3F2E8E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AA3")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60037C0")]
		[Address(RVA = "0x3F2E8F0", Offset = "0x3F2E8F0", VA = "0x3F2E8F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AA4")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60037C1")]
		[Address(RVA = "0x3F2E900", Offset = "0x3F2E900", VA = "0x3F2E900", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA5")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60037C2")]
		[Address(RVA = "0x3F2E910", Offset = "0x3F2E910", VA = "0x3F2E910", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AA6")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60037C3")]
		[Address(RVA = "0x3F2E920", Offset = "0x3F2E920", VA = "0x3F2E920", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60037C4")]
	[Address(RVA = "0x3F2E930", Offset = "0x3F2E930", VA = "0x3F2E930")]
	public static bool GetPersistentGlobalPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x60037C5")]
	[Address(RVA = "0x3F2E970", Offset = "0x3F2E970", VA = "0x3F2E970")]
	public static bool GetPersistentCustomPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x60037C6")]
	[Address(RVA = "0x3F2E220", Offset = "0x3F2E220", VA = "0x3F2E220")]
	public static void ResetSkinPreviewToggles()
	{
	}

	[Token(Token = "0x60037C7")]
	[Address(RVA = "0x3F2E9B0", Offset = "0x3F2E9B0", VA = "0x3F2E9B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60037C8")]
	[Address(RVA = "0x3F30AF0", Offset = "0x3F30AF0", VA = "0x3F30AF0")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		return null;
	}

	[Token(Token = "0x60037C9")]
	[Address(RVA = "0x3F30F00", Offset = "0x3F30F00", VA = "0x3F30F00")]
	private string[] GetHairOptions()
	{
		return null;
	}

	[Token(Token = "0x60037CA")]
	[Address(RVA = "0x3F31210", Offset = "0x3F31210", VA = "0x3F31210")]
	private string[] GetCostumeOptions(HumanCustomSet set)
	{
		return null;
	}

	[Token(Token = "0x60037CB")]
	[Address(RVA = "0x3F30D00", Offset = "0x3F30D00", VA = "0x3F30D00")]
	private string[] GetIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x60037CC")]
	[Address(RVA = "0x3F31580", Offset = "0x3F31580", VA = "0x3F31580")]
	private void OnSexChanged()
	{
	}

	[Token(Token = "0x60037CD")]
	[Address(RVA = "0x3F318A0", Offset = "0x3F318A0", VA = "0x3F318A0")]
	private void OnCustomSetSelected()
	{
	}

	[Token(Token = "0x60037CE")]
	[Address(RVA = "0x3F31E10", Offset = "0x3F31E10", VA = "0x3F31E10")]
	[IteratorStateMachine(typeof(_003CCapturePreviousProfilePreviewAndApplySkins_003Ed__28))]
	private IEnumerator CapturePreviousProfilePreviewAndApplySkins(string previousProfileId, string currentProfileId, bool shouldApplySkinPreview)
	{
		return null;
	}

	[Token(Token = "0x60037CF")]
	[Address(RVA = "0x3F31860", Offset = "0x3F31860", VA = "0x3F31860")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterReset_003Ed__29))]
	private IEnumerator ApplySkinPreviewAfterReset()
	{
		return null;
	}

	[Token(Token = "0x60037D0")]
	[Address(RVA = "0x3F31EA0", Offset = "0x3F31EA0", VA = "0x3F31EA0")]
	private void OnCharacterChanged()
	{
	}

	[Token(Token = "0x60037D1")]
	[Address(RVA = "0x3F31F90", Offset = "0x3F31F90", VA = "0x3F31F90")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterCostumeChange_003Ed__31))]
	public IEnumerator ApplySkinPreviewAfterCostumeChange()
	{
		return null;
	}

	[Token(Token = "0x60037D2")]
	[Address(RVA = "0x3F31FD0", Offset = "0x3F31FD0", VA = "0x3F31FD0")]
	private void GeneratePreviewForCurrentSet()
	{
	}

	[Token(Token = "0x60037D3")]
	[Address(RVA = "0x3F32070", Offset = "0x3F32070", VA = "0x3F32070")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60037D4")]
	[Address(RVA = "0x3F32DA0", Offset = "0x3F32DA0", VA = "0x3F32DA0")]
	private void OnCostumeSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60037D5")]
	[Address(RVA = "0x3F32D60", Offset = "0x3F32D60", VA = "0x3F32D60")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutine_003Ed__35))]
	private IEnumerator SaveQuitCaptureCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60037D6")]
	[Address(RVA = "0x3F339B0", Offset = "0x3F339B0", VA = "0x3F339B0")]
	public CharacterEditorCostumePanel()
	{
	}
}
