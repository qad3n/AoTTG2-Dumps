// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Update status: CHANGED in this game update
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

[Token(Token = "0x200003B")]
public sealed class GisketchScreenRouter
{
	[Token(Token = "0x200003F")]
	[CompilerGenerated]
	private sealed class _003CActivateNextFrame_003Ed__41 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000133")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x4000137")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string id;

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000230")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000232")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600022D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CActivateNextFrame_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600022E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600022F")]
		[Address(RVA = "0x18BE8B0", Offset = "0x18BCEB0", VA = "0x1818BE8B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000231")]
		[Address(RVA = "0x18BE950", Offset = "0x18BCF50", VA = "0x1818BE950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000040")]
	[CompilerGenerated]
	private sealed class _003CPrewarmCachedScreen_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000138")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000139")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400013A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x400013B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string id;

		[Token(Token = "0x400013C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x400013D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int keepAliveFrames;

		[Token(Token = "0x400013E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x400013F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private GisketchView _003Cview_003E5__3;

		[Token(Token = "0x4000140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x4000141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700003E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000236")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700003F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000238")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000233")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPrewarmCachedScreen_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x18BEC10", Offset = "0x18BD210", VA = "0x1818BEC10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000237")]
		[Address(RVA = "0x18BF0E0", Offset = "0x18BD6E0", VA = "0x1818BF0E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000041")]
	[CompilerGenerated]
	private sealed class _003CPrewarmScreen_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000142")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string id;

		[Token(Token = "0x4000145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int keepAliveFrames;

		[Token(Token = "0x4000147")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x4000148")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private GameObject _003Chost_003E5__3;

		[Token(Token = "0x4000149")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x400014A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x17000040")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600023D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000041")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600023F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000239")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CPrewarmScreen_003Ed__37(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600023A")]
		[Address(RVA = "0x18BFAC0", Offset = "0x18BE0C0", VA = "0x1818BFAC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x18BF120", Offset = "0x18BD720", VA = "0x1818BF120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x18BFB00", Offset = "0x18BE100", VA = "0x1818BFB00")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x18BFA80", Offset = "0x18BE080", VA = "0x1818BFA80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000119")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker ShowScreenMarker;

	[Token(Token = "0x400011A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MonoBehaviour _runner;

	[Token(Token = "0x400011B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400011C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Transform _screenLayer;

	[Token(Token = "0x400011D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, GisketchView> _screenCache;

	[Token(Token = "0x400011E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchView _active;

	[Token(Token = "0x400011F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _activeId;

	[Token(Token = "0x4000120")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _pendingId;

	[Token(Token = "0x4000121")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Coroutine _pendingActivation;

	[Token(Token = "0x4000122")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Tween _outgoingExit;

	[Token(Token = "0x4000123")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchView _outgoingView;

	[Token(Token = "0x4000124")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _outgoingId;

	[Token(Token = "0x4000125")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _prewarmHost;

	[Token(Token = "0x4000126")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GisketchView _prewarmCachedView;

	[Token(Token = "0x4000127")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string _prewarmId;

	[Token(Token = "0x4000129")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[CompilerGenerated]
	private Action<string, GisketchView> m_ScreenShown;

	[Token(Token = "0x17000037")]
	public GisketchView Active
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public string ActiveId
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public bool IsTransitioning
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x18AD310", Offset = "0x18AB910", VA = "0x1818AD310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	public bool IsPrewarming
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x18AD290", Offset = "0x18AB890", VA = "0x1818AD290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003B")]
	public Func<string, bool> CanShowScreen
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<string, GisketchView> ScreenShown
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x18AD1E0", Offset = "0x18AB7E0", VA = "0x1818AD1E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x18AD330", Offset = "0x18AB930", VA = "0x1818AD330")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x18AD0C0", Offset = "0x18AB6C0", VA = "0x1818AD0C0")]
	public GisketchScreenRouter(Transform screenLayer, GisketchBuildContext context, [Optional] MonoBehaviour runner)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x18ACA50", Offset = "0x18AB050", VA = "0x1818ACA50")]
	public bool ShowScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x18A9D80", Offset = "0x18A8380", VA = "0x1818A9D80")]
	public bool Back()
	{
		return default(bool);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x18AB7E0", Offset = "0x18A9DE0", VA = "0x1818AB7E0")]
	public bool RefreshNode(string nodeId, GisketchNodeDefinition replacement, [Optional] GisketchNodeRefreshOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x18AA3D0", Offset = "0x18A89D0", VA = "0x1818AA3D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x18AA7C0", Offset = "0x18A8DC0", VA = "0x1818AA7C0")]
	public void DeactivateActive([Optional][DefaultParameterValue(false)] bool animate, [Optional] Action afterDeactivate)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x18AB380", Offset = "0x18A9980", VA = "0x1818AB380")]
	public bool InvalidateScreen(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x18AB760", Offset = "0x18A9D60", VA = "0x1818AB760")]
	[IteratorStateMachine(typeof(_003CPrewarmScreen_003Ed__37))]
	public IEnumerator PrewarmScreen(string id, int keepAliveFrames)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x18A9FD0", Offset = "0x18A85D0", VA = "0x1818A9FD0")]
	public void CancelPrewarm([Optional] string reason)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x18AB6C0", Offset = "0x18A9CC0", VA = "0x1818AB6C0")]
	[IteratorStateMachine(typeof(_003CPrewarmCachedScreen_003Ed__39))]
	private IEnumerator PrewarmCachedScreen(GisketchScreenDefinition screen, string id, int keepAliveFrames)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x18AC500", Offset = "0x18AAB00", VA = "0x1818AC500")]
	private void ShowPrepared(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x18A98C0", Offset = "0x18A7EC0", VA = "0x1818A98C0")]
	[IteratorStateMachine(typeof(_003CActivateNextFrame_003Ed__41))]
	private IEnumerator ActivateNextFrame(GisketchScreenDefinition screen, string id)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x18AA600", Offset = "0x18A8C00", VA = "0x1818AA600")]
	private void CloseActive(TweenCallback afterClose)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x18A9950", Offset = "0x18A7F50", VA = "0x1818A9950")]
	private void Activate(GisketchScreenDefinition screen, string id)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x18AA160", Offset = "0x18A8760", VA = "0x1818AA160")]
	private void CancelTransition()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x18AAF00", Offset = "0x18A9500", VA = "0x1818AAF00")]
	private GisketchView GetOrBuildView(GisketchScreenDefinition screen, string id)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x18ABEC0", Offset = "0x18AA4C0", VA = "0x1818ABEC0")]
	private void ReleaseDepartedView(string id, GisketchView view)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x18AB610", Offset = "0x18A9C10", VA = "0x1818AB610")]
	private bool IsCachedView(string id, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x18AB110", Offset = "0x18A9710", VA = "0x1818AB110")]
	private void HideCachedView(GisketchView view)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x18ABFD0", Offset = "0x18AA5D0", VA = "0x1818ABFD0")]
	private bool RemoveCachedView(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x18AAA20", Offset = "0x18A9020", VA = "0x1818AAA20")]
	private void DestroyCachedViews()
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x18AACE0", Offset = "0x18A92E0", VA = "0x1818AACE0")]
	private void DestroyView(GisketchView view)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x18AC310", Offset = "0x18AA910", VA = "0x1818AC310")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x18AC440", Offset = "0x18AAA40", VA = "0x1818AC440")]
	private static void SetRaycasterEnabled(GameObject root, bool enabled)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x18AC120", Offset = "0x18AA720", VA = "0x1818AC120")]
	private static void ResetRootVisibility(GameObject root)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x18AA260", Offset = "0x18A8860", VA = "0x1818AA260")]
	private static void ClearSelectedIfInside(GameObject root)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x18AAC20", Offset = "0x18A9220", VA = "0x1818AAC20")]
	private static void DestroyRoot(GameObject root)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x18ACF00", Offset = "0x18AB500", VA = "0x1818ACF00")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x18AAD90", Offset = "0x18A9390", VA = "0x1818AAD90")]
	private static string FocusedNodeId(GameObject scope)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x18AC1E0", Offset = "0x18AA7E0", VA = "0x1818AC1E0")]
	private static void RestoreFocus(GisketchView view, string focusId)
	{
	}
}
