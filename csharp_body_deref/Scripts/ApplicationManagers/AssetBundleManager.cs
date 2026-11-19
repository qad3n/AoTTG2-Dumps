// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AssetBundleManager
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000970")]
public class AssetBundleManager : MonoBehaviour
{
	[Token(Token = "0x2000972")]
	[CompilerGenerated]
	private sealed class _003CConfirmVideoPlayerUrls_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F7E")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002F7F")]
		[FieldOffset(Offset = "0x28")]
		private InGameMenu _003Cmenu_003E5__2;

		[Token(Token = "0x4002F80")]
		[FieldOffset(Offset = "0x30")]
		private List<VideoPlayer> _003CvideoPlayers_003E5__3;

		[Token(Token = "0x17000F3E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005869")]
			[Address(RVA = "0x5D0EAB0", Offset = "0x5D0DAB0", VA = "0x5D0EAB0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F3F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600586B")]
			[Address(RVA = "0x5D0EB00", Offset = "0x5D0DB00", VA = "0x5D0EB00", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005866")]
		[Address(RVA = "0x5D0B1D0", Offset = "0x5D0A1D0", VA = "0x5D0B1D0")]
		[DebuggerHidden]
		public _003CConfirmVideoPlayerUrls_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005867")]
		[Address(RVA = "0x5D0E310", Offset = "0x5D0D310", VA = "0x5D0E310", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005868")]
		[Address(RVA = "0x5D0E320", Offset = "0x5D0D320", VA = "0x5D0E320", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600586A")]
		[Address(RVA = "0x5D0EAC0", Offset = "0x5D0DAC0", VA = "0x5D0EAC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000973")]
	[CompilerGenerated]
	private sealed class _003CDownloadBundleFile_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F81")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F82")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F83")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4002F84")]
		[FieldOffset(Offset = "0x28")]
		public string path;

		[Token(Token = "0x4002F85")]
		[FieldOffset(Offset = "0x30")]
		private int _003Credirects_003E5__2;

		[Token(Token = "0x4002F86")]
		[FieldOffset(Offset = "0x38")]
		private UnityWebRequest _003Crequest_003E5__3;

		[Token(Token = "0x4002F87")]
		[FieldOffset(Offset = "0x40")]
		private UnityWebRequestAsyncOperation _003Cop_003E5__4;

		[Token(Token = "0x17000F40")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005870")]
			[Address(RVA = "0x5D0F1D0", Offset = "0x5D0E1D0", VA = "0x5D0F1D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F41")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005872")]
			[Address(RVA = "0x5D0F220", Offset = "0x5D0E220", VA = "0x5D0F220", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600586C")]
		[Address(RVA = "0x5D0AF50", Offset = "0x5D09F50", VA = "0x5D0AF50")]
		[DebuggerHidden]
		public _003CDownloadBundleFile_003Ed__15(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600586D")]
		[Address(RVA = "0x5D0EB10", Offset = "0x5D0DB10", VA = "0x5D0EB10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600586E")]
		[Address(RVA = "0x5D0EBC0", Offset = "0x5D0DBC0", VA = "0x5D0EBC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600586F")]
		[Address(RVA = "0x5D0F130", Offset = "0x5D0E130", VA = "0x5D0F130")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6005871")]
		[Address(RVA = "0x5D0F1E0", Offset = "0x5D0E1E0", VA = "0x5D0F1E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000974")]
	[CompilerGenerated]
	private sealed class _003CLoadBundle_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002F88")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002F89")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002F8A")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002F8B")]
		[FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4002F8C")]
		[FieldOffset(Offset = "0x30")]
		public string url;

		[Token(Token = "0x4002F8D")]
		[FieldOffset(Offset = "0x38")]
		private string _003Cpath_003E5__2;

		[Token(Token = "0x4002F8E")]
		[FieldOffset(Offset = "0x40")]
		private InGameMenu _003Cmenu_003E5__3;

		[Token(Token = "0x17000F42")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005876")]
			[Address(RVA = "0x5D0FA30", Offset = "0x5D0EA30", VA = "0x5D0FA30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F43")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005878")]
			[Address(RVA = "0x5D0FA80", Offset = "0x5D0EA80", VA = "0x5D0FA80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005873")]
		[Address(RVA = "0x5D0AEB0", Offset = "0x5D09EB0", VA = "0x5D0AEB0")]
		[DebuggerHidden]
		public _003CLoadBundle_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005874")]
		[Address(RVA = "0x5D0F230", Offset = "0x5D0E230", VA = "0x5D0F230", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005875")]
		[Address(RVA = "0x5D0F240", Offset = "0x5D0E240", VA = "0x5D0F240", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005877")]
		[Address(RVA = "0x5D0FA40", Offset = "0x5D0EA40", VA = "0x5D0FA40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002F71")]
	[FieldOffset(Offset = "0x0")]
	private static AssetBundleManager _instance;

	[Token(Token = "0x4002F72")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Dictionary<string, UnityEngine.Object>> _cache;

	[Token(Token = "0x4002F73")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, AssetBundle> _bundles;

	[Token(Token = "0x4002F74")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<Material, Material> _convertedMaterials;

	[Token(Token = "0x4002F75")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ShaderTagId LightModeTag;

	[Token(Token = "0x4002F76")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string[] UniversalLightModes;

	[Token(Token = "0x4002F77")]
	private const string ErrorShaderName = "Hidden/InternalErrorShader";

	[Token(Token = "0x4002F78")]
	private const int MaxBundleRedirects = 3;

	[Token(Token = "0x4002F79")]
	private const ulong MaxBundleBytes = 1000000000uL;

	[Token(Token = "0x4002F7A")]
	[FieldOffset(Offset = "0x30")]
	private static Type[] AllowedComponents;

	[Token(Token = "0x6005850")]
	[Address(RVA = "0x5D08E60", Offset = "0x5D07E60", VA = "0x5D08E60")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005851")]
	[Address(RVA = "0x5D0A9C0", Offset = "0x5D099C0", VA = "0x5D0A9C0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6005852")]
	[Address(RVA = "0x5D0A860", Offset = "0x5D09860", VA = "0x5D0A860")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x6005853")]
	[Address(RVA = "0x5D0AA20", Offset = "0x5D09A20", VA = "0x5D0AA20")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6005854")]
	[Address(RVA = "0x5D0AE20", Offset = "0x5D09E20", VA = "0x5D0AE20")]
	[IteratorStateMachine(typeof(_003CLoadBundle_003Ed__14))]
	public static IEnumerator LoadBundle(string bundle, string url, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6005855")]
	[Address(RVA = "0x5D0AED0", Offset = "0x5D09ED0", VA = "0x5D0AED0")]
	[IteratorStateMachine(typeof(_003CDownloadBundleFile_003Ed__15))]
	private static IEnumerator DownloadBundleFile(string url, string path)
	{
		return null;
	}

	[Token(Token = "0x6005856")]
	[Address(RVA = "0x5D0AF70", Offset = "0x5D09F70", VA = "0x5D0AF70")]
	private static bool TryGetRedirectUrl(string url, string location, out string redirectUrl)
	{
		return default(bool);
	}

	[Token(Token = "0x6005857")]
	[Address(RVA = "0x5D0B080", Offset = "0x5D0A080", VA = "0x5D0B080")]
	internal static bool IsValidRemoteBundleUrl(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6005858")]
	[Address(RVA = "0x5D0B160", Offset = "0x5D0A160", VA = "0x5D0B160")]
	[IteratorStateMachine(typeof(_003CConfirmVideoPlayerUrls_003Ed__18))]
	private static IEnumerator ConfirmVideoPlayerUrls(string bundle)
	{
		return null;
	}

	[Token(Token = "0x6005859")]
	[Address(RVA = "0x5D0B1F0", Offset = "0x5D0A1F0", VA = "0x5D0B1F0")]
	public static List<string> GetAssetListFromBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x600585A")]
	[Address(RVA = "0x5D0B530", Offset = "0x5D0A530", VA = "0x5D0B530")]
	public static List<string> GetAssetList()
	{
		return null;
	}

	[Token(Token = "0x600585B")]
	[Address(RVA = "0x5D0B790", Offset = "0x5D0A790", VA = "0x5D0B790")]
	public static bool LoadedBundle(string bundle)
	{
		return default(bool);
	}

	[Token(Token = "0x600585C")]
	[Address(RVA = "0x5D0B8C0", Offset = "0x5D0A8C0", VA = "0x5D0B8C0")]
	public static UnityEngine.Object LoadAsset(string bundle, string name)
	{
		return null;
	}

	[Token(Token = "0x600585D")]
	[Address(RVA = "0x5D0C200", Offset = "0x5D0B200", VA = "0x5D0C200")]
	private static void ConvertBuiltinPipelineMaterials(GameObject prefab)
	{
	}

	[Token(Token = "0x600585E")]
	[Address(RVA = "0x5D0C640", Offset = "0x5D0B640", VA = "0x5D0C640")]
	private static Material ConvertBuiltinPipelineMaterial(Material material)
	{
		return null;
	}

	[Token(Token = "0x600585F")]
	[Address(RVA = "0x5D0C9D0", Offset = "0x5D0B9D0", VA = "0x5D0C9D0")]
	private static bool IsBuiltinPipelineShader(Shader shader)
	{
		return default(bool);
	}

	[Token(Token = "0x6005860")]
	[Address(RVA = "0x5D0CE30", Offset = "0x5D0BE30", VA = "0x5D0CE30")]
	private static string GetBasicMaterialName(Material material)
	{
		return null;
	}

	[Token(Token = "0x6005861")]
	[Address(RVA = "0x5D0BB80", Offset = "0x5D0AB80", VA = "0x5D0BB80")]
	public static void ValidateCustomPrefab(GameObject prefab)
	{
	}

	[Token(Token = "0x6005862")]
	[Address(RVA = "0x5D0CFD0", Offset = "0x5D0BFD0", VA = "0x5D0CFD0")]
	public AssetBundleManager()
	{
	}
}
