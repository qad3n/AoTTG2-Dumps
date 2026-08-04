// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;

namespace Gisketch.Aottg2UI.Routing;

[Token(Token = "0x2000030")]
public sealed class GisketchScreenRouter
{
	[Token(Token = "0x2000033")]
	[CompilerGenerated]
	private sealed class _003CActivateNextFrame_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string id;

		[Token(Token = "0x17000029")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001A0")]
			[Address(RVA = "0x3A4F360", Offset = "0x3A4F360", VA = "0x3A4F360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700002A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A2")]
			[Address(RVA = "0x3A4F3B0", Offset = "0x3A4F3B0", VA = "0x3A4F3B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600019D")]
		[Address(RVA = "0x3A4F020", Offset = "0x3A4F020", VA = "0x3A4F020")]
		[DebuggerHidden]
		public _003CActivateNextFrame_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600019E")]
		[Address(RVA = "0x3A4F2C0", Offset = "0x3A4F2C0", VA = "0x3A4F2C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600019F")]
		[Address(RVA = "0x3A4F2D0", Offset = "0x3A4F2D0", VA = "0x3A4F2D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x3A4F370", Offset = "0x3A4F370", VA = "0x3A4F370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000034")]
	[CompilerGenerated]
	private sealed class _003CPrewarmScreen_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string id;

		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int keepAliveFrames;

		[Token(Token = "0x4000105")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x4000106")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private GameObject _003Chost_003E5__3;

		[Token(Token = "0x4000107")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x4000108")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700002B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001A7")]
			[Address(RVA = "0x3A4FE80", Offset = "0x3A4FE80", VA = "0x3A4FE80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700002C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A9")]
			[Address(RVA = "0x3A4FED0", Offset = "0x3A4FED0", VA = "0x3A4FED0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x3A4E730", Offset = "0x3A4E730", VA = "0x3A4E730")]
		[DebuggerHidden]
		public _003CPrewarmScreen_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x3A4F3C0", Offset = "0x3A4F3C0", VA = "0x3A4F3C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x3A4F3E0", Offset = "0x3A4F3E0", VA = "0x3A4F3E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x3A4FDD0", Offset = "0x3A4FDD0", VA = "0x3A4FDD0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x3A4FE90", Offset = "0x3A4FE90", VA = "0x3A4FE90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker ShowScreenMarker;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MonoBehaviour _runner;

	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Transform _screenLayer;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchView _active;

	[Token(Token = "0x40000EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _activeId;

	[Token(Token = "0x40000F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _pendingId;

	[Token(Token = "0x40000F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Coroutine _pendingActivation;

	[Token(Token = "0x40000F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _outgoingExit;

	[Token(Token = "0x40000F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private GisketchView _outgoingView;

	[Token(Token = "0x40000F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GameObject _prewarmHost;

	[Token(Token = "0x40000F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _prewarmId;

	[Token(Token = "0x17000025")]
	public GisketchView Active
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3A4D360", Offset = "0x3A4D360", VA = "0x3A4D360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public string ActiveId
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3A4D370", Offset = "0x3A4D370", VA = "0x3A4D370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public bool IsTransitioning
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3A4D380", Offset = "0x3A4D380", VA = "0x3A4D380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsPrewarming
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3A4D3A0", Offset = "0x3A4D3A0", VA = "0x3A4D3A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<string, GisketchView> ScreenShown
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3A4D3F0", Offset = "0x3A4D3F0", VA = "0x3A4D3F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x3A4D4A0", Offset = "0x3A4D4A0", VA = "0x3A4D4A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x3A4D300", Offset = "0x3A4D300", VA = "0x3A4D300")]
	public GisketchScreenRouter(Transform screenLayer, GisketchBuildContext context, [Optional] MonoBehaviour runner)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x3A4D550", Offset = "0x3A4D550", VA = "0x3A4D550")]
	public void ShowScreen(string id)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x3A4E3A0", Offset = "0x3A4E3A0", VA = "0x3A4E3A0")]
	public bool Back()
	{
		return default(bool);
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x3A4E440", Offset = "0x3A4E440", VA = "0x3A4E440")]
	public void Clear()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x3A4E6A0", Offset = "0x3A4E6A0", VA = "0x3A4E6A0")]
	[IteratorStateMachine(typeof(_003CPrewarmScreen_003Ed__27))]
	public IEnumerator PrewarmScreen(string id, int keepAliveFrames)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x3A4DB20", Offset = "0x3A4DB20", VA = "0x3A4DB20")]
	public void CancelPrewarm([Optional] string reason)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x3A4DD70", Offset = "0x3A4DD70", VA = "0x3A4DD70")]
	private void ShowPrepared(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x3A4EF80", Offset = "0x3A4EF80", VA = "0x3A4EF80")]
	[IteratorStateMachine(typeof(_003CActivateNextFrame_003Ed__30))]
	private IEnumerator ActivateNextFrame(GisketchScreenDefinition screen, string id)
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x3A4E4D0", Offset = "0x3A4E4D0", VA = "0x3A4E4D0")]
	private void CloseActive(TweenCallback afterClose)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x3A4E820", Offset = "0x3A4E820", VA = "0x3A4E820")]
	private void Activate(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x3A4DC90", Offset = "0x3A4DC90", VA = "0x3A4DC90")]
	private void CancelTransition()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3A4EDC0", Offset = "0x3A4EDC0", VA = "0x3A4EDC0")]
	private void DestroyView(GisketchView view)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x3A4EE60", Offset = "0x3A4EE60", VA = "0x3A4EE60")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x3A4E750", Offset = "0x3A4E750", VA = "0x3A4E750")]
	private static void DestroyRoot(GameObject root)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x3A4F050", Offset = "0x3A4F050", VA = "0x3A4F050")]
	private static void Stretch(RectTransform rect)
	{
	}
}
