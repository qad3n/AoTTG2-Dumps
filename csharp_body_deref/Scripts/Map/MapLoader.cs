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

[Token(Token = "0x2000230")]
internal class MapLoader : MonoBehaviour
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000232")]
	[CompilerGenerated]
	private struct _003CCreateNavMeshSurfaceAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int agentID;

		[Token(Token = "0x4000C3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<NavMeshBuildSource> sources;

		[Token(Token = "0x4000C3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Bounds bounds;

		[Token(Token = "0x4000C3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x3CA9900", Offset = "0x3CA9900", VA = "0x3CA9900", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x3CA9DA0", Offset = "0x3CA9DA0", VA = "0x3CA9DA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000233")]
	[CompilerGenerated]
	private struct _003CGenerateNavMesh_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4000C42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D68")]
		[Address(RVA = "0x3CA9E00", Offset = "0x3CA9E00", VA = "0x3CA9E00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x3CAA3B0", Offset = "0x3CAA3B0", VA = "0x3CAA3B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x2000234")]
	[CompilerGenerated]
	private sealed class _003CLoadObjectsCoroutine_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<string> customAssets;

		[Token(Token = "0x4000C46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4000C47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public List<MapScriptBaseObject> objects;

		[Token(Token = "0x4000C48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4000C49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool _003CgamemodeNeedsNav_003E5__2;

		[Token(Token = "0x4000C4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int _003Ccount_003E5__3;

		[Token(Token = "0x4000C4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private float _003Cmultiplier_003E5__4;

		[Token(Token = "0x4000C4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private List<string>.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x4000C4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string _003CcustomAsset_003E5__6;

		[Token(Token = "0x4000C4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _003Cbundle_003E5__7;

		[Token(Token = "0x4000C4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private List<MapScriptBaseObject>.Enumerator _003C_003E7__wrap7;

		[Token(Token = "0x4000C50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private List<AsyncOperation> _003Coperations_003E5__9;

		[Token(Token = "0x17000175")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D6F")]
			[Address(RVA = "0x3CABAF0", Offset = "0x3CABAF0", VA = "0x3CABAF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000176")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D71")]
			[Address(RVA = "0x3CABB40", Offset = "0x3CABB40", VA = "0x3CABB40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x3CA15C0", Offset = "0x3CA15C0", VA = "0x3CA15C0")]
		[DebuggerHidden]
		public _003CLoadObjectsCoroutine_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x3CAA410", Offset = "0x3CAA410", VA = "0x3CAA410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x3CAA4B0", Offset = "0x3CAA4B0", VA = "0x3CAA4B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x3CABA70", Offset = "0x3CABA70", VA = "0x3CABA70")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x3CABAB0", Offset = "0x3CABAB0", VA = "0x3CABAB0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000D70")]
		[Address(RVA = "0x3CABB00", Offset = "0x3CABB00", VA = "0x3CABB00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000235")]
	[CompilerGenerated]
	private struct _003CUpdateAllNavMeshes_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x4000C54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x3CABB50", Offset = "0x3CABB50", VA = "0x3CABB50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x3CABE30", Offset = "0x3CABE30", VA = "0x3CABE30", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000236")]
	[CompilerGenerated]
	private struct _003CUpdateNavMesh_003Ed__41 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x3CABE90", Offset = "0x3CABE90", VA = "0x3CABE90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x3CAC0F0", Offset = "0x3CAC0F0", VA = "0x3CAC0F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Dictionary<int, MapObject> IdToMapObject;

	[Token(Token = "0x4000C20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static Dictionary<int, HashSet<int>> IdToChildren;

	[Token(Token = "0x4000C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static Dictionary<GameObject, MapObject> GoToMapObject;

	[Token(Token = "0x4000C22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static Dictionary<string, List<MapObject>> Tags;

	[Token(Token = "0x4000C23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static Dictionary<MapObject, HashSet<string>> MapObjectToTags;

	[Token(Token = "0x4000C24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<Light> Daylight;

	[Token(Token = "0x4000C25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<MapLight> MapLights;

	[Token(Token = "0x4000C26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<MapTargetable> MapTargetables;

	[Token(Token = "0x4000C27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Dictionary<string, UnityEngine.Object> _assetCache;

	[Token(Token = "0x4000C28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Dictionary<string, List<Material>> _assetMaterialCache;

	[Token(Token = "0x4000C29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Dictionary<string, List<Material>> _defaultMaterialCache;

	[Token(Token = "0x4000C2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Dictionary<string, Material> _customMaterialCache;

	[Token(Token = "0x4000C2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static MapLoader _instance;

	[Token(Token = "0x4000C2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static int HighestObjectId;

	[Token(Token = "0x4000C2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static MapScriptBasicMaterial _invisibleMaterial;

	[Token(Token = "0x4000C2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public static List<string> Errors;

	[Token(Token = "0x4000C2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public static bool HasWeather;

	[Token(Token = "0x4000C30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public static WeatherSet Weather;

	[Token(Token = "0x4000C31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static GameObject _background;

	[Token(Token = "0x4000C32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static bool _hasNavMeshData;

	[Token(Token = "0x4000C33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static List<NavMeshBuildSource> _navMeshSources;

	[Token(Token = "0x4000C34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static Bounds _navMeshBounds;

	[Token(Token = "0x4000C35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static Dictionary<int, NavMeshData> _navMeshData;

	[Token(Token = "0x4000C36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public static int ROOT_OBJECT_ID;

	[Token(Token = "0x4000C37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	public static int NETWORK_OFFSET;

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x3C9F990", Offset = "0x3C9F990", VA = "0x3C9F990")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x3C9FB20", Offset = "0x3C9FB20", VA = "0x3C9FB20")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x3C9FBD0", Offset = "0x3C9FBD0", VA = "0x3C9FBD0")]
	public static int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x3C9FC20", Offset = "0x3C9FC20", VA = "0x3C9FC20")]
	public static void StartLoadObjects(List<string> customAssets, List<MapScriptBaseObject> objects, MapScriptOptions options, WeatherSet weather, bool editor = false)
	{
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x3CA00D0", Offset = "0x3CA00D0", VA = "0x3CA00D0")]
	public static MapLight RegisterMapLight(Light light, bool isDaylight)
	{
		return null;
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x3CA0210", Offset = "0x3CA0210", VA = "0x3CA0210")]
	public static MapObject FindObjectFromCollider(Collider collider)
	{
		return null;
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x3CA0370", Offset = "0x3CA0370", VA = "0x3CA0370")]
	public static MapObject LoadObject(MapScriptBaseObject scriptObject, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x3CA0CE0", Offset = "0x3CA0CE0", VA = "0x3CA0CE0")]
	public static void SetParent(MapObject obj, MapObject parent)
	{
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x3CA1090", Offset = "0x3CA1090", VA = "0x3CA1090")]
	public static void DeleteObject(MapObject obj)
	{
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x3CA11B0", Offset = "0x3CA11B0", VA = "0x3CA11B0")]
	public static void DeleteObject(int id)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x3CA0020", Offset = "0x3CA0020", VA = "0x3CA0020")]
	[IteratorStateMachine(typeof(_003CLoadObjectsCoroutine_003Ed__35))]
	private IEnumerator LoadObjectsCoroutine(List<string> customAssets, List<MapScriptBaseObject> objects, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x3CA15E0", Offset = "0x3CA15E0", VA = "0x3CA15E0")]
	private static Bounds GetWorldBounds(Matrix4x4 mat, Bounds bounds)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x3CA17F0", Offset = "0x3CA17F0", VA = "0x3CA17F0")]
	private Bounds CalculateWorldBounds(List<NavMeshBuildSource> sources)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x3CA2900", Offset = "0x3CA2900", VA = "0x3CA2900")]
	private void ResetSources()
	{
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x3CA3040", Offset = "0x3CA3040", VA = "0x3CA3040")]
	private AsyncOperation CreateNavMeshSurfaceAsyncOperation(int agentID, List<NavMeshBuildSource> sources, Bounds bounds)
	{
		return null;
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x3CA3240", Offset = "0x3CA3240", VA = "0x3CA3240")]
	[AsyncStateMachine(typeof(_003CCreateNavMeshSurfaceAsync_003Ed__40))]
	private Task CreateNavMeshSurfaceAsync(int agentID, List<NavMeshBuildSource> sources, Bounds bounds)
	{
		return null;
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x3CA3350", Offset = "0x3CA3350", VA = "0x3CA3350")]
	[AsyncStateMachine(typeof(_003CUpdateNavMesh_003Ed__41))]
	public static Task UpdateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x3CA3410", Offset = "0x3CA3410", VA = "0x3CA3410")]
	[AsyncStateMachine(typeof(_003CUpdateAllNavMeshes_003Ed__42))]
	public Task UpdateAllNavMeshes()
	{
		return null;
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x3CA34F0", Offset = "0x3CA34F0", VA = "0x3CA34F0")]
	[AsyncStateMachine(typeof(_003CGenerateNavMesh_003Ed__43))]
	private Task GenerateNavMesh()
	{
		return null;
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x3CA35D0", Offset = "0x3CA35D0", VA = "0x3CA35D0")]
	private void Batch()
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x3CA5420", Offset = "0x3CA5420", VA = "0x3CA5420")]
	private void CombineMeshes(GameObject obj)
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x3CA59A0", Offset = "0x3CA59A0", VA = "0x3CA59A0")]
	public static void RegisterTag(string tag, MapObject obj)
	{
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x3CA5CE0", Offset = "0x3CA5CE0", VA = "0x3CA5CE0")]
	public static bool HasTag(MapObject obj, string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x3CA5E00", Offset = "0x3CA5E00", VA = "0x3CA5E00")]
	public static MapObject GetMapObject(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x3CA0890", Offset = "0x3CA0890", VA = "0x3CA0890")]
	private static GameObject LoadSceneObject(MapScriptSceneObject obj, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x3CA6950", Offset = "0x3CA6950", VA = "0x3CA6950")]
	private static bool TryAddEditorCollider(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x3CA0BE0", Offset = "0x3CA0BE0", VA = "0x3CA0BE0")]
	private static void SetTransform(MapObject mapObject)
	{
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x3CA8700", Offset = "0x3CA8700", VA = "0x3CA8700")]
	public static void SetParent(MapObject mapObject)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x3CA88B0", Offset = "0x3CA88B0", VA = "0x3CA88B0")]
	public static void SetDefaultTiling(string asset, Material mat, Vector2 tiling)
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x3CA6EC0", Offset = "0x3CA6EC0", VA = "0x3CA6EC0")]
	public static void SetMaterial(GameObject go, string asset, MapScriptBaseMaterial material, bool visible, bool editor)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x3CA66C0", Offset = "0x3CA66C0", VA = "0x3CA66C0")]
	private static int SetPhysics(GameObject go, string collideMode, string collideWith, string physicsMaterial)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x3CA8EB0", Offset = "0x3CA8EB0", VA = "0x3CA8EB0")]
	public static void SetCollider(Collider c, string collideMode, string collideWith)
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x3CA8FB0", Offset = "0x3CA8FB0", VA = "0x3CA8FB0")]
	public static string GetColliderCollideWith(Collider c)
	{
		return null;
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x3CA8B60", Offset = "0x3CA8B60", VA = "0x3CA8B60")]
	public static int GetColliderLayer(string collideWith)
	{
		return default(int);
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x3CA89E0", Offset = "0x3CA89E0", VA = "0x3CA89E0")]
	private static UnityEngine.Object LoadAssetCached(string path, string asset)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x3CA5FF0", Offset = "0x3CA5FF0", VA = "0x3CA5FF0")]
	private static GameObject LoadPrefabCached(string asset)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x3CA92C0", Offset = "0x3CA92C0", VA = "0x3CA92C0")]
	public MapLoader()
	{
	}
}
