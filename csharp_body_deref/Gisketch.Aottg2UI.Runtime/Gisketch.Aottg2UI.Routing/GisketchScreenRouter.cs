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

[Token(Token = "0x200002F")]
public sealed class GisketchScreenRouter
{
	[Token(Token = "0x2000032")]
	[CompilerGenerated]
	private sealed class _003CActivateNextFrame_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x40000F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string id;

		[Token(Token = "0x17000029")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000198")]
			[Address(RVA = "0x39E4CE0", Offset = "0x39E4CE0", VA = "0x39E4CE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700002A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600019A")]
			[Address(RVA = "0x39E4D30", Offset = "0x39E4D30", VA = "0x39E4D30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000195")]
		[Address(RVA = "0x39E49A0", Offset = "0x39E49A0", VA = "0x39E49A0")]
		[DebuggerHidden]
		public _003CActivateNextFrame_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000196")]
		[Address(RVA = "0x39E4C40", Offset = "0x39E4C40", VA = "0x39E4C40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000197")]
		[Address(RVA = "0x39E4C50", Offset = "0x39E4C50", VA = "0x39E4C50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000199")]
		[Address(RVA = "0x39E4CF0", Offset = "0x39E4CF0", VA = "0x39E4CF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000033")]
	[CompilerGenerated]
	private sealed class _003CPrewarmScreen_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string id;

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int keepAliveFrames;

		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private GameObject _003Chost_003E5__3;

		[Token(Token = "0x4000101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700002B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600019F")]
			[Address(RVA = "0x39E5800", Offset = "0x39E5800", VA = "0x39E5800", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700002C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A1")]
			[Address(RVA = "0x39E5850", Offset = "0x39E5850", VA = "0x39E5850", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600019B")]
		[Address(RVA = "0x39E40B0", Offset = "0x39E40B0", VA = "0x39E40B0")]
		[DebuggerHidden]
		public _003CPrewarmScreen_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600019C")]
		[Address(RVA = "0x39E4D40", Offset = "0x39E4D40", VA = "0x39E4D40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600019D")]
		[Address(RVA = "0x39E4D60", Offset = "0x39E4D60", VA = "0x39E4D60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600019E")]
		[Address(RVA = "0x39E5750", Offset = "0x39E5750", VA = "0x39E5750")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x39E5810", Offset = "0x39E5810", VA = "0x39E5810", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker ShowScreenMarker;

	[Token(Token = "0x40000E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MonoBehaviour _runner;

	[Token(Token = "0x40000E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x40000E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Transform _screenLayer;

	[Token(Token = "0x40000E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchView _active;

	[Token(Token = "0x40000E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _activeId;

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _pendingId;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Coroutine _pendingActivation;

	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _outgoingExit;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private GisketchView _outgoingView;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GameObject _prewarmHost;

	[Token(Token = "0x40000EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _prewarmId;

	[Token(Token = "0x17000025")]
	public GisketchView Active
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x39E2CE0", Offset = "0x39E2CE0", VA = "0x39E2CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public string ActiveId
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x39E2CF0", Offset = "0x39E2CF0", VA = "0x39E2CF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public bool IsTransitioning
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x39E2D00", Offset = "0x39E2D00", VA = "0x39E2D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsPrewarming
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x39E2D20", Offset = "0x39E2D20", VA = "0x39E2D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<string, GisketchView> ScreenShown
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x39E2D70", Offset = "0x39E2D70", VA = "0x39E2D70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x39E2E20", Offset = "0x39E2E20", VA = "0x39E2E20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x39E2C80", Offset = "0x39E2C80", VA = "0x39E2C80")]
	public GisketchScreenRouter(Transform screenLayer, GisketchBuildContext context, [Optional] MonoBehaviour runner)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x39E2ED0", Offset = "0x39E2ED0", VA = "0x39E2ED0")]
	public void ShowScreen(string id)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x39E3D20", Offset = "0x39E3D20", VA = "0x39E3D20")]
	public bool Back()
	{
		return default(bool);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x39E3DC0", Offset = "0x39E3DC0", VA = "0x39E3DC0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x39E4020", Offset = "0x39E4020", VA = "0x39E4020")]
	[IteratorStateMachine(typeof(_003CPrewarmScreen_003Ed__27))]
	public IEnumerator PrewarmScreen(string id, int keepAliveFrames)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x39E34A0", Offset = "0x39E34A0", VA = "0x39E34A0")]
	public void CancelPrewarm([Optional] string reason)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x39E36F0", Offset = "0x39E36F0", VA = "0x39E36F0")]
	private void ShowPrepared(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x39E4900", Offset = "0x39E4900", VA = "0x39E4900")]
	[IteratorStateMachine(typeof(_003CActivateNextFrame_003Ed__30))]
	private IEnumerator ActivateNextFrame(GisketchScreenDefinition screen, string id)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x39E3E50", Offset = "0x39E3E50", VA = "0x39E3E50")]
	private void CloseActive(TweenCallback afterClose)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x39E41A0", Offset = "0x39E41A0", VA = "0x39E41A0")]
	private void Activate(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x39E3610", Offset = "0x39E3610", VA = "0x39E3610")]
	private void CancelTransition()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x39E4740", Offset = "0x39E4740", VA = "0x39E4740")]
	private void DestroyView(GisketchView view)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x39E47E0", Offset = "0x39E47E0", VA = "0x39E47E0")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x39E40D0", Offset = "0x39E40D0", VA = "0x39E40D0")]
	private static void DestroyRoot(GameObject root)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x39E49D0", Offset = "0x39E49D0", VA = "0x39E49D0")]
	private static void Stretch(RectTransform rect)
	{
	}
}
