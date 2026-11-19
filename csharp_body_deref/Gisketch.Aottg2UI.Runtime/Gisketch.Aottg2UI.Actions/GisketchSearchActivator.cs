// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20000EC")]
internal static class GisketchSearchActivator
{
	[Token(Token = "0x20000EE")]
	[CompilerGenerated]
	private sealed class _003CFocusAfterBuild_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004C9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004CA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004CB")]
		[FieldOffset(Offset = "0x20")]
		public GisketchUIRoot root;

		[Token(Token = "0x40004CC")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004CD")]
		[FieldOffset(Offset = "0x30")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x170000B4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600075C")]
			[Address(RVA = "0x52A5600", Offset = "0x52A4600", VA = "0x52A5600", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600075E")]
			[Address(RVA = "0x52A5650", Offset = "0x52A4650", VA = "0x52A5650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000759")]
		[Address(RVA = "0x52A4AC0", Offset = "0x52A3AC0", VA = "0x52A4AC0")]
		[DebuggerHidden]
		public _003CFocusAfterBuild_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600075A")]
		[Address(RVA = "0x52A54A0", Offset = "0x52A44A0", VA = "0x52A54A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600075B")]
		[Address(RVA = "0x52A54B0", Offset = "0x52A44B0", VA = "0x52A54B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600075D")]
		[Address(RVA = "0x52A5610", Offset = "0x52A4610", VA = "0x52A5610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000EF")]
	[CompilerGenerated]
	private sealed class _003CFocusInView_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004CE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004CF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004D0")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40004D1")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004D2")]
		[FieldOffset(Offset = "0x30")]
		public bool playSpotlight;

		[Token(Token = "0x40004D3")]
		[FieldOffset(Offset = "0x38")]
		private GameObject _003Ctarget_003E5__2;

		[Token(Token = "0x40004D4")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x170000B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000762")]
			[Address(RVA = "0x52A6330", Offset = "0x52A5330", VA = "0x52A6330", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000764")]
			[Address(RVA = "0x52A6380", Offset = "0x52A5380", VA = "0x52A6380", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600075F")]
		[Address(RVA = "0x52A4B70", Offset = "0x52A3B70", VA = "0x52A4B70")]
		[DebuggerHidden]
		public _003CFocusInView_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000760")]
		[Address(RVA = "0x52A5660", Offset = "0x52A4660", VA = "0x52A5660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000761")]
		[Address(RVA = "0x52A5670", Offset = "0x52A4670", VA = "0x52A5670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000763")]
		[Address(RVA = "0x52A6340", Offset = "0x52A5340", VA = "0x52A6340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000F0")]
	[CompilerGenerated]
	private sealed class _003CRevealUntilVisible_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004D5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004D6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004D7")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40004D8")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004D9")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170000B8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000768")]
			[Address(RVA = "0x52A6650", Offset = "0x52A5650", VA = "0x52A6650", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600076A")]
			[Address(RVA = "0x52A66A0", Offset = "0x52A56A0", VA = "0x52A66A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000765")]
		[Address(RVA = "0x52A4C10", Offset = "0x52A3C10", VA = "0x52A4C10")]
		[DebuggerHidden]
		public _003CRevealUntilVisible_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000766")]
		[Address(RVA = "0x52A6390", Offset = "0x52A5390", VA = "0x52A6390", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000767")]
		[Address(RVA = "0x52A63A0", Offset = "0x52A53A0", VA = "0x52A63A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000769")]
		[Address(RVA = "0x52A6660", Offset = "0x52A5660", VA = "0x52A6660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000F1")]
	[CompilerGenerated]
	private sealed class _003CWaitForMotion_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004DA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004DC")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x170000BA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600076E")]
			[Address(RVA = "0x52A67A0", Offset = "0x52A57A0", VA = "0x52A67A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000770")]
			[Address(RVA = "0x52A67F0", Offset = "0x52A57F0", VA = "0x52A67F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600076B")]
		[Address(RVA = "0x52A4C80", Offset = "0x52A3C80", VA = "0x52A4C80")]
		[DebuggerHidden]
		public _003CWaitForMotion_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x52A66B0", Offset = "0x52A56B0", VA = "0x52A66B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600076D")]
		[Address(RVA = "0x52A66C0", Offset = "0x52A56C0", VA = "0x52A66C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600076F")]
		[Address(RVA = "0x52A67B0", Offset = "0x52A57B0", VA = "0x52A67B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40004C4")]
	private const int TargetWaitFrames = 15;

	[Token(Token = "0x40004C5")]
	private const int VisibilityWaitFrames = 8;

	[Token(Token = "0x40004C6")]
	private const float MotionWaitSeconds = 0.35f;

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x529A8F0", Offset = "0x52998F0", VA = "0x529A8F0")]
	public static void Activate(GisketchSearchEntry entry, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x52A4A30", Offset = "0x52A3A30", VA = "0x52A4A30")]
	[IteratorStateMachine(typeof(_003CFocusAfterBuild_003Ed__4))]
	private static IEnumerator FocusAfterBuild(GisketchSearchEntry entry, GisketchUIRoot root, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x52A4AE0", Offset = "0x52A3AE0", VA = "0x52A4AE0")]
	[IteratorStateMachine(typeof(_003CFocusInView_003Ed__5))]
	public static IEnumerator FocusInView(GisketchSearchEntry entry, GisketchView view, bool playSpotlight)
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x52A4B90", Offset = "0x52A3B90", VA = "0x52A4B90")]
	[IteratorStateMachine(typeof(_003CRevealUntilVisible_003Ed__6))]
	private static IEnumerator RevealUntilVisible(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x52A4C30", Offset = "0x52A3C30", VA = "0x52A4C30")]
	[IteratorStateMachine(typeof(_003CWaitForMotion_003Ed__7))]
	private static IEnumerator WaitForMotion()
	{
		return null;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x52A4CA0", Offset = "0x52A3CA0", VA = "0x52A4CA0")]
	private static GameObject Target(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x52A4E70", Offset = "0x52A3E70", VA = "0x52A4E70")]
	private static GameObject MaterializeTarget(string targetId, GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x52A51B0", Offset = "0x52A41B0", VA = "0x52A51B0")]
	private static bool PrepareTarget(string targetId, GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x52A5060", Offset = "0x52A4060", VA = "0x52A5060")]
	private static GameObject FindSection(Transform root, string sectionId)
	{
		return null;
	}
}
