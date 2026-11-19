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

[Token(Token = "0x2000880")]
internal class MainBackgroundMenu : BaseMenu
{
	[Token(Token = "0x2000881")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishBackground_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B0C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B0D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B0E")]
		[FieldOffset(Offset = "0x20")]
		public MainBackgroundMenu _003C_003E4__this;

		[Token(Token = "0x17000E2D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005111")]
			[Address(RVA = "0x5C57A70", Offset = "0x5C56A70", VA = "0x5C57A70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E2E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005113")]
			[Address(RVA = "0x5C57AC0", Offset = "0x5C56AC0", VA = "0x5C57AC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600510E")]
		[Address(RVA = "0x5C57920", Offset = "0x5C56920", VA = "0x5C57920")]
		[DebuggerHidden]
		public _003CWaitAndFinishBackground_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600510F")]
		[Address(RVA = "0x5C57960", Offset = "0x5C56960", VA = "0x5C57960", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005110")]
		[Address(RVA = "0x5C57970", Offset = "0x5C56970", VA = "0x5C57970", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005112")]
		[Address(RVA = "0x5C57A80", Offset = "0x5C56A80", VA = "0x5C57A80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002B07")]
	[FieldOffset(Offset = "0x98")]
	public MainMenuBackgroundPanel _mainBackgroundPanelBack;

	[Token(Token = "0x4002B08")]
	[FieldOffset(Offset = "0xA0")]
	public MainMenuBackgroundPanel _mainBackgroundPanelFront;

	[Token(Token = "0x4002B09")]
	[FieldOffset(Offset = "0xA8")]
	private Vector2 currentVelocity;

	[Token(Token = "0x4002B0A")]
	[FieldOffset(Offset = "0xB0")]
	public float smoothTime;

	[Token(Token = "0x4002B0B")]
	[FieldOffset(Offset = "0xB4")]
	public float backgroundScale;

	[Token(Token = "0x6005105")]
	[Address(RVA = "0x5C571B0", Offset = "0x5C561B0", VA = "0x5C571B0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6005106")]
	[Address(RVA = "0x5C571C0", Offset = "0x5C561C0", VA = "0x5C571C0")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x6005107")]
	[Address(RVA = "0x5C57470", Offset = "0x5C56470", VA = "0x5C57470")]
	private void AddParallaxEffect(GameObject target, float intensity)
	{
	}

	[Token(Token = "0x6005108")]
	[Address(RVA = "0x5C574E0", Offset = "0x5C564E0", VA = "0x5C574E0")]
	private void Update()
	{
	}

	[Token(Token = "0x6005109")]
	[Address(RVA = "0x5C57730", Offset = "0x5C56730", VA = "0x5C57730")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600510A")]
	[Address(RVA = "0x5C577E0", Offset = "0x5C567E0", VA = "0x5C577E0")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x600510B")]
	[Address(RVA = "0x5C57800", Offset = "0x5C56800", VA = "0x5C57800")]
	public void ChangeMainBackground()
	{
	}

	[Token(Token = "0x600510C")]
	[Address(RVA = "0x5C578B0", Offset = "0x5C568B0", VA = "0x5C578B0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishBackground_003Ed__12))]
	private IEnumerator WaitAndFinishBackground()
	{
		return null;
	}

	[Token(Token = "0x600510D")]
	[Address(RVA = "0x5C57940", Offset = "0x5C56940", VA = "0x5C57940")]
	public MainBackgroundMenu()
	{
	}
}
