using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;
using UnityEngine.Networking;

namespace ApplicationManagers;

[Token(Token = "0x200072F")]
public class AssetBundleManager : MonoBehaviour
{
	[Token(Token = "0x2000730")]
	[CompilerGenerated]
	private sealed class _003CLoadBundle_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002292")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002293")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002294")]
		[FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002295")]
		[FieldOffset(Offset = "0x28")]
		public bool editor;

		[Token(Token = "0x4002296")]
		[FieldOffset(Offset = "0x30")]
		public string url;

		[Token(Token = "0x4002297")]
		[FieldOffset(Offset = "0x38")]
		private string _003Cpath_003E5__2;

		[Token(Token = "0x4002298")]
		[FieldOffset(Offset = "0x40")]
		private InGameMenu _003Cmenu_003E5__3;

		[Token(Token = "0x4002299")]
		[FieldOffset(Offset = "0x48")]
		private UnityWebRequest _003Cdlreq_003E5__4;

		[Token(Token = "0x400229A")]
		[FieldOffset(Offset = "0x50")]
		private DownloadHandler _003C_003E7__wrap4;

		[Token(Token = "0x400229B")]
		[FieldOffset(Offset = "0x58")]
		private UnityWebRequestAsyncOperation _003Cop_003E5__6;

		[Token(Token = "0x400229C")]
		[FieldOffset(Offset = "0x60")]
		private uint _003CmaxBytes_003E5__7;

		[Token(Token = "0x17000D7F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600462F")]
			[Address(RVA = "0x4097E80", Offset = "0x4097E80", VA = "0x4097E80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D80")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004631")]
			[Address(RVA = "0x4097ED0", Offset = "0x4097ED0", VA = "0x4097ED0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600462A")]
		[Address(RVA = "0x40950D0", Offset = "0x40950D0", VA = "0x40950D0")]
		[DebuggerHidden]
		public _003CLoadBundle_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600462B")]
		[Address(RVA = "0x4096E10", Offset = "0x4096E10", VA = "0x4096E10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600462C")]
		[Address(RVA = "0x4097080", Offset = "0x4097080", VA = "0x4097080", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600462D")]
		[Address(RVA = "0x4097DE0", Offset = "0x4097DE0", VA = "0x4097DE0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600462E")]
		[Address(RVA = "0x4097D40", Offset = "0x4097D40", VA = "0x4097D40")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6004630")]
		[Address(RVA = "0x4097E90", Offset = "0x4097E90", VA = "0x4097E90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400228E")]
	[FieldOffset(Offset = "0x0")]
	private static AssetBundleManager _instance;

	[Token(Token = "0x400228F")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Dictionary<string, UnityEngine.Object>> _cache;

	[Token(Token = "0x4002290")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, AssetBundle> _bundles;

	[Token(Token = "0x4002291")]
	[FieldOffset(Offset = "0x18")]
	private static Type[] AllowedComponents;

	[Token(Token = "0x600461E")]
	[Address(RVA = "0x40944E0", Offset = "0x40944E0", VA = "0x40944E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600461F")]
	[Address(RVA = "0x4094D40", Offset = "0x4094D40", VA = "0x4094D40")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6004620")]
	[Address(RVA = "0x4094BD0", Offset = "0x4094BD0", VA = "0x4094BD0")]
	private static void ClearTemp()
	{
	}

	[Token(Token = "0x6004621")]
	[Address(RVA = "0x4094DA0", Offset = "0x4094DA0", VA = "0x4094DA0")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6004622")]
	[Address(RVA = "0x4095040", Offset = "0x4095040", VA = "0x4095040")]
	[IteratorStateMachine(typeof(_003CLoadBundle_003Ed__8))]
	public static IEnumerator LoadBundle(string bundle, string url, bool editor)
	{
		return null;
	}

	[Token(Token = "0x6004623")]
	[Address(RVA = "0x40950F0", Offset = "0x40950F0", VA = "0x40950F0")]
	public static List<string> GetAssetListFromBundle(string bundle)
	{
		return null;
	}

	[Token(Token = "0x6004624")]
	[Address(RVA = "0x4095540", Offset = "0x4095540", VA = "0x4095540")]
	public static List<string> GetAssetList()
	{
		return null;
	}

	[Token(Token = "0x6004625")]
	[Address(RVA = "0x40957C0", Offset = "0x40957C0", VA = "0x40957C0")]
	public static bool LoadedBundle(string bundle)
	{
		return default(bool);
	}

	[Token(Token = "0x6004626")]
	[Address(RVA = "0x40958F0", Offset = "0x40958F0", VA = "0x40958F0")]
	public static UnityEngine.Object LoadAsset(string bundle, string name)
	{
		return null;
	}

	[Token(Token = "0x6004627")]
	[Address(RVA = "0x4095B00", Offset = "0x4095B00", VA = "0x4095B00")]
	public static void ValidateCustomPrefab(GameObject prefab)
	{
	}

	[Token(Token = "0x6004628")]
	[Address(RVA = "0x4096180", Offset = "0x4096180", VA = "0x4096180")]
	public AssetBundleManager()
	{
	}
}
