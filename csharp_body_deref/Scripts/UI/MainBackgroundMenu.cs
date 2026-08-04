// ==================== AoTTG2 cross-reference ====================
// Type: UI.MainBackgroundMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MainBackgroundMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000699")]
internal class MainBackgroundMenu : BaseMenu
{
	[Token(Token = "0x200069A")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishBackground_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400204D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400204E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400204F")]
		[FieldOffset(Offset = "0x20")]
		public MainBackgroundMenu _003C_003E4__this;

		[Token(Token = "0x17000CA2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041E8")]
			[Address(RVA = "0x43063B0", Offset = "0x43063B0", VA = "0x43063B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CA3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041EA")]
			[Address(RVA = "0x4306400", Offset = "0x4306400", VA = "0x4306400", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041E5")]
		[Address(RVA = "0x4306260", Offset = "0x4306260", VA = "0x4306260")]
		[DebuggerHidden]
		public _003CWaitAndFinishBackground_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041E6")]
		[Address(RVA = "0x43062A0", Offset = "0x43062A0", VA = "0x43062A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041E7")]
		[Address(RVA = "0x43062B0", Offset = "0x43062B0", VA = "0x43062B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041E9")]
		[Address(RVA = "0x43063C0", Offset = "0x43063C0", VA = "0x43063C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002048")]
	[FieldOffset(Offset = "0x98")]
	public MainMenuBackgroundPanel _mainBackgroundPanelBack;

	[Token(Token = "0x4002049")]
	[FieldOffset(Offset = "0xA0")]
	public MainMenuBackgroundPanel _mainBackgroundPanelFront;

	[Token(Token = "0x400204A")]
	[FieldOffset(Offset = "0xA8")]
	private Vector2 currentVelocity;

	[Token(Token = "0x400204B")]
	[FieldOffset(Offset = "0xB0")]
	public float smoothTime;

	[Token(Token = "0x400204C")]
	[FieldOffset(Offset = "0xB4")]
	public float backgroundScale;

	[Token(Token = "0x60041DC")]
	[Address(RVA = "0x4305A90", Offset = "0x4305A90", VA = "0x4305A90", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60041DD")]
	[Address(RVA = "0x4305AA0", Offset = "0x4305AA0", VA = "0x4305AA0")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x60041DE")]
	[Address(RVA = "0x4305D40", Offset = "0x4305D40", VA = "0x4305D40")]
	private void AddParallaxEffect(GameObject target, float intensity)
	{
	}

	[Token(Token = "0x60041DF")]
	[Address(RVA = "0x4305DB0", Offset = "0x4305DB0", VA = "0x4305DB0")]
	private void Update()
	{
	}

	[Token(Token = "0x60041E0")]
	[Address(RVA = "0x4306020", Offset = "0x4306020", VA = "0x4306020")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60041E1")]
	[Address(RVA = "0x4306120", Offset = "0x4306120", VA = "0x4306120")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x60041E2")]
	[Address(RVA = "0x4306140", Offset = "0x4306140", VA = "0x4306140")]
	public void ChangeMainBackground()
	{
	}

	[Token(Token = "0x60041E3")]
	[Address(RVA = "0x43061F0", Offset = "0x43061F0", VA = "0x43061F0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishBackground_003Ed__12))]
	private IEnumerator WaitAndFinishBackground()
	{
		return null;
	}

	[Token(Token = "0x60041E4")]
	[Address(RVA = "0x4306280", Offset = "0x4306280", VA = "0x4306280")]
	public MainBackgroundMenu()
	{
	}
}
