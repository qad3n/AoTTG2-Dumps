// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapLoader
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000269")]
internal class MapLoader : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200026B")]
	[CompilerGenerated]
	private struct _003CCreateNavMeshSurfaceAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int agentID;

		[Token(Token = "0x4000D22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<NavMeshBuildSource> sources;

		[Token(Token = "0x4000D23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Bounds bounds;

		[Token(Token = "0x4000D24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6000F10")]
		[Address(RVA = "0x3FAEF60", Offset = "0x3FAEF60", VA = "0x3FAEF60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000F11")]
		[Address(RVA = "0x3FAF400", Offset = "0x3FAF400", VA = "0x3FAF400", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200026C")]
	[CompilerGenerated]
	private struct _003CGenerateNavMesh_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4000D28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000F12")]
		[Address(RVA = "0x3FAF460", Offset = "0x3FAF460", VA = "0x3FAF460", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000F13")]
		[Address(RVA = "0x3FAFA10", Offset = "0x3FAFA10", VA = "0x3FAFA10", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x200026D")]
	[CompilerGenerated]
	private sealed class _003CLoadObjectsCoroutine_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000D29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000D2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000D2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<string> customAssets;

		[Token(Token = "0x4000D2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4000D2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public List<MapScriptBaseObject> objects;

		[Token(Token = "0x4000D2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4000D2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool _003CgamemodeNeedsNav_003E5__2;

		[Token(Token = "0x4000D30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int _003Ccount_003E5__3;

		[Token(Token = "0x4000D31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private float _003Cmultiplier_003E5__4;

		[Token(Token = "0x4000D32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private List<string>.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x4000D33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string _003CcustomAsset_003E5__6;

		[Token(Token = "0x4000D34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _003Cbundle_003E5__7;

		[Token(Token = "0x4000D35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private List<MapScriptBaseObject>.Enumerator _003C_003E7__wrap7;

		[Token(Token = "0x4000D36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private List<AsyncOperation> _003Coperations_003E5__9;

		[Token(Token = "0x170001CE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000F19")]
			[Address(RVA = "0x3FB11A0", Offset = "0x3FB11A0", VA = "0x3FB11A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001CF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F1B")]
			[Address(RVA = "0x3FB11F0", Offset = "0x3FB11F0", VA = "0x3FB11F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x3FAFA70", Offset = "0x3FAFA70", VA = "0x3FAFA70")]
		[DebuggerHidden]
		public _003CLoadObjectsCoroutine_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x3FAFA90", Offset = "0x3FAFA90", VA = "0x3FAFA90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F16")]
		[Address(RVA = "0x3FAFB30", Offset = "0x3FAFB30", VA = "0x3FAFB30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F17")]
		[Address(RVA = "0x3FB1120", Offset = "0x3FB1120", VA = "0x3FB1120")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000F18")]
		[Address(RVA = "0x3FB1160", Offset = "0x3FB1160", VA = "0x3FB1160")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000F1A")]
		[Address(RVA = "0x3FB11B0", Offset = "0x3FB11B0", VA = "0x3FB11B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200026E")]
	[CompilerGenerated]
	private struct _003CUpdateAllNavMeshes_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4000D3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000F1C")]
		[Address(RVA = "0x3FB1200", Offset = "0x3FB1200", VA = "0x3FB1200", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000F1D")]
		[Address(RVA = "0x3FB14E0", Offset = "0x3FB14E0", VA = "0x3FB14E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200026F")]
	[CompilerGenerated]
	private struct _003CUpdateNavMesh_003Ed__41 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000F1E")]
		[Address(RVA = "0x3FB1540", Offset = "0x3FB1540", VA = "0x3FB1540", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000F1F")]
		[Address(RVA = "0x3FB17A0", Offset = "0x3FB17A0", VA = "0x3FB17A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000D05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Dictionary<int, MapObject> IdToMapObject;

	[Token(Token = "0x4000D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static Dictionary<int, HashSet<int>> IdToChildren;

	[Token(Token = "0x4000D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static Dictionary<GameObject, MapObject> GoToMapObject;

	[Token(Token = "0x4000D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static Dictionary<string, List<MapObject>> Tags;

	[Token(Token = "0x4000D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static Dictionary<MapObject, HashSet<string>> MapObjectToTags;

	[Token(Token = "0x4000D0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<Light> Daylight;

	[Token(Token = "0x4000D0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<MapLight> MapLights;

	[Token(Token = "0x4000D0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<MapTargetable> MapTargetables;

	[Token(Token = "0x4000D0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Dictionary<string, UnityEngine.Object> _assetCache;

	[Token(Token = "0x4000D0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Dictionary<string, List<Material>> _assetMaterialCache;

	[Token(Token = "0x4000D0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Dictionary<string, List<Material>> _defaultMaterialCache;

	[Token(Token = "0x4000D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Dictionary<string, Material> _customMaterialCache;

	[Token(Token = "0x4000D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static MapLoader _instance;

	[Token(Token = "0x4000D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static int HighestObjectId;

	[Token(Token = "0x4000D13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static MapScriptBasicMaterial _invisibleMaterial;

	[Token(Token = "0x4000D14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public static List<string> Errors;

	[Token(Token = "0x4000D15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public static bool HasWeather;

	[Token(Token = "0x4000D16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public static WeatherSet Weather;

	[Token(Token = "0x4000D17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static GameObject _background;

	[Token(Token = "0x4000D18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static bool _hasNavMeshData;

	[Token(Token = "0x4000D19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static List<NavMeshBuildSource> _navMeshSources;

	[Token(Token = "0x4000D1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static Bounds _navMeshBounds;

	[Token(Token = "0x4000D1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static Dictionary<int, NavMeshData> _navMeshData;

	[Token(Token = "0x4000D1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public static int ROOT_OBJECT_ID;

	[Token(Token = "0x4000D1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	public static int NETWORK_OFFSET;

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x3FA4CB0", Offset = "0x3FA4CB0", VA = "0x3FA4CB0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x3FA4E40", Offset = "0x3FA4E40", VA = "0x3FA4E40")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x3FA4EF0", Offset = "0x3FA4EF0", VA = "0x3FA4EF0")]
	public static int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x3FA4F40", Offset = "0x3FA4F40", VA = "0x3FA4F40")]
	public static void StartLoadObjects(List<string> customAssets, List<MapScriptBaseObject> objects, MapScriptOptions options, WeatherSet weather, bool editor = false)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x3FA53E0", Offset = "0x3FA53E0", VA = "0x3FA53E0")]
	public static MapLight RegisterMapLight(Light light, bool isDaylight)
	{
		return null;
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x3FA5520", Offset = "0x3FA5520", VA = "0x3FA5520")]
	public static MapObject FindObjectFromCollider(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x3FA5680", Offset = "0x3FA5680", VA = "0x3FA5680")]
	public static MapObject LoadObject(MapScriptBaseObject scriptObject, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x3FA5EA0", Offset = "0x3FA5EA0", VA = "0x3FA5EA0")]
	public static void SetParent(MapObject obj, MapObject parent)
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x3FA6250", Offset = "0x3FA6250", VA = "0x3FA6250")]
	public static void DeleteObject(MapObject obj)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x3FA6370", Offset = "0x3FA6370", VA = "0x3FA6370")]
	public static void DeleteObject(int id)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x3FA5340", Offset = "0x3FA5340", VA = "0x3FA5340")]
	[IteratorStateMachine(typeof(_003CLoadObjectsCoroutine_003Ed__35))]
	private IEnumerator LoadObjectsCoroutine(List<string> customAssets, List<MapScriptBaseObject> objects, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x3FA6780", Offset = "0x3FA6780", VA = "0x3FA6780")]
	private static Bounds GetWorldBounds(Matrix4x4 mat, Bounds bounds)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x3FA6990", Offset = "0x3FA6990", VA = "0x3FA6990")]
	private Bounds CalculateWorldBounds(List<NavMeshBuildSource> sources)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x3FA7AA0", Offset = "0x3FA7AA0", VA = "0x3FA7AA0")]
	private void ResetSources()
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x3FA81D0", Offset = "0x3FA81D0", VA = "0x3FA81D0")]
	private AsyncOperation CreateNavMeshSurfaceAsyncOperation(int agentID, List<NavMeshBuildSource> sources, Bounds bounds)
	{
		return null;
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x3FA83D0", Offset = "0x3FA83D0", VA = "0x3FA83D0")]
	[AsyncStateMachine(typeof(_003CCreateNavMeshSurfaceAsync_003Ed__40))]
	private Task CreateNavMeshSurfaceAsync(int agentID, List<NavMeshBuildSource> sources, Bounds bounds)
	{
		return null;
	}

	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x3FA84E0", Offset = "0x3FA84E0", VA = "0x3FA84E0")]
	[AsyncStateMachine(typeof(_003CUpdateNavMesh_003Ed__41))]
	public static Task UpdateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x3FA85A0", Offset = "0x3FA85A0", VA = "0x3FA85A0")]
	[AsyncStateMachine(typeof(_003CUpdateAllNavMeshes_003Ed__42))]
	public Task UpdateAllNavMeshes()
	{
		return null;
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x3FA8680", Offset = "0x3FA8680", VA = "0x3FA8680")]
	[AsyncStateMachine(typeof(_003CGenerateNavMesh_003Ed__43))]
	private Task GenerateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x3FA8760", Offset = "0x3FA8760", VA = "0x3FA8760")]
	private void Batch()
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x3FAA4C0", Offset = "0x3FAA4C0", VA = "0x3FAA4C0")]
	private void CombineMeshes(GameObject obj)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x3FAAA40", Offset = "0x3FAAA40", VA = "0x3FAAA40")]
	public static void RegisterTag(string tag, MapObject obj)
	{
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x3FAAD80", Offset = "0x3FAAD80", VA = "0x3FAAD80")]
	public static bool HasTag(MapObject obj, string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x3FAAEA0", Offset = "0x3FAAEA0", VA = "0x3FAAEA0")]
	public static MapObject GetMapObject(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x3FA5BA0", Offset = "0x3FA5BA0", VA = "0x3FA5BA0")]
	private static GameObject LoadSceneObject(MapScriptSceneObject obj, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x3FAB9F0", Offset = "0x3FAB9F0", VA = "0x3FAB9F0")]
	private static bool TryAddEditorCollider(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x3FA5DA0", Offset = "0x3FA5DA0", VA = "0x3FA5DA0")]
	private static void SetTransform(MapObject mapObject)
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x3FADD50", Offset = "0x3FADD50", VA = "0x3FADD50")]
	public static void SetParent(MapObject mapObject)
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x3FADF00", Offset = "0x3FADF00", VA = "0x3FADF00")]
	public static void SetDefaultTiling(string asset, Material mat, Vector2 tiling)
	{
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x3FAC510", Offset = "0x3FAC510", VA = "0x3FAC510")]
	public static void SetMaterial(GameObject go, string asset, MapScriptBaseMaterial material, bool visible, bool editor)
	{
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x3FAB760", Offset = "0x3FAB760", VA = "0x3FAB760")]
	private static int SetPhysics(GameObject go, string collideMode, string collideWith, string physicsMaterial)
	{
		return default(int);
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x3FAE500", Offset = "0x3FAE500", VA = "0x3FAE500")]
	public static void SetCollider(Collider c, string collideMode, string collideWith)
	{
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x3FAE600", Offset = "0x3FAE600", VA = "0x3FAE600")]
	public static string GetColliderCollideWith(Collider c)
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x3FAE1B0", Offset = "0x3FAE1B0", VA = "0x3FAE1B0")]
	public static int GetColliderLayer(string collideWith)
	{
		return default(int);
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x3FAE030", Offset = "0x3FAE030", VA = "0x3FAE030")]
	private static UnityEngine.Object LoadAssetCached(string path, string asset)
	{
		return null;
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x3FAB090", Offset = "0x3FAB090", VA = "0x3FAB090")]
	private static GameObject LoadPrefabCached(string asset)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x3FAE910", Offset = "0x3FAE910", VA = "0x3FAE910")]
	public MapLoader()
	{
	}
}
