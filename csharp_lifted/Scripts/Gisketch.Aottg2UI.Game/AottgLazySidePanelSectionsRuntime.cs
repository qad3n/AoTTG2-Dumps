// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034A")]
internal sealed class AottgLazySidePanelSectionsRuntime : MonoBehaviour, IGisketchSectionContentProvider
{
	[Token(Token = "0x4001081")]
	public const string NodeType = "LazySidePanelSections";

	[Token(Token = "0x4001082")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4001083")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x4001084")]
	[FieldOffset(Offset = "0x28")]
	private string[] _sectionIds;

	[Token(Token = "0x4001085")]
	[FieldOffset(Offset = "0x30")]
	private GisketchNodeDefinition[] _sectionNodes;

	[Token(Token = "0x4001086")]
	[FieldOffset(Offset = "0x38")]
	private GisketchBuildContext _context;

	[Token(Token = "0x4001087")]
	[FieldOffset(Offset = "0x40")]
	private GisketchView _view;

	[Token(Token = "0x4001088")]
	[FieldOffset(Offset = "0x48")]
	private readonly Dictionary<string, GameObject> _built;

	[Token(Token = "0x1700023E")]
	public string Prefix
	{
		[Token(Token = "0x600148D")]
		[Address(RVA = "0x5814C60", Offset = "0x5813C60", VA = "0x5814C60", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$get_Prefix): clean
			return this._prefix;
		}
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x5814C70", Offset = "0x5813C70", VA = "0x5814C70")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_075456e1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_075456e1 = true;
		}
		if (AottgLazySidePanelSectionsRuntime._registered != false) {
			return;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("LazySidePanelSections", __this_00);
		AottgLazySidePanelSectionsRuntime._registered = true;
		return;
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x5814D60", Offset = "0x5813D60", VA = "0x5814D60")]
	public static bool Select(GameObject source, string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Select): clean
		bool bVar1;
		AottgLazySidePanelSectionsRuntime __this;
		GameObject source_00;
		bool bVar2;

		__this = AottgLazySidePanelSectionsRuntime.Find(source);
		bVar1 = ((Object)__this == null);
		if (!bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.BuildSection(sectionId, true);
			if (bVar1) {
				source_00 = __this.gameObject;
				source_00.Select(sectionId, false);
			}
			else {
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x5814FB0", Offset = "0x5813FB0", VA = "0x5814FB0")]
	public static bool Invalidate(GameObject root, string prefix, string sectionId, GisketchNodeDefinition replacement)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Invalidate): clean
		bool bVar1;
		AottgLazySidePanelSectionsRuntime __this;

		__this = AottgLazySidePanelSectionsRuntime.Find(root, prefix);
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.ReplaceSection(sectionId, replacement);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x5815330", Offset = "0x5814330", VA = "0x5815330")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildRuntime): clean
		bool bVar1;
		LayoutElement pUVar2;
		AottgLazySidePanelSectionsRuntime __this;

		bVar1 = ((Object)go == null);
		if (bVar1) {
			return true;
		}
		if ((go != null) &&(pUVar2 = go.AddComponent<LayoutElement>(), pUVar2 != null)) {
			pUVar2.set_ignoreLayout(true);
			__this = go.AddComponent<AottgLazySidePanelSectionsRuntime>();
			if (__this != null) {
				__this.Setup(node, context, view);
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x5815410", Offset = "0x5814410", VA = "0x5815410")]
	private void Setup(GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Setup): clean
		String[] pSVar1;
		MethodInfo method_00;
		GisketchNodeDefinition[] pGVar2;

		if (node == null) {
			if (this == null) goto label_0591551b;
			this._prefix = null;
			pGVar2 = null;
			this._sectionIds = null;
		}
		else {
			if (this == null) {
	label_0591551b: ;
				throw new NullReferenceException();
			}
			this._prefix = node.value;
			this._sectionIds = node.options;
			pGVar2 = node.deferredChildren;
		}
		this._sectionNodes = pGVar2;
		this._context = context;
		this._view = view;
		pSVar1 = this._sectionIds;
		if ((pSVar1 == null) ||(method_00 = (MethodInfo)pSVar1.Length, method_00 == null)) {
			return;
		}
		if ((int)method_00 == 0) {
			throw new IndexOutOfRangeException();
		}
		this.BuildSection(pSVar1[0], false);
		return;
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x5815560", Offset = "0x5814560", VA = "0x5815560")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Start): clean
		String[] pSVar1;
		MethodInfo method_00;
		String sectionId;
		GameObject source;

		pSVar1 = this._sectionIds;
		if ((pSVar1 == null) ||(method_00 = (MethodInfo)pSVar1.Length, method_00 == null)) {
			return;
		}
		if ((int)method_00 != 0) {
			this.BuildSection(pSVar1[0], true);
			source = this.gameObject;
			pSVar1 = this._sectionIds;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			if ((int)pSVar1.Length != 0) {
				sectionId = pSVar1[0];
				source.Select(sectionId, true);
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x5815610", Offset = "0x5814610", VA = "0x5815610", Slot = "5")]
	public bool EnsureSection(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$EnsureSection): clean
		bool bVar1;

		bVar1 = this.BuildSection(sectionId, true);
		return bVar1;
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x5815530", Offset = "0x5814530", VA = "0x5815530")]
	private void PrimeInitialSection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$PrimeInitialSection): clean
		String[] pSVar1;
		MethodInfo method_00;

		pSVar1 = this._sectionIds;
		if ((pSVar1 == null) ||(method_00 = (MethodInfo)pSVar1.Length, method_00 == null)) {
			return;
		}
		if ((int)method_00 == 0) {
			throw new IndexOutOfRangeException();
		}
		this.BuildSection(pSVar1[0], false);
		return;
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x5814FA0", Offset = "0x5813FA0", VA = "0x5814FA0")]
	private bool BuildSection(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSection): clean
		bool bVar1;

		bVar1 = this.BuildSection(sectionId, true);
		return bVar1;
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x5815620", Offset = "0x5814620", VA = "0x5815620")]
	private bool BuildSection(string sectionId, bool settle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSection): 2 lines keep C-only constructs
		bool bVar1;
		String detail;
		GisketchUiPerfLog.Scope local_48;

		local_48._startMs = 0;
		local_48._enabled = false;
		local_48._hotLoop = false;
		local_48._26_6_ = 0;
		local_48._area = null;
		local_48._detail = null;
		detail = String.Concat(this._prefix, ":", sectionId);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_48 = GisketchUiPerfLog.Time("LazySidePanel.BuildSection", detail);
		bVar1 = this.BuildSectionCore(sectionId, settle);
		local_48.Dispose();
		return bVar1;
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x5815760", Offset = "0x5814760", VA = "0x5815760")]
	private bool BuildSectionCore(string sectionId, bool settle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSectionCore): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		GisketchNodeDefinition[] pGVar3;
		GisketchNodeDefinition node;
		GisketchBuildContext context;
		GisketchView view;
		bool bVar4;
		int index;
		String[] pSVar5;
		Transform pUVar6;
		Object x;
		Transform __this_00;
		bool bVar7;
		uint uVar8;
		ulong uVar9;

		bVar4 = String.IsNullOrEmpty(sectionId);
		if (!bVar4) {
			pSVar2 = (Dictionary<object, object>)this._built;
			if (pSVar2 == null) {
	label_0591584d: ;
				throw new NullReferenceException();
			}
			bVar4 = pSVar2.ContainsKey((object)sectionId);
			if (bVar4) {
				this.ShowOnly(sectionId);
			}
			else {
				pSVar5 = this._sectionIds;
				if (pSVar5 != null) {
					uVar9 = 0;
	label_05915810: ;
					uVar8 = (uint)pSVar5.Length;
					if ((long)(int)uVar8 <= (long)uVar9) goto label_059159e0;
					if (uVar9 < uVar8) {
						bVar4 = String.Equals(pSVar5[uVar9], sectionId, 5);
						if (!bVar4) {
							uVar9 = uVar9 + 1;
							pSVar5 = this._sectionIds;
							if (pSVar5 == null) goto label_0591584d;
							goto label_05915810;
						}
						uVar8 = (uint)uVar9;
						if ((((int)uVar8 < 0) ||(pGVar3 = this._sectionNodes, pGVar3 == null)) ||(uVar1 = (uint)pGVar3.Length, (int)uVar1 <= (int)uVar8)) goto label_059159e0;
						if (uVar1 <= uVar8) goto label_059159f3;
						if (pGVar3[uVar9] == null) goto label_059159e0;
						pUVar6 = this.transform;
						if (pUVar6 == null) goto label_0591584d;
						pUVar6 = pUVar6.parent;
						bVar4 = ((Object)pUVar6 == null);
						if (bVar4) {
							return false;
						}
						pGVar3 = this._sectionNodes;
						if (pGVar3 == null) goto label_0591584d;
						if (uVar8 < (uint)pGVar3.Length) {
							node = pGVar3[uVar9];
							context = this._context;
							view = this._view;
							x = (Object)GisketchScreenBuilder.BuildNodeInto(node, pUVar6, context, view);
							bVar4 = (x == null);
							if (bVar4) {
								return false;
							}
							if (x != null) {
								pUVar6 = x.transform;
								__this_00 = this.transform;
								if ((__this_00 != null) &&(index = __this_00.GetSiblingIndex(), pUVar6 != null)) {
									pUVar6.SetSiblingIndex(index);
									pSVar2 = (Dictionary<object, object>)this._built;
									if (pSVar2 != null) {
										pSVar2.set_Item((object)sectionId, (object)x);
										this.ShowOnly(sectionId);
										if (settle) {
											this.Settle();
											return true;
										}
										return true;
									}
								}
							}
							goto label_0591584d;
						}
					}
	label_059159f3: ;
					throw new IndexOutOfRangeException();
				}
	label_059159e0: ;
			}
		}
		return bVar7;
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x5815180", Offset = "0x5814180", VA = "0x5815180")]
	private bool ReplaceSection(string sectionId, GisketchNodeDefinition replacement)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$ReplaceSection): 1 lines keep C-only constructs
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;
		Dictionary<object, object> pSVar3;
		GisketchView __this_00;
		bool bVar4;
		String[] pSVar5;
		ulong uVar6;
		long lVar7;
		MethodInfo pMVar8;
		MethodInfo pMStack_38;

		pMStack_38 = null;
		pSVar5 = this._sectionIds;
		if (pSVar5 == null) {
			return false;
		}
		lVar7 = 0x20;
		uVar6 = 0;
		do {
			uVar1 = (uint)pSVar5.Length;
			if ((long)(int)uVar1 <= (long)uVar6) {
				return false;
			}
			if (uVar1 <= uVar6) {
	label_05915329: ;
				throw new IndexOutOfRangeException();
			}
			bVar4 = String.Equals(*(String*)((long)pSVar5.m_Items + lVar7 + -0x20), sectionId, 5);
			if (bVar4) {
				if (replacement == null) {
					return false;
				}
				if ((int)(uint)uVar6 < 0) {
					return false;
				}
				pGVar2 = this._sectionNodes;
				if (pGVar2 != null) {
					if ((uint)pGVar2.Length <= (uint)uVar6) goto label_05915329;
					*(GisketchNodeDefinition*)((long)pGVar2.m_Items + lVar7 + -0x20) = replacement;
					pSVar3 = (Dictionary<object, object>)this._built;
					if (pSVar3 != null) {
						bVar4 = pSVar3.TryGetValue((object)sectionId, (object*)&pMStack_38);
						pMVar8 = pMStack_38;
						if (!bVar4) {
							return true;
						}
						bVar4 = ((Object)pMVar8 == null);
						if (bVar4) {
							return true;
						}
						if (pMStack_38 != null) {
							pMVar8 = null;
							bVar4 = pMStack_38.activeSelf;
							__this_00 = this._view;
							if (__this_00 != null) {
								pMVar8 = pMStack_38;
								__this_00.UnregisterSubtree((GameObject)pMStack_38);
							}
							AottgLazySidePanelSectionsRuntime.DestroyObject((GameObject)pMStack_38);
							pSVar3 = (Dictionary<object, object>)this._built;
							if (pSVar3 != null) {
								pSVar3.Remove((object)sectionId);
								if (bVar4) {
									this.BuildSection(sectionId, true);
									return true;
								}
								return true;
							}
						}
					}
				}
				goto label_0591521b;
			}
			uVar6 = uVar6 + 1;
			pSVar5 = this._sectionIds;
			lVar7 = lVar7 + 8;
			if (pSVar5 == null) {
	label_0591521b: ;
				throw new NullReferenceException();
			}
		} while(true);
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x5815A00", Offset = "0x5814A00", VA = "0x5815A00")]
	private void ShowOnly(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$ShowOnly): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		object a;
		object x;
		bool bVar1;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;

		local_58._current.key = null;
		local_58._current.value = null;
		local_58._dictionary = null;
		local_58._version = 0;
		local_58._index = 0;
		local_58._getEnumeratorRetType = 0;
		local_58._36_4_ = 0;
		__this_00 = (Dictionary<object, object>)this._built;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		while(true) {
			do {
				bVar1 = local_58.MoveNext();
				x = local_58._current.value;
				a = local_58._current.key;
				if (!bVar1) {
					local_58.Dispose();
					return;
				}
				bVar1 = ((Object)x != null);
			} while (!bVar1);
			bVar1 = String.Equals((String)a, sectionId, 5);
			if ((Object)x == null) break;
			x.SetActive(bVar1);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x5815BC0", Offset = "0x5814BC0", VA = "0x5815BC0")]
	private int IndexOf(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$IndexOf): clean
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;

		pSVar3 = this._sectionIds;
		if (pSVar3 != null) {
			uVar4 = 0;
			while (true) {
				uVar1 = (uint)pSVar3.Length;
				if (!((long)uVar4 < (long)(int)uVar1)) break;
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				bVar2 = String.Equals(pSVar3[uVar4], sectionId, 5);
				if (bVar2) {
					return (int32_t)uVar4;
				}
				uVar4 = uVar4 + 1;
				pSVar3 = this._sectionIds;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
			}
		}
		return -1;
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x5815C30", Offset = "0x5814C30", VA = "0x5815C30")]
	private void Settle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Settle): clean
		bool bVar1;
		ScrollRect x;
		GameObject root;

		x = this.GetComponentInParent<ScrollRect>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			this = (AottgLazySidePanelSectionsRuntime)x;
		}
		root = this.gameObject;
		GisketchScreenBuilder.SettleLayout(root, 1);
		return;
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x5814E30", Offset = "0x5813E30", VA = "0x5814E30")]
	private static AottgLazySidePanelSectionsRuntime Find(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Find): clean
		bool bVar1;
		AottgLazySidePanelSectionsRuntime pGVar2;
		Transform pUVar3;

		bVar1 = ((Object)source == null);
		if (bVar1) {
			return null;
		}
		if (source != null) {
			pGVar2 = source.GetComponentInParent<AottgLazySidePanelSectionsRuntime>(true);
			if (pGVar2 != null) {
				return pGVar2;
			}
			pGVar2 = source.GetComponentInChildren<AottgLazySidePanelSectionsRuntime>(true);
			if (pGVar2 != null) {
				return pGVar2;
			}
			pUVar3 = source.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.root;
				bVar1 = ((Object)pUVar3 != null);
				if (!bVar1) {
					return null;
				}
				pUVar3 = source.transform;
				if ((pUVar3 != null) &&(pUVar3 = pUVar3.root, pUVar3 != null)) {
					pGVar2 = pUVar3.GetComponentInChildren<AottgLazySidePanelSectionsRuntime>(true);
					return pGVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x5815050", Offset = "0x5814050", VA = "0x5815050")]
	private static AottgLazySidePanelSectionsRuntime Find(GameObject root, string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Find): clean
		uint uVar1;
		AottgLazySidePanelSectionsRuntime x;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		bVar2 = ((Object)root == null);
		if (!bVar2) {
			if ((root == null) ||(pSVar3 = root.GetComponentsInChildren<AottgLazySidePanelSectionsRuntime>(true), pSVar3 == null)) {
	label_05915170: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar3.Length) {
				uVar4 = pSVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					x = (AottgLazySidePanelSectionsRuntime)pSVar3[uVar5];
					bVar2 = ((Object)x != null);
					if (bVar2) {
						if (x == null) goto label_05915170;
						bVar2 = String.Equals(x._prefix, prefix, 5);
						if (bVar2) {
							return x;
						}
					}
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar3.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar5 < (long)(int)uVar1);
			}
		}
		return null;
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x5815D00", Offset = "0x5814D00", VA = "0x5815D00")]
	private static void DestroyObject(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$DestroyObject): clean
		uint uVar1;
		bool bVar2;

		bVar2 = ((Object)go == null);
		if (bVar2) {
			return;
		}
		bVar2 = Application.isPlaying;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			Object.Destroy((Object)go);
			return;
		}
		if (uVar1 == 0) {
		}
		Object.DestroyImmediate((Object)go);
		return;
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x5815DC0", Offset = "0x5814DC0", VA = "0x5815DC0")]
	public AottgLazySidePanelSectionsRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLazySidePanelSectionsRuntime.c (Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$.ctor): 1 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, GameObject> __this_00;

		if (Il2CppMethodInitialized_075456ee == false) {
			Il2CppMethodInitialized_075456ee = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
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
		__this_00 = new Dictionary<string, GameObject>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._built = __this_00;
		base();
		return;
	}
}
