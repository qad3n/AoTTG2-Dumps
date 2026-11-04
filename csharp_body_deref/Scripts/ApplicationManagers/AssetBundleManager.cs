// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AssetBundleManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AssetBundleManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/AssetBundleManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Rendering;
using UnityEngine.Video;

namespace ApplicationManagers;

[Token(Token = "0x2000906")]
public class AssetBundleManager : MonoBehaviour
{
	[Token(Token = "0x2000908")]
	[CompilerGenerated]
	private sealed class _003CConfirmVideoPlayerUrls_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002CBB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002CBC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002CBD")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002CBE")]
		[FieldOffset(Offset = "0x28")]
		private InGameMenu _003Cmenu_003E5__2;

		[Token(Token = "0x4002CBF")]
		[FieldOffset(Offset = "0x30")]
		private List<VideoPlayer> _003CvideoPlayers_003E5__3;

		[Token(Token = "0x17000F5A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005507")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F5B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005509")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005504")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CConfirmVideoPlayerUrls_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005505")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005506")]
		[Address(RVA = "0x2358080", Offset = "0x2356680", VA = "0x182358080", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005508")]
		[Address(RVA = "0x23586E0", Offset = "0x2356CE0", VA = "0x1823586E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000909")]
	[CompilerGenerated]
	private sealed class _003CDownloadBundleFile_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002CC0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002CC1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002CC2")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4002CC3")]
		[FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002CC4")]
		[FieldOffset(Offset = "0x30")]
		private int _003Credirects_003E5__2;

		[Token(Token = "0x4002CC5")]
		[FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Crequest_003E5__3;

		[Token(Token = "0x4002CC6")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequestAsyncOperation _003Cop_003E5__4;

		[Token(Token = "0x17000F5C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600550E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F5D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005510")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600550A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDownloadBundleFile_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600550B")]
		[Address(RVA = "0x2358ED0", Offset = "0x23574D0", VA = "0x182358ED0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600550C")]
		[Address(RVA = "0x2358970", Offset = "0x2356F70", VA = "0x182358970", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600550D")]
		[Address(RVA = "0x2358F60", Offset = "0x2357560", VA = "0x182358F60")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600550F")]
		[Address(RVA = "0x2358E90", Offset = "0x2357490", VA = "0x182358E90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200090A")]
	[CompilerGenerated]
	private sealed class _003CLoadBundle_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002CC7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002CC8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002CC9")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002CCA")]
		[FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4002CCB")]
		[FieldOffset(Offset = "0x30")]
		public string url;

		[Token(Token = "0x4002CCC")]
		[FieldOffset(Offset = "0x38")]
		private string _003Cpath_003E5__2;

		[Token(Token = "0x4002CCD")]
		[FieldOffset(Offset = "0x40")]
		private InGameMenu _003Cmenu_003E5__3;

		[Token(Token = "0x17000F5E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005514")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F5F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005516")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005511")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadBundle_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005512")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005513")]
		[Address(RVA = "0x235A370", Offset = "0x2358970", VA = "0x18235A370", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005515")]
		[Address(RVA = "0x235ABD0", Offset = "0x23591D0", VA = "0x18235ABD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002CB0")]
	[FieldOffset(Offset = "0x0")]
	private static AssetBundleManager _instance;

	[Token(Token = "0x4002CB1")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Dictionary<string, UnityEngine.Object>> _cache;

	[Token(Token = "0x4002CB2")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, AssetBundle> _bundles;

	[Token(Token = "0x4002CB3")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<Material, Material> _convertedMaterials;

	[Token(Token = "0x4002CB4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ShaderTagId LightModeTag;

	[Token(Token = "0x4002CB5")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string[] UniversalLightModes;

	[Token(Token = "0x4002CB6")]
	private const string ErrorShaderName = "Hidden/InternalErrorShader";

	[Token(Token = "0x4002CB7")]
	private const int MaxBundleRedirects = 3;

	[Token(Token = "0x4002CB8")]
	private const ulong MaxBundleBytes = 1000000000uL;

	[Token(Token = "0x4002CB9")]
	[FieldOffset(Offset = "0x30")]
	private static Type[] AllowedComponents;

	[Token(Token = "0x60054EE")]
	[Address(RVA = "0x2346DE0", Offset = "0x23453E0", VA = "0x182346DE0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60054EF")]
	[Address(RVA = "0x23475E0", Offset = "0x2345BE0", VA = "0x1823475E0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60054F0")]
	[Address(RVA = "0x2345970", Offset = "0x2343F70", VA = "0x182345970")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x60054F1")]
	[Address(RVA = "0x2345A80", Offset = "0x2344080", VA = "0x182345A80")]
	public static void Clear()
	{
	}

	[Token(Token = "0x60054F2")]
	[Address(RVA = "0x2347450", Offset = "0x2345A50", VA = "0x182347450")]
	[IteratorStateMachine(typeof(_003CLoadBundle_003Ed__14))]
	public static IEnumerator LoadBundle(string bundle, string url, bool editor)
	{
		return null;
	}

	[Token(Token = "0x60054F3")]
	[Address(RVA = "0x23466D0", Offset = "0x2344CD0", VA = "0x1823466D0")]
	[IteratorStateMachine(typeof(_003CDownloadBundleFile_003Ed__15))]
	private static IEnumerator DownloadBundleFile(string url, string path)
	{
		return null;
	}

	[Token(Token = "0x60054F4")]
	[Address(RVA = "0x2347620", Offset = "0x2345C20", VA = "0x182347620")]
	private static bool TryGetRedirectUrl(string url, string location, out string redirectUrl)
	{
		return default(bool);
	}

	[Token(Token = "0x60054F5")]
	[Address(RVA = "0x2347150", Offset = "0x2345750", VA = "0x182347150")]
	internal static bool IsValidRemoteBundleUrl(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60054F6")]
	[Address(RVA = "0x2345E20", Offset = "0x2344420", VA = "0x182345E20")]
	[IteratorStateMachine(typeof(_003CConfirmVideoPlayerUrls_003Ed__18))]
	private static IEnumerator ConfirmVideoPlayerUrls(string bundle)
	{
		return null;
	}

	[Token(Token = "0x60054F7")]
	[Address(RVA = "0x2346760", Offset = "0x2344D60", VA = "0x182346760")]
	public static List<string> GetAssetListFromBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x60054F8")]
	[Address(RVA = "0x2346A60", Offset = "0x2345060", VA = "0x182346A60")]
	public static List<string> GetAssetList()
	{
		return null;
	}

	[Token(Token = "0x60054F9")]
	[Address(RVA = "0x23474D0", Offset = "0x2345AD0", VA = "0x1823474D0")]
	public static bool LoadedBundle(string bundle)
	{
		return default(bool);
	}

	[Token(Token = "0x60054FA")]
	[Address(RVA = "0x2347230", Offset = "0x2345830", VA = "0x182347230")]
	public static UnityEngine.Object LoadAsset(string bundle, string name)
	{
		return null;
	}

	[Token(Token = "0x60054FB")]
	[Address(RVA = "0x23463B0", Offset = "0x23449B0", VA = "0x1823463B0")]
	private static void ConvertBuiltinPipelineMaterials(GameObject prefab)
	{
	}

	[Token(Token = "0x60054FC")]
	[Address(RVA = "0x2345E90", Offset = "0x2344490", VA = "0x182345E90")]
	private static Material ConvertBuiltinPipelineMaterial(Material material)
	{
		return null;
	}

	[Token(Token = "0x60054FD")]
	[Address(RVA = "0x2346F50", Offset = "0x2345550", VA = "0x182346F50")]
	private static bool IsBuiltinPipelineShader(Shader shader)
	{
		return default(bool);
	}

	[Token(Token = "0x60054FE")]
	[Address(RVA = "0x2346C50", Offset = "0x2345250", VA = "0x182346C50")]
	private static string GetBasicMaterialName(Material material)
	{
		return null;
	}

	[Token(Token = "0x60054FF")]
	[Address(RVA = "0x2347750", Offset = "0x2345D50", VA = "0x182347750")]
	public static void ValidateCustomPrefab(GameObject prefab)
	{
	}

	[Token(Token = "0x6005500")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AssetBundleManager()
	{
	}
}
