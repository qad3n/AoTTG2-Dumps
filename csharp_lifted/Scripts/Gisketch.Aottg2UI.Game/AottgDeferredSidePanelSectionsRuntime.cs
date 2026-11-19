// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000348")]
internal sealed class AottgDeferredSidePanelSectionsRuntime : MonoBehaviour
{
	[Token(Token = "0x2000349")]
	[CompilerGenerated]
	private sealed class _003CBuildDeferred_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400107C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400107D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400107E")]
		[FieldOffset(Offset = "0x20")]
		public AottgDeferredSidePanelSectionsRuntime _003C_003E4__this;

		[Token(Token = "0x400107F")]
		[FieldOffset(Offset = "0x28")]
		private Transform _003Cparent_003E5__2;

		[Token(Token = "0x4001080")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700023C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600148A")]
			[Address(RVA = "0x5814C00", Offset = "0x5813C00", VA = "0x5814C00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700023D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600148C")]
			[Address(RVA = "0x5814C50", Offset = "0x5813C50", VA = "0x5814C50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001487")]
		[Address(RVA = "0x58148D0", Offset = "0x58138D0", VA = "0x58148D0")]
		[DebuggerHidden]
		public _003CBuildDeferred_003Ed__12(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001488")]
		[Address(RVA = "0x58149F0", Offset = "0x58139F0", VA = "0x58149F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001489")]
		[Address(RVA = "0x5814A00", Offset = "0x5813A00", VA = "0x5814A00", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$MoveNext): clean
			uint uVar1;
			AottgDeferredSidePanelSectionsRuntime __this_00;
			GisketchNodeDefinition[] pGVar2;
			GisketchNodeDefinition node;
			GisketchBuildContext context;
			GisketchView view;
			bool bVar3;
			Transform pUVar4;
			GameObject root;
			Object obj;
			int iVar5;
			MethodInfo method_00;

			iVar5 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar5 == 2) {
				this.__1__state = -1;
				iVar5 = this._i_5__3 + 1;
				this._i_5__3 = iVar5;
				if (__this_00 == null) goto label_05914bef;
			}
			else {
				if (iVar5 != 1) {
					if (iVar5 == 0) {
						this.__1__state = -1;
						this.__2__current = null;
						this.__1__state = 1;
						return true;
					}
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) goto label_05914bef;
				iVar5 = 0;
				pUVar4 = __this_00.transform;
				if (pUVar4 == null) goto label_05914bef;
				pUVar4 = pUVar4.parent;
				this._parent_5__2 = pUVar4;
				this._i_5__3 = 0;
			}
			pGVar2 = __this_00._nodes;
			if (pGVar2 == null) {
		label_05914bef: ;
				throw new NullReferenceException();
			}
			if (iVar5 < (int)pGVar2.Length) {
				pUVar4 = this._parent_5__2;
				bVar3 = ((Object)pUVar4 != null);
				if (bVar3) {
					pGVar2 = __this_00._nodes;
					if (pGVar2 != null) {
						uVar1 = this._i_5__3;
						if ((uint)pGVar2.Length <= uVar1) {
							throw new IndexOutOfRangeException();
						}
						node = pGVar2[(int)uVar1];
						method_00 = (MethodInfo)this._parent_5__2;
						context = __this_00._context;
						view = __this_00._view;
						GisketchScreenBuilder.BuildNodeInto(node, (Transform)method_00, context, view);
						root = __this_00.SettleRoot();
						GisketchScreenBuilder.SettleLayout(root, 1);
						this.__2__current = null;
						this.__1__state = 2;
						return true;
					}
					goto label_05914bef;
				}
			}
			obj = (Object)__this_00.gameObject;
			Object.Destroy(obj);
			return false;
		}

		[Token(Token = "0x600148B")]
		[Address(RVA = "0x5814C10", Offset = "0x5813C10", VA = "0x5814C10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12_System_Collecti);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001076")]
	public const string NodeType = "DeferredSidePanelSections";

	[Token(Token = "0x4001077")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4001078")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _nodes;

	[Token(Token = "0x4001079")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x400107A")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x400107B")]
	[FieldOffset(Offset = "0x38")]
	private Coroutine _build;

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x5814400", Offset = "0x5813400", VA = "0x5814400")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_075456da == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_075456da = true;
		}
		if (AottgDeferredSidePanelSectionsRuntime._registered != false) {
			return;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("DeferredSidePanelSections", __this_00);
		AottgDeferredSidePanelSectionsRuntime._registered = true;
		return;
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x58144F0", Offset = "0x58134F0", VA = "0x58144F0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildRuntime): clean
		bool bVar1;
		RectTransform __this;
		LayoutElement pUVar2;
		AottgDeferredSidePanelSectionsRuntime __this_00;
		GisketchNodeDefinition[] nodes;

		bVar1 = ((Object)go == null);
		if (bVar1) {
			return true;
		}
		if (go != null) {
			__this = go.GetComponent<RectTransform>() ;
			bVar1 = ((Object)__this != null);
			if (bVar1) {
				if (__this == null) goto label_05914671;
				__this.sizeDelta = (Vector2)(Vector2.zeroVector);
			}
			pUVar2 = go.AddComponent<LayoutElement>() ;
			if (pUVar2 != null) {
				pUVar2.set_ignoreLayout(true);
				__this_00 = go.AddComponent<AottgDeferredSidePanelSectionsRuntime>();
				if (node == null) {
					nodes = null;
				}
				else {
					nodes = node.deferredChildren;
				}
				if (__this_00 != null) {
					__this_00.Setup(nodes, context, view);
					return true;
				}
			}
		}
	label_05914671: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x5814680", Offset = "0x5813680", VA = "0x5814680")]
	private void Setup(GisketchNodeDefinition[] nodes, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$Setup): clean
		if (nodes == null) {
			nodes = (GisketchNodeDefinition[])new GisketchNodeDefinition[0];
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._nodes = nodes;
		this._context = context;
		this._view = view;
		this.StartIfReady();
		return;
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x5814820", Offset = "0x5813820", VA = "0x5814820")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnEnable): clean
		this.StartIfReady();
		return;
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x5814720", Offset = "0x5813720", VA = "0x5814720")]
	private void StartIfReady()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$StartIfReady): 2 lines keep C-only constructs
		GisketchNodeDefinition[] pGVar1;
		bool bVar2;
		AottgDeferredSidePanelSectionsRuntime.d__12<BuildDeferred> __this_00;
		Coroutine pUVar3;

		if (this._build == null) {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				bVar2 = Application.isPlaying;
			}
			else {
				bVar2 = Application.isPlaying;
			}
			if (((bVar2) &&(pGVar1 = this._nodes, pGVar1 != null)) && (pGVar1.Length != 0)) {
				if (Il2CppMethodInitialized_075456de == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgDeferredSidePanelSectionsRuntime.d__12<BuildDeferred>)) ;
					Il2CppMethodInitialized_075456de = true;
				}
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgDeferredSidePanelSectionsRuntime.d__12<BuildDeferred>));
				__this_00 = new Object();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				pUVar3 = this.StartCoroutine((IEnumerator)__this_00);
				this._build = pUVar3;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x58148A0", Offset = "0x58138A0", VA = "0x58148A0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnDisable): 2 lines keep C-only constructs
		Coroutine* targetAddress;
		Coroutine routine;

		targetAddress = &this._build;
		routine = this._build;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x5814830", Offset = "0x5813830", VA = "0x5814830")]
	[IteratorStateMachine(typeof(_003CBuildDeferred_003Ed__12))]
	private IEnumerator BuildDeferred()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildDeferred): 1 lines keep C-only constructs
		AottgDeferredSidePanelSectionsRuntime.d__12<BuildDeferred> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgDeferredSidePanelSectionsRuntime.d__12<BuildDeferred>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x58148F0", Offset = "0x58138F0", VA = "0x58148F0")]
	private GameObject SettleRoot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$SettleRoot): clean
		bool bVar1;
		ScrollRect x;
		Transform pUVar2;
		GameObject pUVar3;

		x = this.GetComponentInParent<ScrollRect>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x != null) {
				this = (AottgDeferredSidePanelSectionsRuntime)x;
	label_059149c5: ;
				return pUVar3;
			}
		}
		else {
			pUVar2 = this.transform;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.root;
				bVar1 = ((Object)pUVar2 != null);
				if ((!bVar1) ||((pUVar2 = this.transform, pUVar2 != null &&(this = (AottgDeferredSidePanelSectionsRuntime)pUVar2.root,(ScrollRect)this != null)))) goto label_059149c5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x58149E0", Offset = "0x58139E0", VA = "0x58149E0")]
	public AottgDeferredSidePanelSectionsRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$.ctor): clean
		base();
		return;
	}
}
