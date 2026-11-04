// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CharacterPreviewGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CharacterPreviewGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20008AA")]
public static class CharacterPreviewGenerator
{
	[Token(Token = "0x20008AB")]
	private class PreviewCameraData
	{
		[Token(Token = "0x4002B19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Camera Camera;

		[Token(Token = "0x4002B1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public RenderTexture RenderTexture;

		[Token(Token = "0x4002B1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool IsInitialized;

		[Token(Token = "0x4002B1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool IsCleanedUp;

		[Token(Token = "0x60052D1")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PreviewCameraData()
		{
		}
	}

	[Token(Token = "0x20008AC")]
	[CompilerGenerated]
	private sealed class _003CDebouncedPreviewCoroutine_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delaySeconds;

		[Token(Token = "0x4002B20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action generateAction;

		[Token(Token = "0x4002B21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string debounceKey;

		[Token(Token = "0x17000F11")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60052D5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F12")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60052D7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60052D2")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDebouncedPreviewCoroutine_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60052D3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60052D4")]
		[Address(RVA = "0x233F8A0", Offset = "0x233DEA0", VA = "0x18233F8A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60052D6")]
		[Address(RVA = "0x233FA10", Offset = "0x233E010", VA = "0x18233FA10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008AD")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForHumanSetCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorHumanMenu humanMenu;

		[Token(Token = "0x4002B25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000F13")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60052DB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F14")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60052DD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60052D8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForHumanSetCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60052D9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60052DA")]
		[Address(RVA = "0x233FD00", Offset = "0x233E300", VA = "0x18233FD00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60052DC")]
		[Address(RVA = "0x233FE10", Offset = "0x233E410", VA = "0x18233FE10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008AE")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForTitanSetCoroutine_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorTitanMenu titanMenu;

		[Token(Token = "0x4002B29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000F15")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60052E1")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F16")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60052E3")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60052DE")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForTitanSetCoroutine_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60052DF")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60052E0")]
		[Address(RVA = "0x233FE50", Offset = "0x233E450", VA = "0x18233FE50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60052E2")]
		[Address(RVA = "0x233FF60", Offset = "0x233E560", VA = "0x18233FF60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008AF")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string cameraId;

		[Token(Token = "0x4002B2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject character;

		[Token(Token = "0x4002B2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string fileName;

		[Token(Token = "0x4002B2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int size;

		[Token(Token = "0x4002B30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public bool isHuman;

		[Token(Token = "0x4002B31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Transform cameraParent;

		[Token(Token = "0x17000F17")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60052E7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F18")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60052E9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60052E4")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60052E5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60052E6")]
		[Address(RVA = "0x233FFA0", Offset = "0x233E5A0", VA = "0x18233FFA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60052E8")]
		[Address(RVA = "0x2340100", Offset = "0x233E700", VA = "0x182340100", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002B15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> _currentlyGenerating;

	[Token(Token = "0x4002B16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, PreviewCameraData> _persistentCameras;

	[Token(Token = "0x4002B17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Coroutine> _activeDebounceCoroutines;

	[Token(Token = "0x4002B18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static HashSet<string> _generatedPreviewKeys;

	[Token(Token = "0x60052BA")]
	[Address(RVA = "0x232FCF0", Offset = "0x232E2F0", VA = "0x18232FCF0")]
	public static void CleanupOrphanedPreviews()
	{
	}

	[Token(Token = "0x60052BB")]
	[Address(RVA = "0x232F750", Offset = "0x232DD50", VA = "0x18232F750")]
	private static void CleanupOrphanedPreviewsInFolder(bool isHuman)
	{
	}

	[Token(Token = "0x60052BC")]
	[Address(RVA = "0x2331EA0", Offset = "0x23304A0", VA = "0x182331EA0")]
	public static void SetLayerRecursively(GameObject obj, int newLayer)
	{
	}

	[Token(Token = "0x60052BD")]
	[Address(RVA = "0x2331160", Offset = "0x232F760", VA = "0x182331160")]
	private static PreviewCameraData GetOrCreatePersistentCamera(string cameraId, [Optional] Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60052BE")]
	[Address(RVA = "0x2331950", Offset = "0x232FF50", VA = "0x182331950")]
	private static void PositionCameraForCharacter(Camera camera, GameObject character, bool isHuman = true)
	{
	}

	[Token(Token = "0x60052BF")]
	[Address(RVA = "0x232EF90", Offset = "0x232D590", VA = "0x18232EF90")]
	private static Texture2D CapturePreviewWithCamera(PreviewCameraData cameraData, GameObject character, int size = 128, bool isHuman = true)
	{
		return null;
	}

	[Token(Token = "0x60052C0")]
	[Address(RVA = "0x232FD40", Offset = "0x232E340", VA = "0x18232FD40")]
	public static void CleanupPersistentCamera(string cameraId)
	{
	}

	[Token(Token = "0x60052C1")]
	[Address(RVA = "0x232F5A0", Offset = "0x232DBA0", VA = "0x18232F5A0")]
	public static void CleanupAllPersistentCameras()
	{
	}

	[Token(Token = "0x60052C2")]
	[Address(RVA = "0x2330D20", Offset = "0x232F320", VA = "0x182330D20")]
	public static void GeneratePreviewWithPersistentCamera(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
	}

	[Token(Token = "0x60052C3")]
	[Address(RVA = "0x2331AB0", Offset = "0x23300B0", VA = "0x182331AB0")]
	public static void SaveCachedPreviewsToDisk()
	{
	}

	[Token(Token = "0x60052C4")]
	[Address(RVA = "0x232FFC0", Offset = "0x232E5C0", VA = "0x18232FFC0")]
	public static void ClearSessionGeneratedPreviews()
	{
	}

	[Token(Token = "0x60052C5")]
	[Address(RVA = "0x232FF80", Offset = "0x232E580", VA = "0x18232FF80")]
	public static void ClearNonPersistentPreviews()
	{
	}

	[Token(Token = "0x60052C6")]
	[Address(RVA = "0x2331100", Offset = "0x232F700", VA = "0x182331100")]
	public static void GetCacheInfo(out int totalCached, out int persistent)
	{
	}

	[Token(Token = "0x60052C7")]
	[Address(RVA = "0x232EBE0", Offset = "0x232D1E0", VA = "0x18232EBE0")]
	public static void CaptureCurrentCharacterPreview(bool isHuman = true)
	{
	}

	[Token(Token = "0x60052C8")]
	[Address(RVA = "0x23318D0", Offset = "0x232FED0", VA = "0x1823318D0")]
	public static void InitializePreviewSystem()
	{
	}

	[Token(Token = "0x60052C9")]
	[Address(RVA = "0x2330310", Offset = "0x232E910", VA = "0x182330310")]
	internal static void GeneratePreviewForHumanSet(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x60052CA")]
	[Address(RVA = "0x2330290", Offset = "0x232E890", VA = "0x182330290")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForHumanSetCoroutine_003Ed__21))]
	internal static IEnumerator GeneratePreviewForHumanSetCoroutine(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x60052CB")]
	[Address(RVA = "0x2330690", Offset = "0x232EC90", VA = "0x182330690")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForTitanSetCoroutine_003Ed__22))]
	internal static IEnumerator GeneratePreviewForTitanSetCoroutine(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x60052CC")]
	[Address(RVA = "0x2330A30", Offset = "0x232F030", VA = "0x182330A30")]
	public static void GeneratePreviewWithDebounce(MonoBehaviour coroutineRunner, string debounceKey, Action generateAction, float delaySeconds = 0.1f)
	{
	}

	[Token(Token = "0x60052CD")]
	[Address(RVA = "0x23301F0", Offset = "0x232E7F0", VA = "0x1823301F0")]
	[IteratorStateMachine(typeof(_003CDebouncedPreviewCoroutine_003Ed__24))]
	private static IEnumerator DebouncedPreviewCoroutine(string debounceKey, Action generateAction, float delaySeconds)
	{
		return null;
	}

	[Token(Token = "0x60052CE")]
	[Address(RVA = "0x2330710", Offset = "0x232ED10", VA = "0x182330710")]
	internal static void GeneratePreviewForTitanSet(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x60052CF")]
	[Address(RVA = "0x2330C70", Offset = "0x232F270", VA = "0x182330C70")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26))]
	public static IEnumerator GeneratePreviewWithPersistentCameraCoroutine(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
		return null;
	}
}
