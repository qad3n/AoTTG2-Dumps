// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/BaseMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BaseMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077E")]
internal abstract class BaseMenu : MonoBehaviour
{
	[Token(Token = "0x200077F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplyScale_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025D8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025D9")]
		[FieldOffset(Offset = "0x20")]
		public SceneName sceneName;

		[Token(Token = "0x40025DA")]
		[FieldOffset(Offset = "0x28")]
		public BaseMenu _003C_003E4__this;

		[Token(Token = "0x17000C43")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600485A")]
			[Address(RVA = "0x5BB35A0", Offset = "0x5BB25A0", VA = "0x5BB35A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C44")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600485C")]
			[Address(RVA = "0x5BB35F0", Offset = "0x5BB25F0", VA = "0x5BB35F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004857")]
		[Address(RVA = "0x5BB3310", Offset = "0x5BB2310", VA = "0x5BB3310")]
		[DebuggerHidden]
		public _003CWaitAndApplyScale_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004858")]
		[Address(RVA = "0x5BB3330", Offset = "0x5BB2330", VA = "0x5BB3330", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004859")]
		[Address(RVA = "0x5BB3340", Offset = "0x5BB2340", VA = "0x5BB3340", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600485B")]
		[Address(RVA = "0x5BB35B0", Offset = "0x5BB25B0", VA = "0x5BB35B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40025C8")]
	[FieldOffset(Offset = "0x20")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x40025C9")]
	[FieldOffset(Offset = "0x28")]
	public TooltipPopup TooltipPopup;

	[Token(Token = "0x40025CA")]
	[FieldOffset(Offset = "0x30")]
	public MessagePopup MessagePopup;

	[Token(Token = "0x40025CB")]
	[FieldOffset(Offset = "0x38")]
	public ConfirmPopup ConfirmPopup;

	[Token(Token = "0x40025CC")]
	[FieldOffset(Offset = "0x40")]
	public ExternalLinkPopup ExternalLinkPopup;

	[Token(Token = "0x40025CD")]
	[FieldOffset(Offset = "0x48")]
	public ColorPickPopup ColorPickPopup;

	[Token(Token = "0x40025CE")]
	[FieldOffset(Offset = "0x50")]
	public IconPickPopup IconPickPopup;

	[Token(Token = "0x40025CF")]
	[FieldOffset(Offset = "0x58")]
	public RoleSpritePickPopup RoleSpritePickPopup;

	[Token(Token = "0x40025D0")]
	[FieldOffset(Offset = "0x60")]
	public Vector3Popup Vector3Popup;

	[Token(Token = "0x40025D1")]
	[FieldOffset(Offset = "0x68")]
	public ExportPopup ExportPopup;

	[Token(Token = "0x40025D2")]
	[FieldOffset(Offset = "0x70")]
	public ImportPopup ImportPopup;

	[Token(Token = "0x40025D3")]
	[FieldOffset(Offset = "0x78")]
	public NewImportPopup NewImportPopup;

	[Token(Token = "0x40025D4")]
	[FieldOffset(Offset = "0x80")]
	public KeybindPopup KeybindPopup;

	[Token(Token = "0x40025D5")]
	[FieldOffset(Offset = "0x88")]
	public SetNamePopup SetNamePopup;

	[Token(Token = "0x40025D6")]
	[FieldOffset(Offset = "0x90")]
	public SelectListPopup SelectListPopup;

	[Token(Token = "0x6004850")]
	[Address(RVA = "0x5BB2270", Offset = "0x5BB1270", VA = "0x5BB2270", Slot = "4")]
	public virtual void Setup()
	{
	}

	[Token(Token = "0x6004851")]
	[Address(RVA = "0x5BB2340", Offset = "0x5BB1340", VA = "0x5BB2340")]
	public void ApplyScale(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004852")]
	[Address(RVA = "0x5BB23C0", Offset = "0x5BB13C0", VA = "0x5BB23C0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplyScale_003Ed__17))]
	protected IEnumerator WaitAndApplyScale(SceneName sceneName)
	{
		return null;
	}

	[Token(Token = "0x6004853")]
	[Address(RVA = "0x5BB2430", Offset = "0x5BB1430", VA = "0x5BB2430", Slot = "5")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x6004854")]
	[Address(RVA = "0x5BB2F50", Offset = "0x5BB1F50", VA = "0x5BB2F50", Slot = "6")]
	public virtual void RebuildPopups()
	{
	}

	[Token(Token = "0x6004855")]
	[Address(RVA = "0x5BB3150", Offset = "0x5BB2150", VA = "0x5BB3150", Slot = "7")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x6004856")]
	[Address(RVA = "0x5BB3290", Offset = "0x5BB2290", VA = "0x5BB3290")]
	protected BaseMenu()
	{
	}
}
