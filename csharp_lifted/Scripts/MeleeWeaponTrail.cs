// ==================== AoTTG2 cross-reference ====================
// Type: MeleeWeaponTrail
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MeleeWeaponTrail.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000021")]
public class MeleeWeaponTrail : MonoBehaviour
{
	[Token(Token = "0x2000022")]
	private struct Point
	{
		[Token(Token = "0x40000CB")]
		[FieldOffset(Offset = "0x0")]
		public float timeCreated;

		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x4")]
		public Vector3 basePosition;

		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 tipPosition;
	}

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool _emit;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x21")]
	private bool _use;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	public float _emitTime;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public Material _material;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float _lifeTime;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Color[] _colors;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float[] _sizes;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private float _minVertexDistance;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float _maxVertexDistance;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x50")]
	private float _minVertexDistanceSqr;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x54")]
	private float _maxVertexDistanceSqr;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private float _maxAngle;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool _autoDestruct;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int subdivisions;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Transform _base;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Transform _tip;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x78")]
	private readonly List<Point> _points;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x80")]
	private readonly List<Point> _smoothedPoints;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x88")]
	private readonly List<Vector3> _vertices;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x90")]
	private readonly List<Color> _vertexColors;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x98")]
	private readonly List<Vector2> _uvs;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<int> _triangles;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0xA8")]
	private GameObject _trailObject;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0xB0")]
	private Renderer _trailRenderer;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0xB8")]
	private Mesh _trailMesh;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0xC0")]
	private bool _meshHasData;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0xC4")]
	private Vector3 _lastPosition;

	[Token(Token = "0x17000012")]
	public bool Emit
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x574B9A0", Offset = "0x574A9A0", VA = "0x574B9A0")]
		set
		{
			// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$set_Emit): clean
			this._emit = value;
			return;
		}
	}

	[Token(Token = "0x17000013")]
	public bool Use
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x574B9B0", Offset = "0x574A9B0", VA = "0x574B9B0")]
		set
		{
			// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$set_Use): clean
			this._use = value;
			return;
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x574B9C0", Offset = "0x574A9C0", VA = "0x574B9C0")]
	private void Start()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$Start): 21 lines keep C-only constructs
		GameObject* targetAddress;
		Mesh* targetAddress_00;
		Renderer* targetAddress_01;
		uint uVar1;
		uint uVar2;
		Object __this_00;
		Renderer pUVar3;
		Transform pUVar4;
		GameObject pUVar5;
		Mesh __this_01;
		String pSVar6;
		MeshFilter __this_02;
		MeshRenderer pUVar7;
		Vector3 UVar8;

		pUVar4 = this.transform;
		if (pUVar4 != null) {
			UVar8 = (Vector3)pUVar4.position;
			this._lastPosition = UVar8;
			pUVar5 = new GameObject("Trail");
			targetAddress = &this._trailObject;
			this._trailObject = pUVar5;
			pUVar5 = this._trailObject;
			if (pUVar5 != null) {
				pUVar4 = pUVar5.transform;
				if (pUVar4 != null) {
					pUVar4.parent = null;
					if (*targetAddress != null) {
						pUVar4 = (*targetAddress).transform;
						if (pUVar4 != null) {
							pUVar4.position = (Vector3)(Vector3.zeroVector);
							if (*targetAddress != null) {
								pUVar4 = (*targetAddress).transform;
								if (pUVar4 != null) {
									pUVar4.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
									if (*targetAddress != null) {
										pUVar4 = (*targetAddress).transform;
										if (pUVar4 != null) {
											pUVar4.localScale = (Vector3)(Vector3.oneVector);
											__this_01 = new Mesh();
											targetAddress_00 = &this._trailMesh;
											this._trailMesh = __this_01;
											__this_00 = (Object)this._trailMesh;
											pSVar6 = this.name;
											pSVar6 = String.Concat(pSVar6, "TrailMesh");
											if (__this_00 != null) {
												__this_00.name = pSVar6;
												if (*targetAddress_00 != null) {
													(*targetAddress_00).MarkDynamic();
													if (*targetAddress != null) {
														__this_02 = (*targetAddress).AddComponent<MeshFilter>();
														if (__this_02 != null) {
															__this_02.sharedMesh = *targetAddress_00;
															if (*targetAddress != null) {
																pUVar7 = (*targetAddress).AddComponent<MeshRenderer>() ;
																targetAddress_01 = &this._trailRenderer;
																this._trailRenderer = (Renderer)pUVar7;
																pUVar3 = this._trailRenderer;
																if (pUVar3 != null) {
																	pUVar3.sharedMaterial = this._material;
																	pUVar3 = this._trailRenderer;
																	if (pUVar3 != null) {
																		pUVar3.shadowCastingMode = 0;
																		pUVar3 = *targetAddress_01;
																		if (pUVar3 != null) {
																			pUVar3.receiveShadows = false;
																			uVar1 = this._minVertexDistance;
																			uVar2 = this._maxVertexDistance;
																			this._minVertexDistanceSqr = (float)uVar1 * (float)uVar1;
																			this._maxVertexDistanceSqr = (float)uVar2 * (float)uVar2;
																			return;
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
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x574BD20", Offset = "0x574AD20", VA = "0x574BD20")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$OnDestroy): clean
		Object obj;

		obj = (Object)this._trailObject;
		Object.Destroy(obj);
		Object.Destroy((Object)this._trailMesh);
		return;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x574BD90", Offset = "0x574AD90", VA = "0x574BD90")]
	public void SetMaterial(Material material)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$SetMaterial): clean
		Object x;
		Renderer __this_00;
		bool bVar1;

		this._material = material;
		x = (Object)this._trailRenderer;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._trailRenderer;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.sharedMaterial = material;
			return;
		}
		return;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x574BE20", Offset = "0x574AE20", VA = "0x574BE20")]
	public void StopImmediate()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$StopImmediate): 4 lines keep C-only constructs
		int piVar1;
		List<MeleeWeaponTrail.Point> pSVar2;

		this._emit = false;
		pSVar2 = this._points;
		if (pSVar2 != null) {
			piVar1 = &pSVar2._version;
			*piVar1 = *piVar1 + 1;
			pSVar2._size = 0;
			pSVar2 = this._smoothedPoints;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				pSVar2._size = 0;
				this.Update();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x574BE80", Offset = "0x574AE80", VA = "0x574BE80")]
	private void Update()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$Update): 17 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		uint uVar3;
		BaseCamera x;
		List<MeleeWeaponTrail.Point> pSVar4;
		Mesh __this_00;
		bool bVar5;
		Transform __this_01;
		Object pUVar6;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar7;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		MethodInfo extraout_RDX_06;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 UVar11;

		x = SceneLoader.CurrentCamera;
		bVar5 = ((Object)x == null);
		if (bVar5) {
			return;
		}
		if (this._use == false) {
			return;
		}
		pMVar7 = extraout_RDX;
		if (this._emit == false) {
	label_0584bf6e: ;
			pSVar4 = this._points;
			if (pSVar4 == null) goto label_0584c1b6;
			if ((pSVar4._size == 0) && (this._autoDestruct != false)) {
				pUVar6 = (Object)this._trailObject;
				bVar5 = (pUVar6 != null);
				if (bVar5) {
					pUVar6 = (Object)this._trailObject;
					Object.Destroy(pUVar6);
				}
				pUVar6 = (Object)this.gameObject;
				bVar5 = (pUVar6 != null);
				pMVar7 = extraout_RDX_05;
				if (bVar5) {
					pUVar6 = (Object)this.gameObject;
					Object.Destroy(pUVar6);
					pMVar7 = extraout_RDX_06;
				}
			}
			if (this._emit != false) goto label_0584bf90;
			pSVar4 = this._smoothedPoints;
			if (pSVar4 == null) goto label_0584c1b6;
			if (pSVar4._size == 0) {
				pSVar4 = this._points;
				if (pSVar4 == null) goto label_0584c1b6;
				if ((pSVar4._size == 0) && (this._meshHasData == false)) {
					return;
				}
			}
		}
		else {
			fVar9 = this._emitTime;
			if ((fVar9 != 0.0) || (NAN(fVar9))) {
				fVar8 = Time.deltaTime;
				fVar9 = fVar9 - fVar8;
				this._emitTime = fVar9;
				pMVar7 = extraout_RDX_00;
				if ((fVar9 != 0.0) || (NAN(fVar9))) {
					if (0.0 <= fVar9) {
						if (this._emit != false) goto label_0584bf90;
					}
					else {
						this._emit = false;
					}
				}
				else {
					this._emitTime = -1.0;
					this._emit = false;
				}
				goto label_0584bf6e;
			}
	label_0584bf90: ;
			uVar2 = this._lastPosition.x;
			uVar3 = this._lastPosition.y;
			fVar9 = this._lastPosition.z;
			__this_01 = this.transform;
			if (__this_01 == null) goto label_0584c1b6;
			UVar11 = __this_01.position;
			fVar8 = (float)uVar3 - UVar11.y;
			fVar9 = fVar9 - UVar11.z;
			fVar10 = (float)uVar2 - UVar11.x;
			fVar9 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
			pfVar1 = &this._minVertexDistanceSqr;
			pMVar7 = extraout_RDX_01;
			if ((fVar9 < *pfVar1 || fVar9 == *pfVar1) ||(bVar5 = this.ShouldAddPoint(fVar9), pMVar7 = extraout_RDX_02, !bVar5)) {
				this.SetLastPosition(this._points);
				this.SetLastPosition(this._smoothedPoints);
				pMVar7 = extraout_RDX_04;
			}
			else {
				this.AddPoint();
				pMVar7 = extraout_RDX_03;
			}
		}
		this.RemoveOldPoints(this._points);
		pMVar7 = (MethodInfo)this._smoothedPoints;
		this.RemoveOldPoints((List<MeleeWeaponTrail.Point>)pMVar7);
		pSVar4 = this._smoothedPoints;
		if (pSVar4 == null) {
	label_0584c1b6: ;
			throw new NullReferenceException();
		}
		if (1 < pSVar4._size) {
			this.RebuildMesh();
			return;
		}
		if (this._meshHasData != false) {
			pUVar6 = (Object)this._trailMesh;
			bVar5 = (pUVar6 != null);
			if (bVar5) {
				__this_00 = this._trailMesh;
				if (__this_00 == null) goto label_0584c1b6;
				__this_00.Clear();
				this._meshHasData = false;
			}
		}
		return;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x574C1C0", Offset = "0x574B1C0", VA = "0x574C1C0")]
	private bool ShouldAddPoint(float distanceSqr)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$ShouldAddPoint): 23 lines keep C-only constructs
		float pfVar1;
		int iVar2;
		List<MeleeWeaponTrail.Point> pSVar3;
		double dVar4;
		float fVar5;
		ulong uVar6;
		ulong uVar7;
		Il2CppClass klass;
		bool bVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float local_78;
		float fStack_74;
		Point local_48;
		byte[] local_28 = new byte[8];
		ulong uStack_20;

		pSVar3 = this._points;
		if (pSVar3 != null) {
			iVar2 = pSVar3._size;
			if (iVar2 < 3) {
				return true;
			}
			local_48 = pSVar3.get_Item(iVar2 + -2);
			fVar9 = local_48.tipPosition.z;
			pSVar3 = this._points;
			if (pSVar3 != null) {
				local_28._0_4_ = local_48.tipPosition.x;
				local_28._4_4_ = local_48.tipPosition.y;
				uStack_20 = 0;
				local_48 = pSVar3.get_Item(pSVar3._size + -3);
				uVar6 = local_48.tipPosition._0_8_;
				pSVar3 = this._points;
				if (pSVar3 != null) {
					fVar9 = fVar9 - local_48.tipPosition.z;
					local_48 = pSVar3.get_Item(pSVar3._size + -1);
					fVar11 = local_48.tipPosition.z;
					uVar7 = local_48.tipPosition._0_8_;
					pSVar3 = this._points;
					if (pSVar3 != null) {
						local_78 = (float)uVar6;
						fStack_74 = SUB84(uVar6, 4);
						local_28._4_4_ = (float)local_28._4_4_ - fStack_74;
						local_28._0_4_ = (float)local_28._0_4_ - local_78;
						uStack_20 = CONCAT44(uStack_20._4_4_ - 0.0, (float)uStack_20 - 0.0);
						local_48 = pSVar3.get_Item(pSVar3._size + -2);
						local_78 = (float)uVar7;
						fStack_74 = SUB84(uVar7, 4);
						local_78 = local_78 - local_48.tipPosition.x;
						fStack_74 = fStack_74 - local_48.tipPosition.y;
						fVar11 = fVar11 - local_48.tipPosition.z;
						fVar10 = fVar9 * fVar9 +(float)local_28._4_4_ * (float)local_28._4_4_ +(float)local_28._0_4_ * (float)local_28._0_4_;
						fVar13 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78;
						if (0.0 <= fVar10 * fVar13) {
							fVar10 = SQRT(fVar10 * fVar13);
							fVar13 = (float)local_28._0_4_;
							fVar5 = (float)local_28._4_4_;
							klass = typeof(Math);
						}
						else {
							fVar10 = sqrtf(fVar10 * fVar13);
							fVar13 = (float)local_28._0_4_;
							fVar5 = (float)local_28._4_4_;
							klass = typeof(Math);
						}
						fVar12 = 0.0;
						typeof(Math) = (Math)klass;
						if (1e-15 <= fVar10) {
							fVar10 = (fVar9 * fVar11 + fVar5 * fStack_74 + fVar13 * local_78) / fVar10;
							fVar9 = 1.0;
							if (fVar10 <= 1.0) {
								fVar9 = fVar10;
							}
							dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar10) & 0xbf800000 |(uint)fVar9 & -(uint)(-1.0 <= fVar10)), (MethodInfo)klass);
							fVar12 = (float)dVar4 * 57.29578;
						}
						pfVar1 = &this._maxAngle;
						if (fVar12 < *pfVar1 || fVar12 == *pfVar1) {
							pfVar1 = &this._maxVertexDistanceSqr;
							bVar8 = *pfVar1 <= distanceSqr && distanceSqr != *pfVar1;
						}
						return bVar8;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x574C4B0", Offset = "0x574B4B0", VA = "0x574C4B0")]
	private void AddPoint()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$AddPoint): 8 lines keep C-only constructs
		int piVar1;
		Point pMVar2;
		uint uVar3;
		Point[] pMVar4;
		Point item;
		Point item_00;
		Point pMVar5;
		Transform pUVar7;
		List<MeleeWeaponTrail.Point> pSVar8;
		int iVar9;
		float fVar11;
		float fVar12;
		Vector3 UVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		float fStack_54;
		float fStack_50;
		float local_48;

		pUVar7 = this._base;
		if (pUVar7 != null) {
			UVar13 = pUVar7.position;
			fVar12 = UVar13.z;
			pUVar7 = this._tip;
			if (pUVar7 == null) goto label_0584c730;
			UVar14 = pUVar7.position;
			fVar11 = Time.time;
			pSVar8 = this._points;
			if (pSVar8 == null) goto label_0584c730;
			fStack_54 = UVar13.x;
			fStack_50 = UVar13.y;
			local_48 = UVar14.x;
			piVar1 = &pSVar8._version;
			*piVar1 = *piVar1 + 1;
			pMVar4 = pSVar8._items;
			if (pMVar4 == null) goto label_0584c730;
			uVar3 = pSVar8._size;
			if (uVar3 < (uint)pMVar4.Length) {
				pSVar8._size = uVar3 + 1;
				pMVar5 = &pMVar4[(int)uVar3];
				*(ulong)&(pMVar5.basePosition).z = CONCAT44(local_48, fVar12);
				(pMVar5.tipPosition).y = UVar14.y;
				(pMVar5.tipPosition).z = UVar14.z;
				pMVar2 = pMVar4.m_Items + (int)uVar3;
				pMVar2.timeCreated = fVar11;
				pMVar2.basePosition.x = fStack_54;
				pMVar2.basePosition.y = UVar13.y;
				pMVar2.basePosition.z = UVar13.z;
			}
			else {
				item.basePosition.x = fStack_54;
				item.timeCreated = fVar11;
				item.basePosition.y = fStack_50;
				item.basePosition.z = fVar12;
				item.tipPosition.x = local_48;
				item.tipPosition.y = UVar14.y;
				item.tipPosition.z = UVar14.z;
				pSVar8.AddWithResize(item);
			}
			pUVar7 = this.transform;
			if (pUVar7 == null) goto label_0584c730;
			UVar15 = pUVar7.position;
			this._lastPosition.x = UVar15.x;
			this._lastPosition.y = UVar15.y;
			this._lastPosition.z = UVar15.z;
			pSVar8 = this._points;
			if (pSVar8 == null) goto label_0584c730;
			iVar9 = 1;
			if (pSVar8._size != 1) {
				uVar3 = this.subdivisions;
				if (0x7ffffffe < uVar3) goto label_0584c711;
				iVar9 = uVar3 + 1;
			}
			do {
				while(true) {
					pSVar8 = this._smoothedPoints;
					if (pSVar8 == null) goto label_0584c730;
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					pMVar4 = pSVar8._items;
					if (pMVar4 == null) goto label_0584c730;
					uVar3 = pSVar8._size;
					if ((uint)pMVar4.Length <= uVar3) break;
					pSVar8._size = uVar3 + 1;
					pMVar5 = &pMVar4[(int)uVar3];
					*(ulong)&(pMVar5.basePosition).z = CONCAT44(local_48, fVar12);
					(pMVar5.tipPosition).y = UVar14.y;
					(pMVar5.tipPosition).z = UVar14.z;
					pMVar2 = pMVar4.m_Items + (int)uVar3;
					pMVar2.timeCreated = fVar11;
					pMVar2.basePosition.x = fStack_54;
					pMVar2.basePosition.y = UVar13.y;
					pMVar2.basePosition.z = UVar13.z;
					iVar9 = iVar9 + -1;
					if (iVar9 == 0) goto label_0584c708;
				}
				item_00.basePosition.x = fStack_54;
				item_00.timeCreated = fVar11;
				item_00.basePosition.y = fStack_50;
				item_00.basePosition.z = fVar12;
				item_00.tipPosition.x = local_48;
				item_00.tipPosition.y = UVar14.y;
				item_00.tipPosition.z = UVar14.z;
				pSVar8.AddWithResize(item_00);
				iVar9 = iVar9 + -1;
			} while (iVar9 != 0);
	label_0584c708: ;
			pSVar8 = this._points;
			if (pSVar8 != null) {
	label_0584c711: ;
				if (pSVar8._size < 4) {
					return;
				}
				this.SmoothLastSegments();
				return;
			}
		}
	label_0584c730: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x574D270", Offset = "0x574C270", VA = "0x574D270")]
	private void SmoothLastSegments()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$SmoothLastSegments): 3 lines keep C-only constructs
		int index;
		int iVar1;
		List<MeleeWeaponTrail.Point> pSVar2;
		Point value;
		float fVar3;
		int iVar4;
		int iVar5;
		int stepCount;
		int iVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		MethodInfo in_stack_ffffffffffffff68;
		Point[] aMStack_68 = new Point[2];

		pSVar2 = this._points;
		if (pSVar2 != null) {
			iVar1 = pSVar2._size;
			index = iVar1 + -4;
			iVar6 = this.subdivisions;
			aMStack_68.get_Item(pSVar2, index);
			fVar3 = aMStack_68[0].timeCreated;
			pSVar2 = this._points;
			if (pSVar2 != null) {
				aMStack_68.get_Item(pSVar2, iVar1 + -1);
				pSVar2 = this._smoothedPoints;
				if (pSVar2 != null) {
					stepCount = iVar6 + 1;
					iVar1 = iVar6 + 2 + stepCount * 2;
					iVar5 = pSVar2._size - iVar1;
					iVar4 = -iVar5;
					iVar6 = 0;
					if (0 < iVar4) {
						iVar6 = iVar4;
					}
					if (iVar6 < iVar1) {
						fVar7 = aMStack_68[0].timeCreated - fVar3;
						do {
							if (iVar6 == 0) {
								pSVar2 = this._points;
								if (pSVar2 == null) goto label_0584d472;
								aMStack_68.get_Item(pSVar2, index);
							}
							else {
								aMStack_68.SampleSegment(this, index, (iVar6 + -1) / stepCount, (iVar6 + -1) % stepCount + 1, stepCount);
							}
							aMStack_68[1].tipPosition.y = aMStack_68[0].tipPosition.y;
							aMStack_68[1].tipPosition.z = aMStack_68[0].tipPosition.z;
							pSVar2 = this._smoothedPoints;
							if (pSVar2 == null) goto label_0584d472;
							fVar8 = (float)iVar6 / (float)iVar1;
							fVar9 = 1.0;
							if (fVar8 <= 1.0) {
								fVar9 = fVar8;
							}
							aMStack_68[0].timeCreated = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9) * fVar7 + fVar3;
							in_stack_ffffffffffffff68 =(MethodInfo)CONCAT44(aMStack_68[0].basePosition.x, aMStack_68[0].timeCreated);
							value.basePosition.y = aMStack_68[0].basePosition.y;
							value._0_8_ = in_stack_ffffffffffffff68;
							value.basePosition.z = aMStack_68[0].basePosition.z;
							value.tipPosition.x = aMStack_68[0].tipPosition.x;
							value.tipPosition.y = aMStack_68[0].tipPosition.y;
							value.tipPosition.z = aMStack_68[0].tipPosition.z;
							pSVar2.set_Item(iVar5 + iVar6, value);
							iVar6 = iVar6 + 1;
						} while (iVar1 != iVar6);
					}
					return;
				}
			}
		}
	label_0584d472: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x574D480", Offset = "0x574C480", VA = "0x574D480")]
	private Point SampleSegment(int first, int segment, int step, int stepCount)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$SampleSegment): 22 lines keep C-only constructs
		List<MeleeWeaponTrail.Point> pSVar1;
		int iVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Point MStack_d8;
		float local_b8;
		float local_b4;
		float local_b0;
		float local_ac;
		float local_a8;
		float local_a4;
		int local_a0;
		int local_9c;
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[24];

		local_9c = step;
		pSVar1 = this._points;
		if (pSVar1 != null) {
			iVar2 = 0;
			if (0 < segment + -1) {
				iVar2 = segment + -1;
			}
			local_a0 = stepCount;
			MStack_d8 = pSVar1.get_Item(iVar2 + first);
			pSVar1 = this._points;
			if (pSVar1 != null) {
				local_58._0_4_ = MStack_d8.basePosition.x;
				local_58._4_4_ = MStack_d8.basePosition.y;
				local_58._8_8_ = 0;
				local_a8 = MStack_d8.basePosition.z;
				local_48._0_4_ = MStack_d8.tipPosition.x;
				local_48._4_4_ = MStack_d8.tipPosition.y;
				local_48._8_8_ = 0;
				local_a4 = MStack_d8.tipPosition.z;
				MStack_d8 = pSVar1.get_Item(segment + first);
				pSVar1 = this._points;
				if (pSVar1 != null) {
					local_78._0_4_ = MStack_d8.basePosition.x;
					local_78._4_4_ = MStack_d8.basePosition.y;
					local_78._8_8_ = 0;
					local_b0 = MStack_d8.basePosition.z;
					local_68._0_4_ = MStack_d8.tipPosition.x;
					local_68._4_4_ = MStack_d8.tipPosition.y;
					local_68._8_8_ = 0;
					local_ac = MStack_d8.tipPosition.z;
					MStack_d8 = pSVar1.get_Item(segment + first + 1);
					pSVar1 = this._points;
					if (pSVar1 != null) {
						local_98._0_4_ = MStack_d8.basePosition.x;
						local_98._4_4_ = MStack_d8.basePosition.y;
						local_98._8_8_ = 0;
						local_b8 = MStack_d8.basePosition.z;
						local_88._0_4_ = MStack_d8.tipPosition.x;
						local_88._4_4_ = MStack_d8.tipPosition.y;
						local_88._8_8_ = 0;
						local_b4 = MStack_d8.tipPosition.z;
						iVar2 = 3;
						if (segment + 2 < 3) {
							iVar2 = segment + 2;
						}
						MStack_d8 = pSVar1.get_Item(iVar2 + first);
						fVar6 = (float)local_9c / (float)local_a0;
						fVar3 = fVar6 * fVar6;
						fVar4 = fVar6 * fVar3 * 0.5;
						fVar5 = fVar4 - fVar3 * 0.5;
						fVar8 = (fVar3 - fVar4) - fVar6 * 0.5;
						fVar7 = fVar6 * fVar3 * 1.5;
						fVar4 = fVar3 * -2.5 + fVar7 + 1.0;
						fVar3 = ((fVar3 + fVar3) - fVar7) + fVar6 * 0.5;
						__return_storage_ptr__.timeCreated = 0.0;
						__return_storage_ptr__.basePosition.x = MStack_d8.basePosition.x * fVar5 +(float)local_98._0_4_ * fVar3 + (float)local_78._0_4_ * fVar4 + (float)local_58._0_4_ * fVar8;
						__return_storage_ptr__.basePosition.y = MStack_d8.basePosition.y * fVar5 +(float)local_98._4_4_ * fVar3 + (float)local_78._4_4_ * fVar4 + (float)local_58._4_4_ * fVar8;
						__return_storage_ptr__.basePosition.z = local_b8 * fVar3 + local_b0 * fVar4 + local_a8 * fVar8 + MStack_d8.basePosition.z * fVar5;
						__return_storage_ptr__.tipPosition.x = fVar5 * MStack_d8.tipPosition.x + fVar3 * (float)local_88._0_4_ + fVar4 * (float)local_68._0_4_ + fVar8 * (float)local_48._0_4_;
						__return_storage_ptr__.tipPosition.y = fVar5 * MStack_d8.tipPosition.y + fVar3 * (float)local_88._4_4_ + fVar4 * (float)local_68._4_4_ + fVar8 * (float)local_48._4_4_;
						__return_storage_ptr__.tipPosition.z = fVar3 * local_b4 + fVar4 * local_ac + fVar8 * local_a4 + MStack_d8.tipPosition.z * fVar5;
						return __return_storage_ptr__;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x574C740", Offset = "0x574B740", VA = "0x574C740")]
	private void UpdateLastPoint()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$UpdateLastPoint): clean


		this.SetLastPosition(this._points);
		this.SetLastPosition(this._smoothedPoints);
		return;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x574D770", Offset = "0x574C770", VA = "0x574D770")]
	private void SetLastPosition(List<Point> pointList)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$SetLastPosition): 7 lines keep C-only constructs
		int iVar1;
		Transform pUVar2;
		Point value;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar3;
		Point local_48;
		byte[] local_28 = new byte[16];

		if (pointList != null) {
			iVar1 = pointList._size;
			if (iVar1 == 0) {
				return;
			}
			local_48 = pointList.get_Item(iVar1 + -1);
			pUVar2 = this._base;
			if (pUVar2 != null) {
				UVar3 = pUVar2.position;
				local_48.basePosition.z = UVar3.z;
				local_28._8_4_ = extraout_XMM0_Dc;
				local_28._0_8_ = UVar3._0_8_;
				local_28._12_4_ = extraout_XMM0_Dd;
				pUVar2 = this._tip;
				if (pUVar2 != null) {
					UVar3 = pUVar2.position;
					local_48.tipPosition.z = UVar3.z;
					local_48.basePosition.x = local_28._0_4_;
					local_48.basePosition.y = local_28._4_4_;
					local_48.tipPosition.x = UVar3.x;
					local_48.tipPosition.y = UVar3.y;
					value.basePosition.x = local_48.basePosition.x;
					value.timeCreated = local_48.timeCreated;
					value.basePosition.y = local_48.basePosition.y;
					value.basePosition.z = local_48.basePosition.z;
					value.tipPosition.x = local_48.tipPosition.x;
					value.tipPosition.y = UVar3.y;
					value.tipPosition.z = UVar3.z;
					pointList.set_Item(pointList._size + -1, value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x574C8B0", Offset = "0x574B8B0", VA = "0x574C8B0")]
	private void RebuildMesh()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$RebuildMesh): 76 lines keep C-only constructs
		int item;
		int item_00;
		int piVar1;
		Color pUVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		int iVar11;
		uint uVar12;
		List<Vector3> pSVar13;
		List<Color> pSVar14;
		List<Vector2> pSVar15;
		List<MeleeWeaponTrail.Point> pSVar16;
		Color[] pUVar17;
		Single[] values;
		Vector3[] pUVar18;
		Vector2[] pUVar19;
		Int32[] pSVar20;
		Mesh pUVar21;
		Vector2 UVar22;
		Vector2 item_01;
		ulong uVar23;
		ulong uVar24;
		float fVar25;
		uint uVar26;
		uint uVar27;
		MethodInfo pMVar28;
		List<int> pSVar29;
		int index;
		int item_02;
		float fVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		Vector2 item_03;
		float fVar34;
		float fVar35;
		byte[] auVar36 = new byte[12];
		Color item_04;
		Color item_05;
		Vector3 item_06;
		Vector3 item_07;
		ulong uStack_c8;
		ulong uStack_a8;
		float fStack_88;
		float fStack_84;
		float fStack_78;
		float fStack_74;
		Point MStack_68;
		float fStack_48;

		pSVar13 = this._vertices;
		if (pSVar13 != null) {
			piVar1 = &pSVar13._version;
			*piVar1 = *piVar1 + 1;
			pSVar13._size = 0;
			pSVar14 = this._vertexColors;
			if (pSVar14 != null) {
				piVar1 = &pSVar14._version;
				*piVar1 = *piVar1 + 1;
				pSVar14._size = 0;
				pSVar15 = this._uvs;
				if (pSVar15 != null) {
					piVar1 = &pSVar15._version;
					*piVar1 = *piVar1 + 1;
					pSVar15._size = 0;
					pSVar29 = this._triangles;
					if (pSVar29 != null) {
						piVar1 = &pSVar29._version;
						*piVar1 = *piVar1 + 1;
						pSVar29._size = 0;
						pSVar16 = this._smoothedPoints;
						if (pSVar16 != null) {
							iVar11 = pSVar16._size;
							if (0 < iVar11) {
								index = 0;
								item_02 = 1;
								do {
									pMVar28 = (MethodInfo)this._smoothedPoints;
									if (pMVar28 == null) goto label_0584d259;
									MStack_68 = pMVar28.get_Item(index);
									fVar25 = MStack_68.tipPosition.z;
									uVar24 = MStack_68.tipPosition._0_8_;
									fVar35 = MStack_68.basePosition.z;
									uVar23 = MStack_68.basePosition._0_8_;
									fVar31 = MStack_68.timeCreated;
									fVar30 = Time.time;
									fVar31 = (fVar30 - fVar31) / this._lifeTime;
									pUVar17 = this._colors;
									fStack_88 = (float)uVar23;
									fStack_84 = SUB84(uVar23, 4);
									if ((pUVar17 == null) || (pUVar17.Length == 0)) {
										auVar36 = ZEXT812(0x3f800000);
										if (fVar31 <= auVar36._0_4_) {
											auVar36._4_8_ = auVar36._4_8_;
											auVar36._0_4_ = fVar31;
										}
										uVar12 = ~-(uint)(0.0 <= fVar31) & 0x3f800000 |(uint)(1.0 - auVar36._0_4_) & -(uint)(0.0 <= fVar31);
										uStack_c8 = CONCAT44(uVar12, uVar12);
										uStack_a8 = CONCAT44(uVar12, uVar12);
									}
									else {
										uVar12 = (uint)pUVar17.Length;
										fVar34 = (float)(int)(uVar12 - 1);
										fVar32 = fVar31 * fVar34;
										fStack_48 = floorf(fVar32);
										fVar33 = ceilf(fVar32);
										fVar30 = fVar34;
										if (fVar33 <= fVar34) {
											fVar30 = fVar33;
										}
										fVar30 = (float)(~-(uint)(1.0 <= fVar33) & 0x3f800000 |(uint)fVar30 & -(uint)(1.0 <= fVar33));
										if ((fStack_48 != fVar30) || (NAN(fStack_48) || NAN(fVar30))) {
											fVar33 = (fVar32 - fStack_48) / (fVar30 - fStack_48);
											fVar32 = 1.0;
											if (fVar33 <= 1.0) {
												fVar32 = fVar33;
											}
											fVar32 = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar32);
										}
										else {
											fVar32 = 0.0;
										}
										fVar33 = fVar34;
										if (fStack_48 <= fVar34) {
											fVar33 = fStack_48;
										}
										uVar26 = (uint)(float)(-(uint)(0.0 <= fStack_48) & (uint)fVar33);
										if (uVar12 <= uVar26) {
	label_0584d25e: ;
											throw new IndexOutOfRangeException();
										}
										if (fVar30 <= fVar34) {
											fVar34 = fVar30;
										}
										uVar27 = (uint)(float)(-(uint)(0.0 <= fVar30) & (uint)fVar34);
										if (uVar12 <= uVar27) goto label_0584d25e;
										uVar3 = pUVar17[(int)uVar26].r;
										uVar7 = pUVar17[(int)uVar26].g;
										uVar4 = pUVar17[(int)uVar26].b;
										uVar8 = pUVar17[(int)uVar26].a;
										uVar5 = pUVar17[(int)uVar27].r;
										uVar9 = pUVar17[(int)uVar27].g;
										uVar6 = pUVar17[(int)uVar27].b;
										uVar10 = pUVar17[(int)uVar27].a;
										fVar30 = 0.0;
										if (0.0 <= fVar32) {
											fVar30 = fVar32;
										}
										uStack_c8 = CONCAT44(((float)uVar9 - (float)uVar7) * fVar30 + (float)uVar7, ((float)uVar5 - (float)uVar3) * fVar30 + (float)uVar3);
										uStack_a8 = CONCAT44(((float)uVar10 - (float)uVar8) * fVar30 + (float)uVar8, ((float)uVar6 - (float)uVar4) * fVar30 + (float)uVar4);
									}
									values = this._sizes;
									fVar30 = 0.0;
									fStack_78 = (float)uVar24;
									fStack_74 = SUB84(uVar24, 4);
									if ((values != null) && (values.Length != 0)) {
										fVar30 = MeleeWeaponTrail.Sample(values, fVar31);
									}
									pMVar28 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
									pSVar13 = this._vertices;
									fVar30 = fVar30 * 0.5;
									if (pSVar13 == null) goto label_0584d259;
									piVar1 = &pSVar13._version;
									*piVar1 = *piVar1 + 1;
									pUVar18 = pSVar13._items;
									if (pUVar18 == null) goto label_0584d259;
									fVar34 = (fVar25 - fVar35) * fVar30;
									fVar31 = fVar30 * (fStack_78 - fStack_88);
									fVar30 = fVar30 * (fStack_74 - fStack_84);
									fStack_88 = fStack_88 - fVar31;
									fStack_84 = fStack_84 - fVar30;
									fVar35 = fVar35 - fVar34;
									uVar12 = pSVar13._size;
									if (uVar12 < (uint)pUVar18.Length) {
										pSVar13._size = uVar12 + 1;
										pUVar18[(int)uVar12].x = fStack_88;
										pUVar18[(int)uVar12].y = fStack_84;
										pUVar18[(int)uVar12].z = fVar35;
									}
									else {
										item_06.y = fStack_84;
										item_06.x = fStack_88;
										item_06.z = fVar35;
										pSVar13.AddWithResize(item_06);
									}
									pMVar28 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
									pSVar13 = this._vertices;
									if (pSVar13 == null) goto label_0584d259;
									piVar1 = &pSVar13._version;
									*piVar1 = *piVar1 + 1;
									pUVar18 = pSVar13._items;
									if (pUVar18 == null) goto label_0584d259;
									fStack_78 = fStack_78 + fVar31;
									fStack_74 = fStack_74 + fVar30;
									item_07.z = fVar25 + fVar34;
									uVar12 = pSVar13._size;
									if (uVar12 < (uint)pUVar18.Length) {
										pSVar13._size = uVar12 + 1;
										pUVar18[(int)uVar12].x = fStack_78;
										pUVar18[(int)uVar12].y = fStack_74;
										pUVar18[(int)uVar12].z = item_07.z;
									}
									else {
										item_07.y = fStack_74;
										item_07.x = fStack_78;
										pSVar13.AddWithResize(item_07);
									}
									pMVar28 = MethodInfo_System_Collections_Generic_List_Color_Add;
									pSVar14 = this._vertexColors;
									if (pSVar14 == null) goto label_0584d259;
									piVar1 = &pSVar14._version;
									*piVar1 = *piVar1 + 1;
									pUVar17 = pSVar14._items;
									if (pUVar17 == null) goto label_0584d259;
									uVar12 = pSVar14._size;
									if (uVar12 < (uint)pUVar17.Length) {
										pSVar14._size = uVar12 + 1;
										pUVar2 = pUVar17.m_Items + (int)uVar12;
										pUVar2.r = (float)(undefined4)uStack_c8;
										pUVar2.g = (float)uStack_c8._4_4_;
										pUVar2.b = (float)(undefined4)uStack_a8;
										pUVar2.a = (float)uStack_a8._4_4_;
									}
									else {
										item_04.b = (float)(undefined4)uStack_a8;
										item_04.a = (float)uStack_a8._4_4_;
										item_04.r = (float)(undefined4)uStack_c8;
										item_04.g = (float)uStack_c8._4_4_;
										pSVar14.AddWithResize(item_04);
									}
									pMVar28 = MethodInfo_System_Collections_Generic_List_Color_Add;
									pSVar14 = this._vertexColors;
									if (pSVar14 == null) goto label_0584d259;
									piVar1 = &pSVar14._version;
									*piVar1 = *piVar1 + 1;
									pUVar17 = pSVar14._items;
									if (pUVar17 == null) goto label_0584d259;
									uVar12 = pSVar14._size;
									if (uVar12 < (uint)pUVar17.Length) {
										pSVar14._size = uVar12 + 1;
										pUVar2 = pUVar17.m_Items + (int)uVar12;
										pUVar2.r = (float)(undefined4)uStack_c8;
										pUVar2.g = (float)uStack_c8._4_4_;
										pUVar2.b = (float)(undefined4)uStack_a8;
										pUVar2.a = (float)uStack_a8._4_4_;
									}
									else {
										item_05.b = (float)(undefined4)uStack_a8;
										item_05.a = (float)uStack_a8._4_4_;
										item_05.r = (float)(undefined4)uStack_c8;
										item_05.g = (float)uStack_c8._4_4_;
										pSVar14.AddWithResize(item_05);
									}
									pMVar28 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
									pSVar15 = this._uvs;
									if (pSVar15 == null) goto label_0584d259;
									piVar1 = &pSVar15._version;
									*piVar1 = *piVar1 + 1;
									pUVar19 = pSVar15._items;
									if (pUVar19 == null) goto label_0584d259;
									item_03.x = (float)index / (float)iVar11;
									uVar12 = pSVar15._size;
									if (uVar12 < (uint)pUVar19.Length) {
										pSVar15._size = uVar12 + 1;
										UVar22.y = 0.0;
										UVar22.x = item_03.x;
										pUVar19[(int)uVar12] = UVar22;
									}
									else {
										item_03.y = 0.0;
										pSVar15.AddWithResize(item_03);
									}
									pMVar28 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
									pSVar15 = this._uvs;
									if (pSVar15 == null) goto label_0584d259;
									piVar1 = &pSVar15._version;
									*piVar1 = *piVar1 + 1;
									pUVar19 = pSVar15._items;
									if (pUVar19 == null) goto label_0584d259;
									item_01.y = 1.0;
									item_01.x = item_03.x;
									uVar12 = pSVar15._size;
									if (uVar12 < (uint)pUVar19.Length) {
										pSVar15._size = uVar12 + 1;
										pUVar19[(int)uVar12] = item_01;
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
									}
									else {
										pSVar15.AddWithResize((Vector2)item_01);
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
									}
									MethodInfo_System_Collections_Generic_List_int_Add = pMVar28;
									if (index != 0) {
										pSVar29 = this._triangles;
										if (pSVar29 == null) goto label_0584d259;
										piVar1 = &pSVar29._version;
										*piVar1 = *piVar1 + 1;
										pSVar20 = pSVar29._items;
										if (pSVar20 == null) goto label_0584d259;
										uVar12 = pSVar29._size;
										if (uVar12 < (uint)pSVar20.Length) {
											pSVar29._size = uVar12 + 1;
											pSVar20[(int)uVar12] = item_02 + -3;
										}
										else {
											pSVar29.AddWithResize(item_02 + -3);
											pSVar29 = this._triangles;
											if (pSVar29 == null) goto label_0584d259;
										}
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar29._version;
										*piVar1 = *piVar1 + 1;
										pSVar20 = pSVar29._items;
										if (pSVar20 == null) goto label_0584d259;
										item = item_02 + -2;
										uVar12 = pSVar29._size;
										if (uVar12 < (uint)pSVar20.Length) {
											pSVar29._size = uVar12 + 1;
											pSVar20[(int)uVar12] = item;
										}
										else {
											pSVar29.AddWithResize(item);
											pSVar29 = this._triangles;
											if (pSVar29 == null) goto label_0584d259;
										}
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar29._version;
										*piVar1 = *piVar1 + 1;
										pSVar20 = pSVar29._items;
										if (pSVar20 == null) goto label_0584d259;
										item_00 = item_02 + -1;
										uVar12 = pSVar29._size;
										if (uVar12 < (uint)pSVar20.Length) {
											pSVar29._size = uVar12 + 1;
											pSVar20[(int)uVar12] = item_00;
										}
										else {
											pSVar29.AddWithResize(item_00);
											pSVar29 = this._triangles;
											if (pSVar29 == null) goto label_0584d259;
										}
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar29._version;
										*piVar1 = *piVar1 + 1;
										pSVar20 = pSVar29._items;
										if (pSVar20 == null) goto label_0584d259;
										uVar12 = pSVar29._size;
										if (uVar12 < (uint)pSVar20.Length) {
											pSVar29._size = uVar12 + 1;
											pSVar20[(int)uVar12] = item_02;
										}
										else {
											pSVar29.AddWithResize(item_02);
											pSVar29 = this._triangles;
											if (pSVar29 == null) goto label_0584d259;
										}
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar29._version;
										*piVar1 = *piVar1 + 1;
										pSVar20 = pSVar29._items;
										if (pSVar20 == null) goto label_0584d259;
										uVar12 = pSVar29._size;
										if (uVar12 < (uint)pSVar20.Length) {
											pSVar29._size = uVar12 + 1;
											pSVar20[(int)uVar12] = item_00;
										}
										else {
											pSVar29.AddWithResize(item_00);
											pSVar29 = this._triangles;
											if (pSVar29 == null) goto label_0584d259;
										}
										pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
										piVar1 = &pSVar29._version;
										*piVar1 = *piVar1 + 1;
										pSVar20 = pSVar29._items;
										if (pSVar20 == null) goto label_0584d259;
										uVar12 = pSVar29._size;
										if (uVar12 < (uint)pSVar20.Length) {
											pSVar29._size = uVar12 + 1;
											pSVar20[(int)uVar12] = item;
										}
										else {
											pSVar29.AddWithResize(item);
										}
									}
									index = index + 1;
									item_02 = item_02 + 2;
								} while (iVar11 != index);
							}
							pUVar21 = this._trailMesh;
							if (pUVar21 != null) {
								pUVar21.Clear();
								pUVar21 = this._trailMesh;
								if (pUVar21 != null) {
									pUVar21.SetVertices(this._vertices);
									pUVar21 = this._trailMesh;
									if (pUVar21 != null) {
										pUVar21.SetColors(this._vertexColors);
										pUVar21 = this._trailMesh;
										if (pUVar21 != null) {
											pUVar21.SetUVs(0, this._uvs);
											pUVar21 = this._trailMesh;
											if (pUVar21 != null) {
												pUVar21.SetTriangles(this._triangles, 0);
												this._meshHasData = true;
												return;
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
	label_0584d259: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x574DA90", Offset = "0x574CA90", VA = "0x574DA90")]
	private static void GetSampleRange(int length, float time, out int min, out int max, out float lerp)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$GetSampleRange): clean
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		fVar4 = (float)(length + -1);
		fVar1 = time * fVar4;
		fVar2 = floorf(fVar1);
		fVar3 = ceilf(fVar1);
		fVar5 = fVar4;
		if (fVar3 <= fVar4) {
			fVar5 = fVar3;
		}
		fVar3 = (float)(~-(uint)(1.0 <= fVar3) & 0x3f800000 | (uint)fVar5 & -(uint)(1.0 <= fVar3));
		fVar5 = 0.0;
		if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
			fVar1 = (fVar1 - fVar2) / (fVar3 - fVar2);
			fVar5 = 1.0;
			if (fVar1 <= 1.0) {
				fVar5 = fVar1;
			}
			fVar5 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar5);
		}
		fVar1 = fVar4;
		if (fVar2 <= fVar4) {
			fVar1 = fVar2;
		}
		*lerp = fVar5;
		*min = (int)(float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
		if (fVar3 <= fVar4) {
			fVar4 = fVar3;
		}
		*max = (int)(float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
		return;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x574D880", Offset = "0x574C880", VA = "0x574D880")]
	private static Color Sample(Color[] values, float time)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$Sample): clean
		Color pUVar1;
		Color pUVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Color UVar11;

		if (values == null) {
			throw new NullReferenceException();
		}
		uVar3 = (uint)values.Length;
		fVar9 = (float)(int)(uVar3 - 1);
		fVar6 = time * fVar9;
		fVar7 = floorf(fVar6);
		fVar8 = ceilf(fVar6);
		fVar10 = fVar9;
		if (fVar8 <= fVar9) {
			fVar10 = fVar8;
		}
		fVar8 = (float)(~-(uint)(1.0 <= fVar8) & 0x3f800000 | (uint)fVar10 & -(uint)(1.0 <= fVar8));
		fVar10 = 0.0;
		if ((fVar7 != fVar8) || (NAN(fVar7) || NAN(fVar8))) {
			fVar6 = (fVar6 - fVar7) / (fVar8 - fVar7);
			fVar10 = 1.0;
			if (fVar6 <= 1.0) {
				fVar10 = fVar6;
			}
			fVar10 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar10);
		}
		fVar6 = fVar9;
		if (fVar7 <= fVar9) {
			fVar6 = fVar7;
		}
		uVar4 = (uint)(float)(-(uint)(0.0 <= fVar7) & (uint)fVar6);
		if (uVar4 < uVar3) {
			if (fVar8 <= fVar9) {
				fVar9 = fVar8;
			}
			uVar5 = (uint)(float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
			if (uVar5 < uVar3) {
				fVar9 = 0.0;
				if (0.0 <= fVar10) {
					fVar9 = fVar10;
				}
				pUVar1 = values.m_Items + (int)uVar5;
				pUVar2 = values.m_Items + (int)uVar4;
				fVar10 = pUVar2.r;
				fVar6 = pUVar2.g;
				fVar7 = pUVar2.b;
				fVar8 = pUVar2.a;
				UVar11.g = fVar9 * (pUVar1.g - fVar6) + fVar6;
				UVar11.r = fVar9 * (pUVar1.r - fVar10) + fVar10;
				UVar11.a = fVar9 * (pUVar1.a - fVar8) + fVar8;
				UVar11.b = fVar9 * (pUVar1.b - fVar7) + fVar7;
				return (Color)UVar11;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x574D990", Offset = "0x574C990", VA = "0x574D990")]
	private static float Sample(float[] values, float time)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$Sample): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;

		if (values == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)values.Length;
		fVar7 = (float)(int)(uVar1 - 1);
		fVar4 = time * fVar7;
		fVar5 = floorf(fVar4);
		fVar6 = ceilf(fVar4);
		fVar8 = fVar7;
		if (fVar6 <= fVar7) {
			fVar8 = fVar6;
		}
		fVar6 = (float)(~-(uint)(1.0 <= fVar6) & 0x3f800000 | (uint)fVar8 & -(uint)(1.0 <= fVar6));
		fVar8 = 0.0;
		if ((fVar5 != fVar6) || (NAN(fVar5) || NAN(fVar6))) {
			fVar4 = (fVar4 - fVar5) / (fVar6 - fVar5);
			fVar8 = 1.0;
			if (fVar4 <= 1.0) {
				fVar8 = fVar4;
			}
			fVar8 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar8);
		}
		fVar4 = fVar7;
		if (fVar5 <= fVar7) {
			fVar4 = fVar5;
		}
		uVar2 = (uint)(float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
		if (uVar2 < uVar1) {
			if (fVar6 <= fVar7) {
				fVar7 = fVar6;
			}
			uVar3 = (uint)(float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
			if (uVar3 < uVar1) {
				fVar7 = 0.0;
				if (0.0 <= fVar8) {
					fVar7 = fVar8;
				}
				return (values[(int)uVar3] - values[(int)uVar2]) * fVar7 + values[(int)uVar2] ;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x574C760", Offset = "0x574B760", VA = "0x574C760")]
	private void RemoveOldPoints(List<Point> pointList)
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$RemoveOldPoints): clean
		Point value;
		int iVar1;
		int index;
		int index_00;
		float fVar2;
		Point local_50;

		if (pointList == null) {
			throw new NullReferenceException();
		}
		iVar1 = pointList._size;
		if (iVar1 < 1) {
			index_00 = 0;
		}
		else {
			index = 0;
			index_00 = 0;
			do {
				fVar2 = Time.time;
				local_50 = pointList.get_Item(index);
				if (fVar2 - local_50.timeCreated <= this._lifeTime) {
					local_50 = pointList.get_Item(index);
					value.basePosition.x = local_50.basePosition.x;
					value.timeCreated = local_50.timeCreated;
					value.basePosition.y = local_50.basePosition.y;
					value.basePosition.z = local_50.basePosition.z;
					value.tipPosition.x = local_50.tipPosition.x;
					value.tipPosition.y = local_50.tipPosition.y;
					value.tipPosition.z = local_50.tipPosition.z;
					pointList.set_Item(index_00, value);
					index_00 = index_00 + 1;
				}
				index = index + 1;
				iVar1 = pointList._size;
			} while (index < iVar1);
		}
		pointList.RemoveRange(index_00, iVar1 - index_00);
		return;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x574DB60", Offset = "0x574CB60", VA = "0x574DB60")]
	public MeleeWeaponTrail()
	{
		// Lifted from source/cpp/MeleeWeaponTrail.c (MeleeWeaponTrail$$.ctor): clean
		List<MeleeWeaponTrail.Point> pSVar1;
		List<Vector3> __this_00;
		List<Color> __this_01;
		List<Vector2> __this_02;
		List<int> __this_03;

		this._emit = true;
		this._use = true;
		this._lifeTime = 1.0;
		this._minVertexDistance = 0.1;
		this._maxVertexDistance = 10.0;
		this._maxAngle = 3.0;
		this.subdivisions = 4;
		pSVar1 = new List<MeleeWeaponTrail.Point>();
		this._points = pSVar1;
		pSVar1 = new List<MeleeWeaponTrail.Point>();
		this._smoothedPoints = pSVar1;
		__this_00 = new List<Vector3>();
		this._vertices = __this_00;
		__this_01 = new List<Color>();
		this._vertexColors = __this_01;
		__this_02 = new List<Vector2>();
		this._uvs = __this_02;
		__this_03 = new List<int>();
		this._triangles = __this_03;
		base();
		return;
	}
}
