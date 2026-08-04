// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreditsMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreditsMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreditsMenu/CreditsMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005D7")]
internal class CreditsMenu : BaseMenu
{
	[Token(Token = "0x20005D9")]
	[CompilerGenerated]
	private sealed class _003CFadeOutTip_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C4D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C4E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C4F")]
		[FieldOffset(Offset = "0x20")]
		public CreditsMenu _003C_003E4__this;

		[Token(Token = "0x4001C50")]
		[FieldOffset(Offset = "0x28")]
		private float _003CfadeTime_003E5__2;

		[Token(Token = "0x4001C51")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000B76")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003BCA")]
			[Address(RVA = "0x4287240", Offset = "0x4287240", VA = "0x4287240", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B77")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003BCC")]
			[Address(RVA = "0x4287290", Offset = "0x4287290", VA = "0x4287290", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003BC7")]
		[Address(RVA = "0x4286ED0", Offset = "0x4286ED0", VA = "0x4286ED0")]
		[DebuggerHidden]
		public _003CFadeOutTip_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003BC8")]
		[Address(RVA = "0x4287080", Offset = "0x4287080", VA = "0x4287080", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003BC9")]
		[Address(RVA = "0x4287090", Offset = "0x4287090", VA = "0x4287090", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003BCB")]
		[Address(RVA = "0x4287250", Offset = "0x4287250", VA = "0x4287250", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C40")]
	[FieldOffset(Offset = "0x98")]
	public float scrollSpeed;

	[Token(Token = "0x4001C41")]
	[FieldOffset(Offset = "0x9C")]
	public float fastScrollMultiplier;

	[Token(Token = "0x4001C42")]
	[FieldOffset(Offset = "0xA0")]
	private RectTransform _contentTransform;

	[Token(Token = "0x4001C43")]
	[FieldOffset(Offset = "0xA8")]
	private VerticalLayoutGroup _layoutGroup;

	[Token(Token = "0x4001C44")]
	[FieldOffset(Offset = "0xB0")]
	private Font _categoryFont;

	[Token(Token = "0x4001C45")]
	[FieldOffset(Offset = "0xB8")]
	private float _tipDisplayTime;

	[Token(Token = "0x4001C46")]
	[FieldOffset(Offset = "0xBC")]
	private float _tipTimer;

	[Token(Token = "0x4001C47")]
	[FieldOffset(Offset = "0xC0")]
	private List<Color> _categoryColors;

	[Token(Token = "0x4001C48")]
	[FieldOffset(Offset = "0xC8")]
	private int _currentColorIndex;

	[Token(Token = "0x4001C49")]
	[FieldOffset(Offset = "0xD0")]
	private Sprite _brushSprite;

	[Token(Token = "0x4001C4A")]
	[FieldOffset(Offset = "0xD8")]
	private Text _tipText;

	[Token(Token = "0x6003BB6")]
	[Address(RVA = "0x4283BF0", Offset = "0x4283BF0", VA = "0x4283BF0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003BB7")]
	[Address(RVA = "0x4284990", Offset = "0x4284990", VA = "0x4284990")]
	private void CreateTip()
	{
	}

	[Token(Token = "0x6003BB8")]
	[Address(RVA = "0x4284B40", Offset = "0x4284B40", VA = "0x4284B40")]
	private void PopulateCredits()
	{
	}

	[Token(Token = "0x6003BB9")]
	[Address(RVA = "0x4285FD0", Offset = "0x4285FD0", VA = "0x4285FD0")]
	private void CreateCategoryElement(string content)
	{
	}

	[Token(Token = "0x6003BBA")]
	[Address(RVA = "0x42866D0", Offset = "0x42866D0", VA = "0x42866D0")]
	private void CreateSpacerElement(float height)
	{
	}

	[Token(Token = "0x6003BBB")]
	[Address(RVA = "0x4285370", Offset = "0x4285370", VA = "0x4285370")]
	private void CreateTextElement(string content, bool isCategory)
	{
	}

	[Token(Token = "0x6003BBC")]
	[Address(RVA = "0x4286960", Offset = "0x4286960", VA = "0x4286960")]
	private string ArrangeColumn(List<string> column)
	{
		return null;
	}

	[Token(Token = "0x6003BBD")]
	[Address(RVA = "0x4286AD0", Offset = "0x4286AD0", VA = "0x4286AD0")]
	private void CreateColumnText(Transform parent, string content, ElementStyle style, TextAnchor alignment)
	{
	}

	[Token(Token = "0x6003BBE")]
	[Address(RVA = "0x42868E0", Offset = "0x42868E0", VA = "0x42868E0")]
	private Color GetNextCategoryColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6003BBF")]
	[Address(RVA = "0x4286BA0", Offset = "0x4286BA0", VA = "0x4286BA0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003BC0")]
	[Address(RVA = "0x4286E60", Offset = "0x4286E60", VA = "0x4286E60")]
	[IteratorStateMachine(typeof(_003CFadeOutTip_003Ed__21))]
	private IEnumerator FadeOutTip()
	{
		return null;
	}

	[Token(Token = "0x6003BC1")]
	[Address(RVA = "0x4286EF0", Offset = "0x4286EF0", VA = "0x4286EF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003BC2")]
	[Address(RVA = "0x4286F40", Offset = "0x4286F40", VA = "0x4286F40")]
	public CreditsMenu()
	{
	}
}
