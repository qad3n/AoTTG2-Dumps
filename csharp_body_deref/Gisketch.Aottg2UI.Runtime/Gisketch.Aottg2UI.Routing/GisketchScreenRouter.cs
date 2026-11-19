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

[Token(Token = "0x2000042")]
public sealed class GisketchScreenRouter
{
	[Token(Token = "0x2000046")]
	[CompilerGenerated]
	private sealed class _003CActivateNextFrame_003Ed__41 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string id;

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600027B")]
			[Address(RVA = "0x5251780", Offset = "0x5250780", VA = "0x5251780", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600027D")]
			[Address(RVA = "0x52517D0", Offset = "0x52507D0", VA = "0x52517D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x5250F00", Offset = "0x524FF00", VA = "0x5250F00")]
		[DebuggerHidden]
		public _003CActivateNextFrame_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000279")]
		[Address(RVA = "0x52516F0", Offset = "0x52506F0", VA = "0x52516F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x5251700", Offset = "0x5250700", VA = "0x5251700", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5251790", Offset = "0x5250790", VA = "0x5251790", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000047")]
	[CompilerGenerated]
	private sealed class _003CPrewarmCachedScreen_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string id;

		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int keepAliveFrames;

		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private GisketchView _003Cview_003E5__3;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700003E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000281")]
			[Address(RVA = "0x5251E90", Offset = "0x5250E90", VA = "0x5251E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000283")]
			[Address(RVA = "0x5251EE0", Offset = "0x5250EE0", VA = "0x5251EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5250E40", Offset = "0x524FE40", VA = "0x5250E40")]
		[DebuggerHidden]
		public _003CPrewarmCachedScreen_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600027F")]
		[Address(RVA = "0x52517E0", Offset = "0x52507E0", VA = "0x52517E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x52517F0", Offset = "0x52507F0", VA = "0x52517F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x5251EA0", Offset = "0x5250EA0", VA = "0x5251EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000048")]
	[CompilerGenerated]
	private sealed class _003CPrewarmScreen_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string id;

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int keepAliveFrames;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private GameObject _003Chost_003E5__3;

		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x400016D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x17000040")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000288")]
			[Address(RVA = "0x5252760", Offset = "0x5251760", VA = "0x5252760", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000041")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600028A")]
			[Address(RVA = "0x52527B0", Offset = "0x52517B0", VA = "0x52527B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x5250C80", Offset = "0x524FC80", VA = "0x5250C80")]
		[DebuggerHidden]
		public _003CPrewarmScreen_003Ed__37(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x5251EF0", Offset = "0x5250EF0", VA = "0x5251EF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x5251F10", Offset = "0x5250F10", VA = "0x5251F10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000287")]
		[Address(RVA = "0x52526B0", Offset = "0x52516B0", VA = "0x52526B0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x5252770", Offset = "0x5251770", VA = "0x5252770", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400013C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker ShowScreenMarker;

	[Token(Token = "0x400013D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MonoBehaviour _runner;

	[Token(Token = "0x400013E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400013F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Transform _screenLayer;

	[Token(Token = "0x4000140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, GisketchView> _screenCache;

	[Token(Token = "0x4000141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchView _active;

	[Token(Token = "0x4000142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _activeId;

	[Token(Token = "0x4000143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _pendingId;

	[Token(Token = "0x4000144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Coroutine _pendingActivation;

	[Token(Token = "0x4000145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Tween _outgoingExit;

	[Token(Token = "0x4000146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchView _outgoingView;

	[Token(Token = "0x4000147")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _outgoingId;

	[Token(Token = "0x4000148")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _prewarmHost;

	[Token(Token = "0x4000149")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GisketchView _prewarmCachedView;

	[Token(Token = "0x400014A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string _prewarmId;

	[Token(Token = "0x400014C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[CompilerGenerated]
	private Action<string, GisketchView> m_ScreenShown;

	[Token(Token = "0x17000037")]
	public GisketchView Active
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x524D860", Offset = "0x524C860", VA = "0x524D860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public string ActiveId
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x524D870", Offset = "0x524C870", VA = "0x524D870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public bool IsTransitioning
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x524D880", Offset = "0x524C880", VA = "0x524D880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public bool IsPrewarming
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x524D8A0", Offset = "0x524C8A0", VA = "0x524D8A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003B")]
	public Func<string, bool> CanShowScreen
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x524D910", Offset = "0x524C910", VA = "0x524D910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x524D920", Offset = "0x524C920", VA = "0x524D920")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<string, GisketchView> ScreenShown
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x524D930", Offset = "0x524C930", VA = "0x524D930")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x524D9E0", Offset = "0x524C9E0", VA = "0x524D9E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x524D6F0", Offset = "0x524C6F0", VA = "0x524D6F0")]
	public GisketchScreenRouter(Transform screenLayer, GisketchBuildContext context, [Optional] MonoBehaviour runner)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x524DA90", Offset = "0x524CA90", VA = "0x524DA90")]
	public bool ShowScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x524EA00", Offset = "0x524DA00", VA = "0x524EA00")]
	public bool Back()
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x524EC10", Offset = "0x524DC10", VA = "0x524EC10")]
	public bool RefreshNode(string nodeId, GisketchNodeDefinition replacement, [Optional] GisketchNodeRefreshOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x524FA00", Offset = "0x524EA00", VA = "0x524FA00")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x524FDE0", Offset = "0x524EDE0", VA = "0x524FDE0")]
	public void DeactivateActive([Optional][DefaultParameterValue(false)] bool animate, [Optional] Action afterDeactivate)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x5250360", Offset = "0x524F360", VA = "0x5250360")]
	public bool InvalidateScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x5250BF0", Offset = "0x524FBF0", VA = "0x5250BF0")]
	[IteratorStateMachine(typeof(_003CPrewarmScreen_003Ed__37))]
	public IEnumerator PrewarmScreen(string id, int keepAliveFrames)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x524E160", Offset = "0x524D160", VA = "0x524E160")]
	public void CancelPrewarm([Optional] string reason)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x5250DA0", Offset = "0x524FDA0", VA = "0x5250DA0")]
	[IteratorStateMachine(typeof(_003CPrewarmCachedScreen_003Ed__39))]
	private IEnumerator PrewarmCachedScreen(GisketchScreenDefinition screen, string id, int keepAliveFrames)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x524E420", Offset = "0x524D420", VA = "0x524E420")]
	private void ShowPrepared(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x5250E70", Offset = "0x524FE70", VA = "0x5250E70")]
	[IteratorStateMachine(typeof(_003CActivateNextFrame_003Ed__41))]
	private IEnumerator ActivateNextFrame(GisketchScreenDefinition screen, string id)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x524FA90", Offset = "0x524EA90", VA = "0x524FA90")]
	private void CloseActive(TweenCallback afterClose)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x5250730", Offset = "0x524F730", VA = "0x5250730")]
	private void Activate(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x524E310", Offset = "0x524D310", VA = "0x524E310")]
	private void CancelTransition()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5250F30", Offset = "0x524FF30", VA = "0x5250F30")]
	private GisketchView GetOrBuildView(GisketchScreenDefinition screen, string id)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x5250280", Offset = "0x524F280", VA = "0x5250280")]
	private void ReleaseDepartedView(string id, GisketchView view)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x5251220", Offset = "0x5250220", VA = "0x5251220")]
	private bool IsCachedView(string id, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x5250CA0", Offset = "0x524FCA0", VA = "0x5250CA0")]
	private void HideCachedView(GisketchView view)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x52505E0", Offset = "0x524F5E0", VA = "0x52505E0")]
	private bool RemoveCachedView(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x524FC60", Offset = "0x524EC60", VA = "0x524FC60")]
	private void DestroyCachedViews()
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5250680", Offset = "0x524F680", VA = "0x5250680")]
	private void DestroyView(GisketchView view)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x52500A0", Offset = "0x524F0A0", VA = "0x52500A0")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x52501C0", Offset = "0x524F1C0", VA = "0x52501C0")]
	private static void SetRaycasterEnabled(GameObject root, bool enabled)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x5251150", Offset = "0x5250150", VA = "0x5251150")]
	private static void ResetRootVisibility(GameObject root)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x52512B0", Offset = "0x52502B0", VA = "0x52512B0")]
	private static void ClearSelectedIfInside(GameObject root)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x524F670", Offset = "0x524E670", VA = "0x524F670")]
	private static void DestroyRoot(GameObject root)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x5251420", Offset = "0x5250420", VA = "0x5251420")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x524F520", Offset = "0x524E520", VA = "0x524F520")]
	private static string FocusedNodeId(GameObject scope)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x524F8D0", Offset = "0x524E8D0", VA = "0x524F8D0")]
	private static void RestoreFocus(GisketchView view, string focusId)
	{
	}
}
