// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapLoader.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using ApplicationManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.AI;

namespace Map;

[Token(Token = "0x2000400")]
internal class MapLoader : MonoBehaviour
{
	[Token(Token = "0x2000401")]
	private readonly struct NavMeshBuild
	{
		[Token(Token = "0x40014AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly NavMeshData Data;

		[Token(Token = "0x40014AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly NavMeshBuildSettings Settings;

		[Token(Token = "0x40014AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public readonly Bounds Bounds;

		[Token(Token = "0x60019B3")]
		[Address(RVA = "0x589AEF0", Offset = "0x5899EF0", VA = "0x589AEF0")]
		public NavMeshBuild(NavMeshData data, NavMeshBuildSettings settings, Bounds bounds)
		{
		}
	}

	[Token(Token = "0x2000403")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass50_0
	{
		[Token(Token = "0x40014B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<AsyncOperation> operations;

		[Token(Token = "0x60019B7")]
		[Address(RVA = "0x589B160", Offset = "0x589A160", VA = "0x589B160")]
		public _003C_003Ec__DisplayClass50_0()
		{
		}

		[Token(Token = "0x60019B8")]
		[Address(RVA = "0x589B170", Offset = "0x589A170", VA = "0x589B170")]
		internal void _003CLoadObjectsCoroutine_003Eb__1()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000407")]
	[CompilerGenerated]
	private struct _003CGenerateNavMesh_003Ed__63 : IAsyncStateMachine
	{
		[Token(Token = "0x40014B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40014B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40014B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private List<AsyncOperation>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x40014BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60019BF")]
		[Address(RVA = "0x589B6C0", Offset = "0x589A6C0", VA = "0x589B6C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60019C0")]
		[Address(RVA = "0x589BFC0", Offset = "0x589AFC0", VA = "0x589BFC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000408")]
	[CompilerGenerated]
	private sealed class _003CLoadObjectsCoroutine_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40014BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40014BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40014BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<string> customAssets;

		[Token(Token = "0x40014BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool editor;

		[Token(Token = "0x40014C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public List<MapScriptBaseObject> objects;

		[Token(Token = "0x40014C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private _003C_003Ec__DisplayClass50_0 _003C_003E8__1;

		[Token(Token = "0x40014C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003CgamemodeNeedsNav_003E5__2;

		[Token(Token = "0x40014C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool _003CrebuildNavMesh_003E5__3;

		[Token(Token = "0x40014C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ccount_003E5__4;

		[Token(Token = "0x40014C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private float _003Cmultiplier_003E5__5;

		[Token(Token = "0x40014C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private List<string>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x40014C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _003CcustomAsset_003E5__7;

		[Token(Token = "0x40014C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private string _003Cbundle_003E5__8;

		[Token(Token = "0x40014C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private List<MapScriptBaseObject>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x40014CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private bool _003CnavMeshStarted_003E5__10;

		[Token(Token = "0x170002AF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60019C6")]
			[Address(RVA = "0x589DA50", Offset = "0x589CA50", VA = "0x589DA50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002B0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60019C8")]
			[Address(RVA = "0x589DAA0", Offset = "0x589CAA0", VA = "0x589DAA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60019C1")]
		[Address(RVA = "0x589C020", Offset = "0x589B020", VA = "0x589C020")]
		[DebuggerHidden]
		public _003CLoadObjectsCoroutine_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60019C2")]
		[Address(RVA = "0x589C040", Offset = "0x589B040", VA = "0x589C040", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60019C3")]
		[Address(RVA = "0x589C0E0", Offset = "0x589B0E0", VA = "0x589C0E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60019C4")]
		[Address(RVA = "0x589D9D0", Offset = "0x589C9D0", VA = "0x589D9D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x589DA10", Offset = "0x589CA10", VA = "0x589DA10")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60019C7")]
		[Address(RVA = "0x589DA60", Offset = "0x589CA60", VA = "0x589DA60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000409")]
	[CompilerGenerated]
	private sealed class _003CRefreshNavMesh_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40014CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40014CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40014CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private WaitForSecondsRealtime _003Cdelay_003E5__2;

		[Token(Token = "0x40014CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private List<AsyncOperation> _003Coperations_003E5__3;

		[Token(Token = "0x40014CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private List<AsyncOperation>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x170002B1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60019CD")]
			[Address(RVA = "0x589E360", Offset = "0x589D360", VA = "0x589E360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002B2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60019CF")]
			[Address(RVA = "0x589E3B0", Offset = "0x589D3B0", VA = "0x589E3B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60019C9")]
		[Address(RVA = "0x589DAB0", Offset = "0x589CAB0", VA = "0x589DAB0")]
		[DebuggerHidden]
		public _003CRefreshNavMesh_003Ed__58(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60019CA")]
		[Address(RVA = "0x589DAD0", Offset = "0x589CAD0", VA = "0x589DAD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60019CB")]
		[Address(RVA = "0x589DB20", Offset = "0x589CB20", VA = "0x589DB20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60019CC")]
		[Address(RVA = "0x589E320", Offset = "0x589D320", VA = "0x589E320")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x589E370", Offset = "0x589D370", VA = "0x589E370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200040A")]
	[CompilerGenerated]
	private struct _003CUpdateAllNavMeshes_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x40014D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40014D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40014D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60019D0")]
		[Address(RVA = "0x589E3C0", Offset = "0x589D3C0", VA = "0x589E3C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60019D1")]
		[Address(RVA = "0x589E660", Offset = "0x589D660", VA = "0x589E660", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200040B")]
	[CompilerGenerated]
	private struct _003CUpdateNavMesh_003Ed__61 : IAsyncStateMachine
	{
		[Token(Token = "0x40014D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40014D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40014D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60019D2")]
		[Address(RVA = "0x589E6C0", Offset = "0x589D6C0", VA = "0x589E6C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60019D3")]
		[Address(RVA = "0x589E8E0", Offset = "0x589D8E0", VA = "0x589E8E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400148E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Dictionary<int, MapObject> IdToMapObject;

	[Token(Token = "0x400148F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static Dictionary<int, HashSet<int>> IdToChildren;

	[Token(Token = "0x4001490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static List<int> ObjectOrder;

	[Token(Token = "0x4001491")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static Dictionary<GameObject, MapObject> GoToMapObject;

	[Token(Token = "0x4001492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static Dictionary<string, List<MapObject>> Tags;

	[Token(Token = "0x4001493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static Dictionary<MapObject, HashSet<string>> MapObjectToTags;

	[Token(Token = "0x4001494")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<Light> Daylight;

	[Token(Token = "0x4001495")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<MapLight> MapLights;

	[Token(Token = "0x4001496")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<MapTargetable> MapTargetables;

	[Token(Token = "0x4001497")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Dictionary<string, UnityEngine.Object> _assetCache;

	[Token(Token = "0x4001498")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Dictionary<string, List<Material>> _assetMaterialCache;

	[Token(Token = "0x4001499")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Dictionary<string, List<Material>> _defaultMaterialCache;

	[Token(Token = "0x400149A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Dictionary<string, Material> _customMaterialCache;

	[Token(Token = "0x400149B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static MapLoader _instance;

	[Token(Token = "0x400149C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public static int HighestObjectId;

	[Token(Token = "0x400149D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static MapScriptBasicMaterial _invisibleMaterial;

	[Token(Token = "0x400149E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public static List<string> Errors;

	[Token(Token = "0x400149F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public static bool HasWeather;

	[Token(Token = "0x40014A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public static WeatherSet Weather;

	[Token(Token = "0x40014A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static GameObject _background;

	[Token(Token = "0x40014A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static bool _hasNavMeshData;

	[Token(Token = "0x40014A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static List<NavMeshBuildSource> _navMeshSources;

	[Token(Token = "0x40014A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static List<Bounds> _navMeshBounds;

	[Token(Token = "0x40014A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static List<NavMeshBuild> _navMeshBuilds;

	[Token(Token = "0x40014A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static bool _navMeshModified;

	[Token(Token = "0x40014A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private static bool _navMeshRefreshPending;

	[Token(Token = "0x40014A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static Coroutine _navMeshRefresh;

	[Token(Token = "0x40014A9")]
	private const float NavMeshRefreshDelay = 1f;

	[Token(Token = "0x40014AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public static int ROOT_OBJECT_ID;

	[Token(Token = "0x40014AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	public static int NETWORK_OFFSET;

	[Token(Token = "0x170002AE")]
	public static bool HasNavMesh
	{
		[Token(Token = "0x600197A")]
		[Address(RVA = "0x588F960", Offset = "0x588E960", VA = "0x588F960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x588FA10", Offset = "0x588EA10", VA = "0x588FA10")]
	public static void Init()
	{
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x588FBA0", Offset = "0x588EBA0", VA = "0x588FBA0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x588FC80", Offset = "0x588EC80", VA = "0x588FC80")]
	public static int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x588FCD0", Offset = "0x588ECD0", VA = "0x588FCD0")]
	public static void ReportError(string message)
	{
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0x588FDD0", Offset = "0x588EDD0", VA = "0x588FDD0")]
	private static bool RunLoadStep(string step, Action action)
	{
		return default(bool);
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x588FF00", Offset = "0x588EF00", VA = "0x588FF00")]
	public static void StartLoadObjects(List<string> customAssets, List<MapScriptBaseObject> objects, MapScriptOptions options, WeatherSet weather, [Optional][DefaultParameterValue(false)] bool editor, [Optional] List<string> parseErrors)
	{
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x5890640", Offset = "0x588F640", VA = "0x5890640")]
	public static MapLight RegisterMapLight(Light light, bool isDaylight)
	{
		return null;
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x587E9B0", Offset = "0x587D9B0", VA = "0x587E9B0")]
	public static MapObject FindObjectFromCollider(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x5878DA0", Offset = "0x5877DA0", VA = "0x5878DA0")]
	public static MapObject FindObjectFromTransform(Transform current)
	{
		return null;
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x5890770", Offset = "0x588F770", VA = "0x5890770")]
	public static MapObject LoadObject(MapScriptBaseObject scriptObject, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x5891190", Offset = "0x5890190", VA = "0x5891190")]
	public static void UnregisterObject(MapObject mapObject)
	{
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x5891360", Offset = "0x5890360", VA = "0x5891360")]
	public static void MoveInOrder(int id, int anchorId, bool insertAfter)
	{
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x58914E0", Offset = "0x58904E0", VA = "0x58914E0")]
	public static void SetParent(MapObject obj, MapObject parent)
	{
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x5891AA0", Offset = "0x5890AA0", VA = "0x5891AA0")]
	public static void SetParentLogical(MapObject obj, MapObject parent)
	{
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x5891E00", Offset = "0x5890E00", VA = "0x5891E00")]
	public static int GetLogicalParentId(MapObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x58918A0", Offset = "0x58908A0", VA = "0x58918A0")]
	private static bool WouldCreateParentCycle(MapObject obj, MapObject parent)
	{
		return default(bool);
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x5891E60", Offset = "0x5890E60", VA = "0x5891E60")]
	public static void DeleteObject(MapObject obj)
	{
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x5891F70", Offset = "0x5890F70", VA = "0x5891F70")]
	public static void DeleteObject(int id)
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x58905A0", Offset = "0x588F5A0", VA = "0x58905A0")]
	[IteratorStateMachine(typeof(_003CLoadObjectsCoroutine_003Ed__50))]
	private IEnumerator LoadObjectsCoroutine(List<string> customAssets, List<MapScriptBaseObject> objects, bool editor)
	{
		return null;
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x5892390", Offset = "0x5891390", VA = "0x5892390")]
	private Matrix4x4 GetNavMeshWorldToLocal()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x5892510", Offset = "0x5891510", VA = "0x5892510")]
	private void ResetSources()
	{
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x5892910", Offset = "0x5891910", VA = "0x5892910")]
	private static bool IsNavMeshRegion(MapObject mapObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x5892F80", Offset = "0x5891F80", VA = "0x5892F80")]
	private static void CollectNavMeshSources()
	{
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x58929D0", Offset = "0x58919D0", VA = "0x58929D0")]
	private static bool TryGetRenderBounds(GameObject go, Matrix4x4 worldToLocal, out Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x5893560", Offset = "0x5892560", VA = "0x5893560")]
	private static AsyncOperation CreateNavMeshSurface(int agentID, Bounds bounds, uint maxJobWorkers)
	{
		return null;
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x58808F0", Offset = "0x587F8F0", VA = "0x58808F0")]
	public static void RemoveNavMeshSources(HashSet<Component> components)
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x5893910", Offset = "0x5892910", VA = "0x5893910")]
	[IteratorStateMachine(typeof(_003CRefreshNavMesh_003Ed__58))]
	private static IEnumerator RefreshNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x58904A0", Offset = "0x588F4A0", VA = "0x58904A0")]
	private static void StopNavMeshRefresh()
	{
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x5893950", Offset = "0x5892950", VA = "0x5893950")]
	[AsyncStateMachine(typeof(_003CUpdateNavMesh_003Ed__61))]
	public static Task UpdateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x5893A10", Offset = "0x5892A10", VA = "0x5893A10")]
	[AsyncStateMachine(typeof(_003CUpdateAllNavMeshes_003Ed__62))]
	public Task UpdateAllNavMeshes()
	{
		return null;
	}

	[Token(Token = "0x6001999")]
	[Address(RVA = "0x5893AE0", Offset = "0x5892AE0", VA = "0x5893AE0")]
	[AsyncStateMachine(typeof(_003CGenerateNavMesh_003Ed__63))]
	private Task GenerateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x5893BC0", Offset = "0x5892BC0", VA = "0x5893BC0")]
	private void Batch()
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x58954C0", Offset = "0x58944C0", VA = "0x58954C0")]
	private bool CombineMeshes(GameObject obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x5895CE0", Offset = "0x5894CE0", VA = "0x5895CE0")]
	public static void RegisterTag(string tag, MapObject obj)
	{
	}

	[Token(Token = "0x600199D")]
	[Address(RVA = "0x5896010", Offset = "0x5895010", VA = "0x5896010")]
	public static bool HasTag(MapObject obj, string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x600199E")]
	[Address(RVA = "0x5896130", Offset = "0x5895130", VA = "0x5896130")]
	public static MapObject GetMapObject(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x5890D90", Offset = "0x588FD90", VA = "0x5890D90")]
	private static GameObject LoadSceneObject(MapScriptSceneObject obj, bool editor)
	{
		return null;
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x5896B50", Offset = "0x5895B50", VA = "0x5896B50")]
	private static bool TryAddEditorCollider(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x5899500", Offset = "0x5898500", VA = "0x5899500")]
	private static bool IsFiniteBounds(Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x5899740", Offset = "0x5898740", VA = "0x5899740")]
	private static bool IsFiniteVector3(Vector3 v)
	{
		return default(bool);
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x5899820", Offset = "0x5898820", VA = "0x5899820")]
	private static bool IsFiniteFloat(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x5891080", Offset = "0x5890080", VA = "0x5891080")]
	private static void SetTransform(MapObject mapObject)
	{
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x5899830", Offset = "0x5898830", VA = "0x5899830")]
	public static void ApplyLocalTransform(MapObject mapObject)
	{
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x58998F0", Offset = "0x58988F0", VA = "0x58998F0")]
	public static void SetParent(MapObject mapObject)
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x5899AA0", Offset = "0x5898AA0", VA = "0x5899AA0")]
	private static bool IsParticleMaterial(Material mat)
	{
		return default(bool);
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x5899B30", Offset = "0x5898B30", VA = "0x5899B30")]
	public static void SetDefaultTiling(string asset, Material mat, Vector2 tiling)
	{
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x5899C60", Offset = "0x5898C60", VA = "0x5899C60")]
	private static bool RendererBelongsToMapObject(Renderer renderer, GameObject ownerGo)
	{
		return default(bool);
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x5897B80", Offset = "0x5896B80", VA = "0x5897B80")]
	public static void SetMaterial(GameObject go, string asset, MapScriptBaseMaterial material, bool visible, bool editor)
	{
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x58968B0", Offset = "0x58958B0", VA = "0x58968B0")]
	private static int SetPhysics(GameObject go, string collideMode, string collideWith, string physicsMaterial)
	{
		return default(int);
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x589A2B0", Offset = "0x58992B0", VA = "0x589A2B0")]
	public static void SetCollider(Collider c, string collideMode, string collideWith)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x589A3B0", Offset = "0x58993B0", VA = "0x589A3B0")]
	public static string GetColliderCollideWith(Collider c)
	{
		return null;
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x5899F60", Offset = "0x5898F60", VA = "0x5899F60")]
	public static int GetColliderLayer(string collideWith)
	{
		return default(int);
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x5899DE0", Offset = "0x5898DE0", VA = "0x5899DE0")]
	private static UnityEngine.Object LoadAssetCached(string path, string asset)
	{
		return null;
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x5896320", Offset = "0x5895320", VA = "0x5896320")]
	private static GameObject LoadPrefabCached(string asset)
	{
		return null;
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x589A6D0", Offset = "0x58996D0", VA = "0x589A6D0")]
	public MapLoader()
	{
	}
}
