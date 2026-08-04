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

[Token(Token = "0x200071F")]
public static class CharacterPreviewGenerator
{
	[Token(Token = "0x2000720")]
	private class PreviewCameraData
	{
		[Token(Token = "0x4002256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Camera Camera;

		[Token(Token = "0x4002257")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public RenderTexture RenderTexture;

		[Token(Token = "0x4002258")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool IsInitialized;

		[Token(Token = "0x4002259")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool IsCleanedUp;

		[Token(Token = "0x6004658")]
		[Address(RVA = "0x4385AD0", Offset = "0x4385AD0", VA = "0x4385AD0")]
		public PreviewCameraData()
		{
		}
	}

	[Token(Token = "0x2000721")]
	[CompilerGenerated]
	private sealed class _003CDebouncedPreviewCoroutine_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400225A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400225B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400225C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delaySeconds;

		[Token(Token = "0x400225D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action generateAction;

		[Token(Token = "0x400225E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string debounceKey;

		[Token(Token = "0x17000DA8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600465C")]
			[Address(RVA = "0x4388710", Offset = "0x4388710", VA = "0x4388710", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DA9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600465E")]
			[Address(RVA = "0x4388760", Offset = "0x4388760", VA = "0x4388760", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004659")]
		[Address(RVA = "0x4387FF0", Offset = "0x4387FF0", VA = "0x4387FF0")]
		[DebuggerHidden]
		public _003CDebouncedPreviewCoroutine_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600465A")]
		[Address(RVA = "0x43885A0", Offset = "0x43885A0", VA = "0x43885A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600465B")]
		[Address(RVA = "0x43885B0", Offset = "0x43885B0", VA = "0x43885B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600465D")]
		[Address(RVA = "0x4388720", Offset = "0x4388720", VA = "0x4388720", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000722")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForHumanSetCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400225F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002260")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002261")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorHumanMenu humanMenu;

		[Token(Token = "0x4002262")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000DAA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004662")]
			[Address(RVA = "0x4388850", Offset = "0x4388850", VA = "0x4388850", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DAB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004664")]
			[Address(RVA = "0x43888A0", Offset = "0x43888A0", VA = "0x43888A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600465F")]
		[Address(RVA = "0x4387C40", Offset = "0x4387C40", VA = "0x4387C40")]
		[DebuggerHidden]
		public _003CGeneratePreviewForHumanSetCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004660")]
		[Address(RVA = "0x4388770", Offset = "0x4388770", VA = "0x4388770", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004661")]
		[Address(RVA = "0x4388780", Offset = "0x4388780", VA = "0x4388780", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004663")]
		[Address(RVA = "0x4388860", Offset = "0x4388860", VA = "0x4388860", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000723")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForTitanSetCoroutine_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002263")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002264")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002265")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorTitanMenu titanMenu;

		[Token(Token = "0x4002266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000DAC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004668")]
			[Address(RVA = "0x4388990", Offset = "0x4388990", VA = "0x4388990", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DAD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600466A")]
			[Address(RVA = "0x43889E0", Offset = "0x43889E0", VA = "0x43889E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004665")]
		[Address(RVA = "0x4387CE0", Offset = "0x4387CE0", VA = "0x4387CE0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForTitanSetCoroutine_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004666")]
		[Address(RVA = "0x43888B0", Offset = "0x43888B0", VA = "0x43888B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004667")]
		[Address(RVA = "0x43888C0", Offset = "0x43888C0", VA = "0x43888C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004669")]
		[Address(RVA = "0x43889A0", Offset = "0x43889A0", VA = "0x43889A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000724")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string cameraId;

		[Token(Token = "0x400226A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject character;

		[Token(Token = "0x400226B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string fileName;

		[Token(Token = "0x400226C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int size;

		[Token(Token = "0x400226D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public bool isHuman;

		[Token(Token = "0x400226E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Transform cameraParent;

		[Token(Token = "0x17000DAE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600466E")]
			[Address(RVA = "0x4388AF0", Offset = "0x4388AF0", VA = "0x4388AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DAF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004670")]
			[Address(RVA = "0x4388B40", Offset = "0x4388B40", VA = "0x4388B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600466B")]
		[Address(RVA = "0x4388400", Offset = "0x4388400", VA = "0x4388400")]
		[DebuggerHidden]
		public _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600466C")]
		[Address(RVA = "0x43889F0", Offset = "0x43889F0", VA = "0x43889F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600466D")]
		[Address(RVA = "0x4388A00", Offset = "0x4388A00", VA = "0x4388A00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600466F")]
		[Address(RVA = "0x4388B00", Offset = "0x4388B00", VA = "0x4388B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> _currentlyGenerating;

	[Token(Token = "0x4002253")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, PreviewCameraData> _persistentCameras;

	[Token(Token = "0x4002254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Coroutine> _activeDebounceCoroutines;

	[Token(Token = "0x4002255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static HashSet<string> _generatedPreviewKeys;

	[Token(Token = "0x6004641")]
	[Address(RVA = "0x43846D0", Offset = "0x43846D0", VA = "0x43846D0")]
	public static void CleanupOrphanedPreviews()
	{
	}

	[Token(Token = "0x6004642")]
	[Address(RVA = "0x4384720", Offset = "0x4384720", VA = "0x4384720")]
	private static void CleanupOrphanedPreviewsInFolder(bool isHuman)
	{
	}

	[Token(Token = "0x6004643")]
	[Address(RVA = "0x4385000", Offset = "0x4385000", VA = "0x4385000")]
	public static void SetLayerRecursively(GameObject obj, int newLayer)
	{
	}

	[Token(Token = "0x6004644")]
	[Address(RVA = "0x43853A0", Offset = "0x43853A0", VA = "0x43853A0")]
	private static PreviewCameraData GetOrCreatePersistentCamera(string cameraId, [Optional] Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004645")]
	[Address(RVA = "0x4385AE0", Offset = "0x4385AE0", VA = "0x4385AE0")]
	private static void PositionCameraForCharacter(Camera camera, GameObject character, bool isHuman = true)
	{
	}

	[Token(Token = "0x6004646")]
	[Address(RVA = "0x4385C00", Offset = "0x4385C00", VA = "0x4385C00")]
	private static Texture2D CapturePreviewWithCamera(PreviewCameraData cameraData, GameObject character, int size = 128, bool isHuman = true)
	{
		return null;
	}

	[Token(Token = "0x6004647")]
	[Address(RVA = "0x4386170", Offset = "0x4386170", VA = "0x4386170")]
	public static void CleanupPersistentCamera(string cameraId)
	{
	}

	[Token(Token = "0x6004648")]
	[Address(RVA = "0x43863C0", Offset = "0x43863C0", VA = "0x43863C0")]
	public static void CleanupAllPersistentCameras()
	{
	}

	[Token(Token = "0x6004649")]
	[Address(RVA = "0x43865B0", Offset = "0x43865B0", VA = "0x43865B0")]
	public static void GeneratePreviewWithPersistentCamera(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
	}

	[Token(Token = "0x600464A")]
	[Address(RVA = "0x4386AB0", Offset = "0x4386AB0", VA = "0x4386AB0")]
	public static void SaveCachedPreviewsToDisk()
	{
	}

	[Token(Token = "0x600464B")]
	[Address(RVA = "0x4387080", Offset = "0x4387080", VA = "0x4387080")]
	public static void ClearSessionGeneratedPreviews()
	{
	}

	[Token(Token = "0x600464C")]
	[Address(RVA = "0x4387340", Offset = "0x4387340", VA = "0x4387340")]
	public static void ClearNonPersistentPreviews()
	{
	}

	[Token(Token = "0x600464D")]
	[Address(RVA = "0x43873A0", Offset = "0x43873A0", VA = "0x43873A0")]
	public static void GetCacheInfo(out int totalCached, out int persistent)
	{
	}

	[Token(Token = "0x600464E")]
	[Address(RVA = "0x4387400", Offset = "0x4387400", VA = "0x4387400")]
	public static void CaptureCurrentCharacterPreview(bool isHuman = true)
	{
	}

	[Token(Token = "0x600464F")]
	[Address(RVA = "0x43877A0", Offset = "0x43877A0", VA = "0x43877A0")]
	public static void InitializePreviewSystem()
	{
	}

	[Token(Token = "0x6004650")]
	[Address(RVA = "0x4387840", Offset = "0x4387840", VA = "0x4387840")]
	internal static void GeneratePreviewForHumanSet(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x6004651")]
	[Address(RVA = "0x4387BC0", Offset = "0x4387BC0", VA = "0x4387BC0")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForHumanSetCoroutine_003Ed__21))]
	internal static IEnumerator GeneratePreviewForHumanSetCoroutine(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x6004652")]
	[Address(RVA = "0x4387C60", Offset = "0x4387C60", VA = "0x4387C60")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForTitanSetCoroutine_003Ed__22))]
	internal static IEnumerator GeneratePreviewForTitanSetCoroutine(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x6004653")]
	[Address(RVA = "0x4387D00", Offset = "0x4387D00", VA = "0x4387D00")]
	public static void GeneratePreviewWithDebounce(MonoBehaviour coroutineRunner, string debounceKey, Action generateAction, float delaySeconds = 0.1f)
	{
	}

	[Token(Token = "0x6004654")]
	[Address(RVA = "0x4387F50", Offset = "0x4387F50", VA = "0x4387F50")]
	[IteratorStateMachine(typeof(_003CDebouncedPreviewCoroutine_003Ed__24))]
	private static IEnumerator DebouncedPreviewCoroutine(string debounceKey, Action generateAction, float delaySeconds)
	{
		return null;
	}

	[Token(Token = "0x6004655")]
	[Address(RVA = "0x4388010", Offset = "0x4388010", VA = "0x4388010")]
	internal static void GeneratePreviewForTitanSet(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x6004656")]
	[Address(RVA = "0x4388330", Offset = "0x4388330", VA = "0x4388330")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26))]
	public static IEnumerator GeneratePreviewWithPersistentCameraCoroutine(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
		return null;
	}
}
