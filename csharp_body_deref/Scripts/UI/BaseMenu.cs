// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseMenu
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20006D5")]
internal abstract class BaseMenu : MonoBehaviour
{
	[Token(Token = "0x20006D6")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplyScale_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400225D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400225E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400225F")]
		[FieldOffset(Offset = "0x20")]
		public SceneName sceneName;

		[Token(Token = "0x4002260")]
		[FieldOffset(Offset = "0x28")]
		public BaseMenu _003C_003E4__this;

		[Token(Token = "0x17000BBF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004335")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BC0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004337")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004332")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndApplyScale_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004333")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004334")]
		[Address(RVA = "0x21D0F40", Offset = "0x21CF540", VA = "0x1821D0F40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004336")]
		[Address(RVA = "0x21D11E0", Offset = "0x21CF7E0", VA = "0x1821D11E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400224E")]
	[FieldOffset(Offset = "0x20")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x400224F")]
	[FieldOffset(Offset = "0x28")]
	public TooltipPopup TooltipPopup;

	[Token(Token = "0x4002250")]
	[FieldOffset(Offset = "0x30")]
	public MessagePopup MessagePopup;

	[Token(Token = "0x4002251")]
	[FieldOffset(Offset = "0x38")]
	public ConfirmPopup ConfirmPopup;

	[Token(Token = "0x4002252")]
	[FieldOffset(Offset = "0x40")]
	public ExternalLinkPopup ExternalLinkPopup;

	[Token(Token = "0x4002253")]
	[FieldOffset(Offset = "0x48")]
	public ColorPickPopup ColorPickPopup;

	[Token(Token = "0x4002254")]
	[FieldOffset(Offset = "0x50")]
	public IconPickPopup IconPickPopup;

	[Token(Token = "0x4002255")]
	[FieldOffset(Offset = "0x58")]
	public RoleSpritePickPopup RoleSpritePickPopup;

	[Token(Token = "0x4002256")]
	[FieldOffset(Offset = "0x60")]
	public Vector3Popup Vector3Popup;

	[Token(Token = "0x4002257")]
	[FieldOffset(Offset = "0x68")]
	public ExportPopup ExportPopup;

	[Token(Token = "0x4002258")]
	[FieldOffset(Offset = "0x70")]
	public ImportPopup ImportPopup;

	[Token(Token = "0x4002259")]
	[FieldOffset(Offset = "0x78")]
	public NewImportPopup NewImportPopup;

	[Token(Token = "0x400225A")]
	[FieldOffset(Offset = "0x80")]
	public KeybindPopup KeybindPopup;

	[Token(Token = "0x400225B")]
	[FieldOffset(Offset = "0x88")]
	public SetNamePopup SetNamePopup;

	[Token(Token = "0x400225C")]
	[FieldOffset(Offset = "0x90")]
	public SelectListPopup SelectListPopup;

	[Token(Token = "0x600432C")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "4")]
	public virtual void Setup()
	{
	}

	[Token(Token = "0x600432D")]
	[Address(RVA = "0x21B8150", Offset = "0x21B6750", VA = "0x1821B8150")]
	public void ApplyScale(SceneName sceneName)
	{
	}

	[Token(Token = "0x600432E")]
	[Address(RVA = "0x21B8EC0", Offset = "0x21B74C0", VA = "0x1821B8EC0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplyScale_003Ed__17))]
	protected IEnumerator WaitAndApplyScale(SceneName sceneName)
	{
		return null;
	}

	[Token(Token = "0x600432F")]
	[Address(RVA = "0x21B82F0", Offset = "0x21B68F0", VA = "0x1821B82F0", Slot = "5")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x6004330")]
	[Address(RVA = "0x21B81D0", Offset = "0x21B67D0", VA = "0x1821B81D0", Slot = "6")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x6004331")]
	[Address(RVA = "0x21B8F40", Offset = "0x21B7540", VA = "0x1821B8F40")]
	protected BaseMenu()
	{
	}
}
