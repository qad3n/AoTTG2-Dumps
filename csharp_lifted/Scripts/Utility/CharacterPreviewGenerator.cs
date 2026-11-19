// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CharacterPreviewGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CharacterPreviewGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.PreviewCameraData$$.ctor): clean
			base();
			return;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005629")]
		[Address(RVA = "0x5CE6FC0", Offset = "0x5CE5FC0", VA = "0x5CE6FC0")]
		[DebuggerHidden]
		public _003CDebouncedPreviewCoroutine_003Ed__24(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600562A")]
		[Address(RVA = "0x5CE6FE0", Offset = "0x5CE5FE0", VA = "0x5CE6FE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600562B")]
		[Address(RVA = "0x5CE6FF0", Offset = "0x5CE5FF0", VA = "0x5CE6FF0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$MoveNext): clean
			float seconds;
			int iVar1;
			Action pSVar2;
			Dictionary<object, object> pSVar3;
			bool bVar4;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.delaySeconds;
				__this_00 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				pSVar2 = this.generateAction;
				if (pSVar2 != null) {
					(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				}
				pSVar3 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
				if (pSVar3 == null) {
		label_05de714d: ;
					throw new NullReferenceException();
				}
				bVar4 = pSVar3.ContainsKey((object)this.debounceKey);
				if (bVar4) {
					pSVar3 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
					if (pSVar3 == null) goto label_05de714d;
					pSVar3.set_Item((object)this.debounceKey, null);
				}
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x600562D")]
		[Address(RVA = "0x5CE7170", Offset = "0x5CE6170", VA = "0x5CE7170", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24_System_Collections_IEnumerator);
			throw (object)__this_00;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600562F")]
		[Address(RVA = "0x5CE71C0", Offset = "0x5CE61C0", VA = "0x5CE71C0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForHumanSetCoroutine_003Ed__21(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005630")]
		[Address(RVA = "0x5CE71E0", Offset = "0x5CE61E0", VA = "0x5CE71E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005631")]
		[Address(RVA = "0x5CE71F0", Offset = "0x5CE61F0", VA = "0x5CE71F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$MoveNext): clean
			bool isRebuild;
			int iVar1;
			CharacterEditorHumanMenu humanMenu;
			Util.d__17<WaitForFrames> __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_00 = new Util.d__17<WaitForFrames>();
				__this_00.__1__state = 0;
				__this_00.frames = 3;
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				humanMenu = this.humanMenu;
				isRebuild = this.isRebuild;
				CharacterPreviewGenerator.GeneratePreviewForHumanSet(humanMenu, isRebuild);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6005633")]
		[Address(RVA = "0x5CE7370", Offset = "0x5CE6370", VA = "0x5CE7370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21_System_Collections_I);
			throw (object)__this_00;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005635")]
		[Address(RVA = "0x5CE73C0", Offset = "0x5CE63C0", VA = "0x5CE73C0")]
		[DebuggerHidden]
		public _003CGeneratePreviewForTitanSetCoroutine_003Ed__22(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005636")]
		[Address(RVA = "0x5CE73E0", Offset = "0x5CE63E0", VA = "0x5CE73E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005637")]
		[Address(RVA = "0x5CE73F0", Offset = "0x5CE63F0", VA = "0x5CE73F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$MoveNext): clean
			bool isRebuild;
			int iVar1;
			CharacterEditorTitanMenu titanMenu;
			Util.d__17<WaitForFrames> __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_00 = new Util.d__17<WaitForFrames>();
				__this_00.__1__state = 0;
				__this_00.frames = 3;
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				titanMenu = this.titanMenu;
				isRebuild = this.isRebuild;
				CharacterPreviewGenerator.GeneratePreviewForTitanSet(titanMenu, isRebuild);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6005639")]
		[Address(RVA = "0x5CE7510", Offset = "0x5CE6510", VA = "0x5CE7510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22_System_Collections_I);
			throw (object)__this_00;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600563B")]
		[Address(RVA = "0x5CE7560", Offset = "0x5CE6560", VA = "0x5CE7560")]
		[DebuggerHidden]
		public _003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600563C")]
		[Address(RVA = "0x5CE7580", Offset = "0x5CE6580", VA = "0x5CE7580", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600563D")]
		[Address(RVA = "0x5CE7590", Offset = "0x5CE6590", VA = "0x5CE7590", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$MoveNext): clean
			bool isHuman;
			int iVar1;
			int size;
			String cameraId;
			GameObject character;
			String fileName;
			Transform cameraParent;
			Util.d__17<WaitForFrames> __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_00 = new Util.d__17<WaitForFrames>();
				__this_00.__1__state = 0;
				__this_00.frames = 2;
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				cameraId = this.cameraId;
				character = this.character;
				fileName = this.fileName;
				size = this.size;
				isHuman = this.isHuman;
				cameraParent = this.cameraParent;
				CharacterPreviewGenerator.GeneratePreviewWithPersistentCamera(cameraId, character, fileName, size, isHuman, cameraParent);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x600563F")]
		[Address(RVA = "0x5CE76E0", Offset = "0x5CE66E0", VA = "0x5CE76E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Utility_CharacterPreviewGenerator_GeneratePreviewWithPersistentCameraCoroutine_d__26_System_Coll);
			throw (object)__this_00;
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
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviews): clean


		CharacterPreviewGenerator.CleanupOrphanedPreviewsInFolder(true);
		CharacterPreviewGenerator.CleanupOrphanedPreviewsInFolder(false);
		return;
	}

	[Token(Token = "0x6005612")]
	[Address(RVA = "0x5CE3540", Offset = "0x5CE2540", VA = "0x5CE3540")]
	private static void CleanupOrphanedPreviewsInFolder(bool isHuman)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviewsInFolder): 27 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		HumanCustomSettings pSVar3;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar4;
		ListSetting<T> pSVar5;
		Il2CppClass pIVar6;
		TitanCustomSettings pSVar8;
		Settings_SetSettingsContainer_TitanCustomSet__o pSVar9;
		bool bVar10;
		int iVar11;
		String* ppSVar12;
		String pSVar13;
		HashSet<string> __this;
		List<object> pSVar15;
		String[] pSVar16;
		ulong uVar17;
		String pSVar18;
		ulong uVar19;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_50 = new byte[16];
		object local_40;
		String local_38;

		if (Il2CppMethodInitialized_07548292 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548292 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		if (isHuman) {
			ppSVar12 = &"Human";
		}
		else {
			ppSVar12 = &"Titans";
		}
		pSVar13 = *ppSVar12;
		pSVar18 = FolderPaths.CharacterPreviews;
		pSVar13 = Path.Combine(pSVar18, pSVar13);
		bVar10 = Directory.Exists(pSVar13);
		if (bVar10) {
			local_38 = pSVar13;
			__this = new HashSet<string>();
			if (isHuman) {
				pSVar3 = SettingsManager.HumanCustomSettings;
				if (((pSVar3 == null) ||(pSVar4 = pSVar3.CustomSets, pSVar4 == null)) ||(pSVar5 = pSVar4.Sets, pSVar5 == null)) goto label_05de3bde;
				pIVar6 = (Il2CppClass)pSVar5.klass;
				uVar17 = (ulong)(pIVar6._2).interface_offsets_count;
				pSVar15 = (List<object>)pSVar5.GetItems();
				if (pSVar15 == null) goto label_05de3bde;
				local_50.GetEnumerator(pSVar15);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (__this == null) {
					local_50._8_8_ = local_68;
					bVar10 = local_68.MoveNext();
					if (bVar10) {
						if (local_58 != null) {
							bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
							if ((bVar1 <= (local_58.klass._2).typeHierarchyDepth) &&((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(HumanCustomSet))) {
								if (local_58[4].klass != null) {
									String.Concat("Preset", ((local_58[4].klass)._1).byval_arg.data);
									throw new NullReferenceException();
								}
	label_05de38fd: ;
								throw new NullReferenceException();
							}
	label_05de3902: ;
							throw new InvalidCastException();
						}
	label_05de38c5: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (bVar10 = local_68.MoveNext()) {
						if (local_58 == null) goto label_05de38c5;
						bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
						if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) goto label_05de3902;
						if (local_58[4].klass == null) goto label_05de38fd;
						pSVar13 = String.Concat("Preset", ((local_58[4].klass)._1).byval_arg.data);
						__this.Add((object)pSVar13);
					}
				}
			}
			else {
				pSVar8 = SettingsManager.TitanCustomSettings;
				if (((pSVar8 == null) ||(pSVar9 = pSVar8.TitanCustomSets, pSVar9 == null)) ||(pSVar5 = pSVar9.Sets, pSVar5 == null)) goto label_05de3bde;
				pIVar6 = (Il2CppClass)pSVar5.klass;
				uVar17 = (ulong)(pIVar6._2).interface_offsets_count;
				pSVar15 = (List<object>)pSVar5.GetItems();
				if (pSVar15 == null) goto label_05de3bde;
				local_50.GetEnumerator(pSVar15);
				local_58 = local_40;
				local_68 = (byte[])local_50._0_8_;
				local_50._0_8_ = null;
				local_50._8_8_ = local_68;
				if (__this == null) {
					local_50._8_8_ = local_68;
					bVar10 = local_68.MoveNext();
					if (bVar10) {
						if (local_58 != null) {
							bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
							if ((bVar1 <= (local_58.klass._2).typeHierarchyDepth) &&((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(TitanCustomSet))) {
								if (local_58[4].klass != null) {
									String.Concat("Preset", ((local_58[4].klass)._1).byval_arg.data);
									throw new NullReferenceException();
								}
	label_05de3c4a: ;
								throw new NullReferenceException();
							}
	label_05de3c4f: ;
							throw new InvalidCastException();
						}
	label_05de3c12: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (bVar10 = local_68.MoveNext()) {
						if (local_58 == null) goto label_05de3c12;
						bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
						if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) goto label_05de3c4f;
						if (local_58[4].klass == null) goto label_05de3c4a;
						pSVar13 = String.Concat("Preset", ((local_58[4].klass)._1).byval_arg.data);
						__this.Add((object)pSVar13);
					}
				}
			}
			local_68.Dispose();
			pSVar16 = Directory.GetFiles(local_38, "Preset*.png");
			if (pSVar16 == null) {
	label_05de3bde: ;
				throw new NullReferenceException();
			}
			iVar11 = (int)pSVar16.Length;
			if (__this == null) {
				if (0 < iVar11) {
					pSVar13 = pSVar16[0];
					Path.GetFileNameWithoutExtension(pSVar13);
					throw new NullReferenceException();
				}
			}
			else if (0 < iVar11) {
				uVar17 = pSVar16.Length & 0xffffffff;
				uVar19 = 0;
				do {
					if (uVar17 <= uVar19) {
						throw new IndexOutOfRangeException();
					}
					pSVar13 = pSVar16[uVar19];
					pSVar18 = Path.GetFileNameWithoutExtension(pSVar13);
					bVar10 = __this.Contains((object)pSVar18);
					if (!bVar10) {
						File.Delete(pSVar13);
					}
					uVar19 = uVar19 + 1;
					uVar2 = (uint)pSVar16.Length;
					uVar17 = (ulong)uVar2;
				} while ((long)uVar19 < (long)(int)uVar2);
			}
		}
		return;
	}

	[Token(Token = "0x6005613")]
	[Address(RVA = "0x5CE3CF0", Offset = "0x5CE2CF0", VA = "0x5CE3CF0")]
	public static void SetLayerRecursively(GameObject obj, int newLayer)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$SetLayerRecursively): 9 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		Transform __this;
		VirtualInvokeData pVVar5;
		Component __this_00;
		GameObject obj_00;
		object pIVar6;
		ulong uVar7;
		long lVar8;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		if (obj != null) {
			obj.layer = newLayer;
			__this = obj.transform;
			if (__this != null) {
				local_58 = (object)__this.GetEnumerator();
				local_40 = (byte)&local_58;
				local_38 = &local_50;
				do {
					pIVar6 = local_58;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_58.klass;
					uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
					bVar4 = pIVar6.Dispose();
					pIVar6 = local_58;
					if (!bVar4) {
						pIVar6 = (local_58 as IDisposable);
						if (pIVar6 == null) {
							return;
						}
						pIVar2 = pIVar6.klass;
						uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
						local_50 = pIVar6;
						if (uVar7 == 0) goto label_05de3fbf;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar8 = 0;
						goto label_05de3fb0;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_58.klass;
					uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
					__this_00 = (Component)pIVar6.Dispose();
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
						throw new InvalidCastException();
					}
					obj_00 = __this_00.gameObject;
					if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
					}
					CharacterPreviewGenerator.SetLayerRecursively(obj_00, newLayer);
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
	label_05de3fb0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_05de3fdd;
			}
		}
	label_05de3fbf: ;
	label_05de3fdd: ;
		pIVar6.Dispose();
		return;
	}

	[Token(Token = "0x6005614")]
	[Address(RVA = "0x5CE4020", Offset = "0x5CE3020", VA = "0x5CE4020")]
	private static PreviewCameraData GetOrCreatePersistentCamera(string cameraId, [Optional] Transform parent)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GetOrCreatePersistentCamera): 10 lines keep C-only constructs
		CharacterPreviewGenerator.PreviewCameraData targetAddress;
		uint uVar1;
		Dictionary<object, object> pSVar2;
		Camera pUVar3;
		bool bVar4;
		int value;
		object pIVar5;
		CharacterPreviewGenerator.PreviewCameraData pUVar6;
		Object pUVar7;
		String pSVar8;
		GameObject pUVar9;
		Transform __this;
		Camera pUVar10;
		Object x;
		Skybox __this_00;
		Material value_00;
		RenderTexture pUVar11;
		RenderTexture* targetAddress_00;
		float fVar12;
		Color value_01;
		Scene[] local_40 = new Scene[2];
		String local_38;

		local_40[0].m_Handle.m_Value.m_Data =(Scene)(SceneHandle)0x0;
		pSVar2 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
		if (pSVar2 == null) goto label_05de474b;
		bVar4 = pSVar2.ContainsKey((object)cameraId);
		if (bVar4) {
			pSVar2 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
			if ((pSVar2 == null) ||(pIVar5 = pSVar2.get_Item((object)cameraId), pIVar5 == null)) goto label_05de474b;
			if (*(sbyte)&pIVar5[2].klass != false) {
				pSVar2 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
				if ((pSVar2 == null) ||(pIVar5 = pSVar2.get_Item((object)cameraId), pIVar5 == null)) goto label_05de474b;
				if (*(sbyte)((long)&pIVar5[2].klass + 1) == false) {
					pSVar2 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
					if ((pSVar2 == null) ||(pUVar6 = (CharacterPreviewGenerator.PreviewCameraData)pSVar2.get_Item((object)cameraId), pUVar6 == null)) goto label_05de474b;
					pUVar10 = pUVar6.Camera;
					bVar4 = ((Object)pUVar10 != null);
					if (bVar4) {
						pUVar11 = pUVar6.RenderTexture;
						bVar4 = ((Object)pUVar11 != null);
						if (bVar4) {
							pUVar10 = pUVar6.Camera;
							if (pUVar10 == null) goto label_05de474b;
							pUVar7 = (Object)pUVar10.gameObject;
							bVar4 = (pUVar7 != null);
							if (bVar4) {
								return pUVar6;
							}
						}
					}
					pSVar2 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
					if (pSVar2 == null) goto label_05de474b;
					pSVar2.Remove((object)cameraId);
				}
			}
		}
		pUVar6 = new CharacterPreviewGenerator.PreviewCameraData();
		local_38 = cameraId;
		pSVar8 = String.Concat("PersistentPreviewCamera_", cameraId);
		pUVar7 = new GameObject(pSVar8);
		Object.DontDestroyOnLoad(pUVar7);
		bVar4 = ((Object)parent != null);
		if (bVar4) {
			if ((parent == null) ||(pUVar9 = parent.gameObject, pUVar9 == null)) goto label_05de474b;
			local_40[0] = pUVar9.scene;
			pSVar8 = local_40.name;
			bVar4 = (pSVar8 == "DontDestroyOnLoad");
			if (!bVar4) {
				pUVar9 = parent.gameObject;
				if (pUVar9 == null) goto label_05de474b;
				local_40[0] = pUVar9.scene;
				pSVar8 = local_40.name;
				if (pSVar8 != null) goto label_05de4401;
			}
			if ((pUVar7 == null) ||(__this = pUVar7.transform, __this == null)) goto label_05de474b;
			__this.SetParent(parent);
		}
		else {
	label_05de4401: ;
			if (pUVar7 == null) goto label_05de474b;
		}
		pUVar10 = pUVar7.AddComponent<Camera>();
		if (pUVar6 == null) goto label_05de474b;
		targetAddress = &pUVar6.fields;
		pUVar6.Camera = pUVar10;
		pUVar10 = Camera.main;
		if (pUVar10 == null) {
			pUVar10 = Object.FindObjectOfType<Camera>();
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = ((Object)pUVar10 != null);
		if (bVar4) {
			if (pUVar10 == null) goto label_05de474b;
			pUVar3 = targetAddress.Camera;
			value = pUVar10.clearFlags;
			if (pUVar3 == null) goto label_05de474b;
			pUVar3.clearFlags = value;
			pUVar3 = targetAddress.Camera;
			value_01 = pUVar10.backgroundColor;
			if (pUVar3 == null) goto label_05de474b;
			pUVar3.backgroundColor = value_01;
			pUVar3 = targetAddress.Camera;
			fVar12 = pUVar10.nearClipPlane;
			if (pUVar3 == null) goto label_05de474b;
			pUVar3.nearClipPlane = fVar12;
			pUVar3 = targetAddress.Camera;
			fVar12 = pUVar10.farClipPlane;
			if (pUVar3 == null) goto label_05de474b;
			pUVar3.farClipPlane = fVar12;
			x = (Object)pUVar10.GetComponent<Skybox>();
			bVar4 = (x != null);
			if (bVar4) {
				__this_00 = pUVar7.AddComponent<Skybox>();
				if ((x == null) ||(value_00 = x.material, __this_00 == null)) goto label_05de474b;
				__this_00.material = value_00;
			}
		}
		if (targetAddress.Camera != null) {
			(targetAddress.Camera).fieldOfView = 60.0;
			if (targetAddress.Camera != null) {
				(targetAddress.Camera).orthographic = false;
				if (targetAddress.Camera != null) {
					(targetAddress.Camera).cullingMask = -1;
					if (targetAddress.Camera != null) {
						(targetAddress.Camera).enabled = false;
						pUVar11 = new RenderTexture(0x80, 0x80, 0x10);
						targetAddress_00 = &pUVar6.RenderTexture;
						pUVar6.RenderTexture = pUVar11;
						pUVar11 = pUVar6.RenderTexture;
						bVar4 = ((Object)pUVar11 == null);
						if (bVar4) {
							return null;
						}
						if (*targetAddress_00 != null) {
							(*targetAddress_00).antiAliasing = 1;
							if (*targetAddress_00 != null) {
								(*targetAddress_00).Create();
								pSVar8 = local_38;
								if (targetAddress.Camera != null) {
									(targetAddress.Camera).targetTexture = pUVar6.RenderTexture;
									pUVar6.IsInitialized = true;
									pUVar6.IsCleanedUp = false;
									if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
										il2cpp_codegen_runtime_class_init(typeof(CharacterPreviewGenerator)) ;
									}
									pSVar2 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
									if (pSVar2 != null) {
										pSVar2.set_Item((object)pSVar8, (object)pUVar6);
										return pUVar6;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05de474b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005615")]
	[Address(RVA = "0x5CE4750", Offset = "0x5CE3750", VA = "0x5CE4750")]
	private static void PositionCameraForCharacter(Camera camera, GameObject character, bool isHuman = true)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$PositionCameraForCharacter): 2 lines keep C-only constructs
		Transform pUVar1;
		undefined3 in_register_00000011;
		float fVar2;
		Vector3 UVar3;
		Vector3 value;
		float local_28;
		float fStack_24;

		if (CONCAT31(in_register_00000011, isHuman) == 0) {
			fVar2 = 3.5;
		}
		else {
			fVar2 = 3.0;
		}
		if (character != null) {
			pUVar1 = character.transform;
			if (pUVar1 != null) {
				UVar3 = pUVar1.position;
				if (camera != null) {
					pUVar1 = camera.transform;
					if (pUVar1 != null) {
						local_28 = UVar3.x;
						fStack_24 = UVar3.y;
						value.z = fVar2 + UVar3.z;
						value.y = fStack_24 + 1.23;
						value.x = local_28 + 0.0;
						pUVar1.position = value;
						pUVar1 = camera.transform;
						if (pUVar1 != null) {
							UVar3.z = UVar3.z + 0.0;
							UVar3.y = fStack_24 + 1.18;
							UVar3.x = local_28 + 0.0;
							pUVar1.LookAt(UVar3);
							camera.fieldOfView = 20.0;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005616")]
	[Address(RVA = "0x5CE4860", Offset = "0x5CE3860", VA = "0x5CE4860")]
	private static Texture2D CapturePreviewWithCamera(PreviewCameraData cameraData, GameObject character, int size = 128, bool isHuman = true)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$CapturePreviewWithCamera): 13 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Renderer __this;
		RenderTexture pUVar3;
		byte[] auVar4 = new byte[16];
		GameObject character_00;
		bool bVar5;
		int iVar6;
		uint uVar7;
		int height;
		Transform pUVar8;
		Object[] pSVar9;
		RenderTexture pUVar10;
		Texture2D __this_00;
		undefined7 in_register_00000009;
		Renderer method_00;
		uint uVar11;
		Camera pUVar12;
		GameObject local_98;
		int local_8c;
		Vector3 local_88;
		Vector3 local_78;
		ulong local_68;
		byte local_60;
		Vector3 local_58;
		Quaternion local_50;
		Vector3 local_48;
		Quaternion local_40;

		method_00 = (Renderer)CONCAT71(in_register_00000009, isHuman);
		local_98 = character;
		local_8c = size;
		if (cameraData == null) {
			pUVar12 = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = cameraData.Camera;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar5 = ((Object)pUVar12 == null);
		if (bVar5) {
			return null;
		}
		if (cameraData != null) {
			pUVar10 = cameraData.RenderTexture;
			bVar5 = ((Object)pUVar10 == null);
			if (bVar5) {
				return null;
			}
			if ((character != null) &&(pUVar8 = character.transform, pUVar8 != null)) {
				local_78 = pUVar8.position;
				pUVar8 = character.transform;
				if (pUVar8 != null) {
					local_40 = pUVar8.rotation;
					pUVar8 = character.transform;
					if (pUVar8 != null) {
						local_88 = pUVar8.localScale;
						local_60 = (byte)&local_98;
						local_68 = 0;
						local_58 = &local_78;
						local_50 = &local_40;
						local_48 = &local_88;
						iVar6 = LayerMask.NameToLayer("Default");
						if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
						}
						CharacterPreviewGenerator.SetLayerRecursively(character, iVar6);
						if (local_98 == null) {
							throw new NullReferenceException();
						}
						pSVar9 = local_98.GetComponentsInChildren<Renderer>();
						if (pSVar9 == null) {
							throw new NullReferenceException();
						}
						uVar7 = (uint)pSVar9.Length;
						if (0 < (int)uVar7) {
							uVar11 = 0;
							do {
								if (uVar7 <= uVar11) {
									throw new IndexOutOfRangeException();
								}
								__this = (Renderer)pSVar9[(int)uVar11];
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.enabled = true;
								method_00 = __this.klass;
								bVar1 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
								if ((bVar1 <= (method_00._2).typeHierarchyDepth) &&(method_00 = (Renderer)(method_00._2).typeHierarchy, *(SkinnedMeshRenderer*)((long)method_00 + (ulong)bVar1 * 8 + -8) == typeof(SkinnedMeshRenderer))) {
									__this.updateWhenOffscreen = true;
								}
								uVar11 = uVar11 + 1;
								uVar7 = (uint)pSVar9.Length;
							} while ((int)uVar11 < (int)uVar7);
						}
						character_00 = local_98;
						pUVar12 = cameraData.Camera;
						CharacterPreviewGenerator.PositionCameraForCharacter(pUVar12, character_00, isHuman);
						pUVar10 = RenderTexture.active;
						pUVar12 = cameraData.Camera;
						if (pUVar12 == null) {
							throw new NullReferenceException();
						}
						pUVar12.Render();
						RenderTexture.active = cameraData.RenderTexture;
						pUVar3 = cameraData.RenderTexture;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						iVar6 = pUVar3.get_width();
						pUVar3 = cameraData.RenderTexture;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						height = pUVar3.get_height();
						__this_00 = new Texture2D(iVar6, height, 3, false);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						auVar4._4_4_ = (float)height;
						auVar4._0_4_ = (float)iVar6;
						auVar4._8_8_ = 0;
						__this_00.ReadPixels((Rect)(auVar4 << 0x40), 0, 0);
						__this_00.Apply();
						RenderTexture.active = pUVar10;
						if (iVar6 != local_8c) {
							TextureScaler.ScaleBlocking(__this_00, local_8c, local_8c);
						}
						il2cpp_runtime_helper_02fdeed0(&local_68);
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005617")]
	[Address(RVA = "0x5CE4CC0", Offset = "0x5CE3CC0", VA = "0x5CE4CC0")]
	public static void CleanupPersistentCamera(string cameraId)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$CleanupPersistentCamera): 8 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Il2CppClass x;
		bool bVar2;
		object pIVar3;
		Object pUVar4;

		if (Il2CppMethodInitialized_07548296 == false) {
			Il2CppMethodInitialized_07548296 = true;
			if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) goto label_05de4d55;
	label_05de4ce9: ;
			pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
		}
		else {
			if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor != 0) goto label_05de4ce9;
	label_05de4d55: ;
			pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
		}
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)cameraId);
			if (!bVar2) {
				return;
			}
			pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
			if ((pSVar1 != null) &&(pIVar3 = pSVar1.get_Item((object)cameraId), pIVar3 != null)) {
				x = pIVar3[1].klass;
				bVar2 = ((Object)x != null);
				if (bVar2) {
					if (pIVar3[1].klass == null) goto label_05de4f06;
					pIVar3[1].klass.targetTexture = null;
					if (pIVar3[1].klass == null) goto label_05de4f06;
					pIVar3[1].klass.enabled = false ;
					if (pIVar3[1].klass == null) goto label_05de4f06;
					pUVar4 = (Object)pIVar3[1].klass.gameObject;
					Object.DestroyImmediate(pUVar4);
				}
				pUVar4 = pIVar3[1].monitor;
				bVar2 = (pUVar4 != null);
				if (bVar2) {
					if (pIVar3[1].monitor == null) goto label_05de4f06;
					pIVar3[1].monitor.Release();
					pUVar4 = pIVar3[1].monitor;
					Object.DestroyImmediate(pUVar4);
				}
				*(byte)((long)&pIVar3[2].klass + 1) = 1;
				pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
				if (pSVar1 != null) {
					pSVar1.Remove((object)cameraId);
					return;
				}
			}
		}
	label_05de4f06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005618")]
	[Address(RVA = "0x5CE4F10", Offset = "0x5CE3F10", VA = "0x5CE4F10")]
	public static void CleanupAllPersistentCameras()
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$CleanupAllPersistentCameras): 3 lines keep C-only constructs
		Dictionary<object, object> __this;
		object cameraId;
		bool bVar1;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o collection;
		List<string> __this_00;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this = (Dictionary<object, object>)CharacterPreviewGenerator._persistentCameras;
		if (__this != null) {
			collection = __this.Keys;
			__this_00 = new List<string>((IEnumerable<T>)collection);
			if (__this_00 != null) {
				SStack_48 = __this_00.GetEnumerator();
				puStack_28 = (byte)&SStack_48;
				while(true) {
					bVar1 = SStack_48.MoveNext();
					cameraId = SStack_48._current;
					if (!bVar1) break;
					CharacterPreviewGenerator.CleanupPersistentCamera((String)cameraId);
				}
				SStack_48.Dispose();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005619")]
	[Address(RVA = "0x5CE50F0", Offset = "0x5CE40F0", VA = "0x5CE50F0")]
	public static void GeneratePreviewWithPersistentCamera(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCamera): 22 lines keep C-only constructs
		HashSet<object> pSVar1;
		bool bVar2;
		bool bVar3;
		CharacterPreviewGenerator.PreviewCameraData cameraData;
		Texture2D texture;
		String pSVar4;
		String* ppSVar5;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo pMVar6;
		undefined7 in_register_00000081;
		long lVar7;
		bool local_79;
		String local_78;
		HashSet<string> local_70;
		int local_68;
		uint local_64;
		ulong local_60;
		HashSet<string>* local_58;
		HashSet<string>* local_50;
		String* local_48;
		GameObject local_40;
		Transform local_38;

		pMVar6 = (MethodInfo)CONCAT71(in_register_00000081, isHuman);
		local_78 = fileName;
		local_68 = size;
		local_40 = character;
		if (Il2CppMethodInitialized_07548298 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548298 = true;
		}
		local_70 = null;
		local_70 = CharacterPreviewGenerator._currentlyGenerating;
		local_79 = false;
		local_60 = 0;
		local_64 = SUB84(pMVar6, 0);
		local_58 = (HashSet<string>*)&local_79;
		local_50 = &local_70;
		local_38 = cameraParent;
		Monitor.Enter((object)local_70, ref local_79);
		pSVar1 = (HashSet<object>)CharacterPreviewGenerator._currentlyGenerating;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.Contains((object)local_78);
		if (bVar2) {
			lVar7 = 3;
			pMVar6 = extraout_RDX;
		}
		else {
			pSVar1 = (HashSet<object>)CharacterPreviewGenerator._currentlyGenerating;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar1.Add((object)local_78);
			lVar7 = 0;
			pMVar6 = extraout_RDX_00;
		}
		if (local_79 != false) {
			Monitor.Exit((object)local_70);
			pMVar6 = extraout_RDX_01;
		}
		if (lVar7 == 0) {
			local_60 = 0;
			local_48 = &local_78;
			local_58 = &local_70;
			local_50 = (HashSet<string>*)&local_79;
			if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
				pMVar6 = extraout_RDX_02;
			}
			cameraData = CharacterPreviewGenerator.GetOrCreatePersistentCamera(cameraId, local_38);
			bVar2 = SUB41(local_64, 0);
			texture = CharacterPreviewGenerator.CapturePreviewWithCamera(cameraData, local_40, local_68, bVar2);
			bVar3 = ((Object)texture == null);
			if (!bVar3) {
				if (local_78 == null) {
					throw new NullReferenceException();
				}
				pSVar4 = local_78.Replace("Preset", "");
				if (bVar2 == false) {
					ppSVar5 = &"Titans";
				}
				else {
					ppSVar5 = &"Human";
				}
				pSVar4 = String.Concat("CharacterPreview_", *ppSVar5, "_", pSVar4);
				ResourceManager.SetExternalTexture(pSVar4, texture, true);
				pSVar1 = (HashSet<object>)CharacterPreviewGenerator._generatedPreviewKeys;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar1.Add((object)pSVar4);
			}
			il2cpp_runtime_helper_02fdefe0(&local_60);
		}
		return;
	}

	[Token(Token = "0x600561A")]
	[Address(RVA = "0x5CE54F0", Offset = "0x5CE44F0", VA = "0x5CE54F0")]
	public static void SaveCachedPreviewsToDisk()
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$SaveCachedPreviewsToDisk): 8 lines keep C-only constructs
		HashSet<object> __this;
		object key;
		bool bVar1;
		Texture2D tex;
		String[] source;
		System_Collections_Generic_IEnumerable_TSource__o values;
		String pSVar2;
		String pSVar3;
		Byte[] bytes;
		System_Collections_Generic_HashSet_Enumerator_T__o local_78;
		byte[] local_58 = new byte[16];
		String local_48;
		String local_40;
		String local_38;

		local_78._set = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		pSVar3 = FolderPaths.CharacterPreviews;
		local_38 = Path.Combine(pSVar3, "Human");
		local_40 = Path.Combine(FolderPaths.CharacterPreviews, "Titans");
		__this = (HashSet<object>)CharacterPreviewGenerator._generatedPreviewKeys;
		if (__this == null) {
			throw new NullReferenceException();
		}
		local_58.GetEnumerator(__this);
		local_78._current = (object)local_48;
		local_78._set = (HashSet<T>)local_58._0_8_;
		local_78._index = local_58._8_4_;
		local_78._version = local_58._12_4_;
		local_58._0_8_ = null;
		local_58._8_8_ = &local_78;
		while(true) {
			do {
				bVar1 = local_78.MoveNext();
				key = local_78._current;
				if (!bVar1) {
					local_78.Dispose();
					CharacterPreviewGenerator.CleanupOrphanedPreviews();
					return;
				}
				tex = ResourceManager.GetExternalTexture((String)key);
				bVar1 = ((Object)tex != null);
			} while (!bVar1);
			if ((String)key == null) break;
			source = key.Split(0x5f, 0);
			if (source == null) {
				throw new NullReferenceException();
			}
			if (2 < (int)source.Length) {
				bVar1 = (source[1] == "Human");
				values = Enumerable.Skip<string>((System_Collections_Generic_IEnumerable_TSource__o)source, 2);
				pSVar2 = String.Join("_", (IEnumerable<string>)values);
				pSVar3 = local_40;
				if (bVar1) {
					pSVar3 = local_38;
				}
				Directory.CreateDirectory(pSVar3);
				pSVar2 = String.Concat("Preset", pSVar2, ".png");
				pSVar3 = Path.Combine(pSVar3, pSVar2);
				bytes = ImageConversion.EncodeToPNG(tex);
				File.WriteAllBytes(pSVar3, bytes);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600561B")]
	[Address(RVA = "0x5CE5A50", Offset = "0x5CE4A50", VA = "0x5CE5A50")]
	public static void ClearSessionGeneratedPreviews()
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$ClearSessionGeneratedPreviews): 4 lines keep C-only constructs
		uint uVar1;
		HashSet<object> pSVar2;
		String key;
		bool bVar3;
		Texture2D x;
		byte[] local_60 = new byte[16];
		String local_50;
		byte[] local_48 = new byte[16];
		String local_38;

		if (Il2CppMethodInitialized_0754829a == false) {
			Il2CppMethodInitialized_0754829a = true;
			uVar1 = (typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (HashSet<object>)CharacterPreviewGenerator._generatedPreviewKeys;
		}
		else {
			pSVar2 = *(HashSet<object>*)((long)(typeof(CharacterPreviewGenerator)).static_fields + 0x18);
		}
		if (pSVar2 != null) {
			local_60.GetEnumerator(pSVar2);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_48;
			while (true) {
				bVar3 = local_48.MoveNext();
				key = local_38;
				if (!(bVar3)) break;
				x = ResourceManager.GetExternalTexture(key);
				bVar3 = ((Object)x != null);
				if (bVar3) {
					Object.DestroyImmediate((Object)x);
				}
				ResourceManager.RemoveExternalTexture(key);
			}
			local_48.Dispose();
			pSVar2 = (HashSet<object>)CharacterPreviewGenerator._generatedPreviewKeys;
			if (pSVar2 != null) {
				pSVar2.Clear();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600561C")]
	[Address(RVA = "0x5CE5D10", Offset = "0x5CE4D10", VA = "0x5CE5D10")]
	public static void ClearNonPersistentPreviews()
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$ClearNonPersistentPreviews): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754829b == false) {
			Il2CppMethodInitialized_0754829b = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			ResourceManager.ClearNonPersistentTextures();
			return;
		}
		ResourceManager.ClearNonPersistentTextures();
		return;
	}

	[Token(Token = "0x600561D")]
	[Address(RVA = "0x5CE5D70", Offset = "0x5CE4D70", VA = "0x5CE5D70")]
	public static void GetCacheInfo(out int totalCached, out int persistent)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GetCacheInfo): clean
		int iVar1;

		iVar1 = ResourceManager.GetExternalTextureCacheCount();
		*totalCached = iVar1;
		iVar1 = ResourceManager.GetPersistentTextureCacheCount();
		*persistent = iVar1;
		return;
	}

	[Token(Token = "0x600561E")]
	[Address(RVA = "0x5CE5DD0", Offset = "0x5CE4DD0", VA = "0x5CE5DD0")]
	public static void CaptureCurrentCharacterPreview(bool isHuman = true)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$CaptureCurrentCharacterPreview): 5 lines keep C-only constructs
		byte bVar1;
		BaseGameManager x;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this;
		StringSetting pSVar3;
		Object x_00;
		TitanCustomSettings pSVar4;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_00;
		bool bVar5;
		BaseSetSetting pSVar6;
		GameObject character;
		String fileName;
		String cameraId;
		BaseGameManager pGVar7;

		x = SceneLoader.CurrentGameManager;
		if (x != null) {
			bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
			if (((x.klass._2).typeHierarchyDepth < bVar1) ||((x.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
				throw new InvalidCastException();
			}
		}
		bVar5 = ((Object)x == null);
		if (bVar5) {
			return;
		}
		if (isHuman) {
			if (x == null) goto label_05de6171;
			pGVar7 = (*(ulong)((sbyte)x + 0x28));
			bVar5 = ((Object)pGVar7 != null);
			if (!bVar5) {
				return;
			}
			pSVar2 = SettingsManager.HumanCustomSettings;
			if ((pSVar2 == null) ||(__this = pSVar2.CustomSets, __this == null )) goto label_05de6171;
			pSVar6 = __this.GetSelectedSet();
			if (pSVar6 != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
	label_05de615a: ;
					throw new InvalidCastException();
				}
				if ((*(ulong)((sbyte)x + 0x28)) != null) {
					character = ((*(ulong)((sbyte)x + 0x28))).gameObject;
					pSVar3 = pSVar6.UniqueId;
					if (pSVar3 != null) {
						fileName = String.Concat("Preset", pSVar3._value);
						bVar5 = true;
						cameraId = "HumanPreview";
	label_05de6141: ;
						CharacterPreviewGenerator.GeneratePreviewWithPersistentCamera(cameraId, character, fileName, 0x80, bVar5, null);
						return;
					}
				}
				goto label_05de6171;
			}
			pGVar7 = (*(ulong)((sbyte)x + 0x28));
		}
		else {
			if (x == null) goto label_05de6171;
			x_00 = (*(ulong)((sbyte)x + 0x30));
			bVar5 = (x_00 != null);
			if (!bVar5) {
				return;
			}
			pSVar4 = SettingsManager.TitanCustomSettings;
			if ((pSVar4 == null) ||(__this_00 = pSVar4.TitanCustomSets, __this_00 == null)) goto label_05de6171;
			pSVar6 = __this_00.GetSelectedSet();
			if (pSVar6 != null) {
				bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) goto label_05de615a;
				if ((*(ulong)((sbyte)x + 0x30)) != null) {
					character = ((*(ulong)((sbyte)x + 0x30))).gameObject;
					pSVar3 = pSVar6.UniqueId;
					if (pSVar3 != null) {
						fileName = String.Concat("Preset", pSVar3._value);
						bVar5 = false;
						cameraId = "TitanPreview";
						goto label_05de6141;
					}
				}
				goto label_05de6171;
			}
			pGVar7 = (*(ulong)((sbyte)x + 0x30));
		}
		if (pGVar7 != null) {
			pGVar7.gameObject;
			throw new NullReferenceException();
		}
	label_05de6171: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600561F")]
	[Address(RVA = "0x5CE6190", Offset = "0x5CE5190", VA = "0x5CE6190")]
	public static void InitializePreviewSystem()
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$InitializePreviewSystem): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754829e == false) {
			Il2CppMethodInitialized_0754829e = true;
			uVar1 = (typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor;
			klass = typeof(CharacterPreviewGenerator);
		}
		else {
			uVar1 = (typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor;
			klass = typeof(CharacterPreviewGenerator);
		}
		typeof(CharacterPreviewGenerator) = (CharacterPreviewGenerator)klass;
		if (uVar1 == 0) {
			CharacterPreviewGenerator.CleanupOrphanedPreviews();
			return;
		}
		CharacterPreviewGenerator.CleanupOrphanedPreviews();
		return;
	}

	[Token(Token = "0x6005620")]
	[Address(RVA = "0x5CE61F0", Offset = "0x5CE51F0", VA = "0x5CE61F0")]
	internal static void GeneratePreviewForHumanSet(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSet): 5 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o __this;
		HashSet<string> __this_00;
		IntSetting pSVar3;
		HumanSetup __this_01;
		StringSetting pSVar4;
		bool bVar5;
		HumanCustomSet customSet;
		CharacterPreviewGenerator.d__21<GeneratePreviewForHumanSetCoroutine> __this_02;
		GameObject character;
		String fileName;
		Transform cameraParent;
		int weapon;
		HumanCustomSet pSVar6;

		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 != null) &&(__this = pSVar2.CustomSets, __this != null)) {
			customSet = (HumanCustomSet)__this.GetSelectedSet();
			if (customSet != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((customSet.klass._2).typeHierarchyDepth < bVar1) ||((customSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
					pSVar6 = customSet;
					goto label_05de655d;
				}
			}
			pSVar6 = (HumanCustomSet)SceneLoader.CurrentGameManager;
			if (pSVar6 != null) {
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if (((((BaseGameManager)pSVar6.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pSVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
	label_05de655d: ;
					throw new InvalidCastException();
				}
				__this_00 = pSVar6.FoundSettings;
				weapon = 0;
				bVar5 = ((Object)humanMenu != null);
				if (bVar5) {
					if ((humanMenu == null) ||(pSVar3 = humanMenu.Weapon, pSVar3 == null)) goto label_05de6555;
					weapon = pSVar3._value;
				}
				if (isRebuild) {
					if ((__this_00 == null) ||(__this_01 = *(HumanSetup*)&__this_00._version, __this_01 == null)) goto label_05de6555;
					__this_01.Load(customSet, weapon, false);
					bVar5 = ((Object)humanMenu != null);
					if (bVar5) {
						__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__21<GeneratePreviewForHumanSetCoroutine>));
						__this_02 = new CharacterPreviewGenerator.d__21<GeneratePreviewForHumanSetCoroutine>(0);
						if (__this_02 !=null) {
							__this_02.humanMenu = humanMenu;
							__this_02.isRebuild = false;
							if (humanMenu != null) {
								humanMenu.StartCoroutine((IEnumerator)__this_02);
								return;
							}
						}
						goto label_05de6555;
					}
				}
				bVar5 = ((Object)humanMenu != null);
				if (!bVar5) {
					return;
				}
				if ((((__this_00 != null) &&(character = __this_00.gameObject, customSet != null)) &&(pSVar4 = customSet.UniqueId, pSVar4 != null)) &&(fileName = String.Concat("Preset", pSVar4._value), humanMenu != null)) {
					cameraParent = humanMenu.transform;
					CharacterPreviewGenerator.GeneratePreviewWithPersistentCamera("HumanPreview", character, fileName, 0x80, true, cameraParent);
					return;
				}
			}
		}
	label_05de6555: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005621")]
	[Address(RVA = "0x5CE6570", Offset = "0x5CE5570", VA = "0x5CE6570")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForHumanSetCoroutine_003Ed__21))]
	internal static IEnumerator GeneratePreviewForHumanSetCoroutine(CharacterEditorHumanMenu humanMenu, bool isRebuild = false)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSetCoroutine): 1 lines keep C-only constructs
		CharacterPreviewGenerator.d__21<GeneratePreviewForHumanSetCoroutine> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__21<GeneratePreviewForHumanSetCoroutine>));
		__this = new CharacterPreviewGenerator.d__21<GeneratePreviewForHumanSetCoroutine>(0);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.humanMenu = humanMenu;
		__this.isRebuild = isRebuild;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6005622")]
	[Address(RVA = "0x5CE65E0", Offset = "0x5CE55E0", VA = "0x5CE65E0")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewForTitanSetCoroutine_003Ed__22))]
	internal static IEnumerator GeneratePreviewForTitanSetCoroutine(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSetCoroutine): 1 lines keep C-only constructs
		CharacterPreviewGenerator.d__22<GeneratePreviewForTitanSetCoroutine> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__22<GeneratePreviewForTitanSetCoroutine>));
		__this = new CharacterPreviewGenerator.d__22<GeneratePreviewForTitanSetCoroutine>(0);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.titanMenu = titanMenu;
		__this.isRebuild = isRebuild;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6005623")]
	[Address(RVA = "0x5CE6650", Offset = "0x5CE5650", VA = "0x5CE6650")]
	public static void GeneratePreviewWithDebounce(MonoBehaviour coroutineRunner, string debounceKey, Action generateAction, float delaySeconds = 0.1f)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewWithDebounce): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Coroutine pUVar3;
		CharacterPreviewGenerator.d__24<DebouncedPreviewCoroutine> __this;

		if (Il2CppMethodInitialized_075482a2 == false) {
			Il2CppMethodInitialized_075482a2 = true;
			if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) goto label_05de66e7;
	label_05de6688: ;
			pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
		}
		else {
			if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor != 0) goto label_05de6688;
	label_05de66e7: ;
			pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
		}
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)debounceKey);
			if (bVar2) {
				pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
				if (pSVar1 == null) goto label_05de6894;
				pUVar3 = pSVar1.get_Item((object)debounceKey);
				if (pUVar3 != null) {
					pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
					if ((pSVar1 == null) ||(pUVar3 = pSVar1.get_Item((object)debounceKey), coroutineRunner == null)) goto label_05de6894;
					coroutineRunner.StopCoroutine(pUVar3);
				}
			}
			if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
				pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
			}
			else {
				pSVar1 = (Dictionary<object, object>)CharacterPreviewGenerator._activeDebounceCoroutines;
			}
			__this = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__24<DebouncedPreviewCoroutine>));
			__this = new CharacterPreviewGenerator.d__24<DebouncedPreviewCoroutine>(0);
			if (__this != null) {
				__this.debounceKey = debounceKey;
				__this.generateAction = generateAction;
				__this.delaySeconds = delaySeconds;
				if ((coroutineRunner != null) &&(pUVar3 = coroutineRunner.StartCoroutine((IEnumerator)__this), pSVar1 != null)) {
					pSVar1.set_Item((object)debounceKey, (object)pUVar3);
					return;
				}
			}
		}
	label_05de6894: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005624")]
	[Address(RVA = "0x5CE68A0", Offset = "0x5CE58A0", VA = "0x5CE68A0")]
	[IteratorStateMachine(typeof(_003CDebouncedPreviewCoroutine_003Ed__24))]
	private static IEnumerator DebouncedPreviewCoroutine(string debounceKey, Action generateAction, float delaySeconds)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$DebouncedPreviewCoroutine): 1 lines keep C-only constructs
		CharacterPreviewGenerator.d__24<DebouncedPreviewCoroutine> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__24<DebouncedPreviewCoroutine>));
		__this = new CharacterPreviewGenerator.d__24<DebouncedPreviewCoroutine>(0);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.debounceKey = debounceKey;
		__this.generateAction = generateAction;
		__this.delaySeconds = delaySeconds;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6005625")]
	[Address(RVA = "0x5CE6940", Offset = "0x5CE5940", VA = "0x5CE6940")]
	internal static void GeneratePreviewForTitanSet(CharacterEditorTitanMenu titanMenu, bool isRebuild = false)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSet): 4 lines keep C-only constructs
		byte bVar1;
		TitanCustomSettings pSVar2;
		Settings_SetSettingsContainer_TitanCustomSet__o __this;
		StringSetting pSVar3;
		bool bVar4;
		TitanCustomSet set;
		CharacterPreviewGenerator.d__22<GeneratePreviewForTitanSetCoroutine> __this_00;
		GameObject character;
		String fileName;
		Transform cameraParent;
		TitanCustomSet pSVar5;

		pSVar2 = SettingsManager.TitanCustomSettings;
		if ((pSVar2 != null) &&(__this = pSVar2.TitanCustomSets, __this != null)) {
			set = (TitanCustomSet)__this.GetSelectedSet();
			if (set != null) {
				bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
				if (((set.klass._2).typeHierarchyDepth < bVar1) ||((set.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(TitanCustomSet)) ) {
					pSVar5 = set;
					goto label_05de6c49;
				}
			}
			pSVar5 = (TitanCustomSet)SceneLoader.CurrentGameManager;
			if (pSVar5 != null) {
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if (((((BaseGameManager)pSVar5.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pSVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
	label_05de6c49: ;
					throw new InvalidCastException();
				}
				pSVar3 = pSVar5.Name;
				if (isRebuild) {
					if ((pSVar3 == null) ||((*(ulong)((sbyte)pSVar3 + 0x30)) == null)) goto label_05de6c41;
					((*(ulong)((sbyte)pSVar3 + 0x30))).Load(set);
					bVar4 = ((Object)titanMenu != null);
					if (bVar4) {
						__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__22<GeneratePreviewForTitanSetCoroutine>));
						__this_00 = new CharacterPreviewGenerator.d__22<GeneratePreviewForTitanSetCoroutine>(0);
						if (__this_00 !=null) {
							__this_00.titanMenu = titanMenu;
							__this_00.isRebuild = false;
							if (titanMenu != null) {
								titanMenu.StartCoroutine((IEnumerator)__this_00);
								return;
							}
						}
						goto label_05de6c41;
					}
				}
				bVar4 = ((Object)titanMenu != null);
				if (!bVar4) {
					return;
				}
				if ((((pSVar3 != null) &&(character = pSVar3.gameObject, set != null)) &&(pSVar3 = set.UniqueId, pSVar3 != null)) &&(fileName = String.Concat("Preset", pSVar3._value), titanMenu != null)) {
					cameraParent = titanMenu.transform;
					CharacterPreviewGenerator.GeneratePreviewWithPersistentCamera("TitanPreview", character, fileName, 0x80, false, cameraParent);
					return;
				}
			}
		}
	label_05de6c41: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005626")]
	[Address(RVA = "0x5CE6C50", Offset = "0x5CE5C50", VA = "0x5CE6C50")]
	[IteratorStateMachine(typeof(_003CGeneratePreviewWithPersistentCameraCoroutine_003Ed__26))]
	public static IEnumerator GeneratePreviewWithPersistentCameraCoroutine(string cameraId, GameObject character, string fileName, [Optional][DefaultParameterValue(128)] int size, [Optional][DefaultParameterValue(true)] bool isHuman, [Optional] Transform cameraParent)
	{
		// Lifted from source/cpp/Utility/CharacterPreviewGenerator.c (Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCameraCoroutine): 2 lines keep C-only constructs
		CharacterPreviewGenerator.d__26<GeneratePreviewWithPersistentCameraCoroutine> __this;

		if (Il2CppMethodInitialized_075482a5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CharacterPreviewGenerator.d__26<GeneratePreviewWithPersistentCameraCoroutine>)) ;
			Il2CppMethodInitialized_075482a5 = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterPreviewGenerator.d__26<GeneratePreviewWithPersistentCameraCoroutine>));
		__this = new CharacterPreviewGenerator.d__26<GeneratePreviewWithPersistentCameraCoroutine>(0);
		if (__this == null ) {
			throw new NullReferenceException();
		}
		__this.cameraId = cameraId;
		__this.character = character;
		__this.fileName = fileName;
		__this.size = size;
		__this.isHuman = isHuman;
		__this.cameraParent = cameraParent;
		return (IEnumerator)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/CharacterPreviewGenerator.c.

	// Utility.CharacterPreviewGenerator$$.cctor: 1 lines keep C-only constructs
	static CharacterPreviewGenerator()
	{
		Utility_CharacterPreviewGenerator_StaticFields pUVar1;
		HashSet<string> pSVar2;
		Dictionary<string, CharacterPreviewGenerator.PreviewCameraData> __this;
		Dictionary<string, Coroutine> __this_00;

		pSVar2 = new HashSet<string>();
		CharacterPreviewGenerator._currentlyGenerating = pSVar2;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CharacterPreviewGenerator.PreviewCameraData>));
		__this = new Dictionary<object, object>();
		pUVar1 = typeof(CharacterPreviewGenerator).static_fields;
		pUVar1._persistentCameras = __this;
		__this_00 = new Dictionary<string, Coroutine>();
		pUVar1 = typeof(CharacterPreviewGenerator).static_fields;
		pUVar1._activeDebounceCoroutines = __this_00;
		pSVar2 = new HashSet<string>();
		pUVar1 = typeof(CharacterPreviewGenerator).static_fields;
		pUVar1._generatedPreviewKeys = pSVar2;
		return;
	}
}
