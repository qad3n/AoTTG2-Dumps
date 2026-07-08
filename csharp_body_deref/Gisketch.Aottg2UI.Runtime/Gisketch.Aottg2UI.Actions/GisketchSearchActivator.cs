using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BC")]
internal static class GisketchSearchActivator
{
	[Token(Token = "0x20000BE")]
	[CompilerGenerated]
	private sealed class _003CFocusAfterBuild_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003AE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003AF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003B0")]
		[FieldOffset(Offset = "0x20")]
		public GisketchUIRoot root;

		[Token(Token = "0x40003B1")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40003B2")]
		[FieldOffset(Offset = "0x30")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x1700007C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000569")]
			[Address(RVA = "0x3A2B8F0", Offset = "0x3A2B8F0", VA = "0x3A2B8F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600056B")]
			[Address(RVA = "0x3A2B940", Offset = "0x3A2B940", VA = "0x3A2B940", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000566")]
		[Address(RVA = "0x3A2B1C0", Offset = "0x3A2B1C0", VA = "0x3A2B1C0")]
		[DebuggerHidden]
		public _003CFocusAfterBuild_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000567")]
		[Address(RVA = "0x3A2B780", Offset = "0x3A2B780", VA = "0x3A2B780", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000568")]
		[Address(RVA = "0x3A2B790", Offset = "0x3A2B790", VA = "0x3A2B790", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600056A")]
		[Address(RVA = "0x3A2B900", Offset = "0x3A2B900", VA = "0x3A2B900", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000BF")]
	[CompilerGenerated]
	private sealed class _003CFocusInView_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003B3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003B4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003B5")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40003B6")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40003B7")]
		[FieldOffset(Offset = "0x30")]
		public bool playSpotlight;

		[Token(Token = "0x40003B8")]
		[FieldOffset(Offset = "0x38")]
		private GameObject _003Ctarget_003E5__2;

		[Token(Token = "0x40003B9")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700007E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600056F")]
			[Address(RVA = "0x3A2C6F0", Offset = "0x3A2C6F0", VA = "0x3A2C6F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000571")]
			[Address(RVA = "0x3A2C740", Offset = "0x3A2C740", VA = "0x3A2C740", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600056C")]
		[Address(RVA = "0x3A2B270", Offset = "0x3A2B270", VA = "0x3A2B270")]
		[DebuggerHidden]
		public _003CFocusInView_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600056D")]
		[Address(RVA = "0x3A2B950", Offset = "0x3A2B950", VA = "0x3A2B950", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600056E")]
		[Address(RVA = "0x3A2B960", Offset = "0x3A2B960", VA = "0x3A2B960", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000570")]
		[Address(RVA = "0x3A2C700", Offset = "0x3A2C700", VA = "0x3A2C700", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	[CompilerGenerated]
	private sealed class _003CRevealUntilVisible_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003BA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003BB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003BC")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40003BD")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40003BE")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000080")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000575")]
			[Address(RVA = "0x3A2C9D0", Offset = "0x3A2C9D0", VA = "0x3A2C9D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000081")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000577")]
			[Address(RVA = "0x3A2CA20", Offset = "0x3A2CA20", VA = "0x3A2CA20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000572")]
		[Address(RVA = "0x3A2B310", Offset = "0x3A2B310", VA = "0x3A2B310")]
		[DebuggerHidden]
		public _003CRevealUntilVisible_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000573")]
		[Address(RVA = "0x3A2C750", Offset = "0x3A2C750", VA = "0x3A2C750", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000574")]
		[Address(RVA = "0x3A2C760", Offset = "0x3A2C760", VA = "0x3A2C760", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000576")]
		[Address(RVA = "0x3A2C9E0", Offset = "0x3A2C9E0", VA = "0x3A2C9E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000C1")]
	[CompilerGenerated]
	private sealed class _003CWaitForMotion_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003BF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003C0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003C1")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x17000082")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600057B")]
			[Address(RVA = "0x3A2CB20", Offset = "0x3A2CB20", VA = "0x3A2CB20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000083")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600057D")]
			[Address(RVA = "0x3A2CB70", Offset = "0x3A2CB70", VA = "0x3A2CB70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000578")]
		[Address(RVA = "0x3A2B380", Offset = "0x3A2B380", VA = "0x3A2B380")]
		[DebuggerHidden]
		public _003CWaitForMotion_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000579")]
		[Address(RVA = "0x3A2CA30", Offset = "0x3A2CA30", VA = "0x3A2CA30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600057A")]
		[Address(RVA = "0x3A2CA40", Offset = "0x3A2CA40", VA = "0x3A2CA40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600057C")]
		[Address(RVA = "0x3A2CB30", Offset = "0x3A2CB30", VA = "0x3A2CB30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40003A9")]
	private const int TargetWaitFrames = 15;

	[Token(Token = "0x40003AA")]
	private const int VisibilityWaitFrames = 8;

	[Token(Token = "0x40003AB")]
	private const float MotionWaitSeconds = 0.35f;

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x3A23EE0", Offset = "0x3A23EE0", VA = "0x3A23EE0")]
	public static void Activate(GisketchSearchEntry entry, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x3A2B120", Offset = "0x3A2B120", VA = "0x3A2B120")]
	[IteratorStateMachine(typeof(_003CFocusAfterBuild_003Ed__4))]
	private static IEnumerator FocusAfterBuild(GisketchSearchEntry entry, GisketchUIRoot root, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x3A2B1E0", Offset = "0x3A2B1E0", VA = "0x3A2B1E0")]
	[IteratorStateMachine(typeof(_003CFocusInView_003Ed__5))]
	public static IEnumerator FocusInView(GisketchSearchEntry entry, GisketchView view, bool playSpotlight)
	{
		return null;
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x3A2B290", Offset = "0x3A2B290", VA = "0x3A2B290")]
	[IteratorStateMachine(typeof(_003CRevealUntilVisible_003Ed__6))]
	private static IEnumerator RevealUntilVisible(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x3A2B330", Offset = "0x3A2B330", VA = "0x3A2B330")]
	[IteratorStateMachine(typeof(_003CWaitForMotion_003Ed__7))]
	private static IEnumerator WaitForMotion()
	{
		return null;
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x3A2B3A0", Offset = "0x3A2B3A0", VA = "0x3A2B3A0")]
	private static GameObject Target(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x3A2B530", Offset = "0x3A2B530", VA = "0x3A2B530")]
	private static GameObject FindSection(Transform root, string sectionId)
	{
		return null;
	}
}
