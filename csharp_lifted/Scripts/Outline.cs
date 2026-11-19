// ==================== AoTTG2 cross-reference ====================
// Type: Outline
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Outline.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/Outline.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

[Token(Token = "0x200000E")]
[DisallowMultipleComponent]
public class Outline : MonoBehaviour
{
	[Token(Token = "0x200000F")]
	public enum Mode
	{
		[Token(Token = "0x4000041")]
		OutlineAll,
		[Token(Token = "0x4000042")]
		OutlineVisible,
		[Token(Token = "0x4000043")]
		OutlineHidden,
		[Token(Token = "0x4000044")]
		OutlineAndSilhouette,
		[Token(Token = "0x4000045")]
		SilhouetteOnly,
		[Token(Token = "0x4000046")]
		OutlineAndLightenColor
	}

	[Serializable]
	[Token(Token = "0x2000010")]
	private class ListVector3
	{
		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x10")]
		public List<Vector3> data;

		[Token(Token = "0x600005E")]
		[Address(RVA = "0x5748470", Offset = "0x5747470", VA = "0x5748470")]
		public ListVector3()
		{
			// Lifted from source/cpp/Outline.c (Outline.ListVector3$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<Mesh> registeredMeshes;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Mode outlineMode;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Color outlineColor;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Range(0f, 10f)]
	private float outlineWidth;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x38")]
	[Header("Optional")]
	[SerializeField]
	[Tooltip("Precompute enabled: Per-vertex calculations are performed in the editor and serialized with the object. Precompute disabled: Per-vertex calculations are performed at runtime in Awake(). This may cause a pause for large meshes.")]
	private bool precomputeOutline;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[HideInInspector]
	private List<Mesh> bakeKeys;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[HideInInspector]
	private List<ListVector3> bakeValues;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<Renderer> renderers;

	[Token(Token = "0x4000032")]
	private const int QueueBlockStart = 3110;

	[Token(Token = "0x4000033")]
	private const int QueueBlockSize = 4;

	[Token(Token = "0x4000034")]
	private const int QueueBlockCount = 400;

	[Token(Token = "0x4000035")]
	public const int RenderQueueAboveOutlines = 4710;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stack<int> freeQueueBlocks;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x58")]
	private Material outlineMaskMaterial;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x60")]
	private Material outlineFillMaterial;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x68")]
	private Material outlineFillLightenMaterial;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x70")]
	private Material outlineResetMaterial;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x78")]
	private Material[] outlineMaterials;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x80")]
	private int queueBlock;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x84")]
	private bool ownsQueueBlock;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x85")]
	private bool needsUpdate;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x88")]
	private List<string> _namesToIgnore;

	[Token(Token = "0x17000005")]
	public Mode OutlineMode
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5746150", Offset = "0x5745150", VA = "0x5746150")]
		get
		{
			// Lifted from source/cpp/Outline.c (Outline$$get_OutlineMode): clean
			return this.outlineMode;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5746160", Offset = "0x5745160", VA = "0x5746160")]
		set
		{
			// Lifted from source/cpp/Outline.c (Outline$$set_OutlineMode): clean
			this.outlineMode = value;
			this.needsUpdate = true;
			return;
		}
	}

	[Token(Token = "0x17000006")]
	public Color OutlineColor
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5746170", Offset = "0x5745170", VA = "0x5746170")]
		get
		{
			// Lifted from source/cpp/Outline.c (Outline$$get_OutlineColor): clean
			return (Color)this.outlineColor;
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x5746180", Offset = "0x5745180", VA = "0x5746180")]
		set
		{
			// Lifted from source/cpp/Outline.c (Outline$$set_OutlineColor): clean
			this.outlineColor = value;
			this.needsUpdate = true;
			return;
		}
	}

	[Token(Token = "0x17000007")]
	public float OutlineWidth
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x5746190", Offset = "0x5745190", VA = "0x5746190")]
		get
		{
			// Lifted from source/cpp/Outline.c (Outline$$get_OutlineWidth): clean
			return this.outlineWidth;
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x57461A0", Offset = "0x57451A0", VA = "0x57461A0")]
		set
		{
			// Lifted from source/cpp/Outline.c (Outline$$set_OutlineWidth): clean
			this.outlineWidth = value;
			this.needsUpdate = true;
			return;
		}
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x57461B0", Offset = "0x57451B0", VA = "0x57461B0")]
	private static Stack<int> CreateQueueBlocks()
	{
		// Lifted from source/cpp/Outline.c (Outline$$CreateQueueBlocks): clean
		Stack<int> __this;
		int item;
		bool bVar1;

		__this = new Stack<int>(400);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		item = 399;
		do {
			__this.Push(item);
			bVar1 = item != 0;
			item = item + -1;
		} while (bVar1);
		return __this;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x5746330", Offset = "0x5745330", VA = "0x5746330")]
	public static void ResetQueueBlocks()
	{
		// Lifted from source/cpp/Outline.c (Outline$$ResetQueueBlocks): clean
		uint uVar1;
		Stack<int> __this;
		int item;
		bool bVar2;

		if (Il2CppMethodInitialized_07545000 == false) {
			Il2CppMethodInitialized_07545000 = true;
			uVar1 = (typeof(Outline)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Outline)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = Outline.freeQueueBlocks;
		}
		else {
			__this = *(Stack<int>*)((long)(typeof(Outline)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		item = 399;
		do {
			__this.Push(item);
			bVar2 = item != 0;
			item = item + -1;
		} while (bVar2);
		return;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x57462B0", Offset = "0x57452B0", VA = "0x57462B0")]
	private static void FillQueueBlocks(Stack<int> blocks)
	{
		// Lifted from source/cpp/Outline.c (Outline$$FillQueueBlocks): clean
		int item;
		bool bVar1;

		if (blocks == null) {
			throw new NullReferenceException();
		}
		blocks.Clear();
		item = 399;
		do {
			blocks.Push(item);
			bVar1 = item != 0;
			item = item + -1;
		} while (bVar1);
		return;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5746420", Offset = "0x5745420", VA = "0x5746420")]
	private void Awake()
	{
		// Lifted from source/cpp/Outline.c (Outline$$Awake): 20 lines keep C-only constructs
		Material* targetAddress;
		Material* targetAddress_00;
		Material* targetAddress_01;
		int iVar1;
		Il2CppClass obj;
		Outline klass;
		int iVar2;
		HashSet<Renderer> pSVar3;
		Stack<int> __this_00;
		Material pUVar4;
		Material[] method_00;
		object pIVar5;
		MethodInfo* in_RCX;

		pSVar3 = this.FindRenderers();
		this.renderers = pSVar3;
		klass = typeof(Outline);
		__this_00 = Outline.freeQueueBlocks;
		if (__this_00 == null) {
	label_05846713: ;
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		this.ownsQueueBlock = 0 < iVar1;
		if (iVar1 < 1) {
			iVar2 = 0;
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = Outline.freeQueueBlocks;
				if (__this_00 == null) goto label_05846713;
			}
			in_RCX = &MethodInfo_System_Collections_Generic_Stack_int_Pop;
			iVar2 = __this_00.Pop();
		}
		this.queueBlock = iVar2;
		pUVar4 = this.CreateOutlineMaterial("Mask", 0);
		this.outlineMaskMaterial = pUVar4;
		pUVar4 = this.CreateOutlineMaterial("Fill", 1);
		targetAddress = &this.outlineFillMaterial;
		this.outlineFillMaterial = pUVar4;
		pUVar4 = this.CreateOutlineMaterial("FillLighten", 2);
		targetAddress_00 = &this.outlineFillLightenMaterial;
		this.outlineFillLightenMaterial = pUVar4;
		pUVar4 = this.CreateOutlineMaterial("Reset", 3);
		targetAddress_01 = &this.outlineResetMaterial;
		this.outlineResetMaterial = pUVar4;
		method_00 = (Material[])new Material[4];
		if (method_00 == null) goto label_05846713;
		obj = (Il2CppClass)this.outlineMaskMaterial;
		if (obj != null) {
			pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((method_00.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05846718;
		}
		if (*(int)&method_00.Length != 0) {
			method_00[0] = (Material)obj;
			pUVar4 = *targetAddress;
			if (pUVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)pUVar4, (((method_00.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05846718;
			}
			if (((ulong)method_00.Length & 0xfffffffe) == 0) goto label_0584670e;
			method_00[1] = pUVar4;
			pUVar4 = *targetAddress_00;
			if (pUVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)pUVar4, (((method_00.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05846718;
			}
			if (2 < *(uint)&method_00.Length) {
				method_00[2] = pUVar4;
				pUVar4 = *targetAddress_01;
				if (pUVar4 != null) {
					pIVar5 = il2cpp_vm_Object_IsInst((object)pUVar4, (((method_00.obj).klass)._1).element_class);
					if (pIVar5 == null) {
	label_05846718: ;
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
				}
				if (((ulong)method_00.Length & 0xfffffffc) != 0) {
					((_union_13)(method_00.m_Items + 3)).methodMetadataHandle = pUVar4;
					this.outlineMaterials = method_00;
					this.LoadSmoothNormals();
					this.needsUpdate = true;
					return;
				}
			}
		}
	label_0584670e: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x57467F0", Offset = "0x57457F0", VA = "0x57467F0")]
	private Material CreateOutlineMaterial(string stage, int stageOffset)
	{
		// Lifted from source/cpp/Outline.c (Outline$$CreateOutlineMaterial): clean
		String pSVar1;
		Shader shader;
		Material __this_00;

		pSVar1 = String.Concat("Shaders/OutlineMaskAndFill_", stage);
		shader = Resources.Load<Shader>(pSVar1);
		__this_00 = new Material(shader);
		pSVar1 = String.Concat("OutlineMaskAndFill", stage, " (Instance)");
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.name = pSVar1;
		__this_00.renderQueue = stageOffset + this.queueBlock * 4 + 0xc26;
		return __this_00;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5746FB0", Offset = "0x5745FB0", VA = "0x5746FB0")]
	public void RefreshRenderers(List<string> namesToIgnore)
	{
		// Lifted from source/cpp/Outline.c (Outline$$RefreshRenderers): 4 lines keep C-only constructs
		int piVar1;
		int iVar2;
		HashSet<object> __this_00;
		List<Outline.ListVector3> pSVar3;
		List<Mesh> pSVar4;
		bool bVar5;
		MethodInfo pMVar6;

		this._namesToIgnore = namesToIgnore;
		__this_00 = (HashSet<object>)Outline.registeredMeshes;
		if (__this_00 != null) {
			__this_00.Clear();
			pSVar3 = this.bakeValues;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar3._size;
				pSVar3._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar3._items, 0, iVar2);
				}
				pSVar4 = this.bakeKeys;
				if (pSVar4 != null) {
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					iVar2 = pSVar4._size;
					pSVar4._size = 0;
					if (0 < iVar2) {
						Array.Clear((Array)pSVar4._items, 0, iVar2);
					}
					pMVar6 = null;
					bVar5 = this.enabled;
					this.OnDisable();
					pMVar6 = (MethodInfo)this.FindRenderers();
					this.renderers = (HashSet<Renderer>)pMVar6;
					this.LoadSmoothNormals();
					this.OnEnable();
					this.needsUpdate = true;
					if (bVar5) {
						this.OnEnable();
						return;
					}
					this.OnDisable();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5746730", Offset = "0x5745730", VA = "0x5746730")]
	private HashSet<Renderer> FindRenderers()
	{
		// Lifted from source/cpp/Outline.c (Outline$$FindRenderers): 4 lines keep C-only constructs
		Object[] source;
		Func<Renderer, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Collections_Generic_HashSet_TSource__o pSVar1;

		source = this.GetComponentsInChildren<Renderer>() ;
		__this_00 = new Func<Renderer, bool>((object)this, (intptr_t)MethodInfo_Outline_FindRenderers_b__39_0);
		source_00 = Enumerable.Where<Renderer>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		pSVar1 = Enumerable.ToHashSet<Renderer>(source_00);
		return (HashSet<Renderer>)pSVar1;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x57471A0", Offset = "0x57461A0", VA = "0x57471A0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Outline.c (Outline$$OnEnable): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		Predicate<T> match;

		__this_00 = (HashSet<object>)this.renderers;
		match = new Predicate<Renderer>((object)this, (intptr_t)MethodInfo_Outline_OnEnable_b__40_0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RemoveWhere(match);
		return;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5747230", Offset = "0x5746230", VA = "0x5747230")]
	private void OnValidate()
	{
		// Lifted from source/cpp/Outline.c (Outline$$OnValidate): 4 lines keep C-only constructs
		int piVar1;
		int length;
		List<Mesh> pSVar2;
		List<Outline.ListVector3> pSVar3;
		int length_00;

		this.needsUpdate = true;
		pSVar2 = this.bakeKeys;
		if (this.precomputeOutline == false) {
			if (pSVar2 == null) goto label_0584730f;
			length_00 = pSVar2._size;
			if (length_00 == 0) goto label_0584728e;
	label_058472ad: ;
			piVar1 = &pSVar2._version;
			*piVar1 = *piVar1 + 1;
			pSVar2._size = 0;
			if (0 < length_00) {
				Array.Clear((Array)pSVar2._items, 0, length_00);
			}
			pSVar3 = this.bakeValues;
			if (pSVar3 == null) goto label_0584730f;
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
		}
		else {
			if (pSVar2 == null) goto label_0584730f;
	label_0584728e: ;
			pSVar3 = this.bakeValues;
			if (pSVar3 == null) goto label_0584730f;
			length_00 = pSVar2._size;
			if (length_00 != pSVar3._size) goto label_058472ad;
		}
		if (this.precomputeOutline != false) {
			pSVar2 = this.bakeKeys;
			if (pSVar2 == null) {
	label_0584730f: ;
				throw new NullReferenceException();
			}
			if (pSVar2._size == 0) {
				this.Bake();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x57475C0", Offset = "0x57465C0", VA = "0x57475C0")]
	private void Update()
	{
		// Lifted from source/cpp/Outline.c (Outline$$Update): clean
		if (this.needsUpdate == false) {
			return;
		}
		this.needsUpdate = false;
		this.UpdateMaterialProperties();
		return;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5747110", Offset = "0x5746110", VA = "0x5747110")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Outline.c (Outline$$OnDisable): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		Predicate<T> match;

		__this_00 = (HashSet<object>)this.renderers;
		match = new Predicate<Renderer>((object)this, (intptr_t)MethodInfo_Outline_OnDisable_b__43_0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RemoveWhere(match);
		return;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5747700", Offset = "0x5746700", VA = "0x5747700")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Outline.c (Outline$$OnDestroy): clean
		uint uVar1;
		Material[] pUVar2;
		Material obj;
		Stack<int> __this_00;
		ulong uVar3;
		ulong uVar4;

		pUVar2 = this.outlineMaterials;
		if (pUVar2 != null) {
			if (0 < (int)pUVar2.Length) {
				uVar3 = pUVar2.Length & 0xffffffff;
				uVar4 = 0;
				do {
					if (uVar3 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					obj = pUVar2[uVar4];
					Object.Destroy((Object)obj);
					uVar4 = uVar4 + 1;
					uVar1 = (uint)pUVar2.Length;
					uVar3 = (ulong)uVar1;
				} while ((long)uVar4 < (long)(int)uVar1);
			}
			if (this.ownsQueueBlock == false) {
				return;
			}
			this.ownsQueueBlock = false;
			__this_00 = Outline.freeQueueBlocks;
			if (__this_00 != null) {
				__this_00.Push(this.queueBlock);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5747320", Offset = "0x5746320", VA = "0x5747320")]
	private void Bake()
	{
		// Lifted from source/cpp/Outline.c (Outline$$Bake): 4 lines keep C-only constructs
		int piVar1;
		Outline __this_00;
		List<Mesh> __this_01;
		Mesh[] pUVar2;
		List<Outline.ListVector3> __this_02;
		ListVector3[] pOVar3;
		bool bVar5;
		uint uVar6;
		HashSet<Mesh> __this_03;
		Object[] pSVar7;
		Mesh pUVar8;
		List<Vector3> pSVar9;
		ListVector3 __this_04;
		Outline __this_05;
		uint uVar10;

		__this_03 = new HashSet<Mesh>();
		pSVar7 = this.GetComponentsInChildren<MeshFilter>();
		if (pSVar7 == null) {
	label_058475a0: ;
			throw new NullReferenceException();
		}
		uVar6 = (uint)pSVar7.Length;
		if (__this_03 == null) {
			if (0 < (int)uVar6) {
				if ((MeshFilter)pSVar7[0] != null) {
					(pSVar7[0]).sharedMesh;
					throw new NullReferenceException();
				}
				goto label_058475a0;
			}
		}
		else if (0 < (int)uVar6) {
			uVar10 = 0;
			do {
				if (uVar6 <= uVar10) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = (Outline)pSVar7[(int)uVar10];
				if (__this_00 == null) goto label_058475a0;
				pUVar8 = __this_00.sharedMesh ;
				bVar5 = __this_03.Add((object)pUVar8);
				if (bVar5) {
					__this_05 = __this_00;
					pUVar8 = __this_00.sharedMesh;
					pSVar9 = __this_05.SmoothNormals(pUVar8);
					__this_01 = this.bakeKeys;
					pUVar8 = __this_00.sharedMesh;
					if (__this_01 == null) goto label_058475a0;
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pUVar2 = __this_01._items;
					if (pUVar2 == null) goto label_058475a0;
					uVar6 = __this_01._size;
					if (uVar6 < (uint)pUVar2.Length) {
						__this_01._size = uVar6 + 1;
						pUVar2[(int)uVar6] = pUVar8;
					}
					else {
						__this_01.AddWithResize((object)pUVar8);
					}
					__this_02 = this.bakeValues;
					__this_04 = new ListVector3();
					if (__this_04 == null) goto label_058475a0;
					__this_04.data = pSVar9;
					if (__this_02 == null) goto label_058475a0;
					piVar1 = &__this_02._version;
					*piVar1 = *piVar1 + 1;
					pOVar3 = __this_02._items;
					if (pOVar3 == null) goto label_058475a0;
					uVar6 = __this_02._size;
					if (uVar6 < (uint)pOVar3.Length) {
						__this_02._size = uVar6 + 1;
						pOVar3[(int)uVar6] = __this_04;
					}
					else {
						__this_02.AddWithResize((object)__this_04);
					}
				}
				uVar10 = uVar10 + 1;
				uVar6 = (uint)pSVar7.Length;
			} while ((int)uVar10 < (int)uVar6);
		}
		return;
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5746900", Offset = "0x5745900", VA = "0x5746900")]
	private void LoadSmoothNormals()
	{
		// Lifted from source/cpp/Outline.c (Outline$$LoadSmoothNormals): 17 lines keep C-only constructs
		HashSet<object> pSVar1;
		List<Mesh> __this_00;
		List<Outline.ListVector3> __this_01;
		bool bVar2;
		int index;
		uint length;
		Object[] pSVar3;
		System_Collections_Generic_HashSet_TSource__o pSVar4;
		Predicate<T> pSVar5;
		Mesh pUVar6;
		object pIVar7;
		Il2CppClass uvs;
		Outline pOVar8;
		Material[] pUVar9;
		Mesh __this_02;
		Vector2[] value;
		MethodInfo* method_01;
		Outline pOVar10;
		byte[] local_80 = new byte[16];
		Outline local_70;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		Outline local_58;
		byte[] local_48 = new byte[8];
		Outline local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		pSVar3 = this.GetComponentsInChildren<MeshFilter>();
		pSVar4 = Enumerable.ToHashSet<MeshFilter>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3);
		pSVar5 = new Predicate<SkinnedMeshRenderer>((object)this, (intptr_t)MethodInfo_Outline_LoadSmoothNormals_b__46_0);
		if (pSVar4 != null) {
			pSVar4.RemoveWhere(pSVar5);
			local_80.GetEnumerator((HashSet<object>)pSVar4);
			local_38 = local_70;
			local_48 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_48;
			while(true) {
				bVar2 = local_48.MoveNext();
				pOVar10 = local_38;
				if (!bVar2) break;
				if (pOVar10 == null) {
					throw new NullReferenceException();
				}
				pSVar1 = (HashSet<object>)Outline.registeredMeshes;
				pUVar6 = pOVar10.sharedMesh;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				bVar2 = pSVar1.Add((object)pUVar6);
				if (bVar2) {
					__this_00 = this.bakeKeys;
					pUVar6 = pOVar10.sharedMesh ;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					index = __this_00.IndexOf((object)pUVar6);
					if (index < 0) {
						pOVar8 = pOVar10;
						pUVar6 = pOVar10.sharedMesh;
						uvs = (Il2CppClass)pOVar8.SmoothNormals(pUVar6);
					}
					else {
						__this_01 = this.bakeValues;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						pIVar7 = __this_01.get_Item(index);
						if (pIVar7 == null) {
							throw new NullReferenceException();
						}
						uvs = pIVar7[1].klass;
					}
					pUVar6 = pOVar10.sharedMesh ;
					if (pUVar6 == null) {
						throw new NullReferenceException();
					}
					pUVar6.SetUVs(3, (List<Vector3>)uvs);
					pOVar8 = (Outline)pOVar10.GetComponent<Renderer>();
					bVar2 = ((Object)pOVar8 != null);
					if (bVar2) {
						pUVar6 = pOVar10.sharedMesh;
						if (pOVar8 == null) {
							throw new NullReferenceException();
						}
						pUVar9 = pOVar8.sharedMaterials;
						pOVar8.CombineSubmeshes(pUVar6, pUVar9);
					}
				}
			}
			local_48.Dispose();
			pSVar3 = this.GetComponentsInChildren<SkinnedMeshRenderer>();
			pSVar4 = Enumerable.ToHashSet<SkinnedMeshRenderer>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3) ;
			pSVar5 = new Predicate<SkinnedMeshRenderer>((object)this, (intptr_t)MethodInfo_Outline_LoadSmoothNormals_b__46_1);
			if (pSVar4 != null) {
				pSVar4.RemoveWhere(pSVar5);
				local_80.GetEnumerator((HashSet<object>)pSVar4);
				local_58 = local_70;
				local_68 = (byte[])local_80._0_8_;
				uStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_80._8_8_;
				local_80._0_8_ = null;
				local_80._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
				while(true) {
					do {
						bVar2 = local_68.MoveNext();
						pOVar10 = local_58;
						if (!bVar2) {
							local_68.Dispose();
							return;
						}
						if (pOVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar1 = (HashSet<object>)Outline.registeredMeshes;
						pUVar6 = pOVar10.sharedMesh;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						method_01 = &MethodInfo_System_Collections_Generic_HashSet_Mesh_Add;
						bVar2 = pSVar1.Add((object)pUVar6);
					} while (!bVar2);
					pUVar6 = pOVar10.sharedMesh;
					__this_02 = pOVar10.sharedMesh;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					length = __this_02.vertexCount;
					value = (Vector2[])new Vector2[length];
					if (pUVar6 == null) break;
					pUVar6.uv4 = value;
					pUVar6 = pOVar10.sharedMesh;
					pUVar9 = pOVar10.sharedMaterials;
					pOVar10.CombineSubmeshes(pUVar6, pUVar9);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5747820", Offset = "0x5746820", VA = "0x5747820")]
	private List<Vector3> SmoothNormals(Mesh mesh)
	{
		// Lifted from source/cpp/Outline.c (Outline$$SmoothNormals): 43 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		byte[] auVar5 = new byte[16];
		sbyte cVar6;
		bool bVar7;
		int iVar8;
		Vector3[] pUVar9;
		Func<Vector3, int, KeyValuePair<Vector3, int>> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		Outline___c_StaticFields pOVar10;
		Func<KeyValuePair<Vector3, int>, Vector3> __this_01;
		object pIVar11;
		List<Vector3> __this_02;
		VirtualInvokeData pVVar12;
		object pIVar13;
		int index;
		int index_00;
		ulong uVar14;
		long lVar15;
		float fVar16;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		Vector3 UVar17;
		float local_94;
		object local_90;
		float local_84;
		object local_80;
		byte[] local_78 = new byte[8];
		ulong uStack_70;
		object* local_60;
		ulong local_58;
		ulong uStack_50;
		object* local_38;

		local_80 = null;
		local_90 = null;
		if (mesh != null) {
			pUVar9 = mesh.vertices;
			if ((typeof(c)._2).cctor_finished_or_no_cctor == 0) {
				pOVar10 = typeof(c).static_fields;
				__this_00 = pOVar10.__9__47_0;
			}
			else {
				pOVar10 = typeof(c).static_fields;
				__this_00 = pOVar10.__9__47_0;
			}
			if (__this_00 == null) {
				if (((typeof(c))._2).cctor_finished_or_no_cctor == 0) {
					pOVar10 = typeof(c).static_fields;
				}
				pIVar11 = (object)pOVar10.__9;
				__this_00 = new Func<Vector3, int, KeyValuePair<Vector3, int>>(pIVar11, (intptr_t)MethodInfo_Outline_c_SmoothNormals_b__47_0);
				pOVar10 = typeof(c).static_fields;
				pOVar10.__9__47_0 = __this_00;
			}
			source = Enumerable.Select<Vector3, KeyValuePair<Vector3, int>>((System_Collections_Generic_IEnumerable_TSource__o)pUVar9, (System_Func_TSource__int__TResult__o)__this_00);
			if ((typeof(c)._2).cctor_finished_or_no_cctor == 0) {
				pOVar10 = typeof(c).static_fields;
				__this_01 = pOVar10.__9__47_1;
			}
			else {
				pOVar10 = typeof(c).static_fields;
				__this_01 = pOVar10.__9__47_1;
			}
			if (__this_01 == null) {
				if (((typeof(c))._2).cctor_finished_or_no_cctor == 0) {
					pOVar10 = typeof(c).static_fields;
				}
				pIVar11 = (object)pOVar10.__9;
				__this_01 = new Func<KeyValuePair<Vector3, int>, Vector3>(pIVar11, (intptr_t)MethodInfo_Outline_c_SmoothNormals_b__47_1);
				pOVar10 = typeof(c).static_fields;
				pOVar10.__9__47_1 = __this_01;
			}
			pIVar11 = (object)Enumerable.GroupBy<KeyValuePair<Vector3, int>, Vector3>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_01);
			pUVar9 = mesh.normals;
			__this_02 = new List<Vector3>((IEnumerable<T>)pUVar9);
			if (pIVar11 != null) {
				pIVar2 = pIVar11.klass;
				uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
				pIVar11 = pIVar11.Dispose();
				local_38 = &local_80;
	joined_r0x05847b78: ;
				do {
					local_80 = pIVar11;
					if (pIVar11 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar11.klass;
					uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
					cVar6 = pIVar11.Dispose();
					pIVar11 = local_80;
					if (cVar6 == false) {
						if (local_80 == null) {
							return __this_02;
						}
						pIVar2 = local_80.klass;
						uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar14 == 0) goto label_0584837f;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar15 = 0;
						goto label_05848370;
					}
					if (local_80 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_80.klass;
					uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
					pIVar13 = pIVar11.Dispose();
					iVar8 = Enumerable.Count<KeyValuePair<Vector3, int>>((System_Collections_Generic_IEnumerable_TSource__o)pIVar13);
					pIVar11 = local_80;
					if (iVar8 != 1) {
						if (pIVar13 == null) {
							throw new NullReferenceException();
						}
						local_58._0_4_ = (Vector3.zeroVector).x;
						local_58._4_4_ = (Vector3.zeroVector).y;
						uStack_50 = 0;
						local_84 = (Vector3.zeroVector).z;
						pIVar2 = pIVar13.klass;
						uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
						local_90 = pIVar13.Dispose();
						local_60 = &local_90;
						local_94 = local_84;
						uStack_70 = uStack_50;
						local_78 = (byte[])local_58;
						if (local_90 == null) {
	label_05847ed1: ;
							throw new NullReferenceException();
						}
						do {
							pIVar11 = local_90;
							pIVar2 = local_90.klass;
							uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
							bVar7 = pIVar11.Dispose();
							pIVar11 = local_90;
							if (!bVar7) goto label_05847ee0;
							if (local_90 == null) {
								throw new NullReferenceException();
							}
							pIVar2 = local_90.klass;
							uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
							pIVar11.Dispose();
							if (__this_02 == null) {
								throw new NullReferenceException();
							}
							UVar17 = __this_02.get_Item(index);
							local_78._4_4_ = (float)local_78._4_4_ + UVar17.y;
							local_78._0_4_ = (float)local_78._0_4_ + UVar17.x;
							uStack_70._0_4_ = (float)uStack_70 + extraout_XMM0_Dc;
							uStack_70._4_4_ = uStack_70._4_4_ + extraout_XMM0_Dd;
							local_94 = local_94 + UVar17.z;
							if (local_90 == null) goto label_05847ed1;
						} while(true);
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
	label_05847ee0: ;
		if (local_90 != null) {
			pIVar2 = local_90.klass;
			uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
			pIVar11.Dispose();
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar16 = local_94 * local_94 +(float)local_78._4_4_ * (float)local_78._4_4_ + (float)local_78._0_4_ * (float)local_78._0_4_;
		if (fVar16 < 0.0) {
			fVar16 = sqrtf(fVar16);
		}
		else {
			fVar16 = SQRT(fVar16);
		}
		if (1e-05 < fVar16) {
			local_94 = local_94 / fVar16;
			auVar5._4_4_ = fVar16;
			auVar5._0_4_ = fVar16;
			auVar5._8_4_ = fVar16;
			auVar5._12_4_ = fVar16;
			_local_78 = divps(_local_78, auVar5);
		}
		else {
			local_94 = 0.0;
			_local_78 = ZEXT816(0);
		}
		pIVar2 = pIVar13.klass;
		uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
		pIVar11 = (object)pIVar13.Dispose();
		local_60 = &local_90;
		do {
			local_90 = pIVar11;
			if (pIVar11 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIVar11.klass;
			uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
			cVar6 = pIVar11.Dispose();
			pIVar13 = local_90;
			if (cVar6 == false) break;
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_90.klass;
			uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
			pIVar13.Dispose();
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			UVar17.z = local_94;
			UVar17.x = (float)local_78._0_4_;
			UVar17.y = (float)local_78._4_4_;
			__this_02.set_Item(index_00, UVar17);
			pIVar11 = local_90;
		} while(true);
		pIVar11 = local_80;
		if (local_90 != null) {
			pIVar2 = local_90.klass;
			uVar14 = (ulong)(pIVar2._2).interface_offsets_count;
			pIVar13.Dispose();
			pIVar11 = local_80;
		}
		goto joined_r0x05847b78;
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar14 * 0x10 != lVar15)) break;
	label_05848370: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar12 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar15);
				goto label_0584839d;
			}
		}
	label_0584837f: ;
	label_0584839d: ;
		pIVar11.Dispose();
		return __this_02;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x5748480", Offset = "0x5747480", VA = "0x5748480")]
	private void CombineSubmeshes(Mesh mesh, Material[] materials)
	{
		// Lifted from source/cpp/Outline.c (Outline$$CombineSubmeshes): clean
		int iVar1;
		Int32[] triangles;

		if (mesh == null) {
	label_05848500: ;
			throw new NullReferenceException();
		}
		iVar1 = mesh.subMeshCount;
		if (iVar1 != 1) {
			iVar1 = mesh.subMeshCount;
			if (materials == null) goto label_05848500;
			if (iVar1 <= (int)materials.Length) {
				iVar1 = mesh.subMeshCount;
				mesh.subMeshCount = iVar1 + 1;
				triangles = mesh.triangles;
				iVar1 = mesh.subMeshCount;
				mesh.SetTriangles(triangles, iVar1 + -1);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x57475E0", Offset = "0x57465E0", VA = "0x57475E0")]
	private void UpdateMaterialProperties()
	{
		// Lifted from source/cpp/Outline.c (Outline$$UpdateMaterialProperties): clean
		Material pUVar1;
		int fillZTest;
		int maskZTest;
		float width;

		pUVar1 = this.outlineFillMaterial;
		if (pUVar1 == null) {
	label_058476f7: ;
			throw new NullReferenceException();
		}
		pUVar1.SetColor("_OutlineColor", (Color)this.outlineColor);
		pUVar1 = this.outlineFillLightenMaterial;
		if (pUVar1 == null) goto label_058476f7;
		pUVar1.SetColor("_OutlineColor", (Color)this.outlineColor);
		switch(this.outlineMode) {
		case 0:
			width = this.outlineWidth;
			maskZTest = 8;
			break;
		case 1:
			width = this.outlineWidth;
			maskZTest = 8;
			fillZTest = 4;
			goto label_058476c3;
		case 2:
			width = this.outlineWidth;
			maskZTest = 8;
			goto label_058476be;
		case 3:
			width = this.outlineWidth;
			maskZTest = 4;
			break;
		case 4:
			width = 0.0;
			maskZTest = 4;
	label_058476be: ;
			fillZTest = 5;
			goto label_058476c3;
		case 5:
			this.ApplyOutlineState(8, 4, 5, this.outlineWidth);
			return;
		default: ;
			return;
		}
		fillZTest = 8;
	label_058476c3: ;
		this.ApplyOutlineState(maskZTest, fillZTest, 1, width);
		return;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5748510", Offset = "0x5747510", VA = "0x5748510")]
	private void ApplyOutlineState(CompareFunction maskZTest, CompareFunction fillZTest, CompareFunction fillLightenZTest, float width)
	{
		// Lifted from source/cpp/Outline.c (Outline$$ApplyOutlineState): clean
		Material pUVar1;

		pUVar1 = this.outlineMaskMaterial;
		if (pUVar1 != null) {
			pUVar1.SetFloat("_ZTest", (float)maskZTest);
			pUVar1 = this.outlineFillMaterial;
			if (pUVar1 != null) {
				pUVar1.SetFloat("_ZTest", (float)fillZTest);
				pUVar1 = this.outlineFillMaterial;
				if (pUVar1 != null) {
					pUVar1.SetFloat("_OutlineWidth", width);
					pUVar1 = this.outlineFillLightenMaterial;
					if (pUVar1 != null) {
						pUVar1.SetFloat("_ZTest", (float)fillLightenZTest);
						pUVar1 = this.outlineFillLightenMaterial;
						if (pUVar1 != null) {
							pUVar1.SetFloat("_OutlineWidth", width);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5748600", Offset = "0x5747600", VA = "0x5748600")]
	public Outline()
	{
		// Lifted from source/cpp/Outline.c (Outline$$.ctor): clean
		List<Mesh> __this_00;
		List<Outline.ListVector3> __this_01;
		Material[] pUVar1;
		List<string> __this_02;

		this.outlineColor.r = 1.0;
		this.outlineColor.g = 1.0;
		this.outlineColor.b = 1.0;
		this.outlineColor.a = 1.0;
		this.outlineWidth = 2.0;
		__this_00 = new List<Mesh>();
		this.bakeKeys = __this_00;
		__this_01 = new List<Outline.ListVector3>();
		this.bakeValues = __this_01;
		pUVar1 = (Material[])new Material[0];
		this.outlineMaterials = pUVar1;
		__this_02 = new List<string>();
		this._namesToIgnore = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Outline.c.

	// Outline$$.cctor: clean
	static Outline()
	{
		HashSet<Mesh> __this;
		Stack<int> pSVar2;

		__this = new HashSet<Mesh>();
		Outline.registeredMeshes = __this;
		pSVar2 = Outline.CreateQueueBlocks();
		Outline.freeQueueBlocks = pSVar2;
		return;
	}

	// Outline$$<FindRenderers>b__39_0: 3 lines keep C-only constructs
	private bool FindRenderers_b__39_0(Renderer e)
	{
		byte bVar1;
		byte bVar2;
		Renderer pUVar3;
		Renderer pUVar4;
		List<string> source;
		bool bVar5;
		c__DisplayClass39_0 __this_00;
		Func<string, bool> __this_01;

		__this_00 = new c__DisplayClass39_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.e = e;
		pUVar3 = __this_00.e;
		if (pUVar3 == null) {
			return false;
		}
		pUVar4 = pUVar3.klass;
		bVar1 = (pUVar4._2).typeHierarchyDepth;
		bVar2 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pUVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(MeshRenderer))) {
			bVar2 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
			if (bVar1 < bVar2) {
				return false;
			}
			if ((pUVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(SkinnedMeshRenderer)) {
				return false;
			}
		}
		source = this._namesToIgnore;
		__this_01 = new Func<string, bool>((object)__this_00, (intptr_t)MethodInfo_Outline_c__DisplayClass39_0_FindRenderers_b__1);
		bVar5 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
		return !bVar5;
	}

	// Outline.<>c__DisplayClass39_0$$.ctor: clean
	private void c__DisplayClass39_0__ctor()
	{
		base();
		return;
	}

	// Outline$$<OnEnable>b__40_0: 4 lines keep C-only constructs
	private bool OnEnable_b__40_0(Renderer e)
	{
		int piVar1;
		uint uVar2;
		Material item;
		Object[] pSVar3;
		bool bVar5;
		Material[] pUVar6;
		System_Collections_Generic_List_TSource__o __this_00;
		ulong uVar7;
		ulong uVar8;

		bVar5 = ((bool)(Object)e);
		if (!bVar5) {
	label_05848b1a: ;
			bVar5 = ((bool)(Object)e);
			return !bVar5;
		}
		if (e != null) {
			pUVar6 = e.sharedMaterials;
			__this_00 = Enumerable.ToList<Material>((System_Collections_Generic_IEnumerable_TSource__o)pUVar6);
			pUVar6 = this.outlineMaterials;
			if ((pUVar6 != null) &&(__this_00 != null)) {
				if (0 < (int)pUVar6.Length) {
					uVar7 = pUVar6.Length & 0xffffffff;
					uVar8 = 0;
					do {
						if (uVar7 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						item = pUVar6[uVar8];
						bVar5 = __this_00.Contains((object)item);
						if (!bVar5) {
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this_00._items;
							if (pSVar3 == null) goto label_05848b4e;
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this_00._size = uVar2 + 1;
								pSVar3[(int)uVar2] = (object)item;
							}
							else {
								__this_00.AddWithResize((object)item);
							}
						}
						uVar8 = uVar8 + 1;
						uVar2 = (uint)pUVar6.Length;
						uVar7 = (ulong)uVar2;
					} while ((long)uVar8 < (long)(int)uVar2);
					if (__this_00 == null) goto label_05848b4e;
				}
				pUVar6 = (Material[])__this_00.ToArray();
				e.materials = pUVar6;
				goto label_05848b1a;
			}
		}
	label_05848b4e: ;
		throw new NullReferenceException();
	}

	// Outline$$<OnDisable>b__43_0: 2 lines keep C-only constructs
	private bool OnDisable_b__43_0(Renderer e)
	{
		uint uVar1;
		bool bVar2;
		Material[] pUVar3;
		System_Collections_Generic_List_TSource__o __this_00;
		ulong uVar4;
		ulong uVar5;

		bVar2 = ((bool)(Object)e);
		if (!bVar2) {
	label_05848c7b: ;
			bVar2 = ((bool)(Object)e);
			return !bVar2;
		}
		if (e != null) {
			pUVar3 = e.sharedMaterials;
			__this_00 = Enumerable.ToList<Material>((System_Collections_Generic_IEnumerable_TSource__o)pUVar3);
			pUVar3 = this.outlineMaterials;
			if ((pUVar3 != null) &&(__this_00 != null)) {
				if (0 < (int)pUVar3.Length) {
					uVar4 = pUVar3.Length & 0xffffffff;
					uVar5 = 0;
					do {
						if (uVar4 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						__this_00.Remove((object)pUVar3[uVar5]);
						uVar5 = uVar5 + 1;
						uVar1 = (uint)pUVar3.Length;
						uVar4 = (ulong)uVar1;
					} while ((long)uVar5 < (long)(int)uVar1);
					if (__this_00 == null) goto label_05848caf;
				}
				pUVar3 = (Material[])__this_00.ToArray();
				e.materials = pUVar3;
				goto label_05848c7b;
			}
		}
	label_05848caf: ;
		throw new NullReferenceException();
	}

	// Outline$$<LoadSmoothNormals>b__46_0: 4 lines keep C-only constructs
	private bool LoadSmoothNormals_b__46_0(MeshFilter e)
	{
		Object exists;
		List<string> source;
		bool bVar1;
		bool bVar2;
		c__DisplayClass46_0 __this_00;
		Func<string, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o source_00;

		if (Il2CppMethodInitialized_07545014 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass46_0_LoadSmoothNormals_b__2) ;
			Il2CppMethodInitialized_07545014 = true;
		}
		__this_00 = new c__DisplayClass46_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.e = e;
		exists = (Object)__this_00.e;
		bVar2 = false;
		bVar1 = ((bool)exists);
		if (!bVar1) {
			source = this._namesToIgnore;
			__this_01 = new Func<string, bool>((object)__this_00, (intptr_t)MethodInfo_Outline_c__DisplayClass46_0_LoadSmoothNormals_b__2);
			source_00 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
			bVar2 = Enumerable.Any<string>(source_00);
			bVar2 = !bVar2;
		}
		return bVar2;
	}

	// Outline.<>c__DisplayClass46_0$$.ctor: clean
	private void c__DisplayClass46_0__ctor()
	{
		base();
		return;
	}

	// Outline$$<LoadSmoothNormals>b__46_1: 4 lines keep C-only constructs
	private bool LoadSmoothNormals_b__46_1(SkinnedMeshRenderer e)
	{
		Object exists;
		List<string> source;
		bool bVar1;
		bool bVar2;
		c__DisplayClass46_1 __this_00;
		Func<string, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o source_00;

		if (Il2CppMethodInitialized_07545015 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Outline_c__DisplayClass46_1_LoadSmoothNormals_b__3) ;
			Il2CppMethodInitialized_07545015 = true;
		}
		__this_00 = new c__DisplayClass46_1();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.e = e;
		exists = (Object)__this_00.e;
		bVar2 = false;
		bVar1 = ((bool)exists);
		if (!bVar1) {
			source = this._namesToIgnore;
			__this_01 = new Func<string, bool>((object)__this_00, (intptr_t)MethodInfo_Outline_c__DisplayClass46_1_LoadSmoothNormals_b__3);
			source_00 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
			bVar2 = Enumerable.Any<string>(source_00);
			bVar2 = !bVar2;
		}
		return bVar2;
	}

	// Outline.<>c__DisplayClass46_1$$.ctor: clean
	private void c__DisplayClass46_1__ctor()
	{
		base();
		return;
	}

	// Outline.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new c();
		c.__9 = (c)__this;
		return;
	}

	// Outline.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Outline.<>c$$<SmoothNormals>b__47_0: 9 lines keep C-only constructs
	private System_Collections_Generic_KeyValuePair_Vector3__int__o c__SmoothNormals_b__47_0(Vector3 vertex, int index)
	{
		System_Collections_Generic_KeyValuePair_Vector3__int__Fields SVar1;
		float fVar2;
		float fVar3;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 key;
		System_Collections_Generic_KeyValuePair_Vector3__int__o local_28;
		byte[] local_18 = new byte[16];

		key.z = vertex.z;
		fVar2 = vertex.x;
		fVar3 = vertex.y;
		if (g_data_07545017 == false) {
			local_18._8_4_ = in_XMM0_Dc;
			local_18._0_8_ = vertex._0_8_;
			local_18._12_4_ = in_XMM0_Dd;
			g_data_07545017 = true;
			fVar2 = (float)local_18._0_4_;
			fVar3 = (float)local_18._4_4_;
		}
		local_28.key.x = 0.0;
		local_28.key.y = 0.0;
		local_28.key.z = 0.0;
		local_28.value = 0;
		key.y = fVar3;
		key.x = fVar2;
		local_28 = new KeyValuePair<Vector3, int>(key, index);
		SVar1.key.z = local_28.key.z;
		SVar1.value = local_28.value;
		SVar1.key.x = local_28.key.x;
		SVar1.key.y = local_28.key.y;
		return (System_Collections_Generic_KeyValuePair_Vector3__int__o)SVar1;
	}

	// Outline.<>c$$<SmoothNormals>b__47_1: clean
	private Vector3 c__SmoothNormals_b__47_1(System_Collections_Generic_KeyValuePair_Vector3__int__o pair)
	{
		return (Vector3)pair.key;
	}

	// Outline.<>c__DisplayClass39_0$$<FindRenderers>b__1: clean
	private bool c__DisplayClass39_0__FindRenderers_b__1(String name)
	{
		Object __this_00;
		bool bVar1;
		String __this_01;

		__this_00 = (Object)this.e;
		if (__this_00 != null) {
			__this_01 = __this_00.name;
			if (__this_01 != null) {
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// Outline.<>c__DisplayClass46_0$$<LoadSmoothNormals>b__2: clean
	private bool c__DisplayClass46_0__LoadSmoothNormals_b__2(String a)
	{
		Object __this_00;
		bool bVar1;
		String __this_01;

		__this_00 = (Object)this.e;
		if (__this_00 != null) {
			__this_01 = __this_00.name;
			if (__this_01 != null) {
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// Outline.<>c__DisplayClass46_1$$<LoadSmoothNormals>b__3: clean
	private bool c__DisplayClass46_1__LoadSmoothNormals_b__3(String a)
	{
		Object __this_00;
		bool bVar1;
		String __this_01;

		__this_00 = (Object)this.e;
		if (__this_00 != null) {
			__this_01 = __this_00.name;
			if (__this_01 != null) {
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}
}
