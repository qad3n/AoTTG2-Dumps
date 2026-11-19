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

[Token(Token = "0x2000915")]
public static class CharacterPreviewGenerator
{
	[Token(Token = "0x2000916")]
	private class PreviewCameraData
	{
		[Token(Token = "0x4002DD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Camera Camera;

		[Token(Token = "0x4002DD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public RenderTexture RenderTexture;

		[Token(Token = "0x4002DD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool IsInitialized;

		[Token(Token = "0x4002DD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool IsCleanedUp;

		[Token(Token = "0x6005628")]
		[Address(RVA = "0x5CE6FB0", Offset = "0x5CE5FB0", VA = "0x5CE6FB0")]
		public PreviewCameraData()
		{
		}
	}

	[Token(Token = "0x2000917")]
	[CompilerGenerated]
	private sealed class _003CDebouncedPreviewCoroutine_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DD5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delaySeconds;

		[Token(Token = "0x4002DD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action generateAction;

		[Token(Token = "0x4002DD8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string debounceKey;

		[Token(Token = "0x17000EF4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600562C")]
			[Address(RVA = "0x5CE7160", Offset = "0x5CE6160", VA = "0x5CE7160", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EF5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600562E")]
			[Address(RVA = "0x5CE71B0", Offset = "0x5CE61B0", VA = "0x5CE71B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005629")]
		[Address(RVA = "0x5CE6FC0", Offset = "0x5CE5FC0", VA = "0x5CE6FC0")]
		[DebuggerHidden]
		public _003CDebouncedPreviewCoroutine_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600562A")]
		[Address(RVA = "0x5CE6FE0", Offset = "0x5CE5FE0", VA = "0x5CE6FE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600562B")]
		[Address(RVA = "0x5CE6FF0", Offset = "0x5CE5FF0", VA = "0x5CE6FF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600562D")]
		[Address(RVA = "0x5CE7170", Offset = "0x5CE6170", VA = "0x5CE7170", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000918")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForHumanSetCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DD9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DDA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DDB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorHumanMenu humanMenu;

		[Token(Token = "0x4002DDC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000EF6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005632")]
			[Address(RVA = "0x5CE7360", Offset = "0x5CE6360", VA = "0x5CE7360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EF7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005634")]
			[Address(RVA = "0x5CE73B0", Offset = "0x5CE63B0", VA = "0x5CE73B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600562F")]
		[Address(RVA = "0x5CE71C0", Offset = "0x5CE61C0", VA = "0x5CE71C0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForHumanSetCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005630")]
		[Address(RVA = "0x5CE71E0", Offset = "0x5CE61E0", VA = "0x5CE71E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005631")]
		[Address(RVA = "0x5CE71F0", Offset = "0x5CE61F0", VA = "0x5CE71F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005633")]
		[Address(RVA = "0x5CE7370", Offset = "0x5CE6370", VA = "0x5CE7370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000919")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForTitanSetCoroutine_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DDE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorTitanMenu titanMenu;

		[Token(Token = "0x4002DE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000EF8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005638")]
			[Address(RVA = "0x5CE7500", Offset = "0x5CE6500", VA = "0x5CE7500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EF9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600563A")]
			[Address(RVA = "0x5CE7550", Offset = "0x5CE6550", VA = "0x5CE7550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005635")]
		[Address(RVA = "0x5CE73C0", Offset = "0x5CE63C0", VA = "0x5CE73C0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForTitanSetCoroutine_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005636")]
		[Address(RVA = "0x5CE73E0", Offset = "0x5CE63E0", VA = "0x5CE73E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005637")]
		[Address(RVA = "0x5CE73F0", Offset = "0x5CE63F0", VA = "0x5CE73F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005639")]
		[Address(RVA = "0x5CE7510", Offset = "0x5CE6510", VA = "0x5CE7510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200091A")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string cameraId;

		[Token(Token = "0x4002DE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject character;

		[Token(Token = "0x4002DE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string fileName;

		[Token(Token = "0x4002DE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int size;

		[Token(Token = "0x4002DE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public bool isHuman;

		[Token(Token = "0x4002DE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Transform cameraParent;

		[Token(Token = "0x17000EFA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600563E")]
			[Address(RVA = "0x5CE76D0", Offset = "0x5CE66D0", VA = "0x5CE76D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EFB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005640")]
			[Address(RVA = "0x5CE7720", Offset = "0x5CE6720", VA = "0x5CE7720", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600563B")]
		[Address(RVA = "0x5CE7560", Offset = "0x5CE6560", VA = "0x5CE7560")]
		[DebuggerHidden]
		public _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600563C")]
		[Address(RVA = "0x5CE7580", Offset = "0x5CE6580", VA = "0x5CE7580", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600563D")]
		[Address(RVA = "0x5CE7590", Offset = "0x5CE6590", VA = "0x5CE7590", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600563F")]
		[Address(RVA = "0x5CE76E0", Offset = "0x5CE66E0", VA = "0x5CE76E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002DCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> _currentlyGenerating;

	[Token(Token = "0x4002DCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, PreviewCameraData> _persistentCameras;

	[Token(Token = "0x4002DCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Coroutine> _activeDebounceCoroutines;

	[Token(Token = "0x4002DCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static HashSet<string> _generatedPreviewKeys;

	[Token(Token = "0x6005611")]
	[Address(RVA = "0x5CE33B0", Offset = "0x5CE23B0", VA = "0x5CE33B0")]
	public static void CleanupOrphanedPreviews()
	{
	}

	[Token(Token = "0x6005612")]
	[Address(RVA = "0x5CE3540", Offset = "0x5CE2540", VA = "0x5CE3540")]
	private static void CleanupOrphanedPreviewsInFolder(bool isHuman)
	{
	}

	[Token(Token = "0x6005613")]
	[Address(RVA = "0x5CE3CF0", Offset = "0x5CE2CF0", VA = "0x5CE3CF0")]
	public static void SetLayerRecursively(GameObject obj, int newLayer)
	{
	}

	[Token(Token = "0x6005614")]
	[Address(RVA = "0x5CE4020", Offset = "0x5CE3020", VA = "0x5CE4020")]
	private static PreviewCameraData GetOrCreatePersistentCamera(string cameraId, [Optional] Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6005615")]
	[Address(RVA = "0x5CE4750", Offset = "0x5CE3750", VA = "0x5CE4750")]
	private static void PositionCameraForCharacter(Camera camera, GameObject character, bool isHuman = true)
	{
	}

	[Token(Token = "0x6005616")]
	[Address(RVA = "0x5CE4860", Offset = "0x5CE3860", VA = "0x5CE4860")]
	private static Texture2D CapturePreviewWithCamera(PreviewCameraData cameraData, GameObject character, int size = 128, bool isHuman = true)
	{
		return null;
	}

	[Token(Token = "0x6005617")]
	[Address(RVA = "0x5CE4CC0", Offset = "0x5CE3CC0", VA = "0x5CE4CC0")]
	public static void CleanupPersistentCamera(string cameraId)
	{
	}

	[Token(Token = "0x6005618")]
	[Address(RVA = "0x5CE4F10", Offset = "0x5CE3F10", VA = "0x5CE4F10")]
	public static void CleanupAllPersistentCameras()
	{
	}

	[Token(Token = "0x6005619")]
	[Address(RVA = "0x5CE50F0", Offset = "0x5CE40F0", VA = "0x5CE50F0")]
	public static void GeneratePreviewWithPersistentCamera(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
	}

	[Token(Token = "0x600561A")]
	[Address(RVA = "0x5CE54F0", Offset = "0x5CE44F0", VA = "0x5CE54F0")]
	public static void SaveCachedPreviewsToDisk()
	{
	}

	[Token(Token = "0x600561B")]
	[Address(RVA = "0x5CE5A50", Offset = "0x5CE4A50", VA = "0x5CE5A50")]
	public static void ClearSessionGeneratedPreviews()
	{
	}

	[Token(Token = "0x600561C")]
	[Address(RVA = "0x5CE5D10", Offset = "0x5CE4D10", VA = "0x5CE5D10")]
	public static void ClearNonPersistentPreviews()
	{
	}

	[Token(Token = "0x600561D")]
	[Address(RVA = "0x5CE5D70", Offset = "0x5CE4D70", VA = "0x5CE5D70")]
	public static void GetCacheInfo(out int totalCached, out int persistent)
	{
	}

	[Token(Token = "0x600561E")]
	[Address(RVA = "0x5CE5DD0", Offset = "0x5CE4DD0", VA = "0x5CE5DD0")]
	public static void CaptureCurrentCharacterPreview(bool isHuman = true)
	{
	}

	[Token(Token = "0x600561F")]
	[Address(RVA = "0x5CE6190", Offset = "0x5CE5190", VA = "0x5CE6190")]
	public static void InitializePreviewSystem()
	{
	}

	[Token(Token = "0x6005620")]
	[Address(RVA = "0x5CE61F0", Offset = "0x5CE51F0", VA = "0x5CE61F0")]
	internal static void GeneratePreviewForHumanSet(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x6005621")]
	[Address(RVA = "0x5CE6570", Offset = "0x5CE5570", VA = "0x5CE6570")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForHumanSetCoroutine_003Ed__21))]
	internal static IEnumerator GeneratePreviewForHumanSetCoroutine(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x6005622")]
	[Address(RVA = "0x5CE65E0", Offset = "0x5CE55E0", VA = "0x5CE65E0")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForTitanSetCoroutine_003Ed__22))]
	internal static IEnumerator GeneratePreviewForTitanSetCoroutine(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x6005623")]
	[Address(RVA = "0x5CE6650", Offset = "0x5CE5650", VA = "0x5CE6650")]
	public static void GeneratePreviewWithDebounce(MonoBehaviour coroutineRunner, string debounceKey, Action generateAction, float delaySeconds = 0.1f)
	{
	}

	[Token(Token = "0x6005624")]
	[Address(RVA = "0x5CE68A0", Offset = "0x5CE58A0", VA = "0x5CE68A0")]
	[IteratorStateMachine(typeof(_003CDebouncedPreviewCoroutine_003Ed__24))]
	private static IEnumerator DebouncedPreviewCoroutine(string debounceKey, Action generateAction, float delaySeconds)
	{
		return null;
	}

	[Token(Token = "0x6005625")]
	[Address(RVA = "0x5CE6940", Offset = "0x5CE5940", VA = "0x5CE6940")]
	internal static void GeneratePreviewForTitanSet(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x6005626")]
	[Address(RVA = "0x5CE6C50", Offset = "0x5CE5C50", VA = "0x5CE6C50")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26))]
	public static IEnumerator GeneratePreviewWithPersistentCameraCoroutine(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
		return null;
	}
}
