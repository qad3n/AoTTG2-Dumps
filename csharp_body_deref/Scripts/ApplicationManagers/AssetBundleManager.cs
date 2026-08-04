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
using UnityEngine.Video;

namespace ApplicationManagers;

[Token(Token = "0x200077D")]
public class AssetBundleManager : MonoBehaviour
{
	[Token(Token = "0x200077E")]
	[CompilerGenerated]
	private sealed class _003CConfirmVideoPlayerUrls_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023EF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023F0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023F1")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x40023F2")]
		[FieldOffset(Offset = "0x28")]
		private InGameMenu _003Cmenu_003E5__2;

		[Token(Token = "0x40023F3")]
		[FieldOffset(Offset = "0x30")]
		private List<VideoPlayer> _003CvideoPlayers_003E5__3;

		[Token(Token = "0x17000DF9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004896")]
			[Address(RVA = "0x43AFBF0", Offset = "0x43AFBF0", VA = "0x43AFBF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DFA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004898")]
			[Address(RVA = "0x43AFC40", Offset = "0x43AFC40", VA = "0x43AFC40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004893")]
		[Address(RVA = "0x43AD1E0", Offset = "0x43AD1E0", VA = "0x43AD1E0")]
		[DebuggerHidden]
		public _003CConfirmVideoPlayerUrls_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004894")]
		[Address(RVA = "0x43AF320", Offset = "0x43AF320", VA = "0x43AF320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004895")]
		[Address(RVA = "0x43AF330", Offset = "0x43AF330", VA = "0x43AF330", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004897")]
		[Address(RVA = "0x43AFC00", Offset = "0x43AFC00", VA = "0x43AFC00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200077F")]
	[CompilerGenerated]
	private sealed class _003CLoadBundle_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023F4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023F5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023F6")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x40023F7")]
		[FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x40023F8")]
		[FieldOffset(Offset = "0x30")]
		public string url;

		[Token(Token = "0x40023F9")]
		[FieldOffset(Offset = "0x38")]
		private string _003Cpath_003E5__2;

		[Token(Token = "0x40023FA")]
		[FieldOffset(Offset = "0x40")]
		private InGameMenu _003Cmenu_003E5__3;

		[Token(Token = "0x40023FB")]
		[FieldOffset(Offset = "0x48")]
		private UnityWebRequest _003Cdlreq_003E5__4;

		[Token(Token = "0x40023FC")]
		[FieldOffset(Offset = "0x50")]
		private DownloadHandler _003C_003E7__wrap4;

		[Token(Token = "0x40023FD")]
		[FieldOffset(Offset = "0x58")]
		private UnityWebRequestAsyncOperation _003Cop_003E5__6;

		[Token(Token = "0x40023FE")]
		[FieldOffset(Offset = "0x60")]
		private uint _003CmaxBytes_003E5__7;

		[Token(Token = "0x17000DFB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600489E")]
			[Address(RVA = "0x43B1000", Offset = "0x43B1000", VA = "0x43B1000", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DFC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048A0")]
			[Address(RVA = "0x43B1050", Offset = "0x43B1050", VA = "0x43B1050", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004899")]
		[Address(RVA = "0x43AD150", Offset = "0x43AD150", VA = "0x43AD150")]
		[DebuggerHidden]
		public _003CLoadBundle_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600489A")]
		[Address(RVA = "0x43AFC50", Offset = "0x43AFC50", VA = "0x43AFC50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600489B")]
		[Address(RVA = "0x43AFEB0", Offset = "0x43AFEB0", VA = "0x43AFEB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600489C")]
		[Address(RVA = "0x43B0F60", Offset = "0x43B0F60", VA = "0x43B0F60")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600489D")]
		[Address(RVA = "0x43B0EC0", Offset = "0x43B0EC0", VA = "0x43B0EC0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x600489F")]
		[Address(RVA = "0x43B1010", Offset = "0x43B1010", VA = "0x43B1010", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40023EB")]
	[FieldOffset(Offset = "0x0")]
	private static AssetBundleManager _instance;

	[Token(Token = "0x40023EC")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Dictionary<string, UnityEngine.Object>> _cache;

	[Token(Token = "0x40023ED")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, AssetBundle> _bundles;

	[Token(Token = "0x40023EE")]
	[FieldOffset(Offset = "0x18")]
	private static Type[] AllowedComponents;

	[Token(Token = "0x6004886")]
	[Address(RVA = "0x43AC560", Offset = "0x43AC560", VA = "0x43AC560")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004887")]
	[Address(RVA = "0x43ACDC0", Offset = "0x43ACDC0", VA = "0x43ACDC0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6004888")]
	[Address(RVA = "0x43ACC50", Offset = "0x43ACC50", VA = "0x43ACC50")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x6004889")]
	[Address(RVA = "0x43ACE20", Offset = "0x43ACE20", VA = "0x43ACE20")]
	public static void Clear()
	{
	}

	[Token(Token = "0x600488A")]
	[Address(RVA = "0x43AD0C0", Offset = "0x43AD0C0", VA = "0x43AD0C0")]
	[IteratorStateMachine(typeof(_003CLoadBundle_003Ed__8))]
	public static IEnumerator LoadBundle(string bundle, string url, bool editor)
	{
		return null;
	}

	[Token(Token = "0x600488B")]
	[Address(RVA = "0x43AD170", Offset = "0x43AD170", VA = "0x43AD170")]
	[IteratorStateMachine(typeof(_003CConfirmVideoPlayerUrls_003Ed__9))]
	private static IEnumerator ConfirmVideoPlayerUrls(string bundle)
	{
		return null;
	}

	[Token(Token = "0x600488C")]
	[Address(RVA = "0x43AD200", Offset = "0x43AD200", VA = "0x43AD200")]
	public static List<string> GetAssetListFromBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x600488D")]
	[Address(RVA = "0x43AD650", Offset = "0x43AD650", VA = "0x43AD650")]
	public static List<string> GetAssetList()
	{
		return null;
	}

	[Token(Token = "0x600488E")]
	[Address(RVA = "0x43AD8D0", Offset = "0x43AD8D0", VA = "0x43AD8D0")]
	public static bool LoadedBundle(string bundle)
	{
		return default(bool);
	}

	[Token(Token = "0x600488F")]
	[Address(RVA = "0x43ADA00", Offset = "0x43ADA00", VA = "0x43ADA00")]
	public static UnityEngine.Object LoadAsset(string bundle, string name)
	{
		return null;
	}

	[Token(Token = "0x6004890")]
	[Address(RVA = "0x43ADC10", Offset = "0x43ADC10", VA = "0x43ADC10")]
	public static void ValidateCustomPrefab(GameObject prefab)
	{
	}

	[Token(Token = "0x6004891")]
	[Address(RVA = "0x43AE2E0", Offset = "0x43AE2E0", VA = "0x43AE2E0")]
	public AssetBundleManager()
	{
	}
}
