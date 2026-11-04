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

[Token(Token = "0x20003A5")]
internal class MapLoader : MonoBehaviour
{
	[Token(Token = "0x20003A6")]
	private readonly struct NavMeshBuild
	{
		[Token(Token = "0x400131A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly NavMeshData Data;

		[Token(Token = "0x400131B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly NavMeshBuildSettings Settings;

		[Token(Token = "0x400131C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public readonly Bounds Bounds;

		[Token(Token = "0x600174A")]
		[Address(RVA = "0x1EB6A70", Offset = "0x1EB5070", VA = "0x181EB6A70")]
		public NavMeshBuild(NavMeshData data, NavMeshBuildSettings settings, Bounds bounds)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20003AA")]
	[CompilerGenerated]
	private struct _003CGenerateNavMesh_003Ed__60 : IAsyncStateMachine
	{
		[Token(Token = "0x4001320")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001321")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001322")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4001323")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private List<AsyncOperation>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4001324")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6001751")]
		[Address(RVA = "0x1EB6B60", Offset = "0x1EB5160", VA = "0x181EB6B60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001752")]
		[Address(RVA = "0x1EB7360", Offset = "0x1EB5960", VA = "0x181EB7360", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x20003AB")]
	[CompilerGenerated]
	private sealed class _003CLoadObjectsCoroutine_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001325")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001326")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001327")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<string> customAssets;

		[Token(Token = "0x4001328")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4001329")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public List<MapScriptBaseObject> objects;

		[Token(Token = "0x400132A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x400132B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool _003CgamemodeNeedsNav_003E5__2;

		[Token(Token = "0x400132C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		private bool _003CrebuildNavMesh_003E5__3;

		[Token(Token = "0x400132D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int _003Ccount_003E5__4;

		[Token(Token = "0x400132E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private float _003Cmultiplier_003E5__5;

		[Token(Token = "0x400132F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private List<string>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x4001330")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string _003CcustomAsset_003E5__7;

		[Token(Token = "0x4001331")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _003Cbundle_003E5__8;

		[Token(Token = "0x4001332")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private List<MapScriptBaseObject>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x4001333")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private List<AsyncOperation> _003Coperations_003E5__10;

		[Token(Token = "0x1700026E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001758")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700026F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600175A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001753")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadObjectsCoroutine_003Ed__47(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001754")]
		[Address(RVA = "0x1EB8D80", Offset = "0x1EB7380", VA = "0x181EB8D80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001755")]
		[Address(RVA = "0x1EB73C0", Offset = "0x1EB59C0", VA = "0x181EB73C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001756")]
		[Address(RVA = "0x1EB8EB0", Offset = "0x1EB74B0", VA = "0x181EB8EB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001757")]
		[Address(RVA = "0x1EB8F00", Offset = "0x1EB7500", VA = "0x181EB8F00")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6001759")]
		[Address(RVA = "0x1EB8D40", Offset = "0x1EB7340", VA = "0x181EB8D40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20003AC")]
	[CompilerGenerated]
	private sealed class _003CRefreshNavMesh_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001334")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001335")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001336")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private WaitForSecondsRealtime _003Cdelay_003E5__2;

		[Token(Token = "0x4001337")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private List<AsyncOperation> _003Coperations_003E5__3;

		[Token(Token = "0x4001338")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private List<AsyncOperation>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x17000270")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600175F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000271")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001761")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600175B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRefreshNavMesh_003Ed__55(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600175C")]
		[Address(RVA = "0x1EB9690", Offset = "0x1EB7C90", VA = "0x181EB9690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600175D")]
		[Address(RVA = "0x1EB8F50", Offset = "0x1EB7550", VA = "0x181EB8F50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600175E")]
		[Address(RVA = "0x1EB9720", Offset = "0x1EB7D20", VA = "0x181EB9720")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001760")]
		[Address(RVA = "0x1EB9650", Offset = "0x1EB7C50", VA = "0x181EB9650", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20003AD")]
	[CompilerGenerated]
	private struct _003CUpdateAllNavMeshes_003Ed__59 : IAsyncStateMachine
	{
		[Token(Token = "0x4001339")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400133A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400133B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x400133C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001762")]
		[Address(RVA = "0x1EBA3A0", Offset = "0x1EB89A0", VA = "0x181EBA3A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001763")]
		[Address(RVA = "0x1EBA6A0", Offset = "0x1EB8CA0", VA = "0x181EBA6A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20003AE")]
	[CompilerGenerated]
	private struct _003CUpdateNavMesh_003Ed__58 : IAsyncStateMachine
	{
		[Token(Token = "0x400133D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400133E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400133F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001764")]
		[Address(RVA = "0x1EBA700", Offset = "0x1EB8D00", VA = "0x181EBA700", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001765")]
		[Address(RVA = "0x1EBA980", Offset = "0x1EB8F80", VA = "0x181EBA980", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40012FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Dictionary<int, MapObject> IdToMapObject;

	[Token(Token = "0x40012FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static Dictionary<int, HashSet<int>> IdToChildren;

	[Token(Token = "0x40012FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static List<int> ObjectOrder;

	[Token(Token = "0x40012FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static Dictionary<GameObject, MapObject> GoToMapObject;

	[Token(Token = "0x4001300")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static Dictionary<string, List<MapObject>> Tags;

	[Token(Token = "0x4001301")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static Dictionary<MapObject, HashSet<string>> MapObjectToTags;

	[Token(Token = "0x4001302")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<Light> Daylight;

	[Token(Token = "0x4001303")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<MapLight> MapLights;

	[Token(Token = "0x4001304")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<MapTargetable> MapTargetables;

	[Token(Token = "0x4001305")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Dictionary<string, UnityEngine.Object> _assetCache;

	[Token(Token = "0x4001306")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Dictionary<string, List<Material>> _assetMaterialCache;

	[Token(Token = "0x4001307")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Dictionary<string, List<Material>> _defaultMaterialCache;

	[Token(Token = "0x4001308")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Dictionary<string, Material> _customMaterialCache;

	[Token(Token = "0x4001309")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static MapLoader _instance;

	[Token(Token = "0x400130A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public static int HighestObjectId;

	[Token(Token = "0x400130B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static MapScriptBasicMaterial _invisibleMaterial;

	[Token(Token = "0x400130C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public static List<string> Errors;

	[Token(Token = "0x400130D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public static bool HasWeather;

	[Token(Token = "0x400130E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public static WeatherSet Weather;

	[Token(Token = "0x400130F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static GameObject _background;

	[Token(Token = "0x4001310")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static bool _hasNavMeshData;

	[Token(Token = "0x4001311")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static List<NavMeshBuildSource> _navMeshSources;

	[Token(Token = "0x4001312")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static List<Bounds> _navMeshBounds;

	[Token(Token = "0x4001313")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static List<NavMeshBuild> _navMeshBuilds;

	[Token(Token = "0x4001314")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static bool _navMeshModified;

	[Token(Token = "0x4001315")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private static bool _navMeshRefreshPending;

	[Token(Token = "0x4001316")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static Coroutine _navMeshRefresh;

	[Token(Token = "0x4001317")]
	private const float NavMeshRefreshDelay = 1f;

	[Token(Token = "0x4001318")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public static int ROOT_OBJECT_ID;

	[Token(Token = "0x4001319")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	public static int NETWORK_OFFSET;

	[Token(Token = "0x1700026D")]
	public static bool HasNavMesh
	{
		[Token(Token = "0x6001715")]
		[Address(RVA = "0x1EB28B0", Offset = "0x1EB0EB0", VA = "0x181EB28B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x1EABEE0", Offset = "0x1EAA4E0", VA = "0x181EABEE0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x1EAD670", Offset = "0x1EABC70", VA = "0x181EAD670")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x1EABD60", Offset = "0x1EAA360", VA = "0x181EABD60")]
	public static int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x1EB0B80", Offset = "0x1EAF180", VA = "0x181EB0B80")]
	public static void StartLoadObjects(List<string> customAssets, List<MapScriptBaseObject> objects, MapScriptOptions options, WeatherSet weather, bool editor = false)
	{
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x1EAD7C0", Offset = "0x1EABDC0", VA = "0x181EAD7C0")]
	public static MapLight RegisterMapLight(Light light, bool isDaylight)
	{
		return null;
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x1EAADC0", Offset = "0x1EA93C0", VA = "0x181EAADC0")]
	public static MapObject FindObjectFromCollider(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x1EAAF60", Offset = "0x1EA9560", VA = "0x181EAAF60")]
	public static MapObject FindObjectFromTransform(Transform current)
	{
		return null;
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x1EAC4E0", Offset = "0x1EAAAE0", VA = "0x181EAC4E0")]
	public static MapObject LoadObject(MapScriptBaseObject scriptObject, bool editor)
	{
		return null;
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x1EAD510", Offset = "0x1EABB10", VA = "0x181EAD510")]
	public static void MoveInOrder(int id, int anchorId, bool insertAfter)
	{
	}

	[Token(Token = "0x600171F")]
	[Address(RVA = "0x1EB03A0", Offset = "0x1EAE9A0", VA = "0x181EB03A0")]
	public static void SetParent(MapObject obj, MapObject parent)
	{
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x1EAFE60", Offset = "0x1EAE460", VA = "0x181EAFE60")]
	public static void SetParentLogical(MapObject obj, MapObject parent)
	{
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x1EAB960", Offset = "0x1EA9F60", VA = "0x181EAB960")]
	public static int GetLogicalParentId(MapObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6001722")]
	[Address(RVA = "0x1EB1FD0", Offset = "0x1EB05D0", VA = "0x181EB1FD0")]
	private static bool WouldCreateParentCycle(MapObject obj, MapObject parent)
	{
		return default(bool);
	}

	[Token(Token = "0x6001723")]
	[Address(RVA = "0x1EAACD0", Offset = "0x1EA92D0", VA = "0x181EAACD0")]
	public static void DeleteObject(MapObject obj)
	{
	}

	[Token(Token = "0x6001724")]
	[Address(RVA = "0x1EAA8D0", Offset = "0x1EA8ED0", VA = "0x181EAA8D0")]
	public static void DeleteObject(int id)
	{
	}

	[Token(Token = "0x6001725")]
	[Address(RVA = "0x1EACCF0", Offset = "0x1EAB2F0", VA = "0x181EACCF0")]
	[IteratorStateMachine(typeof(_003CLoadObjectsCoroutine_003Ed__47))]
	private IEnumerator LoadObjectsCoroutine(List<string> customAssets, List<MapScriptBaseObject> objects, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6001726")]
	[Address(RVA = "0x1EABBD0", Offset = "0x1EAA1D0", VA = "0x181EABBD0")]
	private Matrix4x4 GetNavMeshWorldToLocal()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001727")]
	[Address(RVA = "0x1EAE000", Offset = "0x1EAC600", VA = "0x181EAE000")]
	private void ResetSources()
	{
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x1EAC290", Offset = "0x1EAA890", VA = "0x181EAC290")]
	private static bool IsNavMeshRegion(MapObject mapObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x1EA9930", Offset = "0x1EA7F30", VA = "0x181EA9930")]
	private static void CollectNavMeshSources()
	{
	}

	[Token(Token = "0x600172A")]
	[Address(RVA = "0x1EB1B50", Offset = "0x1EB0150", VA = "0x181EB1B50")]
	private static bool TryGetRenderBounds(GameObject go, Matrix4x4 worldToLocal, out Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x600172B")]
	[Address(RVA = "0x1EAA590", Offset = "0x1EA8B90", VA = "0x181EAA590")]
	private static AsyncOperation CreateNavMeshSurface(int agentID, Bounds bounds, uint maxJobWorkers)
	{
		return null;
	}

	[Token(Token = "0x600172C")]
	[Address(RVA = "0x1EADC50", Offset = "0x1EAC250", VA = "0x181EADC50")]
	public static void RemoveNavMeshSources(HashSet<Component> components)
	{
	}

	[Token(Token = "0x600172D")]
	[Address(RVA = "0x1EAD770", Offset = "0x1EABD70", VA = "0x181EAD770")]
	[IteratorStateMachine(typeof(_003CRefreshNavMesh_003Ed__55))]
	private static IEnumerator RefreshNavMesh()
	{
		return null;
	}

	[Token(Token = "0x600172E")]
	[Address(RVA = "0x1EB1170", Offset = "0x1EAF770", VA = "0x181EB1170")]
	private static void StopNavMeshRefresh()
	{
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x1EB1F20", Offset = "0x1EB0520", VA = "0x181EB1F20")]
	[AsyncStateMachine(typeof(_003CUpdateNavMesh_003Ed__58))]
	public static Task UpdateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x1EB1E50", Offset = "0x1EB0450", VA = "0x181EB1E50")]
	[AsyncStateMachine(typeof(_003CUpdateAllNavMeshes_003Ed__59))]
	public Task UpdateAllNavMeshes()
	{
		return null;
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x1EAB0C0", Offset = "0x1EA96C0", VA = "0x181EAB0C0")]
	[AsyncStateMachine(typeof(_003CGenerateNavMesh_003Ed__60))]
	private Task GenerateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6001732")]
	[Address(RVA = "0x1EA8570", Offset = "0x1EA6B70", VA = "0x181EA8570")]
	private void Batch()
	{
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x1EA9F00", Offset = "0x1EA8500", VA = "0x181EA9F00")]
	private bool CombineMeshes(GameObject obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x1EAD920", Offset = "0x1EABF20", VA = "0x181EAD920")]
	public static void RegisterTag(string tag, MapObject obj)
	{
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x1EABDD0", Offset = "0x1EAA3D0", VA = "0x181EABDD0")]
	public static bool HasTag(MapObject obj, string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x1EAB9D0", Offset = "0x1EA9FD0", VA = "0x181EAB9D0")]
	public static MapObject GetMapObject(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x1EAD2A0", Offset = "0x1EAB8A0", VA = "0x181EAD2A0")]
	private static GameObject LoadSceneObject(MapScriptSceneObject obj, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x1EB1260", Offset = "0x1EAF860", VA = "0x181EB1260")]
	private static bool TryAddEditorCollider(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x1EAC0A0", Offset = "0x1EAA6A0", VA = "0x181EAC0A0")]
	private static bool IsFiniteBounds(Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x1EAC1A0", Offset = "0x1EAA7A0", VA = "0x181EAC1A0")]
	private static bool IsFiniteVector3(Vector3 v)
	{
		return default(bool);
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x1EAC170", Offset = "0x1EAA770", VA = "0x181EAC170")]
	private static bool IsFiniteFloat(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x1EB0A20", Offset = "0x1EAF020", VA = "0x181EB0A20")]
	private static void SetTransform(MapObject mapObject)
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x1EA8450", Offset = "0x1EA6A50", VA = "0x181EA8450")]
	public static void ApplyLocalTransform(MapObject mapObject)
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x1EB01F0", Offset = "0x1EAE7F0", VA = "0x181EB01F0")]
	public static void SetParent(MapObject mapObject)
	{
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x1EAE660", Offset = "0x1EACC60", VA = "0x181EAE660")]
	public static void SetDefaultTiling(string asset, Material mat, Vector2 tiling)
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x1EADE90", Offset = "0x1EAC490", VA = "0x181EADE90")]
	private static bool RendererBelongsToMapObject(Renderer renderer, GameObject ownerGo)
	{
		return default(bool);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x1EAE820", Offset = "0x1EACE20", VA = "0x181EAE820")]
	public static void SetMaterial(GameObject go, string asset, MapScriptBaseMaterial material, bool visible, bool editor)
	{
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x1EB07A0", Offset = "0x1EAEDA0", VA = "0x181EB07A0")]
	private static int SetPhysics(GameObject go, string collideMode, string collideWith, string physicsMaterial)
	{
		return default(int);
	}

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x1EAE550", Offset = "0x1EACB50", VA = "0x181EAE550")]
	public static void SetCollider(Collider c, string collideMode, string collideWith)
	{
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x1EAB1A0", Offset = "0x1EA97A0", VA = "0x181EAB1A0")]
	public static string GetColliderCollideWith(Collider c)
	{
		return null;
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x1EAB520", Offset = "0x1EA9B20", VA = "0x181EAB520")]
	public static int GetColliderLayer(string collideWith)
	{
		return default(int);
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x1EAC350", Offset = "0x1EAA950", VA = "0x181EAC350")]
	private static UnityEngine.Object LoadAssetCached(string path, string asset)
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x1EACD90", Offset = "0x1EAB390", VA = "0x181EACD90")]
	private static GameObject LoadPrefabCached(string asset)
	{
		return null;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MapLoader()
	{
	}
}
