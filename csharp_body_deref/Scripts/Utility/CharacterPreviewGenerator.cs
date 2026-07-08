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

[Token(Token = "0x20006D7")]
public static class CharacterPreviewGenerator
{
	[Token(Token = "0x20006D8")]
	private class PreviewCameraData
	{
		[Token(Token = "0x40020FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Camera Camera;

		[Token(Token = "0x40020FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public RenderTexture RenderTexture;

		[Token(Token = "0x40020FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool IsInitialized;

		[Token(Token = "0x4002100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool IsCleanedUp;

		[Token(Token = "0x600440D")]
		[Address(RVA = "0x40551B0", Offset = "0x40551B0", VA = "0x40551B0")]
		public PreviewCameraData()
		{
		}
	}

	[Token(Token = "0x20006D9")]
	[CompilerGenerated]
	private sealed class _003CDebouncedPreviewCoroutine_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002101")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delaySeconds;

		[Token(Token = "0x4002104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action generateAction;

		[Token(Token = "0x4002105")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string debounceKey;

		[Token(Token = "0x17000D36")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004411")]
			[Address(RVA = "0x4057DF0", Offset = "0x4057DF0", VA = "0x4057DF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D37")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004413")]
			[Address(RVA = "0x4057E40", Offset = "0x4057E40", VA = "0x4057E40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600440E")]
		[Address(RVA = "0x40576D0", Offset = "0x40576D0", VA = "0x40576D0")]
		[DebuggerHidden]
		public _003CDebouncedPreviewCoroutine_003Ed__24(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600440F")]
		[Address(RVA = "0x4057C80", Offset = "0x4057C80", VA = "0x4057C80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004410")]
		[Address(RVA = "0x4057C90", Offset = "0x4057C90", VA = "0x4057C90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004412")]
		[Address(RVA = "0x4057E00", Offset = "0x4057E00", VA = "0x4057E00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006DA")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForHumanSetCoroutine_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002106")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002107")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002108")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorHumanMenu humanMenu;

		[Token(Token = "0x4002109")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000D38")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004417")]
			[Address(RVA = "0x4057F30", Offset = "0x4057F30", VA = "0x4057F30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D39")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004419")]
			[Address(RVA = "0x4057F80", Offset = "0x4057F80", VA = "0x4057F80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004414")]
		[Address(RVA = "0x4057320", Offset = "0x4057320", VA = "0x4057320")]
		[DebuggerHidden]
		public _003CGeneratePreviewForHumanSetCoroutine_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004415")]
		[Address(RVA = "0x4057E50", Offset = "0x4057E50", VA = "0x4057E50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004416")]
		[Address(RVA = "0x4057E60", Offset = "0x4057E60", VA = "0x4057E60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004418")]
		[Address(RVA = "0x4057F40", Offset = "0x4057F40", VA = "0x4057F40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006DB")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewForTitanSetCoroutine_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400210A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400210B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400210C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorTitanMenu titanMenu;

		[Token(Token = "0x400210D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool isRebuild;

		[Token(Token = "0x17000D3A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600441D")]
			[Address(RVA = "0x4058070", Offset = "0x4058070", VA = "0x4058070", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D3B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600441F")]
			[Address(RVA = "0x40580C0", Offset = "0x40580C0", VA = "0x40580C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600441A")]
		[Address(RVA = "0x40573C0", Offset = "0x40573C0", VA = "0x40573C0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForTitanSetCoroutine_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600441B")]
		[Address(RVA = "0x4057F90", Offset = "0x4057F90", VA = "0x4057F90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600441C")]
		[Address(RVA = "0x4057FA0", Offset = "0x4057FA0", VA = "0x4057FA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600441E")]
		[Address(RVA = "0x4058080", Offset = "0x4058080", VA = "0x4058080", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006DC")]
	[CompilerGenerated]
	private sealed class _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400210E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400210F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string cameraId;

		[Token(Token = "0x4002111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject character;

		[Token(Token = "0x4002112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string fileName;

		[Token(Token = "0x4002113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int size;

		[Token(Token = "0x4002114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public bool isHuman;

		[Token(Token = "0x4002115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Transform cameraParent;

		[Token(Token = "0x17000D3C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004423")]
			[Address(RVA = "0x40581D0", Offset = "0x40581D0", VA = "0x40581D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D3D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004425")]
			[Address(RVA = "0x4058220", Offset = "0x4058220", VA = "0x4058220", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004420")]
		[Address(RVA = "0x4057AE0", Offset = "0x4057AE0", VA = "0x4057AE0")]
		[DebuggerHidden]
		public _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004421")]
		[Address(RVA = "0x40580D0", Offset = "0x40580D0", VA = "0x40580D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004422")]
		[Address(RVA = "0x40580E0", Offset = "0x40580E0", VA = "0x40580E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004424")]
		[Address(RVA = "0x40581E0", Offset = "0x40581E0", VA = "0x40581E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40020F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> _currentlyGenerating;

	[Token(Token = "0x40020FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, PreviewCameraData> _persistentCameras;

	[Token(Token = "0x40020FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Coroutine> _activeDebounceCoroutines;

	[Token(Token = "0x40020FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static HashSet<string> _generatedPreviewKeys;

	[Token(Token = "0x60043F6")]
	[Address(RVA = "0x4053DB0", Offset = "0x4053DB0", VA = "0x4053DB0")]
	public static void CleanupOrphanedPreviews()
	{
	}

	[Token(Token = "0x60043F7")]
	[Address(RVA = "0x4053E00", Offset = "0x4053E00", VA = "0x4053E00")]
	private static void CleanupOrphanedPreviewsInFolder(bool isHuman)
	{
	}

	[Token(Token = "0x60043F8")]
	[Address(RVA = "0x40546E0", Offset = "0x40546E0", VA = "0x40546E0")]
	public static void SetLayerRecursively(GameObject obj, int newLayer)
	{
	}

	[Token(Token = "0x60043F9")]
	[Address(RVA = "0x4054A80", Offset = "0x4054A80", VA = "0x4054A80")]
	private static PreviewCameraData GetOrCreatePersistentCamera(string cameraId, [Optional] Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60043FA")]
	[Address(RVA = "0x40551C0", Offset = "0x40551C0", VA = "0x40551C0")]
	private static void PositionCameraForCharacter(Camera camera, GameObject character, bool isHuman = true)
	{
	}

	[Token(Token = "0x60043FB")]
	[Address(RVA = "0x40552E0", Offset = "0x40552E0", VA = "0x40552E0")]
	private static Texture2D CapturePreviewWithCamera(PreviewCameraData cameraData, GameObject character, int size = 128, bool isHuman = true)
	{
		return null;
	}

	[Token(Token = "0x60043FC")]
	[Address(RVA = "0x4055850", Offset = "0x4055850", VA = "0x4055850")]
	public static void CleanupPersistentCamera(string cameraId)
	{
	}

	[Token(Token = "0x60043FD")]
	[Address(RVA = "0x4055AA0", Offset = "0x4055AA0", VA = "0x4055AA0")]
	public static void CleanupAllPersistentCameras()
	{
	}

	[Token(Token = "0x60043FE")]
	[Address(RVA = "0x4055C90", Offset = "0x4055C90", VA = "0x4055C90")]
	public static void GeneratePreviewWithPersistentCamera(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
	}

	[Token(Token = "0x60043FF")]
	[Address(RVA = "0x4056190", Offset = "0x4056190", VA = "0x4056190")]
	public static void SaveCachedPreviewsToDisk()
	{
	}

	[Token(Token = "0x6004400")]
	[Address(RVA = "0x4056760", Offset = "0x4056760", VA = "0x4056760")]
	public static void ClearSessionGeneratedPreviews()
	{
	}

	[Token(Token = "0x6004401")]
	[Address(RVA = "0x4056A20", Offset = "0x4056A20", VA = "0x4056A20")]
	public static void ClearNonPersistentPreviews()
	{
	}

	[Token(Token = "0x6004402")]
	[Address(RVA = "0x4056A80", Offset = "0x4056A80", VA = "0x4056A80")]
	public static void GetCacheInfo(out int totalCached, out int persistent)
	{
	}

	[Token(Token = "0x6004403")]
	[Address(RVA = "0x4056AE0", Offset = "0x4056AE0", VA = "0x4056AE0")]
	public static void CaptureCurrentCharacterPreview(bool isHuman = true)
	{
	}

	[Token(Token = "0x6004404")]
	[Address(RVA = "0x4056E80", Offset = "0x4056E80", VA = "0x4056E80")]
	public static void InitializePreviewSystem()
	{
	}

	[Token(Token = "0x6004405")]
	[Address(RVA = "0x4056F20", Offset = "0x4056F20", VA = "0x4056F20")]
	internal static void GeneratePreviewForHumanSet(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x6004406")]
	[Address(RVA = "0x40572A0", Offset = "0x40572A0", VA = "0x40572A0")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForHumanSetCoroutine_003Ed__21))]
	internal static IEnumerator GeneratePreviewForHumanSetCoroutine(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x6004407")]
	[Address(RVA = "0x4057340", Offset = "0x4057340", VA = "0x4057340")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForTitanSetCoroutine_003Ed__22))]
	internal static IEnumerator GeneratePreviewForTitanSetCoroutine(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
		return null;
	}

	[Token(Token = "0x6004408")]
	[Address(RVA = "0x40573E0", Offset = "0x40573E0", VA = "0x40573E0")]
	public static void GeneratePreviewWithDebounce(MonoBehaviour coroutineRunner, string debounceKey, Action generateAction, float delaySeconds = 0.1f)
	{
	}

	[Token(Token = "0x6004409")]
	[Address(RVA = "0x4057630", Offset = "0x4057630", VA = "0x4057630")]
	[IteratorStateMachine(typeof(_003CDebouncedPreviewCoroutine_003Ed__24))]
	private static IEnumerator DebouncedPreviewCoroutine(string debounceKey, Action generateAction, float delaySeconds)
	{
		return null;
	}

	[Token(Token = "0x600440A")]
	[Address(RVA = "0x40576F0", Offset = "0x40576F0", VA = "0x40576F0")]
	internal static void GeneratePreviewForTitanSet(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
	}

	[Token(Token = "0x600440B")]
	[Address(RVA = "0x4057A10", Offset = "0x4057A10", VA = "0x4057A10")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26))]
	public static IEnumerator GeneratePreviewWithPersistentCameraCoroutine(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
		return null;
	}
}
