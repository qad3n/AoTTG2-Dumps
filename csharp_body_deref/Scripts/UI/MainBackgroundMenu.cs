using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200064D")]
internal class MainBackgroundMenu : BaseMenu
{
	[Token(Token = "0x200064E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishBackground_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EF9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EFA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EFB")]
		[FieldOffset(Offset = "0x20")]
		public MainBackgroundMenu _003C_003E4__this;

		[Token(Token = "0x17000C28")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003F8B")]
			[Address(RVA = "0x3FF2180", Offset = "0x3FF2180", VA = "0x3FF2180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C29")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003F8D")]
			[Address(RVA = "0x3FF21D0", Offset = "0x3FF21D0", VA = "0x3FF21D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F88")]
		[Address(RVA = "0x3FF2030", Offset = "0x3FF2030", VA = "0x3FF2030")]
		[DebuggerHidden]
		public _003CWaitAndFinishBackground_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F89")]
		[Address(RVA = "0x3FF2070", Offset = "0x3FF2070", VA = "0x3FF2070", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003F8A")]
		[Address(RVA = "0x3FF2080", Offset = "0x3FF2080", VA = "0x3FF2080", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003F8C")]
		[Address(RVA = "0x3FF2190", Offset = "0x3FF2190", VA = "0x3FF2190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001EF4")]
	[FieldOffset(Offset = "0x98")]
	public MainMenuBackgroundPanel _mainBackgroundPanelBack;

	[Token(Token = "0x4001EF5")]
	[FieldOffset(Offset = "0xA0")]
	public MainMenuBackgroundPanel _mainBackgroundPanelFront;

	[Token(Token = "0x4001EF6")]
	[FieldOffset(Offset = "0xA8")]
	private Vector2 currentVelocity;

	[Token(Token = "0x4001EF7")]
	[FieldOffset(Offset = "0xB0")]
	public float smoothTime;

	[Token(Token = "0x4001EF8")]
	[FieldOffset(Offset = "0xB4")]
	public float backgroundScale;

	[Token(Token = "0x6003F7F")]
	[Address(RVA = "0x3FF1860", Offset = "0x3FF1860", VA = "0x3FF1860", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003F80")]
	[Address(RVA = "0x3FF1870", Offset = "0x3FF1870", VA = "0x3FF1870")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x6003F81")]
	[Address(RVA = "0x3FF1B10", Offset = "0x3FF1B10", VA = "0x3FF1B10")]
	private void AddParallaxEffect(GameObject target, float intensity)
	{
	}

	[Token(Token = "0x6003F82")]
	[Address(RVA = "0x3FF1B80", Offset = "0x3FF1B80", VA = "0x3FF1B80")]
	private void Update()
	{
	}

	[Token(Token = "0x6003F83")]
	[Address(RVA = "0x3FF1DF0", Offset = "0x3FF1DF0", VA = "0x3FF1DF0")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6003F84")]
	[Address(RVA = "0x3FF1EF0", Offset = "0x3FF1EF0", VA = "0x3FF1EF0")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x6003F85")]
	[Address(RVA = "0x3FF1F10", Offset = "0x3FF1F10", VA = "0x3FF1F10")]
	public void ChangeMainBackground()
	{
	}

	[Token(Token = "0x6003F86")]
	[Address(RVA = "0x3FF1FC0", Offset = "0x3FF1FC0", VA = "0x3FF1FC0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishBackground_003Ed__12))]
	private IEnumerator WaitAndFinishBackground()
	{
		return null;
	}

	[Token(Token = "0x6003F87")]
	[Address(RVA = "0x3FF2050", Offset = "0x3FF2050", VA = "0x3FF2050")]
	public MainBackgroundMenu()
	{
	}
}
