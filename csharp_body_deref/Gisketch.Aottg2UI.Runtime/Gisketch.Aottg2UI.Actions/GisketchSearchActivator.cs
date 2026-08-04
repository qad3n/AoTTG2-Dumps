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

[Token(Token = "0x20000C1")]
internal static class GisketchSearchActivator
{
	[Token(Token = "0x20000C3")]
	[CompilerGenerated]
	private sealed class _003CFocusAfterBuild_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003DF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003E0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003E1")]
		[FieldOffset(Offset = "0x20")]
		public GisketchUIRoot root;

		[Token(Token = "0x40003E2")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40003E3")]
		[FieldOffset(Offset = "0x30")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x1700007F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600059A")]
			[Address(RVA = "0x3A98420", Offset = "0x3A98420", VA = "0x3A98420", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000080")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600059C")]
			[Address(RVA = "0x3A98470", Offset = "0x3A98470", VA = "0x3A98470", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x3A97CF0", Offset = "0x3A97CF0", VA = "0x3A97CF0")]
		[DebuggerHidden]
		public _003CFocusAfterBuild_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000598")]
		[Address(RVA = "0x3A982B0", Offset = "0x3A982B0", VA = "0x3A982B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x3A982C0", Offset = "0x3A982C0", VA = "0x3A982C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600059B")]
		[Address(RVA = "0x3A98430", Offset = "0x3A98430", VA = "0x3A98430", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000C4")]
	[CompilerGenerated]
	private sealed class _003CFocusInView_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003E4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003E5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003E6")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40003E7")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40003E8")]
		[FieldOffset(Offset = "0x30")]
		public bool playSpotlight;

		[Token(Token = "0x40003E9")]
		[FieldOffset(Offset = "0x38")]
		private GameObject _003Ctarget_003E5__2;

		[Token(Token = "0x40003EA")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x17000081")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60005A0")]
			[Address(RVA = "0x3A99220", Offset = "0x3A99220", VA = "0x3A99220", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000082")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005A2")]
			[Address(RVA = "0x3A99270", Offset = "0x3A99270", VA = "0x3A99270", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600059D")]
		[Address(RVA = "0x3A97DA0", Offset = "0x3A97DA0", VA = "0x3A97DA0")]
		[DebuggerHidden]
		public _003CFocusInView_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600059E")]
		[Address(RVA = "0x3A98480", Offset = "0x3A98480", VA = "0x3A98480", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600059F")]
		[Address(RVA = "0x3A98490", Offset = "0x3A98490", VA = "0x3A98490", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x3A99230", Offset = "0x3A99230", VA = "0x3A99230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000C5")]
	[CompilerGenerated]
	private sealed class _003CRevealUntilVisible_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003EB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003EC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003ED")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40003EE")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40003EF")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000083")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60005A6")]
			[Address(RVA = "0x3A99500", Offset = "0x3A99500", VA = "0x3A99500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000084")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005A8")]
			[Address(RVA = "0x3A99550", Offset = "0x3A99550", VA = "0x3A99550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x3A97E40", Offset = "0x3A97E40", VA = "0x3A97E40")]
		[DebuggerHidden]
		public _003CRevealUntilVisible_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x3A99280", Offset = "0x3A99280", VA = "0x3A99280", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x3A99290", Offset = "0x3A99290", VA = "0x3A99290", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x3A99510", Offset = "0x3A99510", VA = "0x3A99510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000C6")]
	[CompilerGenerated]
	private sealed class _003CWaitForMotion_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003F0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40003F1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40003F2")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x17000085")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60005AC")]
			[Address(RVA = "0x3A99650", Offset = "0x3A99650", VA = "0x3A99650", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000086")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005AE")]
			[Address(RVA = "0x3A996A0", Offset = "0x3A996A0", VA = "0x3A996A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x3A97EB0", Offset = "0x3A97EB0", VA = "0x3A97EB0")]
		[DebuggerHidden]
		public _003CWaitForMotion_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x3A99560", Offset = "0x3A99560", VA = "0x3A99560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x3A99570", Offset = "0x3A99570", VA = "0x3A99570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005AD")]
		[Address(RVA = "0x3A99660", Offset = "0x3A99660", VA = "0x3A99660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40003DA")]
	private const int TargetWaitFrames = 15;

	[Token(Token = "0x40003DB")]
	private const int VisibilityWaitFrames = 8;

	[Token(Token = "0x40003DC")]
	private const float MotionWaitSeconds = 0.35f;

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x3A90030", Offset = "0x3A90030", VA = "0x3A90030")]
	public static void Activate(GisketchSearchEntry entry, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x3A97C50", Offset = "0x3A97C50", VA = "0x3A97C50")]
	[IteratorStateMachine(typeof(_003CFocusAfterBuild_003Ed__4))]
	private static IEnumerator FocusAfterBuild(GisketchSearchEntry entry, GisketchUIRoot root, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x3A97D10", Offset = "0x3A97D10", VA = "0x3A97D10")]
	[IteratorStateMachine(typeof(_003CFocusInView_003Ed__5))]
	public static IEnumerator FocusInView(GisketchSearchEntry entry, GisketchView view, bool playSpotlight)
	{
		return null;
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x3A97DC0", Offset = "0x3A97DC0", VA = "0x3A97DC0")]
	[IteratorStateMachine(typeof(_003CRevealUntilVisible_003Ed__6))]
	private static IEnumerator RevealUntilVisible(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x3A97E60", Offset = "0x3A97E60", VA = "0x3A97E60")]
	[IteratorStateMachine(typeof(_003CWaitForMotion_003Ed__7))]
	private static IEnumerator WaitForMotion()
	{
		return null;
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x3A97ED0", Offset = "0x3A97ED0", VA = "0x3A97ED0")]
	private static GameObject Target(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x3A98060", Offset = "0x3A98060", VA = "0x3A98060")]
	private static GameObject FindSection(Transform root, string sectionId)
	{
		return null;
	}
}
