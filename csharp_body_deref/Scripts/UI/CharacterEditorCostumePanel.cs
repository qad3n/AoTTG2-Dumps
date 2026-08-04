// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorCostumePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorCostumePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCostumePanel.cs
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

[Token(Token = "0x2000594")]
internal class CharacterEditorCostumePanel : HeadedPanel
{
	[Token(Token = "0x2000599")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterCostumeChange_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001B96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000B11")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A12")]
			[Address(RVA = "0x425DAD0", Offset = "0x425DAD0", VA = "0x425DAD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B12")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A14")]
			[Address(RVA = "0x425DB20", Offset = "0x425DB20", VA = "0x425DB20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A0F")]
		[Address(RVA = "0x425D740", Offset = "0x425D740", VA = "0x425D740")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterCostumeChange_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A10")]
		[Address(RVA = "0x425D760", Offset = "0x425D760", VA = "0x425D760", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A11")]
		[Address(RVA = "0x425D770", Offset = "0x425D770", VA = "0x425D770", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A13")]
		[Address(RVA = "0x425DAE0", Offset = "0x425DAE0", VA = "0x425DAE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200059A")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001B9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000B13")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A18")]
			[Address(RVA = "0x425DEC0", Offset = "0x425DEC0", VA = "0x425DEC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B14")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A1A")]
			[Address(RVA = "0x425DF10", Offset = "0x425DF10", VA = "0x425DF10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A15")]
		[Address(RVA = "0x425DB30", Offset = "0x425DB30", VA = "0x425DB30")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterReset_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A16")]
		[Address(RVA = "0x425DB50", Offset = "0x425DB50", VA = "0x425DB50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A17")]
		[Address(RVA = "0x425DB60", Offset = "0x425DB60", VA = "0x425DB60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A19")]
		[Address(RVA = "0x425DED0", Offset = "0x425DED0", VA = "0x425DED0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200059B")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousProfilePreviewAndApplySkins_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x4001B9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCostumePanel _003C_003E4__this;

		[Token(Token = "0x4001B9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldApplySkinPreview;

		[Token(Token = "0x4001BA0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HumanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x4001BA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x4001BA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private DummyHuman _003Ccharacter_003E5__4;

		[Token(Token = "0x17000B15")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A1E")]
			[Address(RVA = "0x425E6A0", Offset = "0x425E6A0", VA = "0x425E6A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B16")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A20")]
			[Address(RVA = "0x425E6F0", Offset = "0x425E6F0", VA = "0x425E6F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A1B")]
		[Address(RVA = "0x425DF20", Offset = "0x425DF20", VA = "0x425DF20")]
		[DebuggerHidden]
		public _003CCapturePreviousProfilePreviewAndApplySkins_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A1C")]
		[Address(RVA = "0x425DF40", Offset = "0x425DF40", VA = "0x425DF40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A1D")]
		[Address(RVA = "0x425DF50", Offset = "0x425DF50", VA = "0x425DF50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A1F")]
		[Address(RVA = "0x425E6B0", Offset = "0x425E6B0", VA = "0x425E6B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200059C")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutine_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BA3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000B17")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A24")]
			[Address(RVA = "0x425E830", Offset = "0x425E830", VA = "0x425E830", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B18")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A26")]
			[Address(RVA = "0x425E880", Offset = "0x425E880", VA = "0x425E880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A21")]
		[Address(RVA = "0x425E700", Offset = "0x425E700", VA = "0x425E700")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutine_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A22")]
		[Address(RVA = "0x425E720", Offset = "0x425E720", VA = "0x425E720", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A23")]
		[Address(RVA = "0x425E730", Offset = "0x425E730", VA = "0x425E730", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A25")]
		[Address(RVA = "0x425E840", Offset = "0x425E840", VA = "0x425E840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4001B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4001B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x4001B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x17000B0A")]
	protected override string Title
	{
		[Token(Token = "0x60039CC")]
		[Address(RVA = "0x4258010", Offset = "0x4258010", VA = "0x4258010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B0B")]
	protected override float Width
	{
		[Token(Token = "0x60039CD")]
		[Address(RVA = "0x42580B0", Offset = "0x42580B0", VA = "0x42580B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B0C")]
	protected override float Height
	{
		[Token(Token = "0x60039CE")]
		[Address(RVA = "0x42580C0", Offset = "0x42580C0", VA = "0x42580C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B0D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60039CF")]
		[Address(RVA = "0x42580D0", Offset = "0x42580D0", VA = "0x42580D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B0E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60039D0")]
		[Address(RVA = "0x42580E0", Offset = "0x42580E0", VA = "0x42580E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B0F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60039D1")]
		[Address(RVA = "0x42580F0", Offset = "0x42580F0", VA = "0x42580F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B10")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60039D2")]
		[Address(RVA = "0x4258100", Offset = "0x4258100", VA = "0x4258100", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60039D3")]
	[Address(RVA = "0x4258110", Offset = "0x4258110", VA = "0x4258110")]
	public static bool GetPersistentGlobalPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x60039D4")]
	[Address(RVA = "0x4258150", Offset = "0x4258150", VA = "0x4258150")]
	public static bool GetPersistentCustomPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x60039D5")]
	[Address(RVA = "0x4257A00", Offset = "0x4257A00", VA = "0x4257A00")]
	public static void ResetSkinPreviewToggles()
	{
	}

	[Token(Token = "0x60039D6")]
	[Address(RVA = "0x4258190", Offset = "0x4258190", VA = "0x4258190", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60039D7")]
	[Address(RVA = "0x425A2D0", Offset = "0x425A2D0", VA = "0x425A2D0")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		return null;
	}

	[Token(Token = "0x60039D8")]
	[Address(RVA = "0x425A6E0", Offset = "0x425A6E0", VA = "0x425A6E0")]
	private string[] GetHairOptions()
	{
		return null;
	}

	[Token(Token = "0x60039D9")]
	[Address(RVA = "0x425A9F0", Offset = "0x425A9F0", VA = "0x425A9F0")]
	private string[] GetCostumeOptions(HumanCustomSet set)
	{
		return null;
	}

	[Token(Token = "0x60039DA")]
	[Address(RVA = "0x425A4E0", Offset = "0x425A4E0", VA = "0x425A4E0")]
	private string[] GetIcons(string[] options)
	{
		return null;
	}

	[Token(Token = "0x60039DB")]
	[Address(RVA = "0x425AD60", Offset = "0x425AD60", VA = "0x425AD60")]
	private void OnSexChanged()
	{
	}

	[Token(Token = "0x60039DC")]
	[Address(RVA = "0x425B080", Offset = "0x425B080", VA = "0x425B080")]
	private void OnCustomSetSelected()
	{
	}

	[Token(Token = "0x60039DD")]
	[Address(RVA = "0x425B5F0", Offset = "0x425B5F0", VA = "0x425B5F0")]
	[IteratorStateMachine(typeof(_003CCapturePreviousProfilePreviewAndApplySkins_003Ed__28))]
	private IEnumerator CapturePreviousProfilePreviewAndApplySkins(string previousProfileId, string currentProfileId, bool shouldApplySkinPreview)
	{
		return null;
	}

	[Token(Token = "0x60039DE")]
	[Address(RVA = "0x425B040", Offset = "0x425B040", VA = "0x425B040")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterReset_003Ed__29))]
	private IEnumerator ApplySkinPreviewAfterReset()
	{
		return null;
	}

	[Token(Token = "0x60039DF")]
	[Address(RVA = "0x425B680", Offset = "0x425B680", VA = "0x425B680")]
	private void OnCharacterChanged()
	{
	}

	[Token(Token = "0x60039E0")]
	[Address(RVA = "0x425B770", Offset = "0x425B770", VA = "0x425B770")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterCostumeChange_003Ed__31))]
	public IEnumerator ApplySkinPreviewAfterCostumeChange()
	{
		return null;
	}

	[Token(Token = "0x60039E1")]
	[Address(RVA = "0x425B7B0", Offset = "0x425B7B0", VA = "0x425B7B0")]
	private void GeneratePreviewForCurrentSet()
	{
	}

	[Token(Token = "0x60039E2")]
	[Address(RVA = "0x425B850", Offset = "0x425B850", VA = "0x425B850")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60039E3")]
	[Address(RVA = "0x425C580", Offset = "0x425C580", VA = "0x425C580")]
	private void OnCostumeSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60039E4")]
	[Address(RVA = "0x425C540", Offset = "0x425C540", VA = "0x425C540")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutine_003Ed__35))]
	private IEnumerator SaveQuitCaptureCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60039E5")]
	[Address(RVA = "0x425D190", Offset = "0x425D190", VA = "0x425D190")]
	public CharacterEditorCostumePanel()
	{
	}
}
