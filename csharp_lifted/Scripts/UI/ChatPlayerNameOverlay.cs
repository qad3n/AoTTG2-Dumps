// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatPlayerNameOverlay
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatPlayerNameOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x200082E")]
[DisallowMultipleComponent]
internal sealed class ChatPlayerNameOverlay : MonoBehaviour
{
	[Token(Token = "0x40028C9")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _source;

	[Token(Token = "0x40028CA")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectLabel _label;

	[Token(Token = "0x40028CB")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _labelRect;

	[Token(Token = "0x40028CC")]
	[FieldOffset(Offset = "0x38")]
	private ChatDisplayNameRange _range;

	[Token(Token = "0x40028CD")]
	[FieldOffset(Offset = "0x40")]
	private bool _hasRange;

	[Token(Token = "0x40028CE")]
	[FieldOffset(Offset = "0x48")]
	private string _nameText;

	[Token(Token = "0x17000D7F")]
	public NameEffectLabel Label
	{
		[Token(Token = "0x6004E03")]
		[Address(RVA = "0x5C1A0D0", Offset = "0x5C190D0", VA = "0x5C1A0D0")]
		get
		{
			// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$get_Label): clean
			return this._label;
		}
	}

	[Token(Token = "0x6004E04")]
	[Address(RVA = "0x5C18100", Offset = "0x5C17100", VA = "0x5C18100")]
	public void Initialize(TextMeshProUGUI source)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$Initialize): 1 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		this._source = source;
		pTVar1 = this._source;
		__this_00 = null;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._source;
			__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			pTVar1.add_OnPreRenderText(__this_00);
		}
		this.BuildIfNeeded();
		return;
	}

	[Token(Token = "0x6004E05")]
	[Address(RVA = "0x5C19020", Offset = "0x5C18020", VA = "0x5C19020")]
	public void SetName(string name, TMP_FontAsset font, float fontSize, Color color, ChatDisplayNameRange range)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$SetName): 3 lines keep C-only constructs
		String* targetAddress;
		String pSVar1;
		NameEffectLabel pPVar2;
		bool bVar3;

		if (g_data_07547d8b == false) {
			g_data_07547d8b = true;
			this.BuildIfNeeded();
		}
		else {
			this.BuildIfNeeded();
		}
		if (name == null) {
			name = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this != null) {
			targetAddress = &this._nameText;
			this._nameText = name;
			this._range = range;
			if ((range.SourceStartIndex < 0) || (range.SourceEndIndex <= range.SourceStartIndex)) {
				this._hasRange = false;
				pPVar2 = this._label;
			}
			else {
				pSVar1 = *targetAddress;
				if (pSVar1 == null) goto label_05d191f7;
				this._hasRange = 0 < pSVar1._stringLength;
				pPVar2 = this._label;
			}
			if (pPVar2 != null) {
				pPVar2.fontSize = fontSize;
				pPVar2 = this._label;
				if (pPVar2 != null) {
					pPVar2.color = color;
					pPVar2 = this._label;
					if (pPVar2 != null) {
						pPVar2.richText = true;
						pPVar2 = this._label;
						if (pPVar2 != null) {
							pPVar2.alignment = 0x801;
							bVar3 = ((Object)font != null);
							if (bVar3) {
								pPVar2 = this._label;
								if (pPVar2 == null) goto label_05d191f7;
								pPVar2.SetFont(font);
							}
							pPVar2 = this._label;
							if (pPVar2 != null) {
								pPVar2.SetText((String)**(ulong*)(g_data_07556758 + 0xb8), this._nameText, (String)**(ulong*)(g_data_07556758 + 0xb8));
								this.SetRaycastTargets(false);
								return;
							}
						}
					}
				}
			}
		}
	label_05d191f7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E06")]
	[Address(RVA = "0x5C18840", Offset = "0x5C17840", VA = "0x5C18840")]
	public void SetRange(ChatDisplayNameRange range)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$SetRange): clean
		String pSVar1;

		this._range = range;
		if ((range.SourceStartIndex < 0) || (range.SourceEndIndex <= range.SourceStartIndex)) {
			this._hasRange = false;
			return;
		}
		pSVar1 = this._nameText;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		this._hasRange = 0 < pSVar1._stringLength;
		return;
	}

	[Token(Token = "0x6004E07")]
	[Address(RVA = "0x5C182A0", Offset = "0x5C172A0", VA = "0x5C182A0")]
	public void Clear()
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$Clear): clean
		NameEffectLabel pPVar1;
		String prefix;
		RectTransform pUVar2;
		bool bVar3;
		GameObject __this_00;

		this._hasRange = false;
		this._nameText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pPVar1 = this._label;
		bVar3 = ((Object)pPVar1 != null);
		if (bVar3) {
			pPVar1 = this._label;
			if (pPVar1 == null) goto label_05d183b7;
			pPVar1.ClearNameEffect();
			pPVar1 = this._label;
			if (pPVar1 == null) goto label_05d183b7;
			prefix = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pPVar1.SetText(prefix, prefix, prefix);
		}
		pUVar2 = this._labelRect;
		bVar3 = ((Object)pUVar2 != null);
		if (!bVar3) {
			return;
		}
		pUVar2 = this._labelRect;
		if (pUVar2 != null) {
			__this_00 = pUVar2.gameObject;
			if (__this_00 != null) {
				__this_00.SetActive(false);
				return;
			}
		}
	label_05d183b7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E08")]
	[Address(RVA = "0x5C1A480", Offset = "0x5C19480", VA = "0x5C1A480")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$OnDestroy): 1 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		pTVar1 = this._source;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._source;
			__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_UI_ChatPlayerNameOverlay_HideSourceName);
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			pTVar1.remove_OnPreRenderText(__this_00);
			return;
		}
		return;
	}

	[Token(Token = "0x6004E09")]
	[Address(RVA = "0x5C1A0E0", Offset = "0x5C190E0", VA = "0x5C1A0E0")]
	private void BuildIfNeeded()
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$BuildIfNeeded): 8 lines keep C-only constructs
		RectTransform* targetAddress;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		RectTransform pUVar4;
		NameEffectLabel pPVar5;

		pPVar5 = this._label;
		bVar1 = ((Object)pPVar5 != null);
		if (bVar1) {
			return;
		}
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05d1a395: ;
			throw new NullReferenceException();
		}
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d1a39f;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05d1a39f: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				__this_00 = new GameObject("Name Effect Overlay", components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					parent = this.transform;
					if (__this_01 != null) {
						__this_01.SetParent(parent, false);
						pUVar4 = __this_00.GetComponent<RectTransform>();
						targetAddress = &this._labelRect;
						this._labelRect = pUVar4;
						pUVar4 = this._labelRect;
						if (pUVar4 != null) {
							pUVar4.anchorMin = (Vector2)0x3f80000000000000;
							if (*targetAddress != null) {
								(*targetAddress).anchorMax = (Vector2)0x3f80000000000000;
								if (*targetAddress != null) {
									(*targetAddress).pivot = (Vector2)0x3f80000000000000;
									pPVar5 = __this_00.AddComponent<NameEffectLabel>();
									this._label = pPVar5;
									this.ConfigureLayoutFreeNameLabel(__this_00);
									this.SetRaycastTargets(false);
									__this_00.SetActive(false);
									return;
								}
							}
						}
					}
				}
				goto label_05d1a395;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004E0A")]
	[Address(RVA = "0x5C1A550", Offset = "0x5C19550", VA = "0x5C1A550")]
	private void ConfigureLayoutFreeNameLabel(GameObject root)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$ConfigureLayoutFreeNameLabel): clean
		NameEffectLabel pPVar1;
		TextMeshProUGUI __this_00;
		bool bVar2;
		HorizontalLayoutGroup x;
		ContentSizeFitter x_00;
		RectTransform __this_01;

		if (root != null) {
			x = root.GetComponent<HorizontalLayoutGroup>();
			bVar2 = ((Object)x != null);
			if (bVar2) {
				if (x == null) goto label_05d1a795;
				x.enabled = false;
			}
			x_00 = root.GetComponent<ContentSizeFitter>();
			bVar2 = ((Object)x_00 != null);
			if (bVar2) {
				if (x_00 == null) goto label_05d1a795;
				x_00.enabled = false;
			}
			pPVar1 = this._label;
			if (pPVar1 != null) {
				ChatPlayerNameOverlay.DisableSegmentLayout(pPVar1._prefixTmp, false);
				pPVar1 = this._label;
				if (pPVar1 != null) {
					ChatPlayerNameOverlay.DisableSegmentLayout(pPVar1._suffixTmp, false);
					pPVar1 = this._label;
					if (pPVar1 != null) {
						ChatPlayerNameOverlay.DisableSegmentLayout(pPVar1._nameTmp, true);
						pPVar1 = this._label;
						if ((pPVar1 != null) &&(__this_00 = pPVar1._nameTmp, __this_00 != null)) {
							__this_01 = __this_00.rectTransform;
							if (__this_01 != null) {
								__this_01.anchorMin = (Vector2)(Vector2.zeroVector);
								__this_01.anchorMax = (Vector2)(Vector2.oneVector);
								__this_01.offsetMin = (Vector2)(Vector2.zeroVector);
								__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
								return;
							}
						}
					}
				}
			}
		}
	label_05d1a795: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E0B")]
	[Address(RVA = "0x5C1A7A0", Offset = "0x5C197A0", VA = "0x5C1A7A0")]
	private static void DisableSegmentLayout(TextMeshProUGUI segment, bool active)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$DisableSegmentLayout): clean
		bool bVar1;
		LayoutElement x;
		GameObject __this;

		bVar1 = ((Object)segment == null);
		if (bVar1) {
			return;
		}
		if (segment != null) {
			x = segment.GetComponent<LayoutElement>();
			bVar1 = ((Object)x != null);
			if (bVar1) {
				if (x == null) goto label_05d1a87b;
				x.enabled = false;
			}
			__this = segment.gameObject;
			if (__this != null) {
				__this.SetActive(active);
				return;
			}
		}
	label_05d1a87b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E0C")]
	[Address(RVA = "0x5C1A880", Offset = "0x5C19880", VA = "0x5C1A880")]
	private void HideSourceName(TMP_TextInfo textInfo)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$HideSourceName): 5 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		uint uVar3;
		TMP_CharacterInfo[] pTVar4;
		TMP_MeshInfo[] pTVar5;
		Color32[] pUVar6;
		ulong uVar7;
		int piVar8;
		long lVar9;
		int iVar10;
		int iVar11;
		bool bVar12;
		uint uVar13;
		ulong uVar14;
		bool bVar15;

		if ((textInfo != null) && (this._hasRange != false)) {
			iVar1 = textInfo.characterCount;
			uVar14 = (ulong)iVar1;
			if (0 < (long)uVar14) {
				pTVar4 = textInfo.characterInfo;
				if (pTVar4 == null) {
	label_05d1a9fe: ;
					throw new NullReferenceException();
				}
				piVar8 = &pTVar4[0].index;
				bVar12 = false;
				uVar7 = 0;
				iVar11 = -1;
				do {
					if ((uint)pTVar4.Length == uVar7) goto label_05d1a9f7;
					iVar10 = iVar11;
					if ((((*(bool)(piVar8 + 0x5a) & 1U) != 0) &&(this._range.SourceStartIndex <= *piVar8)) &&(*piVar8 < this._range.SourceEndIndex)) {
						iVar10 = piVar8[0xd];
						bVar12 = true;
						if ((-1 < iVar11) && (bVar15 = iVar10 != iVar11, iVar10 = iVar11, bVar15)) {
							return;
						}
					}
					uVar7 = uVar7 + 1;
					piVar8 = piVar8 + 0x5e;
					iVar11 = iVar10;
				} while (uVar14 != uVar7);
				if ((bVar12) && (0 < iVar1)) {
					lVar9 = 0x28;
					uVar7 = 0;
					do {
						pTVar4 = textInfo.characterInfo;
						if (pTVar4 == null) goto label_05d1a9fe;
						if ((uint)pTVar4.Length <= uVar7) goto label_05d1a9f7;
						if ((((*(byte)((long)(&pTVar4[0].underlineColor + 1) + lVar9) & 1) != 0) &&(iVar1 = *(int)((long)(&pTVar4[0].vertex_BL.color + -0x23) + lVar9),this._range.SourceStartIndex <= iVar1)) &&(iVar1 < this._range.SourceEndIndex)) {
							pTVar5 = textInfo.meshInfo;
							if (pTVar5 == null) goto label_05d1a9fe;
							uVar2 = *(uint)((long)(&pTVar4[0].vertex_BL.color + -0x19) + lVar9);
							if ((uint)pTVar5.Length <= uVar2) goto label_05d1a9f7;
							pUVar6 = pTVar5[(int)uVar2].colors32;
							if (pUVar6 != null) {
								uVar2 = *(uint)((long)(&pTVar4[0].vertex_BL.color + -0x14) + lVar9);
								uVar3 = (uint)pUVar6.Length;
								uVar13 = uVar2 + 3;
								if ((int)uVar13 < (int)uVar3) {
									if (uVar3 <= uVar2) {
	label_05d1a9f7: ;
										throw new IndexOutOfRangeException();
									}
									pUVar6[(int)uVar2]._overlap_0._at_a.a = 0;
									if ((uint)pUVar6.Length <= uVar2 + 1) goto label_05d1a9f7;
									pUVar6[(int)(uVar2 + 1)]._overlap_0._at_a.a = 0;
									if (((uint)pUVar6.Length <= uVar2 + 2) ||(pUVar6[(int)(uVar2 + 2)]._overlap_0._at_a.a = 0,(uint)pUVar6.Length <= uVar13)) goto label_05d1a9f7;
									pUVar6[(int)uVar13]._overlap_0._at_a.a = 0;
									uVar14 = (ulong)(uint)textInfo.characterCount;
								}
							}
						}
						uVar7 = uVar7 + 1;
						lVar9 = lVar9 + 0x178;
					} while ((long)uVar7 < (long)(int)uVar14);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004E0D")]
	[Address(RVA = "0x5C18880", Offset = "0x5C17880", VA = "0x5C18880")]
	public void SyncToSource()
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$SyncToSource): 30 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		TMP_CharacterInfo[] pTVar2;
		NameEffectLabel pPVar3;
		byte[] auVar4 = new byte[16];
		Vector2 UVar5;
		Vector2 UVar6;
		byte[] auVar7 = new byte[16];
		bool bVar8;
		TMP_TextInfo pTVar9;
		bool pbVar10;
		GameObject pUVar11;
		RectTransform __this_00;
		RectTransform pUVar12;
		ulong uVar13;
		int iVar14;
		int iVar15;
		ulong uVar16;
		float size;
		float fVar17;
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		Rect UVar20;
		Rect UVar21;
		Vector3 UVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		ulong local_a8;
		ulong local_98;
		float local_88;
		float fStack_84;
		float fStack_74;
		float local_68;
		float local_58;
		float fStack_44;
		float fStack_34;

		pTVar1 = this._source;
		bVar8 = ((Object)pTVar1 == null);
		if (!bVar8) {
			pUVar12 = this._labelRect;
			bVar8 = ((Object)pUVar12 == null);
			if ((!bVar8) && (this._hasRange != false)) {
				pTVar1 = this._source;
				if (pTVar1 != null) {
					pTVar1.ForceMeshUpdate(false, false);
					pTVar1 = this._source;
					if (pTVar1 != null) {
						pTVar9 = pTVar1.textInfo;
						if (((pTVar9 != null) && (this._hasRange != false)) &&(uVar13 = (ulong)pTVar9.characterCount, 0 < (long)uVar13)) {
							pTVar2 = pTVar9.characterInfo;
							if (pTVar2 == null) goto label_05d18cf8;
							pbVar10 = &pTVar2[0].isVisible;
							fVar17 = 0.0;
							bVar8 = false;
							uVar16 = 0;
							auVar18 = _DAT_01008860;
							auVar19 = _DAT_010093c0;
							iVar15 = -1;
							do {
								if ((uint)pTVar2.Length == uVar16) {
									throw new IndexOutOfRangeException();
								}
								iVar14 = iVar15;
								if ((((*pbVar10 & 1U) != 0) &&(this._range.SourceStartIndex <= *(int)(pbVar10 + -0x168))) &&(*(int)(pbVar10 + -0x168) < this._range.SourceEndIndex)) {
									iVar14 = *(int)(pbVar10 + -0x134);
									if (iVar15 < 0) {
										fVar17 = *(float)(pbVar10 + -0x4c);
									}
									else {
										bVar8 = iVar14 != iVar15;
										iVar14 = iVar15;
										if (bVar8) goto label_05d18a3a;
									}
									auVar7._4_4_ = *(float)(pbVar10 + -0x48);
									auVar7._0_4_ = (((Vector3)(pbVar10 + -0x7c)).fields).x;
									auVar7._8_8_ = 0;
									auVar18 = minps(auVar18, auVar7);
									auVar4._4_4_ = *(float)(pbVar10 + -0x50);
									auVar4._0_4_ = (((Vector3)(pbVar10 + -0x70)).fields).x;
									auVar4._8_8_ = 0;
									auVar19 = maxps(auVar19, auVar4);
									bVar8 = true;
								}
								uVar16 = uVar16 + 1;
								pbVar10 = pbVar10 + 0x178;
								iVar15 = iVar14;
							} while (uVar13 != uVar16);
							if (bVar8) {
								pTVar1 = this._source;
								if (pTVar1 != null) {
									__this_00 = pTVar1.rectTransform;
									pUVar12 = this._labelRect;
									if (pUVar12 != null) {
										pUVar12 = (RectTransform)pUVar12.parent;
										if ((pUVar12 != null) &&(pUVar12.klass != typeof(RectTransform))) {
											throw new InvalidCastException();
										}
										if (__this_00 != null) {
											UVar22.z = 0.0;
											local_a8._0_4_ = auVar18._0_4_;
											local_a8._4_4_ = auVar18._4_4_;
											UVar22.x = (float)(undefined4)local_a8;
											UVar22.y = (float)local_a8._4_4_;
											UVar22 = __this_00.TransformPoint(UVar22);
											UVar23.z = 0.0;
											local_98._0_4_ = auVar19._0_4_;
											local_98._4_4_ = auVar19._4_4_;
											UVar23.x = (float)local_98;
											UVar23.y = local_98._4_4_;
											UVar23 = __this_00.TransformPoint(UVar23);
											local_a8._0_4_ = auVar18._0_4_;
											UVar24.y = fVar17;
											UVar24.x = (float)(undefined4)local_a8;
											UVar24.z = 0.0;
											UVar24 = __this_00.TransformPoint(UVar24);
											if (pUVar12 != null) {
												UVar22 = pUVar12.InverseTransformPoint(UVar22);
												UVar23 = pUVar12.InverseTransformPoint(UVar23);
												UVar24 = pUVar12.InverseTransformPoint(UVar24);
												pPVar3 = this._label;
												if (pPVar3 != null) {
													fVar17 = pPVar3._fontSize;
													UVar20 = pUVar12.rect;
													UVar5 = pUVar12.pivot;
													UVar21 = pUVar12.rect;
													UVar6 = pUVar12.pivot;
													pUVar12 = this._labelRect;
													if ((pUVar12 != null) &&(pUVar11 = pUVar12.gameObject, pUVar11 != null)) {
														pUVar11.SetActive(true);
														pUVar12 = this._labelRect;
														if (pUVar12 != null) {
															local_98._4_4_ = UVar23.y;
															local_88 = UVar22.x;
															fStack_84 = UVar22.y;
															if (fVar17 <= local_98._4_4_ - fStack_84) {
																fVar17 = local_98._4_4_ - fStack_84;
															}
															fStack_44 = UVar24.y;
															fStack_74 = UVar21.m_Height;
															fStack_34 = UVar6.y;
															local_58 = UVar20.m_Width;
															local_68 = UVar5.x;
															UVar5.y = (fVar17 * 0.5 + fStack_44) - (1.0 - fStack_34) * fStack_74;
															UVar5.x = local_58 * local_68 + local_88;
															pUVar12.anchoredPosition = UVar5;
															pUVar12 = this._labelRect;
															if (pUVar12 != null) {
																local_98._0_4_ = UVar23.x;
																size = 0.0;
																if (0.0 <= (float)local_98 - local_88) {
																	size = (float)local_98 - local_88;
																}
																pUVar12.SetSizeWithCurrentAnchors(0, size);
																pUVar12 = this._labelRect;
																if (pUVar12 != null) {
																	pUVar12.SetSizeWithCurrentAnchors(1, fVar17);
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
								goto label_05d18cf8;
							}
						}
	label_05d18a3a: ;
						pUVar12 = this._labelRect;
						if ((pUVar12 != null) &&(pUVar11 = pUVar12.gameObject, pUVar11 != null)) {
							pUVar11.SetActive(false);
							return;
						}
					}
				}
	label_05d18cf8: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004E0E")]
	[Address(RVA = "0x5C19200", Offset = "0x5C18200", VA = "0x5C19200")]
	public float PreferredNameWidth()
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$PreferredNameWidth): clean
		NameEffectLabel pPVar1;
		TextMeshProUGUI pTVar2;
		Vector2 UVar3;
		Vector2 UVar4;
		bool bVar5;
		String text;
		float local_28;

		pPVar1 = this._label;
		bVar5 = ((Object)pPVar1 == null);
		if (bVar5) {
			return 0.0;
		}
		pPVar1 = this._label;
		if (pPVar1 != null) {
			pTVar2 = pPVar1._nameTmp;
			bVar5 = ((Object)pTVar2 == null);
			if (bVar5) {
				return 0.0;
			}
			bVar5 = String.IsNullOrEmpty(this._nameText);
			if (bVar5) {
				return 0.0;
			}
			pPVar1 = this._label;
			if (pPVar1 != null) {
				pTVar2 = pPVar1._nameTmp;
				text = String.Concat(this._nameText, "|") ;
				if (pTVar2 != null) {
					UVar3 = pTVar2.GetPreferredValues(text, 3.4028235e+38, 3.4028235e+38);
					UVar4 = pTVar2.GetPreferredValues("|", 3.4028235e+38, 3.4028235e+38);
					local_28 = UVar3.x;
					local_28 = local_28 - UVar4.x;
					if (local_28 <= 0.0) {
						local_28 = 0.0;
					}
					return local_28;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E0F")]
	[Address(RVA = "0x5C1AA10", Offset = "0x5C19A10", VA = "0x5C1AA10")]
	private bool TryGetSourceNameBounds(TMP_TextInfo textInfo, out Vector3 min, out Vector3 max, out float baseline, out int firstLine, out int lastLine)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$TryGetSourceNameBounds): 26 lines keep C-only constructs
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		int iVar10;
		TMP_CharacterInfo[] pTVar11;
		bool bVar12;
		ulong uVar13;
		bool pbVar14;
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		byte[] auVar18 = new byte[16];

		min.x = INFINITY;
		min.y = INFINITY;
		min.z = 0.0;
		max.x = -INFINITY;
		max.y = -INFINITY;
		max.z = 0.0;
		*baseline = 0.0;
		*firstLine = -1;
		*lastLine = -1;
		if ((this._hasRange != false) && (textInfo != null)) {
			if (textInfo.characterCount < 1) {
			}
			else {
				pTVar11 = textInfo.characterInfo;
				pbVar14 = &pTVar11[0].isVisible;
				uVar13 = 0;
				do {
					if (pTVar11 == null) {
						throw new NullReferenceException();
					}
					if ((uint)pTVar11.Length <= uVar13) {
						throw new IndexOutOfRangeException();
					}
					if ((((*pbVar14 & 1U) != 0) &&(this._range.SourceStartIndex <= *(int)(pbVar14 + -0x168))) &&(*(int)(pbVar14 + -0x168) < this._range.SourceEndIndex)) {
						iVar10 = *(int)(pbVar14 + -0x134);
						fVar1 = (((Vector3)(pbVar14 + -0x70)).fields).x;
						fVar2 = *(float)(pbVar14 + -0x50);
						fVar3 = (((Vector3)(pbVar14 + -0x7c)).fields).x;
						fVar4 = *(float)(pbVar14 + -0x48);
						if (*firstLine < 0) {
							fVar5 = *(float)(pbVar14 + -0x4c);
							*firstLine = iVar10;
							*baseline = fVar5;
						}
						*lastLine = iVar10;
						if (iVar10 != *firstLine) {
							return false;
						}
						uVar6 = min.x;
						uVar8 = min.y;
						auVar17._4_4_ = uVar8;
						auVar17._0_4_ = uVar6;
						auVar17._8_8_ = 0;
						auVar15._4_4_ = fVar4;
						auVar15._0_4_ = fVar3;
						auVar15._8_8_ = 0;
						auVar18 = minps(auVar17, auVar15);
						min.x = (float)auVar18._0_4_;
						min.y = (float)auVar18._4_4_;
						uVar7 = max.x;
						uVar9 = max.y;
						auVar16._4_4_ = uVar9;
						auVar16._0_4_ = uVar7;
						auVar16._8_8_ = 0;
						auVar18._4_4_ = fVar2;
						auVar18._0_4_ = fVar1;
						auVar18._8_8_ = 0;
						auVar18 = maxps(auVar16, auVar18);
						max.x = (float)auVar18._0_4_;
						max.y = (float)auVar18._4_4_;
					}
					uVar13 = uVar13 + 1;
					pbVar14 = pbVar14 + 0x178;
				} while ((long)uVar13 < (long)textInfo.characterCount);
			}
		}
		return bVar12;
	}

	[Token(Token = "0x6004E10")]
	[Address(RVA = "0x5C1A3B0", Offset = "0x5C193B0", VA = "0x5C1A3B0")]
	private void SetRaycastTargets(bool value)
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$SetRaycastTargets): 1 lines keep C-only constructs
		NameEffectLabel pPVar1;
		object pIVar2;
		bool bVar3;
		uint uVar4;
		Object[] pSVar5;
		uint uVar6;

		pPVar1 = this._label;
		bVar3 = ((Object)pPVar1 == null);
		if (bVar3) {
			return;
		}
		pPVar1 = this._label;
		if ((pPVar1 != null) &&(pSVar5 = pPVar1.GetComponentsInChildren<Graphic>(true), pSVar5 != null)) {
			uVar4 = (uint)pSVar5.Length;
			if ((int)uVar4 < 1) {
				return;
			}
			uVar6 = 0;
			while(true) {
				if (uVar4 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				pIVar2 = pSVar5[(int)uVar6];
				if (pIVar2 == null) break;
				(*pIVar2.klass.vtable[0x19].methodPtr)(pIVar2,value,pIVar2.klass.vtable[0x19].method);
				uVar6 = uVar6 + 1;
				uVar4 = (uint)pSVar5.Length;
				if ((int)uVar4 <= (int)uVar6) {
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E11")]
	[Address(RVA = "0x5C1AB50", Offset = "0x5C19B50", VA = "0x5C1AB50")]
	public ChatPlayerNameOverlay()
	{
		// Lifted from source/cpp/UI/ChatPlayerNameOverlay.c (UI.ChatPlayerNameOverlay$$.ctor): clean
		this._nameText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}
}
