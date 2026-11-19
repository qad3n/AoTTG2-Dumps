// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MinimapCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/MinimapCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008F3")]
internal class MinimapCamera : MonoBehaviour
{
	[Token(Token = "0x20008F4")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002D7E")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D texture;

		[Token(Token = "0x4002D7F")]
		[FieldOffset(Offset = "0x28")]
		public MinimapCamera _003C_003E4__this;

		[Token(Token = "0x4002D80")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4002D81")]
		[FieldOffset(Offset = "0x3C")]
		public float height;

		[Token(Token = "0x4002D82")]
		[FieldOffset(Offset = "0x40")]
		public bool minimap;

		[Token(Token = "0x17000ED0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005540")]
			[Address(RVA = "0x5CD9180", Offset = "0x5CD8180", VA = "0x5CD9180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000ED1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005542")]
			[Address(RVA = "0x5CD91D0", Offset = "0x5CD81D0", VA = "0x5CD91D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600553D")]
		[Address(RVA = "0x5CD8B30", Offset = "0x5CD7B30", VA = "0x5CD8B30")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__13(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600553E")]
		[Address(RVA = "0x5CD8F60", Offset = "0x5CD7F60", VA = "0x5CD8F60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600553F")]
		[Address(RVA = "0x5CD8F70", Offset = "0x5CD7F70", VA = "0x5CD8F70", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$MoveNext): 1 lines keep C-only constructs
			uint uVar1;
			MinimapCamera __this_00;
			Texture2D pUVar2;
			bool bVar3;
			object pIVar4;
			uint method_00;

			uVar1 = this.__1__state;
			if (4 < uVar1) {
				return false;
			}
			__this_00 = this.__4__this;
			method_00 = &switchD_05dd8fbf::switchdataD_010a5fe8;
			switch(uVar1) {
			case 0:
				this.__1__state = -1;
				pUVar2 = this.texture;
				bVar3 = ((Object)pUVar2 == null);
				if (!bVar3) {
					if (__this_00 == null) goto label_05dd917a;
					bVar3 = __this_00.RTImage((Vector3)this.position, this.height, this.texture, this.minimap);
					if (bVar3) {
						pIVar4 = new WaitForEndOfFrame();
						this.__2__current = pIVar4;
						this.__1__state = 1;
						return true;
					}
					goto label_05dd916d;
				}
				break;
			case 1:
				this.__1__state = -1;
				pIVar4 = new WaitForEndOfFrame();
				this.__2__current = pIVar4;
				this.__1__state = 2;
				return true;
			case 2:
				this.__1__state = -1;
				pUVar2 = this.texture;
				bVar3 = ((Object)pUVar2 == null);
				if (!bVar3) {
					pUVar2 = this.texture;
					if (pUVar2 != null) {
						pUVar2.Apply();
						pIVar4 = new WaitForEndOfFrame();
						this.__2__current = pIVar4;
						this.__1__state = 3;
						return true;
					}
					goto label_05dd917a;
				}
				break;
			case 3:
				this.__1__state = -1;
				pIVar4 = new WaitForEndOfFrame();
				this.__2__current = pIVar4;
				this.__1__state = 4;
				return true;
			case 4:
				this.__1__state = -1;
			}
			if (__this_00 == null) {
		label_05dd917a: ;
				throw new NullReferenceException();
			}
		label_05dd916d: ;
			__this_00._takingSnapshot = false;
			return false;
		}

		[Token(Token = "0x6005541")]
		[Address(RVA = "0x5CD9190", Offset = "0x5CD8190", VA = "0x5CD9190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002D74")]
	[FieldOffset(Offset = "0x20")]
	private Transform _cameraTransform;

	[Token(Token = "0x4002D75")]
	[FieldOffset(Offset = "0x28")]
	private Camera _camera;

	[Token(Token = "0x4002D76")]
	[FieldOffset(Offset = "0x30")]
	private MinimapCameraRender _cameraRender;

	[Token(Token = "0x4002D77")]
	[FieldOffset(Offset = "0x38")]
	private bool _takingSnapshot;

	[Token(Token = "0x4002D78")]
	[FieldOffset(Offset = "0x40")]
	private RenderTexture _minimapRenderTexture;

	[Token(Token = "0x4002D79")]
	[FieldOffset(Offset = "0x48")]
	private RenderTexture _mapRenderTexture;

	[Token(Token = "0x4002D7A")]
	[FieldOffset(Offset = "0x0")]
	public static int MinimapSize;

	[Token(Token = "0x4002D7B")]
	[FieldOffset(Offset = "0x4")]
	public static int MapSize;

	[Token(Token = "0x6005533")]
	[Address(RVA = "0x5CD8230", Offset = "0x5CD7230", VA = "0x5CD8230")]
	public void Awake()
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$Awake): clean
		String path;
		GameObject __this_00;
		MinimapCameraRender pCVar1;
		Transform pUVar2;
		Camera pUVar3;
		RenderTexture pUVar4;

		path = ResourcePaths.UI;
		__this_00 = ResourceManager.InstantiateAsset<GameObject>(path, "Minimap/Prefabs/MinimapCamera", false, false);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this_00.AddComponent<MinimapCameraRender>();
		this._cameraRender = pCVar1;
		pUVar2 = __this_00.transform;
		this._cameraTransform = pUVar2;
		pUVar3 = __this_00.GetComponent<Camera>();
		this._camera = pUVar3;
		__this_00.SetActive(false);
		pUVar4 = ResourceManager.InstantiateAsset<RenderTexture>(ResourcePaths.UI, "Minimap/Textures/MinimapRenderTexture", false, false);
		this._minimapRenderTexture = pUVar4;
		pUVar4 = ResourceManager.InstantiateAsset<RenderTexture>(ResourcePaths.UI, "Minimap/Textures/MapRenderTexture", false, false);
		this._mapRenderTexture = pUVar4;
		return;
	}

	[Token(Token = "0x6005534")]
	[Address(RVA = "0x5CD8410", Offset = "0x5CD7410", VA = "0x5CD8410")]
	public bool Ready()
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$Ready): clean
		return this._takingSnapshot == false;
	}

	[Token(Token = "0x6005535")]
	[Address(RVA = "0x5CD8420", Offset = "0x5CD7420", VA = "0x5CD8420")]
	public RenderTexture RenderMap(Vector3 position, float height)
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$RenderMap): clean
		bool bVar1;
		RenderTexture pUVar2;

		if (this._takingSnapshot == false) {
			bVar1 = this.RTImage(position, height, null, false) ;
			if (bVar1) {
			}
		}
		else {
		}
		return pUVar2;
	}

	[Token(Token = "0x6005536")]
	[Address(RVA = "0x5CD8850", Offset = "0x5CD7850", VA = "0x5CD8850")]
	public void TakeSnapshot(Vector3 position, float height, Texture2D texture, bool minimap, bool immediate = false)
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$TakeSnapshot): clean
		bool bVar1;
		MinimapCamera.d__13<TakeSnapshotCoroutine> __this_00;

		if (this._takingSnapshot == false) {
			if (!immediate) {
				this._takingSnapshot = true;
				__this_00 = new MinimapCamera.d__13<TakeSnapshotCoroutine>();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				__this_00.position.x = position.x;
				__this_00.position.y = position.y;
				__this_00.position.z = position.z;
				__this_00.height = height;
				__this_00.texture = texture;
				__this_00.minimap = minimap;
				this.StartCoroutine((IEnumerator)__this_00);
				return;
			}
			bVar1 = ((Object)texture == null);
			if (!bVar1) {
				bVar1 = this.RTImage(position, height, texture, minimap);
				if (bVar1) {
					if (texture == null) {
						throw new NullReferenceException();
					}
					texture.Apply();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6005537")]
	[Address(RVA = "0x5CD89C0", Offset = "0x5CD79C0", VA = "0x5CD89C0")]
	private void TakeSnapshotImmediate(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$TakeSnapshotImmediate): clean
		bool bVar1;

		bVar1 = ((Object)texture == null);
		if (!bVar1) {
			bVar1 = this.RTImage(position, height, texture, minimap);
			if (bVar1) {
				if (texture == null) {
					throw new NullReferenceException();
				}
				texture.Apply();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6005538")]
	[Address(RVA = "0x5CD8A70", Offset = "0x5CD7A70", VA = "0x5CD8A70")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__13))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$TakeSnapshotCoroutine): clean
		MinimapCamera.d__13<TakeSnapshotCoroutine> __this_00;

		__this_00 = new MinimapCamera.d__13<TakeSnapshotCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		__this_00.height = height;
		__this_00.texture = texture;
		__this_00.minimap = minimap;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005539")]
	[Address(RVA = "0x5CD8460", Offset = "0x5CD7460", VA = "0x5CD8460")]
	private bool RTImage(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$RTImage): 20 lines keep C-only constructs
		Transform pUVar1;
		MinimapCameraRender pCVar2;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		GameObject pUVar5;
		RenderTexture value;
		int iVar6;
		Camera pUVar8;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Quaternion value_00;
		Vector3 value_01;
		MinimapCamera local_60;
		float local_54;
		RenderTexture local_50;
		float local_44;
		byte[] local_40 = new byte[16];
		MinimapCamera* local_30;
		byte[] local_28 = new byte[16];

		local_44 = position.z;
		local_28._8_4_ = in_XMM0_Dc;
		local_28._0_8_ = position._0_8_;
		local_28._12_4_ = in_XMM0_Dd;
		local_60 = this;
		local_54 = height;
		local_50 = null;
		pUVar1 = this._cameraTransform;
		if ((pUVar1 == null) ||(pUVar5 = pUVar1.gameObject, pUVar5 == null)) goto label_05dd872c;
		pUVar5.SetActive(true);
		pUVar8 = this._camera;
		if (pUVar8 == null) goto label_05dd872c;
		pUVar8.orthographicSize = local_54 * 0.5;
		pUVar8 = this._camera;
		if (pUVar8 == null) goto label_05dd872c;
		pUVar8.farClipPlane = local_54 + 1000.0;
		pUVar1 = this._cameraTransform;
		if (pUVar1 == null) goto label_05dd872c;
		value_01.z = local_44;
		value_01.x = (float)local_28._0_4_;
		value_01.y = (float)local_28._4_4_;
		pUVar1.position = value_01;
		pUVar1 = this._cameraTransform;
		local_40._0_4_ = 1.5707964;
		local_40._4_4_ = 0.0;
		local_40._8_8_ = local_40._8_8_ & 0xffffffff00000000;
		value_00 = Quaternion.Internal_FromEulerRad((Vector3)local_40);
		if (pUVar1 == null) goto label_05dd872c;
		pUVar1.rotation = value_00;
		pCVar2 = local_60._cameraRender;
		if (pCVar2 == null) goto label_05dd872c;
		pCVar2.BeginRender();
		local_50 = RenderTexture.active;
		local_40._0_4_ = 0.0;
		local_40._4_4_ = 0.0;
		local_40._8_8_ = &local_50;
		local_30 = &local_60;
		if ((typeof(MinimapCamera)._2).cctor_finished_or_no_cctor == 0) {
			pUVar8 = local_60._camera;
			if (!minimap) goto label_05dd8617;
	label_05dd85df: ;
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			iVar6 = MinimapCamera.MinimapSize;
			pUVar8.targetTexture = local_60._minimapRenderTexture;
		}
		else {
			pUVar8 = local_60._camera;
			if (minimap) goto label_05dd85df;
	label_05dd8617: ;
			if (pUVar8 == null) {
				throw new NullReferenceException();
			}
			pUVar8.targetTexture = local_60._mapRenderTexture;
			iVar6 = MinimapCamera.MapSize;
		}
		pUVar8 = local_60._camera;
		if (pUVar8 == null) {
			throw new NullReferenceException();
		}
		value = pUVar8.targetTexture;
		RenderTexture.active = value;
		pUVar8 = local_60._camera;
		if (pUVar8 == null) {
			throw new NullReferenceException();
		}
		pUVar8.Render();
		bVar4 = ((Object)texture != null);
		if (bVar4) {
			if (texture == null) {
				throw new NullReferenceException();
			}
			auVar3._4_4_ = (float)iVar6;
			auVar3._0_4_ = (float)iVar6;
			auVar3._8_8_ = 0;
			texture.ReadPixels((Rect)(auVar3 << 0x40), 0, 0);
		}
		RenderTexture.active = local_50;
		pCVar2 = local_60._cameraRender;
		if (pCVar2 != null) {
			pCVar2.EndRender();
			pUVar1 = local_60._cameraTransform;
			if ((pUVar1 != null) &&(pUVar5 = pUVar1.gameObject, pUVar5 != null)) {
				pUVar5.SetActive(false);
				return true;
			}
		}
	label_05dd872c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600553A")]
	[Address(RVA = "0x5CD8DF0", Offset = "0x5CD7DF0", VA = "0x5CD8DF0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$OnDestroy): clean
		Transform pUVar1;
		RenderTexture pUVar2;
		bool bVar3;
		Object obj;

		pUVar1 = this._cameraTransform;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = this._cameraTransform;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			obj = (Object)pUVar1.gameObject;
			Object.Destroy(obj);
		}
		pUVar2 = this._minimapRenderTexture;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._minimapRenderTexture;
			Object.Destroy((Object)pUVar2);
		}
		pUVar2 = this._mapRenderTexture;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._mapRenderTexture;
			Object.Destroy((Object)pUVar2);
			return;
		}
		return;
	}

	[Token(Token = "0x600553B")]
	[Address(RVA = "0x5CD8F10", Offset = "0x5CD7F10", VA = "0x5CD8F10")]
	public MinimapCamera()
	{
		// Lifted from source/cpp/Cameras/MinimapCamera.c (Cameras.MinimapCamera$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Cameras/MinimapCamera.c.

	// Cameras.MinimapCamera$$.cctor: clean
	static MinimapCamera()
	{

		MinimapCamera.MinimapSize = 300;
		MinimapCamera.MapSize = 900;
		return;
	}
}
