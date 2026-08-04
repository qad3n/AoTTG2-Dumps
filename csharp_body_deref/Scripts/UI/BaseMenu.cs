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

[Token(Token = "0x2000564")]
internal abstract class BaseMenu : MonoBehaviour
{
	[Token(Token = "0x2000565")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplyScale_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AAD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AAE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AAF")]
		[FieldOffset(Offset = "0x20")]
		public SceneName sceneName;

		[Token(Token = "0x4001AB0")]
		[FieldOffset(Offset = "0x28")]
		public BaseMenu _003C_003E4__this;

		[Token(Token = "0x17000A6C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003813")]
			[Address(RVA = "0x4225360", Offset = "0x4225360", VA = "0x4225360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A6D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003815")]
			[Address(RVA = "0x42253B0", Offset = "0x42253B0", VA = "0x42253B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003810")]
		[Address(RVA = "0x4224320", Offset = "0x4224320", VA = "0x4224320")]
		[DebuggerHidden]
		public _003CWaitAndApplyScale_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003811")]
		[Address(RVA = "0x42250E0", Offset = "0x42250E0", VA = "0x42250E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003812")]
		[Address(RVA = "0x42250F0", Offset = "0x42250F0", VA = "0x42250F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003814")]
		[Address(RVA = "0x4225370", Offset = "0x4225370", VA = "0x4225370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001A9E")]
	[FieldOffset(Offset = "0x20")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x4001A9F")]
	[FieldOffset(Offset = "0x28")]
	public TooltipPopup TooltipPopup;

	[Token(Token = "0x4001AA0")]
	[FieldOffset(Offset = "0x30")]
	public MessagePopup MessagePopup;

	[Token(Token = "0x4001AA1")]
	[FieldOffset(Offset = "0x38")]
	public ConfirmPopup ConfirmPopup;

	[Token(Token = "0x4001AA2")]
	[FieldOffset(Offset = "0x40")]
	public ExternalLinkPopup ExternalLinkPopup;

	[Token(Token = "0x4001AA3")]
	[FieldOffset(Offset = "0x48")]
	public ColorPickPopup ColorPickPopup;

	[Token(Token = "0x4001AA4")]
	[FieldOffset(Offset = "0x50")]
	public IconPickPopup IconPickPopup;

	[Token(Token = "0x4001AA5")]
	[FieldOffset(Offset = "0x58")]
	public RoleSpritePickPopup RoleSpritePickPopup;

	[Token(Token = "0x4001AA6")]
	[FieldOffset(Offset = "0x60")]
	public Vector3Popup Vector3Popup;

	[Token(Token = "0x4001AA7")]
	[FieldOffset(Offset = "0x68")]
	public ExportPopup ExportPopup;

	[Token(Token = "0x4001AA8")]
	[FieldOffset(Offset = "0x70")]
	public ImportPopup ImportPopup;

	[Token(Token = "0x4001AA9")]
	[FieldOffset(Offset = "0x78")]
	public NewImportPopup NewImportPopup;

	[Token(Token = "0x4001AAA")]
	[FieldOffset(Offset = "0x80")]
	public KeybindPopup KeybindPopup;

	[Token(Token = "0x4001AAB")]
	[FieldOffset(Offset = "0x88")]
	public SetNamePopup SetNamePopup;

	[Token(Token = "0x4001AAC")]
	[FieldOffset(Offset = "0x90")]
	public SelectListPopup SelectListPopup;

	[Token(Token = "0x600380A")]
	[Address(RVA = "0x4224200", Offset = "0x4224200", VA = "0x4224200", Slot = "4")]
	public virtual void Setup()
	{
	}

	[Token(Token = "0x600380B")]
	[Address(RVA = "0x4224220", Offset = "0x4224220", VA = "0x4224220")]
	public void ApplyScale(SceneName sceneName)
	{
	}

	[Token(Token = "0x600380C")]
	[Address(RVA = "0x42242A0", Offset = "0x42242A0", VA = "0x42242A0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplyScale_003Ed__17))]
	protected IEnumerator WaitAndApplyScale(SceneName sceneName)
	{
		return null;
	}

	[Token(Token = "0x600380D")]
	[Address(RVA = "0x4224340", Offset = "0x4224340", VA = "0x4224340", Slot = "5")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x600380E")]
	[Address(RVA = "0x4224F10", Offset = "0x4224F10", VA = "0x4224F10", Slot = "6")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x600380F")]
	[Address(RVA = "0x4225060", Offset = "0x4225060", VA = "0x4225060")]
	protected BaseMenu()
	{
	}
}
