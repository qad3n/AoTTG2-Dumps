// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MapEditorCamera
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/MapEditorCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MapEditorCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008F2")]
internal class MapEditorCamera : BaseCamera
{
	[Token(Token = "0x4002D6B")]
	[FieldOffset(Offset = "0x38")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4002D6C")]
	[FieldOffset(Offset = "0x40")]
	private MapEditorSettings _settings;

	[Token(Token = "0x4002D6D")]
	[FieldOffset(Offset = "0x48")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002D6E")]
	[FieldOffset(Offset = "0x50")]
	private Camera _uiCamera;

	[Token(Token = "0x4002D6F")]
	[FieldOffset(Offset = "0x58")]
	private bool _wasRotating;

	[Token(Token = "0x4002D70")]
	[FieldOffset(Offset = "0x59")]
	private bool _startDrag;

	[Token(Token = "0x4002D71")]
	[FieldOffset(Offset = "0x5C")]
	private Vector3 _lastDragPosition;

	[Token(Token = "0x4002D72")]
	private const float MaxDeltaTime = 1f / 30f;

	[Token(Token = "0x4002D73")]
	private const float ReferenceScreenHeight = 1080f;

	[Token(Token = "0x6005523")]
	[Address(RVA = "0x5CD5CD0", Offset = "0x5CD4CD0", VA = "0x5CD5CD0")]
	private static float GetClampedDeltaTime()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$GetClampedDeltaTime): clean
		float fVar1;

		fVar1 = Time.deltaTime;
		if (0.033333335 <= fVar1) {
			fVar1 = 0.033333335;
		}
		return fVar1;
	}

	[Token(Token = "0x6005524")]
	[Address(RVA = "0x5CD5CF0", Offset = "0x5CD4CF0", VA = "0x5CD5CF0")]
	private static float GetScreenScale()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$GetScreenScale): clean
		int iVar1;
		float fVar2;

		iVar1 = Screen.height;
		fVar2 = 1.0;
		if (1.0 <= (float)iVar1) {
			fVar2 = (float)iVar1;
		}
		return fVar2 / 1080.0;
	}

	[Token(Token = "0x6005525")]
	[Address(RVA = "0x5CD5D20", Offset = "0x5CD4D20", VA = "0x5CD5D20", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$Awake): clean
		InputSettings pSVar1;
		MapEditorSettings pSVar2;
		IntSetting pSVar3;
		Camera __this_00;
		UniversalAdditionalCameraData __this_01;

		this.Awake();
		__this_01 = CameraExtensions.GetUniversalAdditionalCameraData(this.Camera);
		if (__this_01 != null) {
			__this_01.requiresDepthTexture = true;
			pSVar1 = SettingsManager.InputSettings;
			if (pSVar1 != null) {
				this._input = pSVar1.MapEditor;
				this._settings = SettingsManager.MapEditorSettings;
				pSVar2 = SettingsManager.MapEditorSettings;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.RenderDistance, pSVar3 != null)) &&(__this_00 = this.Camera, __this_00 != null)) {
					__this_00.farClipPlane = (float)pSVar3._value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005526")]
	[Address(RVA = "0x5CD5E20", Offset = "0x5CD4E20", VA = "0x5CD5E20")]
	public void ApplyGraphicsSettings()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$ApplyGraphicsSettings): clean
		MapEditorSettings pSVar1;
		IntSetting pSVar2;
		Camera __this_00;

		pSVar1 = SettingsManager.MapEditorSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.RenderDistance, pSVar2 == null)) ||(__this_00 = this.Camera, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.farClipPlane = (float)pSVar2._value;
		return;
	}

	[Token(Token = "0x6005527")]
	[Address(RVA = "0x5CD5E90", Offset = "0x5CD4E90", VA = "0x5CD5E90")]
	protected void CreateUICamera()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$CreateUICamera): clean
		return;
	}

	[Token(Token = "0x6005528")]
	[Address(RVA = "0x5CD5EA0", Offset = "0x5CD4EA0", VA = "0x5CD5EA0")]
	protected void Update()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$Update): clean
		MapEditorMenu pUVar1;
		bool bVar2;

		bVar2 = MobileLayoutEditorOverlay.IsOpen;
		if (!bVar2) {
			pUVar1 = this._menu;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = this._menu;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				if (pUVar1.IsInputFocused == false) {
					this.UpdateMovement();
				}
				this.UpdateRotation();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6005529")]
	[Address(RVA = "0x5CD5F30", Offset = "0x5CD4F30", VA = "0x5CD5F30")]
	private void UpdateMovement()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$UpdateMovement): 9 lines keep C-only constructs
		float speed;
		MapEditorInputSettings pSVar1;
		KeybindSetting pSVar2;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		MapEditorSettings pSVar6;
		FloatSetting pSVar7;
		Camera pUVar8;
		bool bVar9;
		int iVar10;
		float fVar11;
		Vector3 UVar12;
		Vector3 value;
		float local_4c;
		ulong local_48;

		if (Il2CppMethodInitialized_0754822f == false) {
			Il2CppMethodInitialized_0754822f = true;
			if (Il2CppMethodInitialized_0753e4b6 == false) goto label_05dd5f76;
	label_05dd5f4c: ;
			pSVar1 = this._input;
		}
		else {
			if (Il2CppMethodInitialized_0753e4b6 != false) goto label_05dd5f4c;
	label_05dd5f76: ;
			Il2CppMethodInitialized_0753e4b6 = true;
			pSVar1 = this._input;
		}
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.SaveMap, pSVar2 == null)) goto label_05dd6409;
		local_48._0_4_ = (Vector3.zeroVector).x;
		local_48._4_4_ = (Vector3.zeroVector).y;
		local_4c = (Vector3.zeroVector).z;
		bVar9 = pSVar2.GetKey(false);
		if (bVar9) {
			return;
		}
		pSVar1 = this._input;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Forward, pSVar2 == null)) goto label_05dd6409;
		bVar9 = pSVar2.GetKey(false);
		if (bVar9) {
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd6409;
			UVar12 = pUVar5.forward;
			local_48 = CONCAT44(local_48._4_4_ + UVar12.y, (float)local_48 + UVar12.x);
			local_4c = local_4c + UVar12.z;
		}
		else {
			pSVar1 = this._input;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Back, pSVar2 == null)) goto label_05dd6409;
			bVar9 = pSVar2.GetKey(false);
			if (bVar9) {
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd6409;
				UVar12 = pUVar5.forward;
				local_48 = CONCAT44(local_48._4_4_ - UVar12.y, (float)local_48 - UVar12.x);
				local_4c = local_4c - UVar12.z;
			}
		}
		pSVar1 = this._input;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Right, pSVar2 == null)) goto label_05dd6409;
		bVar9 = pSVar2.GetKey(false);
		if (bVar9) {
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd6409;
			UVar12 = pUVar5.right;
			local_48 = CONCAT44(local_48._4_4_ + UVar12.y, (float)local_48 + UVar12.x);
			local_4c = local_4c + UVar12.z;
		}
		else {
			pSVar1 = this._input;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Left, pSVar2 == null)) goto label_05dd6409;
			bVar9 = pSVar2.GetKey(false);
			if (bVar9) {
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd6409;
				UVar12 = pUVar5.right;
				local_48 = CONCAT44(local_48._4_4_ - UVar12.y, (float)local_48 - UVar12.x);
				local_4c = local_4c - UVar12.z;
			}
		}
		pSVar1 = this._input;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Up, pSVar2 == null)) goto label_05dd6409;
		bVar9 = pSVar2.GetKey(false);
		if (bVar9) {
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd6409;
			UVar12 = pUVar5.up;
			local_48 = CONCAT44(local_48._4_4_ + UVar12.y, (float)local_48 + UVar12.x);
			local_4c = local_4c + UVar12.z;
		}
		else {
			pSVar1 = this._input;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Down, pSVar2 == null)) goto label_05dd6409;
			bVar9 = pSVar2.GetKey(false);
			if (bVar9) {
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05dd6409;
				UVar12 = pUVar5.up;
				local_48 = CONCAT44(local_48._4_4_ - UVar12.y, (float)local_48 - UVar12.x);
				local_4c = local_4c - UVar12.z;
			}
		}
		pSVar6 = this._settings;
		if ((((pSVar6 == null) ||(pSVar7 = pSVar6.CameraMoveSpeed, pSVar7 == null)) ||(pSVar1 = this._input, pSVar1 == null)) ||(pSVar2 = pSVar1.Slow, pSVar2 == null)) goto label_05dd6409;
		speed = pSVar7._value;
		bVar9 = pSVar2.GetKey(false);
		if (bVar9) {
			pSVar6 = this._settings;
			if (pSVar6 == null) goto label_05dd6409;
			pSVar7 = pSVar6.CameraSlowMoveSpeed;
	joined_r0x05dd62cf: ;
			if (pSVar7 == null) goto label_05dd6409;
			speed = pSVar7._value;
		}
		else {
			pSVar1 = this._input;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Fast, pSVar2 == null)) goto label_05dd6409;
			bVar9 = pSVar2.GetKey(false);
			if (bVar9) {
				pSVar6 = this._settings;
				if (pSVar6 == null) goto label_05dd6409;
				pSVar7 = pSVar6.CameraFastMoveSpeed;
				goto joined_r0x05dd62cf;
			}
		}
		fVar11 = Time.deltaTime;
		pUVar4 = this.Cache;
		if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
			if (0.033333335 <= fVar11) {
				fVar11 = 0.033333335;
			}
			UVar12 = pUVar5.position;
			value.x = UVar12.x + speed * (float)local_48 * fVar11;
			value.y = UVar12.y + speed * local_48._4_4_ * fVar11;
			value.z = UVar12.z + local_4c * fVar11 * speed;
			pUVar5.position = value;
			this.UpdateDragMovement(speed);
			this.UpdateZoomMovement(speed);
			pSVar1 = this._input;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.ToggleOrthographic, pSVar2 != null)) {
				bVar9 = pSVar2.GetKeyDown(false);
				if (!bVar9) {
					return;
				}
				pUVar8 = this.Camera;
				if (pUVar8 != null) {
					bVar9 = pUVar8.orthographic;
					pUVar8.orthographic = !bVar9;
					pUVar8 = this.Camera;
					if (pUVar8 != null) {
						bVar9 = pUVar8.orthographic;
						if (!bVar9) {
							return;
						}
						pUVar8 = this.Camera;
						iVar10 = Screen.height;
						if (pUVar8 != null) {
							pUVar8.orthographicSize = (float)iVar10 * 0.25;
							return;
						}
					}
				}
			}
		}
	label_05dd6409: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600552A")]
	[Address(RVA = "0x5CD67D0", Offset = "0x5CD57D0", VA = "0x5CD67D0")]
	private void UpdateDragMovement(float speed)
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$UpdateDragMovement): clean
		uint uVar1;
		uint uVar2;
		MapEditorInputSettings pSVar3;
		KeybindSetting pSVar4;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		Transform pUVar7;
		bool bVar8;
		int iVar9;
		float fVar10;
		float fVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		Vector3 value;
		Vector3 value_00;
		float local_98;
		float fStack_94;
		float local_68;
		float fStack_64;

		pSVar3 = this._input;
		if ((pSVar3 != null) &&(pSVar4 = pSVar3.Pan, pSVar4 != null)) {
			bVar8 = pSVar4.GetKeyDown(false);
			if (bVar8) {
				this._startDrag = true;
				UVar12 = Input.mousePosition;
				this._lastDragPosition.x = UVar12.x;
				this._lastDragPosition.y = UVar12.y;
				this._lastDragPosition.z = UVar12.z;
				return;
			}
			pSVar3 = this._input;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.Pan, pSVar4 != null)) {
				bVar8 = pSVar4.GetKey(false);
				if (bVar8) {
					if (this._startDrag == false) {
						return;
					}
					UVar12 = Input.mousePosition;
					uVar1 = this._lastDragPosition.x;
					uVar2 = this._lastDragPosition.y;
					UVar13 = Input.mousePosition;
					this._lastDragPosition.x = UVar13.x;
					this._lastDragPosition.y = UVar13.y;
					this._lastDragPosition.z = UVar13.z;
					fVar10 = Time.deltaTime;
					iVar9 = Screen.height;
					pUVar5 = this.Cache;
					if ((pUVar5 != null) &&(pUVar6 = pUVar5.Transform, pUVar6 != null)) {
						UVar13 = pUVar6.position;
						pUVar5 = this.Cache;
						if ((pUVar5 != null) &&(pUVar7 = pUVar5.Transform, pUVar7 != null)) {
							if (0.033333335 <= fVar10) {
								fVar10 = 0.033333335;
							}
							local_98 = UVar12.x;
							fStack_94 = UVar12.y;
							local_98 = local_98 - (float)uVar1;
							fStack_94 = fStack_94 - (float)uVar2;
							fVar11 = 1.0;
							if (1.0 <= (float)iVar9) {
								fVar11 = (float)iVar9;
							}
							fVar11 = fVar11 / 1080.0;
							UVar12 = pUVar7.right;
							local_68 = UVar13.x;
							fStack_64 = UVar13.y;
							value.x = local_68 - local_98 * UVar12.x * fVar10 * speed * fVar11;
							value.y = fStack_64 - local_98 * UVar12.y * fVar10 * speed * fVar11;
							value.z = UVar13.z - UVar12.z * local_98 * fVar10 * speed * fVar11;
							pUVar6.position = value;
							pUVar5 = this.Cache;
							if ((pUVar5 != null) &&(pUVar6 = pUVar5.Transform, pUVar6 != null)) {
								UVar12 = pUVar6.position;
								pUVar5 = this.Cache;
								if ((pUVar5 != null) &&(pUVar7 = pUVar5.Transform, pUVar7 != null)) {
									UVar13 = pUVar7.up;
									local_68 = UVar12.x;
									fStack_64 = UVar12.y;
									value_00.x = local_68 - fVar11 * fVar10 * UVar13.x * fStack_94 * speed;
									value_00.y = fStack_64 - fVar11 * fVar10 * UVar13.y * fStack_94 * speed;
									value_00.z = UVar12.z - fVar11 * fVar10 * UVar13.z * fStack_94 * speed;
									pUVar6.position = value_00;
									return;
								}
							}
						}
					}
				}
				else {
					pSVar3 = this._input;
					if ((pSVar3 != null) &&(pSVar4 = pSVar3.Pan, pSVar4 != null)) {
						bVar8 = pSVar4.GetKeyUp(false);
						if (bVar8) {
							this._startDrag = false;
							return;
						}
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600552B")]
	[Address(RVA = "0x5CD6A90", Offset = "0x5CD5A90", VA = "0x5CD6A90")]
	private void UpdateZoomMovement(float speed)
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$UpdateZoomMovement): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MapEditorMenu pUVar3;
		BaseGameManager pGVar4;
		MapEditorInputSettings pSVar5;
		KeybindSetting pSVar6;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		bool bVar9;
		BaseGameManager x;
		Camera pUVar10;
		Transform __this_00;
		float fVar11;
		float fVar12;
		float fVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		float local_38;
		float fStack_34;
		float local_28;
		float fStack_24;

		pUVar3 = this._menu;
		if (pUVar3 == null) goto label_05dd6e0a;
		if (pUVar3.IsMouseUI != false) {
			return;
		}
		pGVar4 = SceneLoader.CurrentGameManager;
		if (pGVar4 == null) {
	label_05dd6b2f: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if ((pGVar4.klass._2).typeHierarchyDepth < bVar1) goto label_05dd6b2f;
			x = null;
			if ((pGVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorGameManager)) {
				x = pGVar4;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar9 = ((Object)x != null);
		if (bVar9) {
			if (x == null) goto label_05dd6e0a;
			if (((*(ulong)((sbyte)x + 0xa0)) != null) && (*(sbyte)&(((*(Il2CppClass*)((sbyte)x + 0xa0)))._1).name != false)) {
				return;
			}
		}
		fVar11 = Time.deltaTime;
		pUVar10 = this.Camera;
		if (pUVar10 != null) {
			if (0.033333335 <= fVar11) {
				fVar11 = 0.033333335;
			}
			bVar9 = pUVar10.orthographic;
			pSVar5 = this._input;
			if (bVar9) {
				if ((pSVar5 != null) &&(pSVar6 = pSVar5.ZoomIn, pSVar6 != null)) {
					bVar9 = pSVar6.GetKey(false);
					if (bVar9) {
						pUVar10 = this.Camera;
						if (pUVar10 != null) {
							fVar12 = pUVar10.orthographicSize;
							fVar12 = fVar12 - (fVar11 * speed + fVar11 * speed);
	label_05dd6d37: ;
							pUVar10.orthographicSize = fVar12;
							return;
						}
					}
					else {
						pSVar5 = this._input;
						if ((pSVar5 != null) &&(pSVar6 = pSVar5.ZoomOut, pSVar6 != null)) {
							bVar9 = pSVar6.GetKey(false);
							if (!bVar9) {
								return;
							}
							pUVar10 = this.Camera;
							if (pUVar10 != null) {
								fVar12 = pUVar10.orthographicSize;
								fVar12 = fVar12 + fVar11 * speed + fVar11 * speed;
								goto label_05dd6d37;
							}
						}
					}
				}
			}
			else if ((pSVar5 != null) &&(pSVar6 = pSVar5.ZoomIn, pSVar6 != null)) {
				bVar9 = pSVar6.GetKey(false);
				if (bVar9) {
					pUVar7 = this.Cache;
					if ((pUVar7 != null) &&(__this_00 = pUVar7.Transform, __this_00 != null)) {
						UVar14 = __this_00.position;
						pUVar7 = this.Cache;
						if ((pUVar7 != null) &&(pUVar8 = pUVar7.Transform, pUVar8 != null)) {
							UVar15 = pUVar8.forward;
							fVar13 = UVar15.z * fVar11 * speed;
							fVar12 = UVar15.x * fVar11 * speed;
							fVar11 = UVar15.y * fVar11 * speed;
							local_38 = UVar14.x;
							fStack_34 = UVar14.y;
							local_38 = fVar12 + fVar12 + local_38;
							fStack_34 = fVar11 + fVar11 + fStack_34;
							fVar11 = fVar13 + fVar13 + UVar14.z;
	label_05dd6dfa: ;
							UVar14.y = fStack_34;
							UVar14.x = local_38;
							UVar14.z = fVar11;
							__this_00.position = UVar14;
							return;
						}
					}
				}
				else {
					pSVar5 = this._input;
					if ((pSVar5 != null) &&(pSVar6 = pSVar5.ZoomOut, pSVar6 != null)) {
						bVar9 = pSVar6.GetKey(false);
						if (!bVar9) {
							return;
						}
						pUVar7 = this.Cache;
						if ((pUVar7 != null) &&(__this_00 = pUVar7.Transform, __this_00 != null)) {
							UVar14 = __this_00.position;
							pUVar7 = this.Cache;
							if ((pUVar7 != null) &&(pUVar8 = pUVar7.Transform, pUVar8 != null)) {
								UVar15 = pUVar8.forward;
								fVar12 = UVar15.z * fVar11 * speed;
								fVar13 = speed * fVar11 * UVar15.x;
								fVar11 = speed * fVar11 * UVar15.y;
								local_28 = UVar14.x;
								fStack_24 = UVar14.y;
								local_38 = local_28 - (fVar13 + fVar13);
								fStack_34 = fStack_24 - (fVar11 + fVar11);
								fVar11 = UVar14.z - (fVar12 + fVar12);
								goto label_05dd6dfa;
							}
						}
					}
				}
			}
		}
	label_05dd6e0a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600552C")]
	[Address(RVA = "0x5CD6410", Offset = "0x5CD5410", VA = "0x5CD6410")]
	private void UpdateRotation()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$UpdateRotation): 19 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		MapEditorSettings pSVar4;
		FloatSetting pSVar5;
		BaseComponentCache pUVar6;
		Transform pUVar7;
		Transform __this_00;
		MapEditorInputSettings pSVar8;
		KeybindSetting pSVar9;
		MapEditorMenu pUVar10;
		bool bVar11;
		int iVar12;
		float pfVar13;
		Vector3 pUVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar18;
		Vector3 UVar19;
		Vector3 point;
		Vector3 direction;
		float fStack_30;
		float fStack_2c;
		byte[] auStack_28 = new byte[24];

		fStack_2c = 0.0;
		fStack_30 = 0.0;
		if (this._wasRotating == false) {
			pUVar10 = this._menu;
			if (pUVar10 == null) goto label_05dd67c9;
			if (pUVar10.IsMouseUI != false) {
				return;
			}
		}
		this._wasRotating = false;
		bVar11 = this.GetLookInput(ref fStack_2c, ref fStack_30);
		if (bVar11) {
			pSVar4 = this._settings;
			if ((pSVar4 == null) ||(pSVar5 = pSVar4.CameraRotateSpeed, pSVar5 == null)) goto label_05dd67c9;
			fVar1 = pSVar5._value;
			fVar15 = Time.deltaTime;
			iVar12 = Screen.height;
			pUVar6 = this.Cache;
			if ((pUVar6 == null) ||(pUVar7 = pUVar6.Transform, pUVar7 == null)) goto label_05dd67c9;
			if (0.033333335 <= fVar15) {
				fVar15 = 0.033333335;
			}
			fVar18 = 1.0;
			if (1.0 <= (float)iVar12) {
				fVar18 = (float)iVar12;
			}
			UVar19 = pUVar7.position;
			fVar16 = UVar19.x;
			fVar17 = UVar19.y;
			if (Il2CppMethodInitialized_0753e72c == false) {
				auStack_28._8_4_ = extraout_XMM0_Dc;
				auStack_28._0_8_ = UVar19._0_8_;
				auStack_28._12_4_ = extraout_XMM0_Dd;
				Il2CppMethodInitialized_0753e72c = true;
				fVar16 = (float)auStack_28._0_4_;
				fVar17 = (float)auStack_28._4_4_;
			}
			UVar19.y = fVar17;
			UVar19.x = fVar16;
			pUVar7.RotateAround(UVar19, (Vector3)(Vector3.upVector), fStack_2c * fVar15 * fVar1 * (fVar18 / 1080.0));
			pUVar6 = this.Cache;
			if ((pUVar6 == null) ||(pUVar7 = pUVar6.Transform, pUVar7 == null)) goto label_05dd67c9;
			UVar19 = pUVar7.position;
			point.z = UVar19.z;
			pUVar6 = this.Cache;
			if (pUVar6 == null) goto label_05dd67c9;
			auStack_28._8_4_ = extraout_XMM0_Dc_00;
			auStack_28._0_8_ = UVar19._0_8_;
			auStack_28._12_4_ = extraout_XMM0_Dd_00;
			__this_00 = pUVar6.Transform;
			if (__this_00 == null) goto label_05dd67c9;
			UVar19 = __this_00.right;
			point.x = (float)auStack_28._0_4_;
			point.y = (float)auStack_28._4_4_;
			pUVar7.RotateAround(point, UVar19, (fVar18 / 1080.0) * fVar1 * fVar15 * -fStack_30);
			this._wasRotating = true;
		}
		pSVar8 = this._input;
		if ((pSVar8 == null) ||(pSVar9 = pSVar8.SnapCameraLeft, pSVar9 == null)) {
	label_05dd67c9: ;
			throw new NullReferenceException();
		}
		bVar11 = pSVar9.GetKeyDown(false);
		if (bVar11) {
			pUVar14 = &Vector3.downVector;
			pfVar13 = &(Vector3.downVector).z;
		}
		else {
			pSVar8 = this._input;
			if ((pSVar8 == null) ||(pSVar9 = pSVar8.SnapCameraRight, pSVar9 == null)) goto label_05dd67c9;
			bVar11 = pSVar9.GetKeyDown(false);
			if (bVar11) {
				pUVar14 = &Vector3.upVector;
				pfVar13 = &(Vector3.upVector).z;
			}
			else {
				pSVar8 = this._input;
				if ((pSVar8 == null) ||(pSVar9 = pSVar8.SnapCameraUp, pSVar9 == null)) goto label_05dd67c9;
				bVar11 = pSVar9.GetKeyDown(false);
				if (bVar11) {
					pUVar14 = &Vector3.rightVector;
					pfVar13 = &(Vector3.rightVector).z;
				}
				else {
					pSVar8 = this._input;
					if ((pSVar8 == null) ||(pSVar9 = pSVar8.SnapCameraDown, pSVar9 == null)) goto label_05dd67c9;
					bVar11 = pSVar9.GetKeyDown(false);
					if (!bVar11) {
						return;
					}
					pUVar14 = &Vector3.leftVector;
					pfVar13 = &(Vector3.leftVector).z;
				}
			}
		}
		uVar2 = pUVar14.x;
		uVar3 = pUVar14.y;
		direction.y = (float)uVar3;
		direction.x = (float)uVar2;
		direction.z = *pfVar13;
		this.SnapCameraToAxis(direction);
		return;
	}

	[Token(Token = "0x600552D")]
	[Address(RVA = "0x5CD6E10", Offset = "0x5CD5E10", VA = "0x5CD6E10")]
	private bool GetLookInput(out float inputX, out float inputY)
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$GetLookInput): clean
		MapEditorInputSettings pSVar1;
		KeybindSetting __this_00;
		bool bVar2;
		float fVar3;

		fVar3 = Input.GetAxis("Mouse X");
		*inputX = fVar3;
		fVar3 = Input.GetAxis("Mouse Y");
		*inputY = fVar3;
		pSVar1 = this._input;
		if ((pSVar1 == null) ||(__this_00 = pSVar1.RotateCamera, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar2;
	}

	[Token(Token = "0x600552E")]
	[Address(RVA = "0x5CD74A0", Offset = "0x5CD64A0", VA = "0x5CD74A0")]
	private bool AlignedWithWorldAxis()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$AlignedWithWorldAxis): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		BaseComponentCache pUVar13;
		Transform pUVar14;
		UnityEngine_Vector3_StaticFields pUVar15;
		bool bVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		Vector3 UVar20;

		pUVar13 = this.Cache;
		if ((pUVar13 == null) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) {
	label_05dd7833: ;
			throw new NullReferenceException();
		}
		UVar20 = pUVar14.forward;
		pUVar15 = typeof(Vector3).static_fields;
		uVar1 = (pUVar15.forwardVector).x;
		uVar7 = (pUVar15.forwardVector).y;
		fVar17 = UVar20.y - (float)uVar7;
		fVar18 = UVar20.z - (pUVar15.forwardVector).z;
		fVar19 = UVar20.x - (float)uVar1;
		if (9.9999994e-11 <= fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18) {
			pUVar13 = this.Cache;
			if ((pUVar13 == null) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) goto label_05dd7833;
			UVar20 = pUVar14.forward;
			pUVar15 = typeof(Vector3).static_fields;
			uVar2 = (pUVar15.backVector).x;
			uVar8 = (pUVar15.backVector).y;
			fVar19 = UVar20.y - (float)uVar8;
			fVar17 = UVar20.z - (pUVar15.backVector).z;
			fVar18 = UVar20.x - (float)uVar2;
			if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
				pUVar13 = this.Cache;
				if ((pUVar13 == null) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) goto label_05dd7833;
				UVar20 = pUVar14.forward;
				pUVar15 = typeof(Vector3).static_fields;
				uVar3 = (pUVar15.leftVector).x;
				uVar9 = (pUVar15.leftVector).y;
				fVar19 = UVar20.y - (float)uVar9;
				fVar17 = UVar20.z - (pUVar15.leftVector).z;
				fVar18 = UVar20.x - (float)uVar3;
				if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
					pUVar13 = this.Cache;
					if ((pUVar13 == null) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) goto label_05dd7833;
					UVar20 = pUVar14.forward;
					pUVar15 = typeof(Vector3).static_fields;
					uVar4 = (pUVar15.rightVector).x;
					uVar10 = (pUVar15.rightVector).y;
					fVar19 = UVar20.y - (float)uVar10;
					fVar17 = UVar20.z - (pUVar15.rightVector).z;
					fVar18 = UVar20.x - (float)uVar4;
					if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
						pUVar13 = this.Cache;
						if ((pUVar13 == null) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) goto label_05dd7833;
						UVar20 = pUVar14.forward;
						pUVar15 = typeof(Vector3).static_fields;
						uVar5 = (pUVar15.upVector).x;
						uVar11 = (pUVar15.upVector).y;
						fVar19 = UVar20.y - (float)uVar11;
						fVar17 = UVar20.z - (pUVar15.upVector).z;
						fVar18 = UVar20.x - (float)uVar5;
						if (9.9999994e-11 <= fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) {
							pUVar13 = this.Cache;
							if ((pUVar13 == null) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) goto label_05dd7833;
							UVar20 = pUVar14.forward;
							pUVar15 = typeof(Vector3).static_fields;
							uVar6 = (pUVar15.downVector).x;
							uVar12 = (pUVar15.downVector).y;
							fVar19 = UVar20.y - (float)uVar12;
							fVar17 = UVar20.z - (pUVar15.downVector).z;
							fVar18 = UVar20.x - (float)uVar6;
							bVar16 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 < 9.9999994e-11;
						}
					}
				}
			}
		}
		return bVar16;
	}

	[Token(Token = "0x600552F")]
	[Address(RVA = "0x5CD7840", Offset = "0x5CD6840", VA = "0x5CD7840")]
	private void AlignToWorldAxis()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$AlignToWorldAxis): 18 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		float pfVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		Vector3 pUVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		Vector3 UVar19;
		Vector3 UVar20;
		ulong local_88;

		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar8 = pUVar7.Transform, pUVar8 == null)) goto label_05dd7f11;
		UVar19 = pUVar8.forward;
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar8 = pUVar7.Transform, pUVar8 == null)) goto label_05dd7f11;
		UVar20 = pUVar8.up;
		pUVar10 = typeof(Vector3).static_fields;
		uVar1 = (pUVar10.zeroVector).x;
		uVar4 = (pUVar10.zeroVector).y;
		fVar16 = (pUVar10.zeroVector).z;
		local_88._0_4_ = UVar19.x;
		local_88._4_4_ = UVar19.y;
		fVar12 = ABS((float)local_88);
		fVar13 = ABS(local_88._4_4_);
		fVar14 = ABS(UVar19.z);
		fVar18 = ABS(UVar20.x);
		fVar17 = ABS(UVar20.y);
		fVar15 = ABS(UVar20.z);
		if ((fVar12 <= fVar13) || (fVar12 <= fVar14)) {
			if ((fVar12 < fVar13) && (fVar14 < fVar13)) {
				if (local_88._4_4_ <= 0.0) {
					if (Il2CppMethodInitialized_075450a5 == false) {
						Il2CppMethodInitialized_075450a5 = true;
						pUVar10 = typeof(Vector3).static_fields;
					}
					pUVar11 = &pUVar10.downVector;
					pfVar9 = &(pUVar10.downVector).z;
				}
				else {
					if (Il2CppMethodInitialized_0753e72c == false) {
						Il2CppMethodInitialized_0753e72c = true;
						pUVar10 = typeof(Vector3).static_fields;
					}
					pUVar11 = &pUVar10.upVector;
					pfVar9 = &(pUVar10.upVector).z;
				}
				goto label_05dd7cc7;
			}
			if ((fVar12 < fVar14) && (fVar13 < fVar14)) {
				if (UVar19.z <= 0.0) {
					if (Il2CppMethodInitialized_07545a60 == false) {
						Il2CppMethodInitialized_07545a60 = true;
						pUVar10 = typeof(Vector3).static_fields;
					}
					pUVar11 = &pUVar10.backVector;
					pfVar9 = &(pUVar10.backVector).z;
				}
				else {
					if (Il2CppMethodInitialized_0753e72e == false) {
						Il2CppMethodInitialized_0753e72e = true;
						pUVar10 = typeof(Vector3).static_fields;
					}
					pUVar11 = &pUVar10.forwardVector;
					pfVar9 = &(pUVar10.forwardVector).z;
				}
				goto label_05dd7cc7;
			}
			uVar2 = uVar1;
			uVar5 = uVar4;
			fVar12 = fVar16;
			if (fVar17 < fVar18) goto label_05dd7cd5;
	label_05dd7d2a: ;
			if ((fVar18 < fVar17) && (fVar15 < fVar17)) {
				if (UVar20.y <= 0.0) {
					pUVar11 = &Vector3.downVector;
					pfVar9 = &(Vector3.downVector).z;
				}
				else {
					pUVar11 = &Vector3.upVector;
					pfVar9 = &(Vector3.upVector).z;
				}
				goto label_05dd7eaf;
			}
			uVar3 = uVar1;
			uVar6 = uVar4;
			if ((fVar18 < fVar15) && (fVar17 < fVar15)) {
				if (UVar20.z <= 0.0) {
					pUVar11 = &Vector3.backVector;
					pfVar9 = &(Vector3.backVector).z;
				}
				else {
					pUVar11 = &Vector3.forwardVector;
					pfVar9 = &(Vector3.forwardVector).z;
				}
				goto label_05dd7eaf;
			}
		}
		else {
			if ((float)local_88 <= 0.0) {
				if (Il2CppMethodInitialized_07545e29 == false) {
					Il2CppMethodInitialized_07545e29 = true;
					pUVar10 = typeof(Vector3).static_fields;
				}
				pUVar11 = &pUVar10.leftVector;
				pfVar9 = &(pUVar10.leftVector).z;
			}
			else {
				if (Il2CppMethodInitialized_07544d56 == false) {
					Il2CppMethodInitialized_07544d56 = true;
					pUVar10 = typeof(Vector3).static_fields;
				}
				pUVar11 = &pUVar10.rightVector;
				pfVar9 = &(pUVar10.rightVector).z;
			}
	label_05dd7cc7: ;
			uVar2 = pUVar11.x;
			uVar5 = pUVar11.y;
			fVar12 = *pfVar9;
			if (fVar18 <= fVar17) goto label_05dd7d2a;
	label_05dd7cd5: ;
			if (fVar18 <= fVar15) goto label_05dd7d2a;
			if (UVar20.x <= 0.0) {
				pUVar11 = &Vector3.leftVector;
				pfVar9 = &(Vector3.leftVector).z;
			}
			else {
				pUVar11 = &Vector3.rightVector;
				pfVar9 = &(Vector3.rightVector).z;
			}
	label_05dd7eaf: ;
			uVar3 = pUVar11.x;
			uVar6 = pUVar11.y;
			fVar16 = *pfVar9;
		}
		pUVar7 = this.Cache;
		if (pUVar7 != null) {
			pUVar8 = pUVar7.Transform;
			if (pUVar8 != null) {
				UVar19.y = (float)uVar5;
				UVar19.x = (float)uVar2;
				UVar19.z = fVar12;
				pUVar8.forward = UVar19;
				pUVar7 = this.Cache;
				if ((pUVar7 != null) &&(pUVar8 = pUVar7.Transform, pUVar8 != null)) {
					UVar20.z = fVar16;
					UVar20.x = (float)uVar3;
					UVar20.y = (float)uVar6;
					pUVar8.up = UVar20;
					return;
				}
			}
		}
	label_05dd7f11: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005530")]
	[Address(RVA = "0x5CD6EA0", Offset = "0x5CD5EA0", VA = "0x5CD6EA0")]
	private void SnapCameraToAxis(Vector3 direction)
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$SnapCameraToAxis): 57 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		BaseGameManager pGVar4;
		HashSet<object> __this_00;
		long lVar6;
		BaseComponentCache pUVar7;
		byte[] auVar8 = new byte[16];
		bool bVar9;
		Transform pUVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		float fVar14;
		uint extraout_XMM0_Dd_03;
		float fVar15;
		Vector3 UVar18;
		Vector3 UVar19;
		Vector3 worldPosition;
		Quaternion UVar20;
		float fStack_bc;
		byte[] auStack_b8 = new byte[8];
		float fStack_b0;
		float fStack_ac;
		byte[] auStack_90 = new byte[16];
		object pIStack_80;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		float fStack_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] auStack_48 = new byte[8];
		byte[] auStack_38 = new byte[24];

		auStack_38._0_4_ = direction.z;
		auStack_48 = (byte[])direction._0_8_;
		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pGVar4 = SceneLoader.CurrentGameManager;
		if (pGVar4 != null) {
			bVar3 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar3) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapEditorGameManager))) {
				throw new InvalidCastException();
			}
		}
		if ((pGVar4 == null) ||(__this_00 = (HashSet<object>)(*(ulong)((sbyte)pGVar4 + 0x38)), __this_00 == null)) goto label_05dd741e;
		if (__this_00._count == 0) {
			pUVar7 = this.Cache;
			if ((pUVar7 == null) ||(pUVar10 = pUVar7.Transform, pUVar10 == null)) goto label_05dd741e;
			UVar18 = pUVar10.position;
			pUVar7 = this.Cache;
			if ((pUVar7 == null) ||(pUVar10 = pUVar7.Transform, pUVar10 == null)) goto label_05dd741e;
			UVar19 = pUVar10.forward;
			auStack_b8._0_4_ = UVar18.x;
			auStack_b8._4_4_ = UVar18.y;
			auStack_b8._4_4_ = (float)auStack_b8._4_4_ + UVar19.y * 50.0;
			auStack_b8._0_4_ = (float)auStack_b8._0_4_ + UVar19.x * 50.0;
			fStack_b0 = extraout_XMM0_Dc_00 + extraout_XMM0_Dc_01 * 0.0;
			fStack_ac = extraout_XMM0_Dd_00 + extraout_XMM0_Dd_01 * 0.0;
			fStack_bc = UVar18.z + UVar19.z * 50.0;
			pUVar7 = this.Cache;
		}
		else {
			uVar1 = (Vector3.zeroVector).x;
			uVar2 = (Vector3.zeroVector).y;
			auStack_b8._4_4_ = uVar2;
			auStack_b8._0_4_ = uVar1;
			fStack_bc = (Vector3.zeroVector).z;
			auStack_90.GetEnumerator(__this_00);
			pIStack_68 = pIStack_80;
			auStack_78 = (byte[])auStack_90._0_8_;
			auStack_90._0_8_ = null;
			auStack_90._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)auStack_78;
			while (bVar9 = auStack_78.MoveNext()) {
				if (pIStack_68 == null) {
					throw new NullReferenceException();
				}
				if (pIStack_68[1].monitor == null) {
					throw new NullReferenceException();
				}
				pUVar10 = pIStack_68[1].monitor.transform;
				if (pUVar10 == null) {
					throw new NullReferenceException();
				}
				UVar18 = pUVar10.position;
				auStack_b8._4_4_ = (float)auStack_b8._4_4_ + UVar18.y;
				auStack_b8._0_4_ = (float)auStack_b8._0_4_ + UVar18.x;
				fStack_b0 = fStack_b0 + extraout_XMM0_Dc;
				fStack_ac = fStack_ac + extraout_XMM0_Dd;
				fStack_bc = fStack_bc + UVar18.z;
			}
			auStack_78.Dispose();
			lVar6 = (*(ulong)((sbyte)pGVar4 + 0x38));
			if (lVar6 == 0) goto label_05dd741e;
			fVar11 = (float)*(int)(lVar6 + 0x20);
			fStack_bc = fStack_bc / fVar11;
			auVar8._4_4_ = fVar11;
			auVar8._0_4_ = fVar11;
			auVar8._8_4_ = fVar11;
			auVar8._12_4_ = fVar11;
			_auStack_b8 = divps(_auStack_b8, auVar8);
			pUVar7 = this.Cache;
		}
		if ((pUVar7 != null) &&(pUVar10 = pUVar7.Transform, pUVar10 != null)) {
			UVar18 = pUVar10.position;
			fVar11 = UVar18.x - (float)auStack_b8._0_4_;
			fVar12 = UVar18.y - (float)auStack_b8._4_4_;
			fVar13 = extraout_XMM0_Dc_02 - fStack_b0;
			fVar14 = extraout_XMM0_Dd_02 - fStack_ac;
			if (g_data_0753e729 == false) {
				fStack_58 = fVar11;
				fStack_54 = fVar12;
				fStack_50 = extraout_XMM0_Dc_02 - fStack_b0;
				fStack_4c = extraout_XMM0_Dd_02 - fStack_ac;
				g_data_0753e729 = true;
				fVar11 = fStack_58;
				fVar12 = fStack_54;
				fVar13 = fStack_50;
				fVar14 = fStack_4c;
			}
			fVar15 = UVar18.z - fStack_bc;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fStack_58 = fVar11;
				fStack_54 = fVar12;
				fStack_50 = fVar13;
				fStack_4c = fVar14;
				fVar11 = fStack_58;
				fVar12 = fStack_54;
			}
			fVar11 = fVar15 * fVar15 + fVar12 * fVar12 + fVar11 * fVar11;
			if (fVar11 < 0.0) {
				fVar11 = sqrtf(fVar11);
			}
			else {
				fVar11 = SQRT(fVar11);
			}
			bVar9 = this.AlignedWithWorldAxis();
			if (!bVar9) {
				this.AlignToWorldAxis();
				return;
			}
			pUVar7 = this.Cache;
			if ((pUVar7 != null) &&(pUVar10 = pUVar7.Transform, pUVar10 != null)) {
				UVar18.z = (float)auStack_38._0_4_;
				UVar18.x = (float)auStack_48._0_4_;
				UVar18.y = (float)auStack_48._4_4_;
				UVar18 = pUVar10.TransformDirection(UVar18);
				auStack_90._0_8_ = UVar18._0_8_;
				auStack_90._8_4_ = UVar18.z;
				UVar20 = Quaternion.Internal_AngleAxis(90.0, (Vector3)auStack_90);
				pUVar7 = this.Cache;
				if (pUVar7 != null) {
					auStack_48 = (byte[])UVar20._8_8_;
					auStack_38._8_4_ = extraout_XMM0_Dc_03;
					auStack_38._0_8_ = UVar20._0_8_;
					auStack_38._12_4_ = extraout_XMM0_Dd_03;
					pUVar10 = pUVar7.Transform;
					if (pUVar10 != null) {
						UVar20 = pUVar10.rotation;
						fVar12 = UVar20.x;
						fVar13 = UVar20.y;
						fVar14 = UVar20.z;
						fVar15 = UVar20.w;
						UVar20.z =((float)auStack_48._0_4_ * fVar15 + (float)auStack_48._4_4_ * fVar14 + fVar13 * (float)auStack_38._0_4_) - fVar12 * (float)auStack_38._4_4_;
						UVar20.w =((fVar15 * (float)auStack_48._4_4_ - (float)auStack_38._0_4_ * fVar12) -(float)auStack_38._4_4_ * fVar13) - fVar14 * (float)auStack_48._0_4_;
						UVar20.y =((float)auStack_48._4_4_ * fVar13 + (float)auStack_38._4_4_ * fVar15 +(float)auStack_48._0_4_ * fVar12) - fVar14 * (float)auStack_38._0_4_;
						UVar20.x =((float)auStack_48._4_4_ * fVar12 + (float)auStack_38._0_4_ * fVar15 +(float)auStack_38._4_4_ * fVar14) - fVar13 * (float)auStack_48._0_4_;
						pUVar10.rotation = UVar20;
						pUVar7 = this.Cache;
						if ((pUVar7 != null) &&(pUVar10 = pUVar7.Transform, pUVar10 != null)) {
							UVar18 = pUVar10.forward;
							UVar19.x = (float)auStack_b8._0_4_ - fVar11 * UVar18.x;
							UVar19.y = (float)auStack_b8._4_4_ - fVar11 * UVar18.y;
							UVar19.z = fStack_bc - UVar18.z * fVar11;
							pUVar10.position = UVar19;
							pUVar7 = this.Cache;
							if ((pUVar7 != null) &&(pUVar10 = pUVar7.Transform, pUVar10 != null)) {
								worldPosition.z = fStack_bc;
								worldPosition.x = (float)auStack_b8._0_4_;
								worldPosition.y = (float)auStack_b8._4_4_;
								pUVar10.LookAt(worldPosition);
								return;
							}
						}
					}
				}
			}
		}
	label_05dd741e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005531")]
	[Address(RVA = "0x5CD7F20", Offset = "0x5CD6F20", VA = "0x5CD7F20", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$SetDefaultCameraPosition): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		String tag;
		BaseComponentCache pUVar4;
		MapEditorMenu pUVar6;
		bool bVar7;
		Object x;
		Transform pUVar8;
		MapEditorMenu pUVar9;
		Transform pUVar10;
		Quaternion value;
		Vector3 UVar11;

		if (Il2CppMethodInitialized_07548234 == false) {
			Il2CppMethodInitialized_07548234 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05dd801a;
	label_05dd7f4c: ;
			pUVar9 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar9 != null) goto label_05dd7f60;
	label_05dd8036: ;
			this._menu = null;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dd7f4c;
	label_05dd801a: ;
			pUVar9 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar9 == null) goto label_05dd8036;
	label_05dd7f60: ;
			pUVar6 = typeof(MapEditorMenu);
			bVar3 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseMenu)pUVar9.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseMenu)pUVar9.klass)._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapEditorMenu))) {
	label_05dd8208: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar9;
			if (((((BaseMenu)pUVar9.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseMenu)pUVar9.klass)._2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass)pUVar6)) goto label_05dd8208;
		}
		tag = MapTags.CameraSpawnPoint;
		x = (Object)MapManager.GetRandomTag(tag);
		bVar7 = (x != null);
		pUVar4 = this.Cache;
		if (bVar7) {
			if ((pUVar4 != null) && (x != null)) {
				pUVar10 = pUVar4.Transform;
				pUVar8 = x.transform;
				if ((pUVar8 != null) &&(UVar11 = pUVar8.position, pUVar10 != null)) {
					pUVar10.position = UVar11;
					pUVar4 = this.Cache;
					if (pUVar4 != null) {
						pUVar10 = pUVar4.Transform;
						pUVar8 = x.transform;
						if ((pUVar8 != null) &&(value = (Quaternion)pUVar8.rotation, pUVar10 != null)) goto label_05dd81f7;
					}
				}
			}
		}
		else if (pUVar4 != null) {
			pUVar10 = pUVar4.Transform;
			if (pUVar10 != null) {
				UVar11.z = (Vector3.upVector).z * 100.0;
				uVar1 = (Vector3.upVector).x;
				uVar2 = (Vector3.upVector).y;
				UVar11.x = (float)uVar1 * 100.0;
				UVar11.y = (float)uVar2 * 100.0;
				pUVar10.position = UVar11;
				pUVar4 = this.Cache;
				if (pUVar4 != null) {
					pUVar10 = pUVar4.Transform;
					if (pUVar10 != null) {
						value = *(Quaternion)typeof(Quaternion).static_fields;
	label_05dd81f7: ;
						pUVar10.rotation = (Quaternion)value;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005532")]
	[Address(RVA = "0x5CD8220", Offset = "0x5CD7220", VA = "0x5CD8220")]
	public MapEditorCamera()
	{
		// Lifted from source/cpp/Cameras/MapEditorCamera.c (Cameras.MapEditorCamera$$.ctor): clean
		base();
		return;
	}
}
