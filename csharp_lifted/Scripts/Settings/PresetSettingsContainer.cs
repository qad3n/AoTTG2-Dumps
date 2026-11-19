// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/PresetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000115")]
internal abstract class PresetSettingsContainer : SaveableSettingsContainer
{
	[Token(Token = "0x170000C5")]
	protected virtual string PresetFolderPath
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x5B7B940", Offset = "0x5B7A940", VA = "0x5B7B940", Slot = "23")]
		get
		{
			// Lifted from source/cpp/Settings/PresetSettingsContainer.c (Settings.PresetSettingsContainer$$get_PresetFolderPath): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754797d == false) {
				Il2CppMethodInitialized_0754797d = true;
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return FolderPaths.PresetsPath;
			}
			return *(String*)((long)(typeof(FolderPaths)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5B7B9B0", Offset = "0x5B7A9B0", VA = "0x5B7B9B0", Slot = "19")]
	public override void Load()
	{
		// Lifted from source/cpp/Settings/PresetSettingsContainer.c (Settings.PresetSettingsContainer$$Load): 22 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary pSVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Il2CppClass pIVar4;
		ISetSettingsContainer itf;
		bool bVar5;
		String pSVar6;
		Dictionary<string, string> __this_00;
		object pIVar7;
		VirtualInvokeData pVVar8;
		object pIVar9;
		Il2CppClass pIVar10;
		ulong uVar11;
		ISetSettingsContainer pSVar12;
		long lVar13;
		object pIStack_90;
		byte[] auStack_88 = new byte[16];
		Dictionary.Enumerator<object, object> pSStack_78;
		object pIStack_70;
		String pSStack_68;
		int iStack_60;
		uint uStack_5c;
		byte[] auStack_58 = new byte[8];
		ulong uStack_50;
		object pIStack_48;
		String pSStack_40;
		ulong uStack_38;

		pIStack_90 = null;
		auStack_88._0_8_ = null;
		pIStack_48 = null;
		pSStack_40 = null;
		auStack_58 = (byte[])0x0;
		uStack_50._0_4_ = 0;
		uStack_50._4_4_ = 0;
		uStack_38._0_4_ = 0;
		uStack_38._4_4_ = 0;
		pSVar6 = this.GetPresetFilePath();
		__this_00 = new Dictionary<string, string>();
		bVar5 = File.Exists(pSVar6);
		if (bVar5) {
			pSVar6 = File.ReadAllText(pSVar6);
			this.DeserializeFromJsonString(pSVar6);
			pSVar2 = this.Settings;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			pIVar7 = (object)pSVar2.Keys;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar10 = pIVar7.klass;
			uVar11 = (ulong)(pIVar10._2).interface_offsets_count;
			pIStack_90 = (object)pIVar7.Dispose();
			auStack_88._8_8_ = null;
			pSStack_78 = (Dictionary.Enumerator<object, object>)&pIStack_90;
			pIStack_70 = (object)auStack_88;
			do {
				pIVar7 = pIStack_90;
				if (pIStack_90 == null) {
					throw new NullReferenceException();
				}
				pIVar10 = pIStack_90.klass;
				uVar11 = (ulong)(pIVar10._2).interface_offsets_count;
				bVar5 = pIVar7.Dispose();
				pIVar7 = pIStack_90;
				if (!bVar5) {
					pIVar10 = (Il2CppClass)(pIStack_90 as IDisposable);
					auStack_88._0_8_ = pIVar10;
					if (pIVar10 == null) break;
					pIVar4 = (pIVar10._1).image;
					uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
					if (uVar11 == 0) goto label_05c7bdcf;
					pIVar3 = (pIVar4._1).interfaceOffsets;
					lVar13 = 0;
					goto label_05c7bdc0;
				}
				if (pIStack_90 == null) {
					throw new NullReferenceException();
				}
				pIVar10 = pIStack_90.klass;
				uVar11 = (ulong)(pIVar10._2).interface_offsets_count;
				pIVar7 = pIVar7.Dispose();
				if ((pIVar7 != null) && (pIVar7.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				pSVar2 = this.Settings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pIVar9 = pSVar2.get_Item(pIVar7);
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar10 = pIVar9.klass;
				bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if (((pIVar10._2).typeHierarchyDepth < bVar1) ||((pIVar10._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
					throw new InvalidCastException();
				}
				pIVar9 = (object)(*pIVar10.vtable[8].methodPtr)(pIVar9,pIVar10.vtable[8].method);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Add(pIVar7, pIVar9);
			} while(true);
		}
		goto label_05c7bdff;
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar11 * 0x10 != lVar13)) break;
	label_05c7bdc0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar8 = pIVar4.vtable + *(int)((long)&pIVar3.offset + lVar13);
				goto label_05c7bded;
			}
		}
	label_05c7bdcf: ;
	label_05c7bded: ;
		pIVar10.Dispose();
	label_05c7bdff: ;
		this.SetDefault();
		this.Load();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		((auStack_88 + 8)).GetEnumerator((Dictionary<object, object>)__this_00);
		uStack_38._0_4_ = iStack_60;
		uStack_38._4_4_ = uStack_5c;
		pIStack_48 = pIStack_70;
		pSStack_40 = pSStack_68;
		auStack_58 = (byte[])auStack_88._8_8_;
		uStack_50 = (object*)pSStack_78;
		auStack_88._8_8_ = null;
		pSStack_78 = (Dictionary.Enumerator<object, object>)auStack_58;
		do {
			do {
				bVar5 = auStack_58.MoveNext();
				pSVar6 = pSStack_40;
				if (!bVar5) {
					auStack_58.Dispose();
					return;
				}
				pSVar2 = this.Settings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pIVar7 = pSVar2.get_Item(pIStack_48) ;
				if (pIVar7 != null) {
					bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
					if (((pIVar7.klass._2).typeHierarchyDepth < bVar1) ||((pIVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetting))) {
						throw new InvalidCastException();
					}
				}
				pIVar9 = (pIVar7 as ISetSettingsContainer);
				pSVar12 = typeof(ISetSettingsContainer);
			} while (pIVar9 == null);
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar9 = (pIVar7 as ISetSettingsContainer);
			itf = typeof(ISetSettingsContainer);
			if ((pIVar9 == null) ||(pIVar9 = (pIVar7 as ISetSettingsContainer), pSVar12 = itf, pIVar9 == null)) {
				throw new InvalidCastException();
			}
			pIVar10 = pIVar9.klass;
			uVar11 = (ulong)(pIVar10._2).interface_offsets_count;
			pIVar9.Dispose(pSVar6);
		} while(true);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x5B7C3C0", Offset = "0x5B7B3C0", VA = "0x5B7C3C0", Slot = "24")]
	protected virtual string GetPresetFilePath()
	{
		// Lifted from source/cpp/Settings/PresetSettingsContainer.c (Settings.PresetSettingsContainer$$GetPresetFilePath): clean
		String pSVar1;
		String str2;

		pSVar1 = this.get_PresetFolderPath();
		str2 = (String)this.unknown();
		pSVar1 = String.Concat(pSVar1, "/", str2);
		return pSVar1;
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5B7C430", Offset = "0x5B7B430", VA = "0x5B7C430")]
	protected PresetSettingsContainer()
	{
		// Lifted from source/cpp/Settings/PresetSettingsContainer.c (Settings.PresetSettingsContainer$$.ctor): clean
		base();
		return;
	}
}
