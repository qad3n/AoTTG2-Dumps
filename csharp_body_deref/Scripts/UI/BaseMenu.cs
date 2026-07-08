using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200051F")]
internal abstract class BaseMenu : MonoBehaviour
{
	[Token(Token = "0x2000520")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplyScale_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400199A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400199B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400199C")]
		[FieldOffset(Offset = "0x20")]
		public SceneName sceneName;

		[Token(Token = "0x400199D")]
		[FieldOffset(Offset = "0x28")]
		public BaseMenu _003C_003E4__this;

		[Token(Token = "0x17000A02")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003605")]
			[Address(RVA = "0x3F18960", Offset = "0x3F18960", VA = "0x3F18960", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A03")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003607")]
			[Address(RVA = "0x3F189B0", Offset = "0x3F189B0", VA = "0x3F189B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003602")]
		[Address(RVA = "0x3F17920", Offset = "0x3F17920", VA = "0x3F17920")]
		[DebuggerHidden]
		public _003CWaitAndApplyScale_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003603")]
		[Address(RVA = "0x3F186E0", Offset = "0x3F186E0", VA = "0x3F186E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003604")]
		[Address(RVA = "0x3F186F0", Offset = "0x3F186F0", VA = "0x3F186F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003606")]
		[Address(RVA = "0x3F18970", Offset = "0x3F18970", VA = "0x3F18970", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400198B")]
	[FieldOffset(Offset = "0x20")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x400198C")]
	[FieldOffset(Offset = "0x28")]
	public TooltipPopup TooltipPopup;

	[Token(Token = "0x400198D")]
	[FieldOffset(Offset = "0x30")]
	public MessagePopup MessagePopup;

	[Token(Token = "0x400198E")]
	[FieldOffset(Offset = "0x38")]
	public ConfirmPopup ConfirmPopup;

	[Token(Token = "0x400198F")]
	[FieldOffset(Offset = "0x40")]
	public ExternalLinkPopup ExternalLinkPopup;

	[Token(Token = "0x4001990")]
	[FieldOffset(Offset = "0x48")]
	public ColorPickPopup ColorPickPopup;

	[Token(Token = "0x4001991")]
	[FieldOffset(Offset = "0x50")]
	public IconPickPopup IconPickPopup;

	[Token(Token = "0x4001992")]
	[FieldOffset(Offset = "0x58")]
	public RoleSpritePickPopup RoleSpritePickPopup;

	[Token(Token = "0x4001993")]
	[FieldOffset(Offset = "0x60")]
	public Vector3Popup Vector3Popup;

	[Token(Token = "0x4001994")]
	[FieldOffset(Offset = "0x68")]
	public ExportPopup ExportPopup;

	[Token(Token = "0x4001995")]
	[FieldOffset(Offset = "0x70")]
	public ImportPopup ImportPopup;

	[Token(Token = "0x4001996")]
	[FieldOffset(Offset = "0x78")]
	public NewImportPopup NewImportPopup;

	[Token(Token = "0x4001997")]
	[FieldOffset(Offset = "0x80")]
	public KeybindPopup KeybindPopup;

	[Token(Token = "0x4001998")]
	[FieldOffset(Offset = "0x88")]
	public SetNamePopup SetNamePopup;

	[Token(Token = "0x4001999")]
	[FieldOffset(Offset = "0x90")]
	public SelectListPopup SelectListPopup;

	[Token(Token = "0x60035FC")]
	[Address(RVA = "0x3F17800", Offset = "0x3F17800", VA = "0x3F17800", Slot = "4")]
	public virtual void Setup()
	{
	}

	[Token(Token = "0x60035FD")]
	[Address(RVA = "0x3F17820", Offset = "0x3F17820", VA = "0x3F17820")]
	public void ApplyScale(SceneName sceneName)
	{
	}

	[Token(Token = "0x60035FE")]
	[Address(RVA = "0x3F178A0", Offset = "0x3F178A0", VA = "0x3F178A0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplyScale_003Ed__17))]
	protected IEnumerator WaitAndApplyScale(SceneName sceneName)
	{
		return null;
	}

	[Token(Token = "0x60035FF")]
	[Address(RVA = "0x3F17940", Offset = "0x3F17940", VA = "0x3F17940", Slot = "5")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x6003600")]
	[Address(RVA = "0x3F18510", Offset = "0x3F18510", VA = "0x3F18510", Slot = "6")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x6003601")]
	[Address(RVA = "0x3F18660", Offset = "0x3F18660", VA = "0x3F18660")]
	protected BaseMenu()
	{
	}
}
