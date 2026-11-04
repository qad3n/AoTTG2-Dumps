// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000E6")]
internal static class GisketchSearchActivator
{
	[Token(Token = "0x20000E8")]
	[CompilerGenerated]
	private sealed class _003CFocusAfterBuild_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004A2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004A3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004A4")]
		[FieldOffset(Offset = "0x20")]
		public GisketchUIRoot root;

		[Token(Token = "0x40004A5")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004A6")]
		[FieldOffset(Offset = "0x30")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x170000B4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600070E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000710")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600070B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFocusAfterBuild_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600070C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600070D")]
		[Address(RVA = "0x1909840", Offset = "0x1907E40", VA = "0x181909840", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600070F")]
		[Address(RVA = "0x19099A0", Offset = "0x1907FA0", VA = "0x1819099A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000E9")]
	[CompilerGenerated]
	private sealed class _003CFocusInView_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004A7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004A8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004A9")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40004AA")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004AB")]
		[FieldOffset(Offset = "0x30")]
		public bool playSpotlight;

		[Token(Token = "0x40004AC")]
		[FieldOffset(Offset = "0x38")]
		private GameObject _003Ctarget_003E5__2;

		[Token(Token = "0x40004AD")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x170000B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000714")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000716")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000711")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFocusInView_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000712")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000713")]
		[Address(RVA = "0x19099E0", Offset = "0x1907FE0", VA = "0x1819099E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000715")]
		[Address(RVA = "0x1909F50", Offset = "0x1908550", VA = "0x181909F50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000EA")]
	[CompilerGenerated]
	private sealed class _003CRevealUntilVisible_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004AE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004AF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004B0")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40004B1")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170000B8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600071A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600071C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000717")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRevealUntilVisible_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000718")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000719")]
		[Address(RVA = "0x190A0C0", Offset = "0x19086C0", VA = "0x18190A0C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600071B")]
		[Address(RVA = "0x190A2D0", Offset = "0x19088D0", VA = "0x18190A2D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20000EB")]
	[CompilerGenerated]
	private sealed class _003CWaitForMotion_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004B3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004B4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004B5")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x170000BA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000720")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000722")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600071D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForMotion_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600071F")]
		[Address(RVA = "0x190B8B0", Offset = "0x1909EB0", VA = "0x18190B8B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000721")]
		[Address(RVA = "0x190B960", Offset = "0x1909F60", VA = "0x18190B960", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400049D")]
	private const int TargetWaitFrames = 15;

	[Token(Token = "0x400049E")]
	private const int VisibilityWaitFrames = 8;

	[Token(Token = "0x400049F")]
	private const float MotionWaitSeconds = 0.35f;

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x1905970", Offset = "0x1903F70", VA = "0x181905970")]
	public static void Activate(GisketchSearchEntry entry, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x1905D50", Offset = "0x1904350", VA = "0x181905D50")]
	[IteratorStateMachine(typeof(_003CFocusAfterBuild_003Ed__4))]
	private static IEnumerator FocusAfterBuild(GisketchSearchEntry entry, GisketchUIRoot root, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x1905DE0", Offset = "0x19043E0", VA = "0x181905DE0")]
	[IteratorStateMachine(typeof(_003CFocusInView_003Ed__5))]
	public static IEnumerator FocusInView(GisketchSearchEntry entry, GisketchView view, bool playSpotlight)
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x19060F0", Offset = "0x19046F0", VA = "0x1819060F0")]
	[IteratorStateMachine(typeof(_003CRevealUntilVisible_003Ed__6))]
	private static IEnumerator RevealUntilVisible(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x1906480", Offset = "0x1904A80", VA = "0x181906480")]
	[IteratorStateMachine(typeof(_003CWaitForMotion_003Ed__7))]
	private static IEnumerator WaitForMotion()
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x1906180", Offset = "0x1904780", VA = "0x181906180")]
	private static GameObject Target(GisketchSearchEntry entry, GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x1905E60", Offset = "0x1904460", VA = "0x181905E60")]
	private static GameObject MaterializeTarget(string targetId, GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x1905FD0", Offset = "0x19045D0", VA = "0x181905FD0")]
	private static bool PrepareTarget(string targetId, GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x1905C00", Offset = "0x1904200", VA = "0x181905C00")]
	private static GameObject FindSection(Transform root, string sectionId)
	{
		return null;
	}
}
