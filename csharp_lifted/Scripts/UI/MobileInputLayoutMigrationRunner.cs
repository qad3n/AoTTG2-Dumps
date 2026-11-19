// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayoutMigrationRunner
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayoutMigrationRunner.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000762")]
internal static class MobileInputLayoutMigrationRunner
{
	[Token(Token = "0x4002516")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> _legacyAliases;

	[Token(Token = "0x4002517")]
	[FieldOffset(Offset = "0x8")]
	private static bool _aliasesLoaded;

	[Token(Token = "0x6004740")]
	[Address(RVA = "0x5B9A4D0", Offset = "0x5B994D0", VA = "0x5B9A4D0")]
	public static void MigrateCustomLayouts(string folder, int currentVersion)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$MigrateCustomLayouts): 4 lines keep C-only constructs
		uint uVar1;
		String path;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		ulong uVar5;
		Il2CppClass klass;

		bVar2 = String.IsNullOrEmpty(folder);
		if ((!bVar2) && (bVar2 = Directory.Exists(folder))) {
			if ((typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor == 0) {
				bVar2 = MobileInputBindingRegistry.IsReady;
				klass = typeof(MobileInputLayoutMigrationRunner);
			}
			else {
				bVar2 = MobileInputBindingRegistry.IsReady;
				klass = typeof(MobileInputLayoutMigrationRunner);
			}
			typeof(MobileInputLayoutMigrationRunner) = (MobileInputLayoutMigrationRunner)klass;
			if (bVar2) {
				MobileInputLayoutMigrationRunner.RegisterLegacyAliases();
				pSVar3 = Directory.GetFiles(folder, "*.json");
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				if (0 < (int)pSVar3.Length) {
					uVar4 = pSVar3.Length & 0xffffffff;
					uVar5 = 0;
					do {
						if (uVar4 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						path = pSVar3[uVar5];
						if ((typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor == 0) {
						}
						MobileInputLayoutMigrationRunner.MigrateCustomLayout(path, currentVersion);
						uVar5 = uVar5 + 1;
						uVar1 = (uint)pSVar3.Length;
						uVar4 = (ulong)uVar1;
					} while ((long)uVar5 < (long)(int)uVar1);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004741")]
	[Address(RVA = "0x5B9B000", Offset = "0x5B9A000", VA = "0x5B9B000")]
	private static void MigrateCustomLayout(string path, int currentVersion)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$MigrateCustomLayout): 5 lines keep C-only constructs
		int version;
		List<MobileInputControlLayout> controls;
		int role;
		bool bVar1;
		uint in_EAX;
		String pSVar2;
		MobileInputLayout __this;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		if (Il2CppMethodInitialized_07547a09 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout) ;
			Il2CppMethodInitialized_07547a09 = true;
		}
		uStack_38 = (ulong)(uint)uStack_38;
		pSVar2 = File.ReadAllText(path);
		__this = JsonUtility.FromJson<MobileInputLayout>(pSVar2);
		if ((__this != null) && (__this.Version < currentVersion)) {
			bVar1 = __this.TryGetRole((int)((long)&uStack_38 + 4));
			if (bVar1) {
				version = __this.Version;
				controls = __this.Controls;
				role = uStack_38._4_4_;
				if ((typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor == 0) {
				}
				MobileInputLayoutMigrationRunner.MigrateControls(controls, role);
				__this.Version = currentVersion;
				MobileInputLayoutMigrationRunner.Backup(path, version);
				pSVar2 = JsonUtility.ToJson((object)__this, true);
				File.WriteAllText(path, pSVar2);
			}
		}
		return;
	}

	[Token(Token = "0x6004742")]
	[Address(RVA = "0x5B9B1F0", Offset = "0x5B9A1F0", VA = "0x5B9B1F0")]
	private static void MigrateControls(List<MobileInputControlLayout> controls, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$MigrateControls): 2 lines keep C-only constructs
		object control;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (controls != null) {
			local_58 = controls.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar1 = local_58.MoveNext();
				control = local_58._current;
				if (!bVar1) break;
				if ((typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor == 0) {
				}
				MobileInputLayoutMigrationRunner.MigrateControl((MobileInputControlLayout)control, role);
			}
			local_58.Dispose();
		}
		return;
	}

	[Token(Token = "0x6004743")]
	[Address(RVA = "0x5B9B3E0", Offset = "0x5B9A3E0", VA = "0x5B9B3E0")]
	private static void MigrateControl(MobileInputControlLayout control, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$MigrateControl): clean
		String pSVar1;

		if (control == null) {
			return;
		}
		pSVar1 = control.Actions;
		if ((typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = MobileInputLayoutMigrationRunner.NormalizeActionString(pSVar1, role);
		control.Actions = pSVar1;
		MobileInputLayoutMigrationRunner.MigrateControls(control.Children, role);
		return;
	}

	[Token(Token = "0x6004744")]
	[Address(RVA = "0x5B9B470", Offset = "0x5B9A470", VA = "0x5B9B470")]
	private static string NormalizeActionString(string actions, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$NormalizeActionString): 3 lines keep C-only constructs
		int piVar1;
		String[] pSVar2;
		bool bVar3;
		uint uVar4;
		List<string> __this;
		Char[] separator;
		String[] pSVar5;
		String pSVar6;
		MethodInfo method_00;
		MethodInfo pMVar7;
		uint uVar8;
		long lVar9;
		String local_40;
		List<string> local_38;

		local_40 = null;
		bVar3 = String.IsNullOrWhiteSpace(actions);
		if (bVar3) {
			return actions;
		}
		__this = new List<string>();
		separator = (Char[])new char[4];
		RuntimeHelpers.InitializeArray((Array)separator, FieldRva_PrivateImplementationDetails_8B02B2C27AF613530575C89F7AED6B3E9F9F86109996B40CC363B81F33EDC924);
		if (actions != null) {
			pSVar5 = actions.Split(separator, 1);
			if (pSVar5 != null) {
				uVar4 = (uint)pSVar5.Length;
				local_38 = __this;
				if (__this == null) {
					if ((int)uVar4 < 1) goto label_05c9b7b3;
					lVar9 = 0;
					do {
						if (uVar4 <= (uint)lVar9) goto label_05c9b7b8;
						if (pSVar5[lVar9] == null) goto label_05c9b7b3;
						pSVar6 = (pSVar5[lVar9]).Trim();
						bVar3 = MobileInputLayoutMigrationRunner.TryNormalizeId(pSVar6, role, ref local_40);
						if (bVar3) {
							bVar3 = String.Equals(local_40, "None", 4);
							if (!bVar3) goto label_05c9b7b3;
						}
						uVar4 = (uint)pSVar5.Length;
						lVar9 = lVar9 + 1;
					} while ((int)lVar9 < (int)uVar4);
				}
				else if (0 < (int)uVar4) {
					uVar8 = 0;
					do {
						if (uVar4 <= uVar8) {
	label_05c9b7b8: ;
							throw new IndexOutOfRangeException();
						}
						if (pSVar5[(int)uVar8] == null) goto label_05c9b7b3;
						pSVar6 = (pSVar5[(int)uVar8]).Trim();
						bVar3 = MobileInputLayoutMigrationRunner.TryNormalizeId(pSVar6, role, ref local_40);
						if (bVar3) {
							bVar3 = String.Equals(local_40, "None", 4);
							if ((!bVar3) &&(bVar3 = local_38.Contains((object)local_40), pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add, !bVar3)) {
								piVar1 = &local_38._version;
								*piVar1 = *piVar1 + 1;
								pSVar2 = local_38._items;
								if (pSVar2 == null) goto label_05c9b7b3;
								uVar4 = local_38._size;
								if (uVar4 < (uint)pSVar2.Length) {
									method_00 = (MethodInfo)(ulong)(uVar4 + 1);
									local_38._size = uVar4 + 1;
									pSVar2[(int)uVar4] = local_40;
								}
								else {
									local_38.AddWithResize((object)local_40);
								}
							}
						}
						uVar8 = uVar8 + 1;
						uVar4 = (uint)pSVar5.Length;
					} while ((int)uVar8 < (int)uVar4);
				}
				if (local_38 != null) {
					if (local_38._size == 0) {
						return "None";
					}
					pSVar5 = (String[])local_38.ToArray();
					pSVar6 = String.Join("+", pSVar5);
					return pSVar6;
				}
			}
		}
	label_05c9b7b3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004745")]
	[Address(RVA = "0x5B9B7C0", Offset = "0x5B9A7C0", VA = "0x5B9B7C0")]
	private static bool TryNormalizeId(string value, MobileInputLayoutRole role, out string id)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$TryNormalizeId): 2 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		MethodInfo pMVar3;

		if ((typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = MobileInputLayoutMigrationRunner.NormalizeId(value, role);
		*id = pSVar2;
		pMVar3 = (MethodInfo *)"None";
		bVar1 = String.Equals(*id, "None", 4);
		if (bVar1) {
			return true;
		}
		pSVar2 = *id;
		bVar1 = MobileInputLayoutMigrationRunner.IsValidActionIdString(pSVar2);
		return bVar1;
	}

	[Token(Token = "0x6004746")]
	[Address(RVA = "0x5B9B880", Offset = "0x5B9A880", VA = "0x5B9B880")]
	private static string NormalizeId(string value, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$NormalizeId): 6 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String pSVar3;
		String pSVar4;
		String id;
		String* ppSVar5;
		MobileInputBinding local_60;
		String local_58;
		String local_50;
		Enum local_48;

		local_50 = null;
		local_58 = null;
		local_60 = null;
		bVar2 = String.IsNullOrWhiteSpace(value);
		if (bVar2) {
			return "None";
		}
		if (value == null) {
	label_05c9bbff: ;
			throw new NullReferenceException();
		}
		pSVar3 = value.Trim();
		bVar2 = String.Equals(pSVar3, "None", 4);
		if (bVar2) {
			return "None";
		}
		bVar2 = MobileInputBindingRegistry.TryGetBinding(pSVar3, ref local_60);
		if (bVar2) {
			return pSVar3;
		}
		local_48.klass = (Enum)typeof(MobileInputLayoutRole);
		local_48.monitor = (IntPtr)0xffffffffffffffff;
		pSVar4 = local_48.ToString();
		pSVar4 = String.Concat(pSVar4, ":", pSVar3);
		pSVar1 = (Dictionary<object, object>)MobileInputLayoutMigrationRunner._legacyAliases;
		if (pSVar1 == null) goto label_05c9bbff;
		bVar2 = pSVar1.TryGetValue((object)pSVar4, (object*)&local_50);
		if (bVar2) {
			return local_50;
		}
		pSVar1 = (Dictionary<object, object>)MobileInputLayoutMigrationRunner._legacyAliases;
		if (pSVar1 == null) goto label_05c9bbff;
		bVar2 = pSVar1.TryGetValue((object)pSVar3, (object*)&local_58);
		if (bVar2) {
			return local_58;
		}
		local_48.klass = (Enum)typeof(MobileInputLayoutRole);
		local_48.monitor = (IntPtr)0xffffffffffffffff;
		pSVar4 = local_48.ToString();
		id = String.Concat(pSVar4, ".", pSVar3);
		bVar2 = MobileInputBindingRegistry.TryGetBinding(id, ref local_60);
		if (bVar2) {
			pSVar3 = String.Concat(pSVar4, ".", pSVar3);
			return pSVar3;
		}
		if (role != 5) {
			ppSVar5 = &"General.";
			pSVar4 = String.Concat("General.", pSVar3);
			bVar2 = MobileInputBindingRegistry.TryGetBinding(pSVar4, ref local_60);
			if (bVar2) goto label_05c9bbdd;
			ppSVar5 = &"Interaction.";
			pSVar4 = String.Concat("Interaction.", pSVar3);
			bVar2 = MobileInputBindingRegistry.TryGetBinding(pSVar4, ref local_60);
			if (bVar2) goto label_05c9bbdd;
		}
		ppSVar5 = &"Human.";
		pSVar4 = String.Concat("Human.", pSVar3);
		bVar2 = MobileInputBindingRegistry.TryGetBinding(pSVar4, ref local_60);
		if (!bVar2) {
			return pSVar3;
		}
	label_05c9bbdd: ;
		pSVar3 = String.Concat(*ppSVar5, pSVar3);
		return pSVar3;
	}

	[Token(Token = "0x6004747")]
	[Address(RVA = "0x5B9A610", Offset = "0x5B99610", VA = "0x5B9A610")]
	private static void RegisterLegacyAliases()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$RegisterLegacyAliases): clean
		sbyte cVar1;
		uint uVar2;

		if (Il2CppMethodInitialized_07547a0f == false) {
			Il2CppMethodInitialized_07547a0f = true;
			uVar2 = (typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = MobileInputLayoutMigrationRunner._aliasesLoaded;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(MobileInputLayoutMigrationRunner)).static_fields + 8);
		}
		if (cVar1 == false) {
			if (((typeof(MobileInputLayoutMigrationRunner))._2).cctor_finished_or_no_cctor == 0) {
			}
			MobileInputLayoutMigrationRunner.RegisterCommonAliases(1, "Human");
			MobileInputLayoutMigrationRunner.RegisterCommonAliases(2, "Titan");
			MobileInputLayoutMigrationRunner.RegisterCommonAliases(3, "AnnieShifter");
			MobileInputLayoutMigrationRunner.RegisterCommonAliases(4, "ErenShifter");
			MobileInputLayoutMigrationRunner.AddAlias("TitanKick", "Titan.Kick");
			MobileInputLayoutMigrationRunner.AddAlias("TitanJump", "Titan.Jump");
			MobileInputLayoutMigrationRunner.AddAlias("TitanWalk", "Titan.Walk");
			MobileInputLayoutMigrationRunner.AddAlias("TitanSit", "Titan.Sit");
			MobileInputLayoutMigrationRunner.AddAlias("TitanSprint", "Titan.Sprint");
			MobileInputLayoutMigrationRunner.AddAlias("TitanCoverNape", "Titan.CoverNape1");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackPunch", "Titan.AttackPunch");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackBellyFlop", "Titan.AttackBellyFlop");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlapLeft", "Titan.AttackSlapL");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlapRight", "Titan.AttackSlapR");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackRockThrow", "Titan.AttackRockThrow");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackBiteLeft", "Titan.AttackBiteL");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackBiteFront", "Titan.AttackBiteF");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackBiteRight", "Titan.AttackBiteR");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackHitFace", "Titan.AttackHitFace");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackHitBack", "Titan.AttackHitBack");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlam", "Titan.AttackSlam");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackStomp", "Titan.AttackStomp");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSwing", "Titan.AttackSwing");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabAirFar", "Titan.AttackGrabAirFar");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabAir", "Titan.AttackGrabAir");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabBody", "Titan.AttackGrabBody");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabCore", "Titan.AttackGrabCore");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabGround", "Titan.AttackGrabGround");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabHead", "Titan.AttackGrabHead");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackGrabHigh", "Titan.AttackGrabHigh");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlapHighLeft", "Titan.AttackSlapHighL");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlapHighRight", "Titan.AttackSlapHighR");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlapLowLeft", "Titan.AttackSlapLowL");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackSlapLowRight", "Titan.AttackSlapLowR");
			MobileInputLayoutMigrationRunner.AddAlias("TitanAttackBrushChest", "Titan.AttackBrushChest");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackCombo", "AnnieShifter.AttackCombo");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "AttackDefault", "AnnieShifter.AttackCombo");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackSwing", "AnnieShifter.AttackSwing");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "AttackSpecial", "AnnieShifter.AttackSwing");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackStomp", "AnnieShifter.AttackStomp");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackBite", "AnnieShifter.AttackBite");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackHead", "AnnieShifter.AttackHead");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackBrushBack", "AnnieShifter.AttackBrushBack");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackBrushFront", "AnnieShifter.AttackBrushFront");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackBrushHead", "AnnieShifter.AttackBrushHead");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackGrabBottom", "AnnieShifter.AttackGrabBottom");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackGrabMid", "AnnieShifter.AttackGrabMid");
			MobileInputLayoutMigrationRunner.AddRoleAlias(3, "ShifterAttackGrabUp", "AnnieShifter.AttackGrabUp");
			MobileInputLayoutMigrationRunner.AddRoleAlias(4, "ShifterAttackCombo", "ErenShifter.AttackCombo");
			MobileInputLayoutMigrationRunner.AddRoleAlias(4, "AttackDefault", "ErenShifter.AttackCombo");
			MobileInputLayoutMigrationRunner.AddMapEditorAliases();
			MobileInputLayoutMigrationRunner._aliasesLoaded = true;
		}
		return;
	}

	[Token(Token = "0x6004748")]
	[Address(RVA = "0x5B9BD20", Offset = "0x5B9AD20", VA = "0x5B9BD20")]
	private static void RegisterCommonAliases(MobileInputLayoutRole role, string group)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$RegisterCommonAliases): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String id;
		String* method_00;

		pSVar3 = String.Concat(group, ".Kick");
		MobileInputLayoutMigrationRunner.AddRoleAlias(role, "Kick", pSVar3);
		pSVar3 = String.Concat(group, ".Jump");
		MobileInputLayoutMigrationRunner.AddRoleAlias(role, "Jump", pSVar3);
		pSVar3 = String.Concat(group, ".Walk");
		MobileInputLayoutMigrationRunner.AddRoleAlias(role, "Walk", pSVar3);
		bVar2 = (group == "Human");
		pSVar3 = "Dash";
		method_00 = &"Dash";
		if (bVar2) {
			uVar1 = (typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor;
			id = "Human.Dash+Human.Dodge";
		}
		else {
			id = String.Concat(group, ".Kick");
			uVar1 = (typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		MobileInputLayoutMigrationRunner.AddRoleAlias(role, pSVar3, id);
		return;
	}

	[Token(Token = "0x6004749")]
	[Address(RVA = "0x5B9C0C0", Offset = "0x5B9B0C0", VA = "0x5B9C0C0")]
	private static void AddMapEditorAliases()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$AddMapEditorAliases): 9 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		sbyte cVar3;
		bool bVar4;
		object pIVar5;
		VirtualInvokeData pVVar6;
		object pIVar7;
		String legacy;
		ulong uVar8;
		long lVar9;
		object local_48;
		byte local_38;

		local_48 = null;
		MobileInputLayoutMigrationRunner.AddRoleAlias(5, "Forward", "MapEditor.Forward");
		MobileInputLayoutMigrationRunner.AddRoleAlias(5, "Back", "MapEditor.Back");
		MobileInputLayoutMigrationRunner.AddRoleAlias(5, "Left", "MapEditor.Left");
		MobileInputLayoutMigrationRunner.AddRoleAlias(5, "Right", "MapEditor.Right");
		pIVar5 = (object)MobileInputBindingRegistry.GetAll();
		if (pIVar5 == null) {
			throw new NullReferenceException();
		}
		pIVar1 = pIVar5.klass;
		uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
		pIVar5 = pIVar5.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar5;
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = pIVar5.klass;
			uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
			cVar3 = pIVar5.Dispose();
			pIVar5 = local_48;
			if (cVar3 == false) {
				if (local_48 == null) {
					return;
				}
				pIVar1 = local_48.klass;
				uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar8 == 0) goto label_05c9c48f;
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar9 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_48.klass;
			uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
			pIVar7 = pIVar5.Dispose();
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			bVar4 = (pIVar7[1].monitor == "MapEditor");
			pIVar5 = local_48;
			if (bVar4) {
				legacy = String.Concat("MapEditor", (String)pIVar7[2].klass);
				pIVar1 = pIVar7[1].klass;
				if ((typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor == 0) {
				}
				MobileInputLayoutMigrationRunner.AddAlias(legacy, (String)pIVar1);
				pIVar5 = local_48;
			}
		} while(true);
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar8 * 0x10 != lVar9)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar9) == typeof(IDisposable)) {
				pVVar6 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar9);
				goto label_05c9c4ad;
			}
		}
	label_05c9c48f: ;
	label_05c9c4ad: ;
		pIVar5.Dispose();
		return;
	}

	[Token(Token = "0x600474A")]
	[Address(RVA = "0x5B9BEC0", Offset = "0x5B9AEC0", VA = "0x5B9BEC0")]
	private static void AddAlias(string legacy, string id)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$AddAlias): clean
		Dictionary<object, object> __this;
		bool bVar1;
		MobileInputBinding local_20;

		local_20 = null;
		bVar1 = MobileInputBindingRegistry.TryGetBinding(id, ref local_20);
		if (bVar1) {
			__this = (Dictionary<object, object>)MobileInputLayoutMigrationRunner._legacyAliases;
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.set_Item((object)legacy, (object)id);
		}
		return;
	}

	[Token(Token = "0x600474B")]
	[Address(RVA = "0x5B9BF90", Offset = "0x5B9AF90", VA = "0x5B9BF90")]
	private static void AddRoleAlias(MobileInputLayoutRole role, string legacy, string id)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$AddRoleAlias): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		bool bVar2;
		String pSVar3;
		Enum local_38;

		if (Il2CppMethodInitialized_07547a13 == false) {
			Il2CppMethodInitialized_07547a13 = true;
			uVar1 = (typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLayoutMigrationRunner)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = MobileInputLayoutMigrationRunner.IsValidActionIdString(id);
		}
		else {
			bVar2 = MobileInputLayoutMigrationRunner.IsValidActionIdString(id);
		}
		if (bVar2) {
			if (((typeof(MobileInputLayoutMigrationRunner))._2).cctor_finished_or_no_cctor == 0) {
			}
			__this = (Dictionary<object, object>)MobileInputLayoutMigrationRunner._legacyAliases;
			local_38.klass = (Enum)typeof(MobileInputLayoutRole);
			local_38.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_38.ToString();
			pSVar3 = String.Concat(pSVar3, ":", legacy);
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.set_Item((object)pSVar3, (object)id);
		}
		return;
	}

	[Token(Token = "0x600474C")]
	[Address(RVA = "0x5B9BC10", Offset = "0x5B9AC10", VA = "0x5B9BC10")]
	private static bool IsValidActionIdString(string id)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$IsValidActionIdString): 2 lines keep C-only constructs
		uint uVar1;
		String id_00;
		bool bVar2;
		Char[] separator;
		String[] pSVar3;
		il2cpp_array_size_t iVar4;
		ulong uVar5;
		MobileInputBinding local_30;

		local_30 = null;
		separator = (Char[])new char[1];
		if (separator != null) {
			if ((int)separator.Length == 0) {
	label_05c9bd14: ;
				throw new IndexOutOfRangeException();
			}
			separator[0] = 0x2b;
			if ((id != null) &&(pSVar3 = id.Split(separator, 1), pSVar3 != null)) {
				iVar4 = pSVar3.Length;
				if (iVar4 == 0) {
					bVar2 = false;
				}
				else if ((int)iVar4 < 1) {
					bVar2 = true;
				}
				else {
					uVar5 = 0;
					do {
						if ((iVar4 & 0xffffffff) <= uVar5) goto label_05c9bd14;
						id_00 = pSVar3[uVar5];
						bVar2 = MobileInputBindingRegistry.TryGetBinding(id_00, ref local_30);
						if (!bVar2) {
							return bVar2;
						}
						uVar5 = uVar5 + 1;
						uVar1 = (uint)pSVar3.Length;
						iVar4 = (il2cpp_array_size_t)uVar1;
					} while ((long)uVar5 < (long)(int)uVar1);
				}
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600474D")]
	[Address(RVA = "0x5B9B350", Offset = "0x5B9A350", VA = "0x5B9B350")]
	private static void Backup(string path, int version)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c (UI.MobileInputLayoutMigrationRunner$$Backup): clean
		bool bVar1;
		String pSVar2;
		int local_14;

		bVar1 = String.IsNullOrEmpty(path);
		if (!bVar1) {
			bVar1 = File.Exists(path);
			if (bVar1) {
				pSVar2 = local_14.ToString();
				pSVar2 = String.Concat(path, ".bak.v", pSVar2);
				bVar1 = File.Exists(pSVar2);
				if (!bVar1) {
					File.Copy(path, pSVar2);
				}
			}
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileInputLayoutMigrationRunner.c.

	// UI.MobileInputLayoutMigrationRunner$$.cctor: 1 lines keep C-only constructs
	static MobileInputLayoutMigrationRunner()
	{
		uint uVar1;
		OrdinalCaseSensitiveComparer comparer;
		Dictionary<string, string> __this;

		if (Il2CppMethodInitialized_07547a16 == false) {
			Il2CppMethodInitialized_07547a16 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075435b6 == false) {
			Il2CppMethodInitialized_075435b6 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinal;
		__this = new Dictionary<string, string>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		MobileInputLayoutMigrationRunner._legacyAliases = __this;
		return;
	}
}
