// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.Routing;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI;

[Token(Token = "0x2000003")]
[ExecuteAlways]
public sealed class GisketchUIRoot : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x2000005")]
	[CompilerGenerated]
	private sealed class _003CRunScreenPrewarmQueue_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private string _003Cid_003E5__2;

		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator _003Cprewarm_003E5__3;

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000042")]
			[Address(RVA = "0x521DE70", Offset = "0x521CE70", VA = "0x521DE70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000044")]
			[Address(RVA = "0x521DEC0", Offset = "0x521CEC0", VA = "0x521DEC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x521A8D0", Offset = "0x52198D0", VA = "0x521A8D0")]
		[DebuggerHidden]
		public _003CRunScreenPrewarmQueue_003Ed__11(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x521D750", Offset = "0x521C750", VA = "0x521D750", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.IDisposable.Dispose): clean
			int iVar1;
			object obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 2) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = ((object)this._prewarm_5__3 as IDisposable);
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x521D820", Offset = "0x521C820", VA = "0x521D820", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$MoveNext): 7 lines keep C-only constructs
			int iVar1;
			GisketchUIRoot __this_00;
			GisketchManifestDefinition __this_01;
			HashSet<object> __this_02;
			GisketchScreenRouter pGVar4;
			List<string> pSVar5;
			GisketchUIRoot.d__11<RunScreenPrewarmQueue> pGVar6;
			GisketchUIRoot.d__11<RunScreenPrewarmQueue>* ppGVar7;
			bool bVar8;
			VirtualInvokeData pVVar9;
			GisketchScreenDefinition pGVar10;
			String pSVar11;
			GisketchUIRoot.d__12<WaitForScreenPrewarmIdle> __this_03;
			object pIVar12;
			int iVar14;
			GisketchUIRoot.d__11<RunScreenPrewarmQueue> pGStack_38;
			byte puStack_28;

			pGStack_38 = this;
			puStack_28 = (byte)&pGStack_38;
			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 0) {
				this.__1__state = -1;
				ppGVar7 = &pGStack_38;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
			}
			else {
				if (iVar1 == 1) {
					this.__1__state = -1;
					if (__this_00 == null) {
						puStack_28 = (byte)&pGStack_38;
						throw new NullReferenceException();
					}
					pSVar11 = this._id_5__2;
					puStack_28 = (byte)&pGStack_38;
					bVar8 = String.IsNullOrEmpty(pSVar11);
					ppGVar7 = (GisketchUIRoot.d__11<RunScreenPrewarmQueue>*)puStack_28;
					if ((((bVar8) ||(bVar8 = __this_00.CanWaitForScreenPrewarm(), ppGVar7 = (GisketchUIRoot.d__11<RunScreenPrewarmQueue>*)puStack_28, !bVar8)) || (__this_01 = __this_00._Manifest_k__BackingField, __this_01 == null)) ||(((pGVar10 = __this_01.FindScreen(pSVar11), ppGVar7 = (GisketchUIRoot.d__11<RunScreenPrewarmQueue>*)puStack_28, pGVar10 == null ||(pGVar4 = __this_00._Screens_k__BackingField, pGVar4 == null)) ||(bVar8 = String.Equals(pGVar4._activeId, pSVar11, 5), ppGVar7 = (GisketchUIRoot.d__11<RunScreenPrewarmQueue>*)puStack_28, bVar8)))) goto label_0531dbcc;
					pGVar4 = __this_00._Screens_k__BackingField;
					if (pGVar4 == null) {
						throw new NullReferenceException();
					}
					method = (MethodInfo)pGVar4.PrewarmScreen(pGStack_38._id_5__2, __this_00._screenPrewarmKeepAliveFrames);
					pGStack_38._prewarm_5__3 = (IEnumerator)method;
					pGStack_38.__1__state = -3;
				}
				else {
					if (iVar1 != 2) {
						return false;
					}
					this.__1__state = -3;
					puStack_28 = (byte)&pGStack_38;
					if (__this_00 == null) {
						puStack_28 = (byte)&pGStack_38;
						throw new NullReferenceException();
					}
				}
				bVar8 = __this_00.CanContinueScreenPrewarm();
				if (bVar8) {
					pIVar12 = (object)pGStack_38._prewarm_5__3;
					if (pIVar12 == null) {
						throw new NullReferenceException();
					}
					method = pVVar9.method;
					bVar8 = pIVar12.Dispose();
					if (bVar8) {
						pIVar12 = (object)pGStack_38._prewarm_5__3;
						if (pIVar12 == null) {
							throw new NullReferenceException();
						}
						pIVar12 = pIVar12.Dispose();
						pGStack_38.__2__current = pIVar12;
						iVar14 = 2;
						goto label_0531dc91;
					}
				}
				bVar8 = __this_00.CanContinueScreenPrewarm();
				pGVar6 = pGStack_38;
				pGVar6.__1__state = -1;
				pIVar12 = ((object)pGVar6._prewarm_5__3 as IDisposable);
				if (pIVar12 != null) {
					pIVar12.Dispose();
				}
				if (bVar8) {
					__this_02 = (HashSet<object>)__this_00._screenPrewarmed;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_02.Add((object)pGStack_38._id_5__2);
				}
				else {
					pGVar4 = __this_00._Screens_k__BackingField;
					if (pGVar4 != null) {
						pGVar4.CancelPrewarm("input");
					}
				}
				pGStack_38._id_5__2 = null;
				pGStack_38._prewarm_5__3 = null;
				ppGVar7 = (GisketchUIRoot.d__11<RunScreenPrewarmQueue>*)puStack_28;
			}
		label_0531dbcc: ;
			puStack_28 = (byte)ppGVar7;
			pSVar5 = __this_00._screenPrewarmQueue;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			if (pSVar5._size < 1) {
				__this_00._screenPrewarmRoutine = null;
				return false;
			}
			pSVar11 = pSVar5.get_Item(0);
			pGStack_38._id_5__2 = pSVar11;
			pSVar5 = __this_00._screenPrewarmQueue;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			pSVar5.RemoveAt(0);
			__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIRoot.d__12<WaitForScreenPrewarmIdle>));
			__this_03 = new Object();
			__this_03.__1__state = 0;
			__this_03.__4__this = __this_00;
			pGStack_38.__2__current = (object)__this_03;
			iVar14 = 1;
		label_0531dc91: ;
			pGStack_38.__1__state = iVar14;
			return true;
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x521DDB0", Offset = "0x521CDB0", VA = "0x521DDB0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = ((object)this._prewarm_5__3 as IDisposable);
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x521DE80", Offset = "0x521CE80", VA = "0x521DE80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11_System_Collections_IEnumerator_Rese);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000006")]
	[CompilerGenerated]
	private sealed class _003CWaitForScreenPrewarmIdle_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000028")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private float _003CidleSeconds_003E5__2;

		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private float _003Ctarget_003E5__3;

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000048")]
			[Address(RVA = "0x521E000", Offset = "0x521D000", VA = "0x521E000", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700000C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600004A")]
			[Address(RVA = "0x521E050", Offset = "0x521D050", VA = "0x521E050", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x521A960", Offset = "0x5219960", VA = "0x521A960")]
		[DebuggerHidden]
		public _003CWaitForScreenPrewarmIdle_003Ed__12(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x521DED0", Offset = "0x521CED0", VA = "0x521DED0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000047")]
		[Address(RVA = "0x521DEE0", Offset = "0x521CEE0", VA = "0x521DEE0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$MoveNext): clean
			int iVar1;
			GisketchUIRoot __this_00;
			bool bVar2;
			float fVar3;
			Vector2 UVar4;
			float fVar5;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (this._target_5__3 <= this._idleSeconds_5__2) {
					return false;
				}
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._idleSeconds_5__2 = 0.0;
				if (__this_00 == null) goto label_0531dff3;
				fVar3 = __this_00._screenPrewarmIdleDelay;
				fVar5 = 0.0;
				if (0.0 <= fVar3) {
					fVar5 = fVar3;
				}
				this._target_5__3 = fVar5;
				if (fVar5 <= 0.0) {
					return false;
				}
			}
			if (__this_00 != null) {
				bVar2 = __this_00.CanWaitForScreenPrewarm();
				fVar3 = 0.0;
				if (bVar2) {
					bVar2 = Input.anyKeyDown;
					if (((bVar2) || (bVar2 = Input.GetMouseButtonDown(0))) ||(bVar2 = Input.GetMouseButtonDown(1))) {
						fVar3 = 0.0;
					}
					else {
						bVar2 = Input.GetMouseButtonDown(2);
						fVar3 = 0.0;
						if (!bVar2) {
							UVar4 = Input.mouseScrollDelta;
							fVar3 = 0.0;
							if (UVar4.y * UVar4.y + UVar4.x * UVar4.x <= 0.0) {
								fVar5 = this._idleSeconds_5__2;
								fVar3 = Time.unscaledDeltaTime;
								fVar3 = fVar3 + fVar5;
							}
						}
					}
				}
				this._idleSeconds_5__2 = fVar3;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
		label_0531dff3: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x521E010", Offset = "0x521D010", VA = "0x521E010", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12_System_Collections_IEnumerator_R);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float _screenPrewarmIdleDelay;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	[SerializeField]
	private int _screenPrewarmKeepAliveFrames;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<string> _screenPrewarmQueue;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly HashSet<string> _screenPrewarmed;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Coroutine _screenPrewarmRoutine;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	private AottgUiScalePreset _scalePreset;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float _scale;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	private string _selectedScreenId;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private TextAsset _themeJson;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private bool _buildOnStart;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	[SerializeField]
	private bool _previewInEditor;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	[SerializeField]
	private bool _createEventSystem;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5B")]
	[SerializeField]
	private bool _motionEnabled;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private float _motionScale;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	private MonoBehaviour _actionHandler;

	[Token(Token = "0x4000010")]
	private const int OverlaySortingOrder = 900;

	[Token(Token = "0x4000011")]
	private const int ToastSortingOrder = 1000;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject _eventSystemObject;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IGisketchActionHandler _customActions;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _suppressNextBuildMotion;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	private bool _preserveStateOnBuild;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8A")]
	private bool _runtimeBuilt;

	[Token(Token = "0x17000001")]
	public AottgUiScalePreset ScalePreset
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x521AF40", Offset = "0x5219F40", VA = "0x521AF40")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_ScalePreset): clean
			return this._scalePreset;
		}
	}

	[Token(Token = "0x17000002")]
	public float Scale
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x521AF50", Offset = "0x5219F50", VA = "0x521AF50")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_Scale): clean
			uint uVar1;
			float fVar2;
			float fVar3;

			fVar3 = this._scale;
			if (Il2CppMethodInitialized_075427c6 == false) {
				Il2CppMethodInitialized_075427c6 = true;
				uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgUiScale))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar2 = 1.5;
			if (fVar3 <= 1.5) {
				fVar2 = fVar3;
			}
			fVar2 = (float)(-(uint)(0.5 <= fVar3) & (uint)(fVar2 + -0.5));
			fVar3 = 1.0;
			if (fVar2 <= 1.0) {
				fVar3 = fVar2;
			}
			fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
			fVar2 = 0.0;
			if (0.0 <= fVar3) {
				fVar2 = fVar3;
			}
			return fVar2 * 0.40000004 + 0.8;
		}
	}

	[Token(Token = "0x17000003")]
	public GisketchUIState State
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x521B4F0", Offset = "0x521A4F0", VA = "0x521B4F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_State): clean
			return this._State_k__BackingField;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x521B500", Offset = "0x521A500", VA = "0x521B500")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$set_State): clean
			this._State_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000004")]
	public GisketchManifestDefinition Manifest
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x521B520", Offset = "0x521A520", VA = "0x521B520")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_Manifest): clean
			return this._Manifest_k__BackingField;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x521B530", Offset = "0x521A530", VA = "0x521B530")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$set_Manifest): clean
			this._Manifest_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000005")]
	public GisketchTheme Theme
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x521B550", Offset = "0x521A550", VA = "0x521B550")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_Theme): clean
			return this._Theme_k__BackingField;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x521B560", Offset = "0x521A560", VA = "0x521B560")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$set_Theme): clean
			this._Theme_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000006")]
	public GisketchScreenRouter Screens
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x521B580", Offset = "0x521A580", VA = "0x521B580")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_Screens): clean
			return this._Screens_k__BackingField;
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x521B590", Offset = "0x521A590", VA = "0x521B590")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$set_Screens): clean
			this._Screens_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000007")]
	public GisketchOverlayManager Overlays
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x521B5B0", Offset = "0x521A5B0", VA = "0x521B5B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_Overlays): clean
			return this._Overlays_k__BackingField;
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x521B5C0", Offset = "0x521A5C0", VA = "0x521B5C0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$set_Overlays): clean
			this._Overlays_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000008")]
	public GisketchToastManager Toasts
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x521B5E0", Offset = "0x521A5E0", VA = "0x521B5E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$get_Toasts): clean
			return this._Toasts_k__BackingField;
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x521B5F0", Offset = "0x521A5F0", VA = "0x521B5F0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$set_Toasts): clean
			this._Toasts_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5219E90", Offset = "0x5218E90", VA = "0x5219E90")]
	private void UpdateFocusInput()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$UpdateFocusInput): 5 lines keep C-only constructs
		GisketchOverlayManager pGVar1;
		Object x;
		bool bVar2;
		ulong in_RAX;
		Selectable x_00;
		EventSystem pUVar3;
		byte backwards;
		MethodInfo pMVar4;
		GameObject root;
		ulong uStack_28;

		uStack_28 = in_RAX;
		uStack_28 = uStack_28 & 0xffffffffffffff;
		if ((typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = GisketchInputCapture.BlocksUiInput;
			if (bVar2) goto label_05319ef1;
		}
		else {
			bVar2 = GisketchInputCapture.BlocksUiInput;
			if (bVar2) {
	label_05319ef1: ;
				GisketchFocusInputMode.PollPointerOnly();
				return;
			}
		}
		pMVar4 = (MethodInfo)((long)&uStack_28 + 7);
		bVar2 = GisketchFocusInputMode.TakeTab((bool)pMVar4);
		if (bVar2) {
			pGVar1 = this._Overlays_k__BackingField;
			if (pGVar1 != null) {
				bVar2 = pGVar1.CycleFocus((bool)uStack_28._7_1_);
				if (bVar2) {
					return;
				}
			}
			root = this._canvasObject;
			backwards = uStack_28._7_1_;
		}
		else {
			x_00 = GisketchUIRoot.SelectedInput();
			pMVar4 = null;
			bVar2 = ((Object)x_00 != null);
			if (bVar2) {
				GisketchFocusInputMode.PollPointerOnly();
				return;
			}
			bVar2 = GisketchFocusInputMode.Poll();
			if (GisketchFocusInputMode._Mode_k__BackingField == 0) {
				this.ClearPointerSelection();
				return;
			}
			if (!bVar2) {
				return;
			}
			pGVar1 = this._Overlays_k__BackingField;
			if (pGVar1 != null) {
				pGVar1.FocusTopFromNavigation();
			}
			pUVar3 = EventSystem.current;
			bVar2 = ((Object)pUVar3 != null);
			if (!bVar2) {
				return;
			}
			pUVar3 = EventSystem.current;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			x = (Object)pUVar3.m_CurrentSelected;
			bVar2 = (x == null);
			if (!bVar2) {
				return;
			}
			root = this._canvasObject;
			backwards = false;
		}
		GisketchFocusNavigation.Cycle(root, (bool)backwards);
		return;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x521A1F0", Offset = "0x52191F0", VA = "0x521A1F0")]
	private void ClearPointerSelection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$ClearPointerSelection): clean
		bool bVar1;
		EventSystem pUVar2;
		MethodInfo x;

		pUVar2 = EventSystem.current;
		x = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) goto label_0531a30f;
			x = (MethodInfo)pUVar2.m_CurrentSelected;
		}
		bVar1 = ((Object)x != null);
		if (bVar1) {
			bVar1 = this.IsInsideGisketchCanvas((GameObject)x);
			if (bVar1) {
				bVar1 = GisketchUIRoot.IsInput((GameObject)x);
				if (!bVar1) {
					pUVar2 = EventSystem.current;
					if (pUVar2 != null) {
						pUVar2.SetSelectedGameObject(null);
						return;
					}
	label_0531a30f: ;
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x521A0A0", Offset = "0x52190A0", VA = "0x521A0A0")]
	private static Selectable SelectedInput()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$SelectedInput): 1 lines keep C-only constructs
		bool bVar1;
		EventSystem pUVar2;
		TMP_InputField x;
		InputField pUVar3;
		Object x_00;

		if (Il2CppMethodInitialized_075427a3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_075427a3 = true;
		}
		pUVar2 = EventSystem.current;
		x_00 = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) goto label_0531a1e6;
			x_00 = (Object)pUVar2.m_CurrentSelected;
		}
		x = null;
		bVar1 = (x_00 == null);
		if (!bVar1) {
			if (x_00 == null) {
	label_0531a1e6: ;
				throw new NullReferenceException();
			}
			x = x_00.GetComponent<TMP_InputField>();
			bVar1 = ((Object)x != null);
			if (!bVar1) {
				pUVar3 = x_00.GetComponent<InputField>();
				return (Selectable)pUVar3;
			}
		}
		return (Selectable)x;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x521A320", Offset = "0x5219320", VA = "0x521A320")]
	private bool IsInsideGisketchCanvas(GameObject selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$IsInsideGisketchCanvas): clean
		Object x;
		GameObject __this_00;
		bool bVar1;
		Transform __this_01;
		Transform parent;

		x = (Object)this._canvasObject;
		bVar1 = (x != null);
		if (bVar1) {
			bVar1 = ((Object)selected != null);
			if (bVar1) {
				if (selected != null) {
					__this_01 = selected.transform;
					__this_00 = this._canvasObject;
					if (__this_00 != null) {
						parent = __this_00.transform;
						if (__this_01 != null) {
							bVar1 = __this_01.IsChildOf(parent);
							return bVar1;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x521A3F0", Offset = "0x52193F0", VA = "0x521A3F0")]
	private static bool IsInput(GameObject selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$IsInput): 1 lines keep C-only constructs
		bool bVar1;
		TMP_InputField x;
		InputField x_00;

		if (Il2CppMethodInitialized_075427a5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_075427a5 = true;
		}
		if (selected == null) {
			throw new NullReferenceException();
		}
		x = selected.GetComponent<TMP_InputField>() ;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			return true;
		}
		x_00 = selected.GetComponent<InputField>();
		bVar1 = ((Object)x_00 != null);
		return bVar1;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x521A4C0", Offset = "0x52194C0", VA = "0x521A4C0")]
	public void QueueScreenPrewarm(params string[] screenIds)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$QueueScreenPrewarm): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		String value;
		HashSet<object> __this_00;
		String[] pSVar4;
		bool bVar6;
		ulong uVar7;
		String a;
		GisketchUIRoot.d__11<RunScreenPrewarmQueue> __this_01;
		Coroutine pUVar8;
		int index;
		List<string> pSVar9;
		ulong uVar10;

		if (Il2CppMethodInitialized_075427a6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075427a6 = true;
			uVar2 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar6 = Application.isPlaying;
		}
		else {
			bVar6 = Application.isPlaying;
		}
		if ((bVar6) && (screenIds != null)) {
			if (0 < (int)screenIds.Length) {
				uVar7 = screenIds.Length & 0xffffffff;
				uVar10 = 0;
				do {
					if (uVar7 <= uVar10) {
						throw new IndexOutOfRangeException();
					}
					value = screenIds[uVar10];
					bVar6 = String.IsNullOrEmpty(value);
					if (!bVar6) {
						__this_00 = (HashSet<object>)this._screenPrewarmed;
						if (__this_00 == null) goto label_0531a7ad;
						bVar6 = __this_00.Contains((object)value);
						if (!bVar6) {
							pSVar9 = this._screenPrewarmQueue;
							if (pSVar9 == null) goto label_0531a7ad;
							index = 0;
							while(true) {
								uVar3 = pSVar9._size;
								if ((int)uVar3 <= index) break;
								a = pSVar9.get_Item(index) ;
								bVar6 = String.Equals(a, value, 5);
								if (bVar6) goto label_0531a5b0;
								index = index + 1;
								pSVar9 = this._screenPrewarmQueue;
								if (pSVar9 == null) goto label_0531a7ad;
							}
							piVar1 = &pSVar9._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = pSVar9._items;
							if (pSVar4 == null) goto label_0531a7ad;
							if (uVar3 < (uint)pSVar4.Length) {
								pSVar9._size = uVar3 + 1;
								pSVar4[(int)uVar3] = value;
								uVar2 = (typeof(GisketchUiPerfLog)._2). cctor_finished_or_no_cctor;
							}
							else {
								pSVar9.AddWithResize((object)value);
								uVar2 = (typeof(GisketchUiPerfLog)._2). cctor_finished_or_no_cctor;
							}
							if (uVar2 == 0) {
							}
							GisketchUiPerfLog.Mark("ScreenPrewarm.Queue", value);
						}
					}
	label_0531a5b0: ;
					uVar10 = uVar10 + 1;
					uVar3 = (uint)screenIds.Length;
					uVar7 = (ulong)uVar3;
				} while ((long)uVar10 < (long)(int)uVar3);
			}
			pSVar9 = this._screenPrewarmQueue;
			if (pSVar9 == null) {
	label_0531a7ad: ;
				throw new NullReferenceException();
			}
			if ((0 < pSVar9._size) &&(this._screenPrewarmRoutine == null)) {
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIRoot.d__11<RunScreenPrewarmQueue>));
				__this_01 = new Object();
				__this_01.__1__state = 0;
				__this_01.__4__this = this;
				pUVar8 = this.StartCoroutine((IEnumerator)__this_01);
				this._screenPrewarmRoutine = pUVar8;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x521A860", Offset = "0x5219860", VA = "0x521A860")]
	[IteratorStateMachine(typeof(_003CRunScreenPrewarmQueue_003Ed__11))]
	private IEnumerator RunScreenPrewarmQueue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$RunScreenPrewarmQueue): 1 lines keep C-only constructs
		GisketchUIRoot.d__11<RunScreenPrewarmQueue> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchUIRoot.d__11<RunScreenPrewarmQueue>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x521A8F0", Offset = "0x52198F0", VA = "0x521A8F0")]
	[IteratorStateMachine(typeof(_003CWaitForScreenPrewarmIdle_003Ed__12))]
	private IEnumerator WaitForScreenPrewarmIdle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$WaitForScreenPrewarmIdle): 1 lines keep C-only constructs
		GisketchUIRoot.d__12<WaitForScreenPrewarmIdle> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchUIRoot.d__12<WaitForScreenPrewarmIdle>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x521A980", Offset = "0x5219980", VA = "0x521A980")]
	private bool CanStartScreenPrewarm(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$CanStartScreenPrewarm): clean
		GisketchManifestDefinition __this_00;
		GisketchScreenRouter pGVar1;
		bool bVar2;
		GisketchScreenDefinition pGVar3;

		bVar2 = String.IsNullOrEmpty(id);
		if (bVar2) {
			return false;
		}
		bVar2 = this.CanWaitForScreenPrewarm();
		if (bVar2) {
			__this_00 = this._Manifest_k__BackingField;
			if (__this_00 == null) {
				return false;
			}
			pGVar3 = __this_00.FindScreen(id);
			if (pGVar3 == null) {
				return false;
			}
			pGVar1 = this._Screens_k__BackingField;
			if (pGVar1 != null) {
				bVar2 = String.Equals(pGVar1._activeId, id, 5);
				return !bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x521A7C0", Offset = "0x52197C0", VA = "0x521A7C0")]
	private bool IsScreenPrewarmQueued(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$IsScreenPrewarmQueued): clean
		int iVar1;
		bool bVar2;
		String a;
		int index;
		List<string> __this_00;

		__this_00 = this._screenPrewarmQueue;
		if (__this_00 != null) {
			index = 0;
			do {
				iVar1 = __this_00._size;
				if (iVar1 <= index) {
	label_0531a848: ;
					return index < iVar1;
				}
				a = __this_00.get_Item(index);
				bVar2 = String.Equals(a, id, 5);
				if (bVar2) goto label_0531a848;
				index = index + 1;
				__this_00 = this._screenPrewarmQueue;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x521AA00", Offset = "0x5219A00", VA = "0x521AA00")]
	private bool CanWaitForScreenPrewarm()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$CanWaitForScreenPrewarm): clean
		GisketchScreenRouter pGVar1;
		GisketchOverlayManager __this_00;
		bool bVar2;
		bool bVar3;

		bVar3 = false;
		bVar2 = Application.isPlaying;
		if (bVar2) {
			bVar3 = false;
			bVar2 = this.isActiveAndEnabled ;
			if (bVar2) {
				pGVar1 = this._Screens_k__BackingField;
				bVar3 = false;
				if (pGVar1 != null) {
					bVar2 = pGVar1.IsTransitioning;
					if (!bVar2) {
						pGVar1 = this._Screens_k__BackingField;
						if (pGVar1 == null) {
							throw new NullReferenceException();
						}
						bVar3 = false;
						bVar2 = pGVar1.IsPrewarming;
						if (!bVar2) {
							if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							bVar2 = GisketchMotionDriver.HasActive;
							if (bVar2) {
								bVar3 = false;
							}
							else {
								__this_00 = this._Overlays_k__BackingField;
								if (__this_00 == null) {
									bVar3 = true;
								}
								else {
									bVar3 = __this_00.HasOpenOverlays;
									bVar3 = !bVar3;
								}
							}
						}
					}
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x521ACF0", Offset = "0x5219CF0", VA = "0x521ACF0")]
	private bool CanContinueScreenPrewarm()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$CanContinueScreenPrewarm): clean
		GisketchScreenRouter __this_00;
		GisketchOverlayManager __this_01;
		bool bVar1;
		bool bVar2;
		Vector2 UVar3;

		bVar2 = false;
		bVar1 = Application.isPlaying;
		if (bVar1) {
			bVar2 = false;
			bVar1 = this.isActiveAndEnabled ;
			if (bVar1) {
				__this_00 = this._Screens_k__BackingField;
				bVar2 = false;
				if (__this_00 != null) {
					bVar1 = __this_00.IsTransitioning;
					if (!bVar1) {
						bVar2 = false;
						bVar1 = Input.anyKeyDown;
						if (!bVar1) {
							bVar2 = false;
							bVar1 = Input.GetMouseButtonDown(0);
							if (!bVar1) {
								bVar2 = false;
								bVar1 = Input.GetMouseButtonDown(1);
								if (!bVar1) {
									bVar2 = false;
									bVar1 = Input.GetMouseButtonDown(2);
									if (!bVar1) {
										bVar2 = false;
										UVar3 = Input.mouseScrollDelta;
										if (UVar3.y * UVar3.y + UVar3.x * UVar3.x <= 0.0) {
											__this_01 = this._Overlays_k__BackingField;
											if (__this_01 == null) {
												bVar2 = true;
											}
											else {
												bVar2 = __this_01.HasOpenOverlays;
												bVar2 = !bVar2;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x521AE00", Offset = "0x5219E00", VA = "0x521AE00")]
	private static bool ScreenPrewarmInput()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$ScreenPrewarmInput): clean
		bool bVar1;
		bool bVar2;
		Vector2 UVar3;

		bVar1 = Input.anyKeyDown;
		if (!bVar1) {
			bVar1 = Input.GetMouseButtonDown(0);
			if (!bVar1) {
				bVar1 = Input.GetMouseButtonDown(1);
				if (!bVar1) {
					bVar1 = Input.GetMouseButtonDown(2);
					if (!bVar1) {
						UVar3 = Input.mouseScrollDelta;
						bVar2 = 0.0 < UVar3.y * UVar3.y + UVar3.x * UVar3.x;
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x521AE60", Offset = "0x5219E60", VA = "0x521AE60")]
	private void CancelScreenPrewarm(bool clearQueue)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$CancelScreenPrewarm): 4 lines keep C-only constructs
		Coroutine* targetAddress;
		int piVar1;
		int length;
		Coroutine routine;
		List<string> pSVar2;
		HashSet<object> __this_00;
		GisketchScreenRouter __this_01;

		targetAddress = &this._screenPrewarmRoutine;
		routine = this._screenPrewarmRoutine;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		*targetAddress = null;
		if (clearQueue) {
			pSVar2 = this._screenPrewarmQueue;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				__this_00 = (HashSet<object>)this._screenPrewarmed;
				if (__this_00 != null) {
					__this_00.Clear() ;
					goto label_0531af0b;
				}
			}
			throw new NullReferenceException();
		}
	label_0531af0b: ;
		__this_01 = this._Screens_k__BackingField;
		if (__this_01 == null) {
			return;
		}
		__this_01.CancelPrewarm("root cancel");
		return;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x521B0E0", Offset = "0x521A0E0", VA = "0x521B0E0")]
	public void SetScale(AottgUiScalePreset preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$SetScale): 1 lines keep C-only constructs
		float scale;

		this._scalePreset = preset;
		if ((uint)preset < 5) {
			scale = *(float)(&g_data_01010910 + (long)preset * 4);
		}
		else {
			scale = 1.0;
		}
		this.SetScale(scale);
		return;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x521B170", Offset = "0x521A170", VA = "0x521B170")]
	public void SetScale(float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$SetScale): clean
		Object x;
		GameObject root;
		bool bVar1;
		float fVar2;

		if ((typeof(AottgUiScale)._2).cctor_finished_or_no_cctor == 0) {
		}
		fVar2 = 1.5;
		if (scale <= 1.5) {
			fVar2 = scale;
		}
		this._scale = (float)(~-(uint)(0.5 <= scale) & 0x3f000000 | (uint)fVar2 & -(uint)(0.5 <= scale)) ;
		this.ApplyScale(null);
		x = (Object)this._canvasObject;
		bVar1 = (x != null);
		if (bVar1) {
			root = this._canvasObject;
			GisketchScreenBuilder.SettleLayout(root, 0);
			return;
		}
		return;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x521B2A0", Offset = "0x521A2A0", VA = "0x521B2A0")]
	internal void ApplyScale([Optional] CanvasScaler scaler)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$ApplyScale): clean
		float scale;
		Object x;
		GameObject __this_00;
		bool bVar1;
		Vector2 value;

		bVar1 = ((Object)scaler == null);
		if (bVar1) {
			x = (Object)this._canvasObject;
			scaler = null;
			bVar1 = (x != null);
			if (bVar1) {
				__this_00 = this._canvasObject;
				if (__this_00 == null) goto label_0531b3c9;
				scaler = __this_00.GetComponent<CanvasScaler>();
			}
		}
		bVar1 = ((Object)scaler != null);
		if (!bVar1) {
			return;
		}
		scale = this._scale;
		value = AottgUiScale.ReferenceResolution(scale);
		if (scaler != null) {
			scaler.referenceResolution = value;
			return;
		}
	label_0531b3c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x521B610", Offset = "0x521A610", VA = "0x521B610")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$Start): clean
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_075427b1 == false) {
			Il2CppMethodInitialized_075427b1 = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = Application.isPlaying;
		}
		else {
			bVar2 = Application.isPlaying;
		}
		if (((bVar2) && (this._buildOnStart != false)) && (this._runtimeBuilt == false)) {
			this.Build();
			return;
		}
		return;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x521BD10", Offset = "0x521AD10", VA = "0x521BD10")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$Update): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		GisketchOverlayManager __this_00;
		GisketchScreenRouter __this_01;
		bool bVar3;
		int iVar4;

		if (Il2CppMethodInitialized_075427b2 == false) {
			Il2CppMethodInitialized_075427b2 = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar3 = Application.isPlaying;
		}
		else {
			bVar3 = Application.isPlaying;
		}
		if (!bVar3) {
			return;
		}
		this.UpdateFocusInput();
		if ((typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = GisketchInputCapture.BlocksUiInput;
			if (bVar3) {
				return;
			}
		}
		else {
			bVar3 = GisketchInputCapture.BlocksUiInput;
			if (bVar3) {
				return;
			}
		}
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		bVar3 = Input.GetKeyDown(0x1b);
		if (bVar3) {
			if (Il2CppMethodInitialized_07542833 == false) {
				Il2CppMethodInitialized_07542833 = true;
				uVar1 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(GisketchMotionDriver))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			iVar2 = GisketchMotionDriver._lastSkipFrame;
			iVar4 = Time.frameCount;
			if (iVar2 != iVar4) {
				bVar3 = GisketchMotionDriver.CompleteActiveForSkip();
				if ((!bVar3) &&(((__this_00 = this._Overlays_k__BackingField, __this_00 != null &&(bVar3 = __this_00.CloseTop(true))) ||((__this_01 = this._Screens_k__BackingField, __this_01 != null &&(bVar3 = __this_01.Back())) )))) {
					GisketchInputCapture.BlockThisFrame();
					GisketchUiSounds.Play(1);
					return;
				}
			}
			return;
		}
		return;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x521B690", Offset = "0x521A690", VA = "0x521B690")]
	public void Build()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$Build): 6 lines keep C-only constructs
		float fVar1;
		bool bVar2;
		MonoBehaviour obj;
		GisketchThemeDefinition definition;
		Object x;
		TextAsset __this_00;
		GisketchScreenDefinition[] pGVar4;
		bool bVar5;
		GisketchUIRoot.c__DisplayClass71_0 __this_01;
		AottgActionRegistry __this_02;
		AottgCodeCatalog pGVar6;
		GisketchManifestDefinition manifest;
		object pIVar7;
		GisketchUIState pGVar8;
		RectTransform parent;
		Transform screenLayer;
		Transform layer;
		Transform layer_00;
		GisketchTheme theme;
		String json;
		IGisketchLocalizer localizer;
		Func<string, GisketchOverlayDefinition> __this_03;
		GisketchBuildContext __this_04;
		GisketchScreenRouter pGVar9;
		GisketchOverlayManager __this_05;
		GisketchToastManager __this_06;
		GisketchScreenDefinition pGVar10;
		byte bVar11;
		MethodInfo method_07;
		float fVar12;

		if (Il2CppMethodInitialized_075427b3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIRoot.c__DisplayClass71_0)) ;
			Il2CppMethodInitialized_075427b3 = true;
		}
		__this_01 = new GisketchUIRoot.c__DisplayClass71_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			bVar2 = this._suppressNextBuildMotion;
			this._suppressNextBuildMotion = false;
			if (this._preserveStateOnBuild == false) {
				method_07 = null;
			}
			else {
				method_07 = (MethodInfo)this._State_k__BackingField;
			}
			this._preserveStateOnBuild = false;
			this.Clear(false);
			__this_02 = new AottgActionRegistry();
			this._codeActions = __this_02;
			pGVar6 = AottgCodeCatalog.Discover();
			__this_01.catalog = pGVar6;
			manifest = this.LoadCodeManifest(__this_01.catalog);
			if (manifest == null) {
				return;
			}
			this._Manifest_k__BackingField = manifest;
			bVar11 = bVar2 ^ 1;
			if (this._motionEnabled == false) {
				bVar11 = false;
			}
			GisketchMotion.Enabled = (bool)bVar11;
			fVar1 = this._motionScale;
			fVar12 = 0.0;
			if (0.0 <= fVar1) {
				fVar12 = fVar1;
			}
			GisketchMotion.DurationScale = fVar12;
			obj = this._actionHandler;
			pIVar7 = ((object)obj as IGisketchActionHandler);
			this._customActions = (IGisketchActionHandler)pIVar7;
			((object)obj as IGisketchActionHandler);
			pGVar8 = new GisketchUIState();
			this._State_k__BackingField = pGVar8;
			pGVar8 = this._State_k__BackingField;
			if (pGVar8 != null) {
				pGVar8.CopyFrom((GisketchUIState)method_07);
				this.EnsureEventSystem();
				parent = this.CreateCanvas();
				screenLayer = GisketchUIRoot.CreateLayer((Transform)parent, "AoTTG Screens");
				layer = GisketchUIRoot.CreateLayer((Transform)parent, "AoTTG Overlays");
				layer_00 = GisketchUIRoot.CreateLayer((Transform)parent, "AoTTG Toasts");
				GisketchUIRoot.PromoteLayer(layer, 900);
				GisketchUIRoot.PromoteLayer(layer_00, 1000);
				definition = manifest.theme;
				if (definition == null) {
					x = (Object)this._themeJson;
					bVar5 = (x != null);
					if (bVar5) {
						__this_00 = this._themeJson;
						if (__this_00 == null) goto label_0531bcd1;
						json = __this_00.text;
						if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(GisketchTheme)) ;
						}
						theme = GisketchTheme.FromJson(json);
					}
					else {
						if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(GisketchTheme)) ;
						}
						theme = GisketchTheme.Default;
					}
				}
				else {
					theme = GisketchTheme.FromDefinition(definition);
				}
				this._Theme_k__BackingField = theme;
				localizer = new Aottg2GisketchLocalizer();
				pGVar8 = this._State_k__BackingField;
				__this_03 = new Func<string, GisketchOverlayDefinition>((object)__this_01, (intptr_t)MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass71_0_Build_b__0);
				__this_04 = new GisketchBuildContext(manifest, theme, localizer, (IGisketchActionHandler)this, pGVar8, null, __this_03);
				pGVar9 = new GisketchScreenRouter(screenLayer, __this_04, (MonoBehaviour)this);
				this._Screens_k__BackingField = pGVar9;
				__this_05 = new GisketchOverlayManager(layer, __this_04);
				this._Overlays_k__BackingField = __this_05;
				__this_06 = new GisketchToastManager(layer_00, __this_04);
				this._Toasts_k__BackingField = __this_06;
				pGVar9 = this._Screens_k__BackingField;
				bVar5 = String.IsNullOrEmpty(manifest.initialScreen);
				if (bVar5) {
					pGVar4 = manifest.screens;
					if ((pGVar4 == null) ||(pGVar4.Length == 0)) {
						pGVar10 = *(GisketchScreenDefinition*)(g_data_07556758 + 0xb8);
					}
					else {
						if ((int)pGVar4.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						if (pGVar4[0] == null) goto label_0531bcd1;
						pGVar10 = &pGVar4[0].fields;
					}
				}
				else {
					pGVar10 = (GisketchScreenDefinition)&manifest.initialScreen;
				}
				if (pGVar9 != null) {
					pGVar9.ShowScreen(pGVar10.id);
					bVar5 = Application.isPlaying;
					this._runtimeBuilt = bVar5;
					if (bVar2 != false) {
						bVar2 = this._motionEnabled;
						GisketchMotion.Enabled = bVar2;
					}
					return;
				}
			}
		}
	label_0531bcd1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x521CB10", Offset = "0x521BB10", VA = "0x521CB10")]
	public void Clear()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$Clear): clean


		this.Clear(true);
		return;
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x521C0B0", Offset = "0x521B0B0", VA = "0x521C0B0")]
	private void Clear(bool destroyEventSystem)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$Clear): clean
		GisketchScreenRouter __this_00;
		GisketchOverlayManager __this_01;
		GisketchToastManager __this_02;

		this.CancelScreenPrewarm(true);
		__this_00 = this._Screens_k__BackingField;
		if (__this_00 != null) {
			__this_00.Clear();
		}
		__this_01 = this._Overlays_k__BackingField;
		if (__this_01 != null) {
			__this_01.Clear();
		}
		__this_02 = this._Toasts_k__BackingField;
		if (__this_02 != null) {
			__this_02.Close(false);
		}
		this._Screens_k__BackingField = null;
		this._Overlays_k__BackingField = null;
		this._Toasts_k__BackingField = null;
		this._State_k__BackingField = null;
		this._runtimeBuilt = false;
		this._Manifest_k__BackingField = null;
		this._Theme_k__BackingField = null;
		this._codeActions = null;
		GisketchSurfaceMaterialOwner.ReleaseAll(this._canvasObject);
		GisketchUIRoot.DestroyObject(ref this._canvasObject);
		if (destroyEventSystem) {
			GisketchUIRoot.DestroyObject(ref this._eventSystemObject);
			return;
		}
		return;
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x521CC00", Offset = "0x521BC00", VA = "0x521CC00")]
	public void SetTheme(TextAsset themeJson)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$SetTheme): clean
		Object y;
		bool bVar1;

		bVar1 = ((Object)themeJson == null);
		if (!bVar1) {
			y = (Object)this._themeJson;
			bVar1 = ((Object)themeJson == y);
			if (!bVar1) {
				this._themeJson = themeJson;
				this._preserveStateOnBuild = true;
				this.Build();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x521CCC0", Offset = "0x521BCC0", VA = "0x521CCC0")]
	public void SetSelectedScreen(string screenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$SetSelectedScreen): clean
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(screenId);
		if (!bVar1) {
			bVar1 = (screenId == this._selectedScreenId);
			if (!bVar1) {
				this._selectedScreenId = screenId;
				if (this._Screens_k__BackingField != null ) {
					this.Build();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x521CD20", Offset = "0x521BD20", VA = "0x521CD20")]
	public void RefreshActiveScreen(TextAsset themeJson)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$RefreshActiveScreen): clean
		bool bVar1;

		bVar1 = ((Object)themeJson != null);
		if (bVar1) {
			this._themeJson = themeJson;
		}
		this.RefreshActiveScreen();
		return;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x521CD90", Offset = "0x521BD90", VA = "0x521CD90")]
	public void RefreshActiveScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$RefreshActiveScreen): clean
		GisketchView pGVar1;
		GameObject pUVar2;
		bool bVar3;
		GisketchScrollSnapshot __this_00;
		GisketchScreenRouter pGVar4;
		IEnumerator routine;

		pGVar4 = this._Screens_k__BackingField;
		if ((pGVar4 == null) ||(pGVar1 = pGVar4._active, pGVar1 == null)) {
			__this_00 = GisketchScrollSnapshot.Empty();
			pGVar4 = this._Screens_k__BackingField;
		}
		else {
			pUVar2 = pGVar1._Root_k__BackingField;
			method = null;
			__this_00 = GisketchScrollSnapshot.CaptureAll(pUVar2);
			pGVar4 = this._Screens_k__BackingField;
		}
		if (pGVar4 != null) {
			pGVar1 = pGVar4._active;
			if (pGVar1 != null) {
				pUVar2 = pGVar1._Root_k__BackingField;
				if (((typeof(GisketchSectionNavigator))._2). cctor_finished_or_no_cctor == 0) {
				}
				method = null;
				GisketchSectionNavigator.CaptureActiveSections(pUVar2);
				pGVar4 = this._Screens_k__BackingField;
				if (pGVar4 == null) goto label_0531ceb4;
			}
			method = null;
			bVar3 = String.IsNullOrEmpty(pGVar4._activeId);
			if (!bVar3) {
				pGVar4 = this._Screens_k__BackingField;
				if (pGVar4 == null) goto label_0531cf6c;
				method = (MethodInfo)pGVar4._activeId;
				this._selectedScreenId = (String)method;
			}
		}
	label_0531ceb4: ;
		this._suppressNextBuildMotion = true;
		this._preserveStateOnBuild = true;
		this.Build();
		if (__this_00 == null) {
	label_0531cf6c: ;
			throw new NullReferenceException();
		}
		bVar3 = __this_00.HasEntries;
		if (((bVar3) &&(pGVar4 = this._Screens_k__BackingField, pGVar4 != null)) &&(pGVar1 = pGVar4._active, pGVar1 != null)) {
			__this_00.Restore(pGVar1._Root_k__BackingField);
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = Application.isPlaying;
			}
			else {
				bVar3 = Application.isPlaying;
			}
			if (bVar3) {
				pGVar4 = this._Screens_k__BackingField;
				if ((pGVar4 != null) &&(pGVar1 = pGVar4._active, pGVar1 != null)) {
					routine = __this_00.RestoreNextFrame(pGVar1._Root_k__BackingField);
					this.StartCoroutine(routine);
					return;
				}
				goto label_0531cf6c;
			}
		}
		return;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x521CF80", Offset = "0x521BF80", VA = "0x521CF80")]
	public bool RefreshNode(string nodeId, GisketchNodeDefinition replacement, [Optional] GisketchNodeRefreshOptions options)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$RefreshNode): clean
		GisketchScreenRouter __this_00;
		bool bVar1;

		__this_00 = this._Screens_k__BackingField;
		if (__this_00 == null) {
			return false;
		}
		bVar1 = __this_00.RefreshNode(nodeId, replacement, options);
		return bVar1;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x521CFA0", Offset = "0x521BFA0", VA = "0x521CFA0")]
	public bool InvalidateScreen(string screenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$InvalidateScreen): clean
		GisketchScreenRouter __this_00;
		bool bVar1;

		__this_00 = this._Screens_k__BackingField;
		if (__this_00 == null) {
			return false;
		}
		return bVar1;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x521CFC0", Offset = "0x521BFC0", VA = "0x521CFC0")]
	public GisketchNodeDefinition[] BuildDetachedNodes(string ownerId, Action<AottgUi> build, [Optional] string clearOwnerPrefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$BuildDetachedNodes): clean
		AottgActionRegistry pGVar1;
		bool bVar2;
		AottgUi __this_00;
		GisketchNodeDefinition[] pGVar3;

		if (build == null) {
			pGVar3 = (GisketchNodeDefinition[])new GisketchNodeDefinition[0];
			return pGVar3;
		}
		bVar2 = String.IsNullOrEmpty(clearOwnerPrefix);
		if ((!bVar2) &&(pGVar1 = this._codeActions, pGVar1 != null)) {
			pGVar1.ClearOwnersWithPrefix(clearOwnerPrefix);
		}
		pGVar1 = this._codeActions;
		__this_00 = new AottgUi(ownerId, pGVar1);
		(*(code)build.invoke_impl)(build.method_code,__this_00,build.method);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pGVar3;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x521D0A0", Offset = "0x521C0A0", VA = "0x521D0A0")]
	public void SetActionHandler(MonoBehaviour actionHandler)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$SetActionHandler): clean
		object pIVar1;

		this._actionHandler = actionHandler;
		pIVar1 = ((object)actionHandler as IGisketchActionHandler);
		this._customActions = (IGisketchActionHandler)pIVar1;
		((object)actionHandler as IGisketchActionHandler);
		return;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x521D110", Offset = "0x521C110", VA = "0x521D110")]
	public void ShowToast(AottgToastDefinition toast)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$ShowToast): clean
		GisketchToastManager __this_00;

		__this_00 = this._Toasts_k__BackingField;
		if (__this_00 == null) {
			return;
		}
		__this_00.Show(toast);
		return;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x521D130", Offset = "0x521C130", VA = "0x521D130", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$HandleAction): 1 lines keep C-only constructs
		GisketchScreenRouter __this_00;
		GisketchOverlayManager pGVar1;
		AottgActionRegistry __this_01;
		IGisketchActionHandler pGVar2;
		bool bVar3;
		String pSVar4;

		bVar3 = String.IsNullOrEmpty(actionId);
		if (bVar3) {
			return;
		}
		if (actionId != null) {
			bVar3 = actionId.StartsWith("screen.", 5);
			if (bVar3) {
				if ("screen." != null) {
					__this_00 = this._Screens_k__BackingField;
					pSVar4 = actionId.Substring(("screen.".fields)._stringLength);
					if (__this_00 != null) {
						__this_00.ShowScreen(pSVar4);
						return;
					}
				}
			}
			else {
				bVar3 = actionId.StartsWith("dialog.", 5);
				if (bVar3) {
					if ("dialog." != null) {
						pSVar4 = actionId.Substring(("dialog.".fields)._stringLength);
						pGVar1 = this._Overlays_k__BackingField;
						bVar3 = (pSVar4 == "aottg-search-palette");
						if (pGVar1 != null) {
							pGVar1.ShowDialog(pSVar4, bVar3 || context.InputSource != 1);
							return;
						}
					}
				}
				else {
					bVar3 = actionId.StartsWith("popover.", 5);
					if (bVar3) {
						if ("popover." != null) {
							pGVar1 = this._Overlays_k__BackingField;
							pSVar4 = actionId.Substring(("popover.".fields)._stringLength);
							if (pGVar1 != null) {
								pGVar1.ShowPopover(pSVar4, context.GameObject, context.InputSource != 1, 24.0);
								return;
							}
						}
					}
					else {
						bVar3 = (actionId == "overlay.close");
						if (!bVar3) {
							__this_01 = this._codeActions;
							if ((__this_01 != null) &&(bVar3 = __this_01.TryHandle(actionId, context))) {
								return;
							}
							pGVar2 = this._customActions;
							if (pGVar2 != null) {
								il2cpp_runtime_helper_02d49cb0(0, typeof(IGisketchActionHandler), pGVar2, actionId);
								return;
							}
							pSVar4 = String.Concat("Gisketch UI action: ", actionId);
							Debug.Log((object)pSVar4, (Object)context.GameObject);
							return;
						}
						pGVar1 = this._Overlays_k__BackingField;
						if (pGVar1 != null) {
							pGVar1.CloseTop(true);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x521C200", Offset = "0x521B200", VA = "0x521C200")]
	private GisketchManifestDefinition LoadCodeManifest(AottgCodeCatalog catalog)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$LoadCodeManifest): 1 lines keep C-only constructs
		uint uVar1;
		Object pUVar2;
		TextAsset __this_00;
		bool bVar3;
		String json;
		GisketchThemeDefinition theme;
		GisketchManifestDefinition pGVar4;

		if (Il2CppMethodInitialized_075427ba == false) {
			il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.");
			Il2CppMethodInitialized_075427ba = true;
		}
		pUVar2 = (Object)this._themeJson;
		bVar3 = (pUVar2 == null);
		if (bVar3) {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = Application.isPlaying;
			}
			else {
				bVar3 = Application.isPlaying;
			}
			if (bVar3) {
				if (((typeof(Debug))._2).cctor_finished_or_no_cctor == 0) {
				}
				Debug.LogWarning((Il2CppObject *)"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.", (Object)this);
				pUVar2 = (Object)this._themeJson;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				goto joined_r0x0531c2bc;
			}
		}
		pUVar2 = (Object)this._themeJson;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x0531c2bc: ;
		if (uVar1 == 0) {
		}
		theme = null;
		bVar3 = (pUVar2 != null);
		if (bVar3) {
			__this_00 = this._themeJson;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			json = __this_00.text;
			theme = GisketchThemeDefinition.FromJson(json);
		}
		pGVar4 = AottgCodeManifestBuilder.Build(catalog, this._selectedScreenId, theme, this._codeActions);
		if (pGVar4 == null) {
			Debug.LogWarning((Il2CppObject *)"GisketchUIRoot found no AoTTG code UI screens.", (Object)this);
		}
		return pGVar4;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x521C3C0", Offset = "0x521B3C0", VA = "0x521C3C0")]
	private void EnsureEventSystem()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$EnsureEventSystem): 6 lines keep C-only constructs
		GameObject* targetAddress;
		bool bVar1;
		EventSystem pUVar2;
		GameObject pUVar3;
		Transform __this_00;
		Transform parent;

		if (Il2CppMethodInitialized_075427bb == false) {
			Il2CppMethodInitialized_075427bb = true;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_0531c471;
	label_0531c3eb: ;
			bVar1 = Application.isPlaying;
		}
		else {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_0531c3eb;
	label_0531c471: ;
			bVar1 = Application.isPlaying;
		}
		if ((bVar1) && (this._createEventSystem != false)) {
			if (((typeof(EventSystem))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar2 = EventSystem.current;
			bVar1 = ((Object)pUVar2 != null);
			if (!bVar1) {
				pUVar3 = new GameObject("AoTTG EventSystem");
				targetAddress = &this._eventSystemObject;
				this._eventSystemObject = pUVar3;
				pUVar3 = this._eventSystemObject;
				if (pUVar3 != null) {
					__this_00 = pUVar3.transform;
					parent = this.transform;
					if (__this_00 != null) {
						__this_00.SetParent(parent, false);
						if (*targetAddress != null) {
							pUVar2 = (*targetAddress).AddComponent<EventSystem>();
							bVar1 = ((Object)pUVar2 == null);
							if (!bVar1) {
								if (pUVar2 == null) goto label_0531c642;
								pUVar2.m_sendNavigationEvents = true;
							}
							if (*targetAddress != null) {
								(*targetAddress).AddComponent<StandaloneInputModule>();
								return;
							}
						}
					}
				}
	label_0531c642: ;
				throw new NullReferenceException();
			}
			pUVar2 = EventSystem.current;
			bVar1 = ((Object)pUVar2 == null);
			if (!bVar1) {
				if (pUVar2 == null) goto label_0531c642;
				pUVar2.m_sendNavigationEvents = true;
			}
		}
		return;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x521D430", Offset = "0x521C430", VA = "0x521D430")]
	private static void ConfigureEventSystem(EventSystem eventSystem)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$ConfigureEventSystem): clean
		bool bVar1;

		bVar1 = ((Object)eventSystem == null);
		if (!bVar1) {
			if (eventSystem == null) {
				throw new NullReferenceException();
			}
			eventSystem.m_sendNavigationEvents = true;
		}
		return;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x521D420", Offset = "0x521C420", VA = "0x521D420")]
	private static bool ShouldFocusOverlay(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$ShouldFocusOverlay): clean
		return context.InputSource != 1;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x521C650", Offset = "0x521B650", VA = "0x521C650")]
	private RectTransform CreateCanvas()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$CreateCanvas): 9 lines keep C-only constructs
		GameObject* targetAddress;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject pUVar2;
		Transform __this_00;
		Transform parent;
		Canvas __this_01;
		CanvasScaler scaler;
		RectTransform rect;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			pUVar2 = new GameObject("AoTTG UI Canvas", components);
			targetAddress = &this._canvasObject;
			this._canvasObject = pUVar2;
			pUVar2 = this._canvasObject;
			if (pUVar2 != null) {
				__this_00 = pUVar2.transform;
				parent = this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					if (*targetAddress != null) {
						__this_01 = (*targetAddress).AddComponent<Canvas>();
						if (__this_01 != null) {
							__this_01.renderMode = 0;
							if (*targetAddress != null) {
								(*targetAddress).AddComponent<GraphicRaycaster>();
								if (*targetAddress != null) {
									scaler = (*targetAddress).AddComponent<CanvasScaler>();
									if (scaler != null) {
										scaler.m_UiScaleMode = 1;
										scaler.m_MatchWidthOrHeight = 0.5;
										this.ApplyScale(scaler);
										pUVar2 = this._canvasObject;
										if (pUVar2 != null) {
											rect = pUVar2.GetComponent<RectTransform>();
											GisketchUIRoot.Stretch(rect);
											return rect;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x521C890", Offset = "0x521B890", VA = "0x521C890")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$CreateLayer): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform pUVar2;
		RectTransform rect;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject(name, components);
			if (__this != null) {
				pUVar2 = __this.transform;
				if (pUVar2 != null) {
					pUVar2.SetParent(parent, false);
					rect = __this.GetComponent<RectTransform>();
					GisketchUIRoot.Stretch(rect);
					pUVar2 = __this.transform;
					return pUVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x521CA00", Offset = "0x521BA00", VA = "0x521CA00")]
	private static void PromoteLayer(Transform layer, int sortingOrder)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$PromoteLayer): clean
		GameObject pUVar1;
		Canvas __this;

		if (layer != null) {
			pUVar1 = layer.gameObject;
			if (pUVar1 != null) {
				__this = pUVar1.AddComponent<Canvas>();
				if (__this != null) {
					__this.overrideSorting = true;
					__this.sortingOrder = sortingOrder;
					pUVar1 = layer.gameObject;
					if (pUVar1 != null) {
						pUVar1.AddComponent<GraphicRaycaster>();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x521CAB0", Offset = "0x521BAB0", VA = "0x521CAB0")]
	private static string FirstScreenId(GisketchManifestDefinition manifest)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$FirstScreenId): clean
		GisketchScreenDefinition[] pGVar1;

		if (manifest != null) {
			pGVar1 = manifest.screens;
			if ((pGVar1 == null) || (pGVar1.Length == 0)) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if ((int)pGVar1.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pGVar1[0] != null) {
				return pGVar1[0].id;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x521D4A0", Offset = "0x521C4A0", VA = "0x521D4A0")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x521CB20", Offset = "0x521BB20", VA = "0x521CB20")]
	private static void DestroyObject(ref GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$DestroyObject): clean
		uint uVar1;
		Object pUVar2;
		bool bVar3;

		pUVar2 = (Object)*go;
		bVar3 = (pUVar2 == null);
		if (bVar3) {
			return;
		}
		bVar3 = Application.isPlaying;
		pUVar2 = (Object)*go;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			Object.Destroy(pUVar2);
		}
		else {
			if (uVar1 == 0) {
			}
			Object.DestroyImmediate(pUVar2);
		}
		*go = null;
		return;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x521D490", Offset = "0x521C490", VA = "0x521D490")]
	private static void MarkEditorPreview(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$MarkEditorPreview): clean
		return;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x521D5A0", Offset = "0x521C5A0", VA = "0x521D5A0")]
	public GisketchUIRoot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c (Gisketch.Aottg2UI.GisketchUIRoot$$.ctor): clean
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		List<string> __this_00;
		HashSet<string> __this_01;

		this._screenPrewarmIdleDelay = 0.75;
		this._screenPrewarmKeepAliveFrames = 10;
		__this_00 = new List<string>();
		this._screenPrewarmQueue = __this_00;
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_01 = new HashSet<string>((IEqualityComparer<T>)comparer);
		this._screenPrewarmed = __this_01;
		this._scalePreset = 2;
		this._scale = 1.0;
		this._buildOnStart = true;
		this._previewInEditor = true;
		this._createEventSystem = true;
		this._motionEnabled = true;
		this._motionScale = 1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c.

	// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass71_0$$.ctor: clean
	private void c__DisplayClass71_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass71_0$$<Build>b__0: clean
	private GisketchOverlayDefinition c__DisplayClass71_0__Build_b__0(String id)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayDefinition pGVar2;

		pGVar1 = this.__4__this;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar2 = AottgCodeManifestBuilder.BuildDialog(this.catalog, id, pGVar1._codeActions);
		return pGVar2;
	}
}
