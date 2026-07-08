using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000592")]
internal class CreditsMenu : BaseMenu
{
	[Token(Token = "0x2000594")]
	[CompilerGenerated]
	private sealed class _003CFadeOutTip_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001B3A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001B3B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001B3C")]
		[FieldOffset(Offset = "0x20")]
		public CreditsMenu _003C_003E4__this;

		[Token(Token = "0x4001B3D")]
		[FieldOffset(Offset = "0x28")]
		private float _003CfadeTime_003E5__2;

		[Token(Token = "0x4001B3E")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000B0C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60039BB")]
			[Address(RVA = "0x3F79830", Offset = "0x3F79830", VA = "0x3F79830", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B0D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60039BD")]
			[Address(RVA = "0x3F79880", Offset = "0x3F79880", VA = "0x3F79880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60039B8")]
		[Address(RVA = "0x3F794C0", Offset = "0x3F794C0", VA = "0x3F794C0")]
		[DebuggerHidden]
		public _003CFadeOutTip_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60039B9")]
		[Address(RVA = "0x3F79670", Offset = "0x3F79670", VA = "0x3F79670", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60039BA")]
		[Address(RVA = "0x3F79680", Offset = "0x3F79680", VA = "0x3F79680", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60039BC")]
		[Address(RVA = "0x3F79840", Offset = "0x3F79840", VA = "0x3F79840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B2D")]
	[FieldOffset(Offset = "0x98")]
	public float scrollSpeed;

	[Token(Token = "0x4001B2E")]
	[FieldOffset(Offset = "0x9C")]
	public float fastScrollMultiplier;

	[Token(Token = "0x4001B2F")]
	[FieldOffset(Offset = "0xA0")]
	private RectTransform _contentTransform;

	[Token(Token = "0x4001B30")]
	[FieldOffset(Offset = "0xA8")]
	private VerticalLayoutGroup _layoutGroup;

	[Token(Token = "0x4001B31")]
	[FieldOffset(Offset = "0xB0")]
	private Font _categoryFont;

	[Token(Token = "0x4001B32")]
	[FieldOffset(Offset = "0xB8")]
	private float _tipDisplayTime;

	[Token(Token = "0x4001B33")]
	[FieldOffset(Offset = "0xBC")]
	private float _tipTimer;

	[Token(Token = "0x4001B34")]
	[FieldOffset(Offset = "0xC0")]
	private List<Color> _categoryColors;

	[Token(Token = "0x4001B35")]
	[FieldOffset(Offset = "0xC8")]
	private int _currentColorIndex;

	[Token(Token = "0x4001B36")]
	[FieldOffset(Offset = "0xD0")]
	private Sprite _brushSprite;

	[Token(Token = "0x4001B37")]
	[FieldOffset(Offset = "0xD8")]
	private Text _tipText;

	[Token(Token = "0x60039A7")]
	[Address(RVA = "0x3F761E0", Offset = "0x3F761E0", VA = "0x3F761E0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60039A8")]
	[Address(RVA = "0x3F76F80", Offset = "0x3F76F80", VA = "0x3F76F80")]
	private void CreateTip()
	{
	}

	[Token(Token = "0x60039A9")]
	[Address(RVA = "0x3F77130", Offset = "0x3F77130", VA = "0x3F77130")]
	private void PopulateCredits()
	{
	}

	[Token(Token = "0x60039AA")]
	[Address(RVA = "0x3F785C0", Offset = "0x3F785C0", VA = "0x3F785C0")]
	private void CreateCategoryElement(string content)
	{
	}

	[Token(Token = "0x60039AB")]
	[Address(RVA = "0x3F78CC0", Offset = "0x3F78CC0", VA = "0x3F78CC0")]
	private void CreateSpacerElement(float height)
	{
	}

	[Token(Token = "0x60039AC")]
	[Address(RVA = "0x3F77960", Offset = "0x3F77960", VA = "0x3F77960")]
	private void CreateTextElement(string content, bool isCategory)
	{
	}

	[Token(Token = "0x60039AD")]
	[Address(RVA = "0x3F78F50", Offset = "0x3F78F50", VA = "0x3F78F50")]
	private string ArrangeColumn(List<string> column)
	{
		return null;
	}

	[Token(Token = "0x60039AE")]
	[Address(RVA = "0x3F790C0", Offset = "0x3F790C0", VA = "0x3F790C0")]
	private void CreateColumnText(Transform parent, string content, ElementStyle style, TextAnchor alignment)
	{
	}

	[Token(Token = "0x60039AF")]
	[Address(RVA = "0x3F78ED0", Offset = "0x3F78ED0", VA = "0x3F78ED0")]
	private Color GetNextCategoryColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60039B0")]
	[Address(RVA = "0x3F79190", Offset = "0x3F79190", VA = "0x3F79190")]
	private void Update()
	{
	}

	[Token(Token = "0x60039B1")]
	[Address(RVA = "0x3F79450", Offset = "0x3F79450", VA = "0x3F79450")]
	[IteratorStateMachine(typeof(_003CFadeOutTip_003Ed__21))]
	private IEnumerator FadeOutTip()
	{
		return null;
	}

	[Token(Token = "0x60039B2")]
	[Address(RVA = "0x3F794E0", Offset = "0x3F794E0", VA = "0x3F794E0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60039B3")]
	[Address(RVA = "0x3F79530", Offset = "0x3F79530", VA = "0x3F79530")]
	public CreditsMenu()
	{
	}
}
