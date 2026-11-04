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

[Token(Token = "0x200072B")]
internal class CreditsMenu : BaseMenu
{
	[Token(Token = "0x200072D")]
	[CompilerGenerated]
	private sealed class _003CFadeOutTip_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023D4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023D5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023D6")]
		[FieldOffset(Offset = "0x20")]
		public CreditsMenu _003C_003E4__this;

		[Token(Token = "0x40023D7")]
		[FieldOffset(Offset = "0x28")]
		private float _003CfadeTime_003E5__2;

		[Token(Token = "0x40023D8")]
		[FieldOffset(Offset = "0x2C")]
		private float _003CelapsedTime_003E5__3;

		[Token(Token = "0x17000CB9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004673")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CBA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004675")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004670")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFadeOutTip_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004671")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004672")]
		[Address(RVA = "0x221A9F0", Offset = "0x2218FF0", VA = "0x18221A9F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004674")]
		[Address(RVA = "0x221ABD0", Offset = "0x22191D0", VA = "0x18221ABD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40023C7")]
	[FieldOffset(Offset = "0x98")]
	public float scrollSpeed;

	[Token(Token = "0x40023C8")]
	[FieldOffset(Offset = "0x9C")]
	public float fastScrollMultiplier;

	[Token(Token = "0x40023C9")]
	[FieldOffset(Offset = "0xA0")]
	private RectTransform _contentTransform;

	[Token(Token = "0x40023CA")]
	[FieldOffset(Offset = "0xA8")]
	private VerticalLayoutGroup _layoutGroup;

	[Token(Token = "0x40023CB")]
	[FieldOffset(Offset = "0xB0")]
	private Font _categoryFont;

	[Token(Token = "0x40023CC")]
	[FieldOffset(Offset = "0xB8")]
	private float _tipDisplayTime;

	[Token(Token = "0x40023CD")]
	[FieldOffset(Offset = "0xBC")]
	private float _tipTimer;

	[Token(Token = "0x40023CE")]
	[FieldOffset(Offset = "0xC0")]
	private List<Color> _categoryColors;

	[Token(Token = "0x40023CF")]
	[FieldOffset(Offset = "0xC8")]
	private int _currentColorIndex;

	[Token(Token = "0x40023D0")]
	[FieldOffset(Offset = "0xD0")]
	private Sprite _brushSprite;

	[Token(Token = "0x40023D1")]
	[FieldOffset(Offset = "0xD8")]
	private Text _tipText;

	[Token(Token = "0x600465F")]
	[Address(RVA = "0x22059B0", Offset = "0x2203FB0", VA = "0x1822059B0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004660")]
	[Address(RVA = "0x2205130", Offset = "0x2203730", VA = "0x182205130")]
	private void CreateTip()
	{
	}

	[Token(Token = "0x6004661")]
	[Address(RVA = "0x22054B0", Offset = "0x2203AB0", VA = "0x1822054B0")]
	private void PopulateCredits()
	{
	}

	[Token(Token = "0x6004662")]
	[Address(RVA = "0x22039D0", Offset = "0x2201FD0", VA = "0x1822039D0")]
	private void CreateCategoryElement(string content)
	{
	}

	[Token(Token = "0x6004663")]
	[Address(RVA = "0x22042D0", Offset = "0x22028D0", VA = "0x1822042D0")]
	private void CreateSpacerElement(float height)
	{
	}

	[Token(Token = "0x6004664")]
	[Address(RVA = "0x22044E0", Offset = "0x2202AE0", VA = "0x1822044E0")]
	private void CreateTextElement(string content, bool isCategory)
	{
	}

	[Token(Token = "0x6004665")]
	[Address(RVA = "0x2203860", Offset = "0x2201E60", VA = "0x182203860")]
	private string ArrangeColumn(List<string> column)
	{
		return null;
	}

	[Token(Token = "0x6004666")]
	[Address(RVA = "0x22041E0", Offset = "0x22027E0", VA = "0x1822041E0")]
	private void CreateColumnText(Transform parent, string content, ElementStyle style, TextAnchor alignment)
	{
	}

	[Token(Token = "0x6004667")]
	[Address(RVA = "0x22053B0", Offset = "0x22039B0", VA = "0x1822053B0")]
	private Color GetNextCategoryColor()
	{
		return default(Color);
	}

	[Token(Token = "0x6004668")]
	[Address(RVA = "0x2206AA0", Offset = "0x22050A0", VA = "0x182206AA0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004669")]
	[Address(RVA = "0x2205340", Offset = "0x2203940", VA = "0x182205340")]
	[IteratorStateMachine(typeof(_003CFadeOutTip_003Ed__21))]
	private IEnumerator FadeOutTip()
	{
		return null;
	}

	[Token(Token = "0x600466A")]
	[Address(RVA = "0x2205450", Offset = "0x2203A50", VA = "0x182205450")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600466B")]
	[Address(RVA = "0x2206D60", Offset = "0x2205360", VA = "0x182206D60")]
	public CreditsMenu()
	{
	}
}
