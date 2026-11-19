// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceScoreStore
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceScoreStore.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AF")]
internal sealed class ExperienceScoreStore
{
	[Serializable]
	[Token(Token = "0x20000B0")]
	private sealed class ScoreFile
	{
		[Token(Token = "0x4000392")]
		[FieldOffset(Offset = "0x10")]
		public List<ExperienceScoreRecord> Records;

		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x5A39120", Offset = "0x5A38120", VA = "0x5A39120")]
		public ScoreFile()
		{
			// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore.ScoreFile$$.ctor): clean
			List<ExperienceScoreRecord> __this_00;

			__this_00 = new List<ExperienceScoreRecord>();
			this.Records = __this_00;
			base();
			return;
		}
	}

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ExperienceScoreStore Local;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _directory;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _path;

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x58D6CC0", Offset = "0x58D5CC0", VA = "0x58D6CC0")]
	public ExperienceScoreStore(string directory)
	{
		// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore$$.ctor): clean
		String pSVar1;

		base();
		this._directory = directory;
		pSVar1 = Path.Combine(directory, "ExperienceScores.json");
		this._path = pSVar1;
		return;
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x58D6D60", Offset = "0x58D5D60", VA = "0x58D6D60")]
	public ExperienceScoreRecord Get(string experienceID)
	{
		// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore$$Get): 7 lines keep C-only constructs
		List<ExperienceScoreRecord> __this_00;
		bool bVar1;
		ExperienceScoreStore.c__DisplayClass5_0 __this_01;
		ExperienceScoreStore.ScoreFile pSVar2;
		Predicate<T> match;
		ExperienceScoreRecord pSVar3;
		Il2CppClass klass;
		ArgumentException __this_02;
		String message;
		String paramName;
		MethodInfo pMVar4;

		__this_01 = new ExperienceScoreStore.c__DisplayClass5_0();
		if (__this_01 != null) {
			__this_01.experienceID = experienceID;
			bVar1 = String.IsNullOrWhiteSpace(__this_01.experienceID);
			if (bVar1) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_02 = (ArgumentException)il2cpp_codegen_object_new(klass);
				message = il2cpp_codegen_get_runtime_metadata(&"An experience ID is required.");
				paramName = il2cpp_codegen_get_runtime_metadata(&"experienceID");
				__this_02 = new ArgumentException(message, paramName);
				pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Get);
				throw (object)__this_02;
			}
			pSVar2 = this.Load();
			if (pSVar2 != null) {
				__this_00 = pSVar2.Records;
				match = new Predicate<ExperienceScoreRecord>((object)__this_01, (intptr_t)MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0_Get_b__0);
				if (__this_00 != null) {
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x58D7930", Offset = "0x58D6930", VA = "0x58D7930")]
	public void Save(string experienceID, float score, string unit, bool lowerIsBetter)
	{
		// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore$$Save): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<ExperienceScoreRecord> pSVar3;
		ExperienceScoreRecord[] pSVar4;
		ExperienceScoreStore.c__DisplayClass6_0 __this_00;
		ExperienceScoreRecord record;
		ExperienceScoreStore.ScoreFile file;
		Predicate<T> match;

		__this_00 = new ExperienceScoreStore.c__DisplayClass6_0();
		if (__this_00 != null) {
			__this_00.experienceID = experienceID;
			record = new ExperienceScoreRecord();
			if (record != null) {
				record.ExperienceID = __this_00.experienceID;
				record.Score = score;
				record.Unit = unit;
				record.LowerIsBetter = lowerIsBetter;
				ExperienceScoreStore.Validate(record);
				file = this.Load();
				if (file != null) {
					pSVar3 = file.Records;
					match = new Predicate<ExperienceScoreRecord>((object)__this_00, (intptr_t)MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0_Save_b__0);
					if (pSVar3 != null) {
						pSVar3.RemoveAll(match);
						pSVar3 = file.Records;
						if (pSVar3 != null) {
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = pSVar3._items;
							if (pSVar4 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pSVar4.Length) {
									pSVar3._size = uVar2 + 1;
									pSVar4[(int)uVar2] = record;
								}
								else {
									pSVar3.AddWithResize((object)record);
								}
								this.Write(file);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x58D7C20", Offset = "0x58D6C20", VA = "0x58D7C20")]
	private void Write(ScoreFile file)
	{
		// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore$$Write): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String pSVar3;
		SimpleAES __this_00;
		String local_48;
		byte local_38;
		Guid local_30;

		Directory.CreateDirectory(this._directory);
		pSVar3 = this._path;
		local_30 = Guid.NewGuid();
		pSVar2 = local_30.ToString("N");
		pSVar3 = String.Concat(pSVar3, ".", pSVar2, ".tmp");
		local_38 = (byte)&local_48;
		local_48 = pSVar3;
		__this_00 = new SimpleAES();
		pSVar2 = JsonUtility.ToJson((object)file);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = __this_00.Encrypt(pSVar2);
		File.WriteAllText(pSVar3, pSVar2);
		bVar1 = File.Exists(this._path);
		pSVar3 = this._path;
		if (bVar1) {
			File.Replace(local_48, pSVar3, null);
		}
		else {
			File.Move(local_48, pSVar3);
		}
		bVar1 = File.Exists(local_48);
		if (bVar1) {
			File.Delete(local_48);
		}
		return;
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x58D6EB0", Offset = "0x58D5EB0", VA = "0x58D6EB0")]
	private ScoreFile Load()
	{
		// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore$$Load): 24 lines keep C-only constructs
		uint uVar1;
		OrdinalCaseSensitiveComparer comparer;
		List<ExperienceScoreRecord> __this_00;
		ulong uVar2;
		bool bVar3;
		bool bVar4;
		String pSVar5;
		String pSVar6;
		SimpleAES __this_01;
		JSONNode pSVar7;
		JSONNode pSVar8;
		JSONArray pSVar9;
		Il2CppClass pIVar10;
		InvalidDataException pSVar11;
		MethodInfo pMVar12;
		ExperienceScoreStore.ScoreFile pSVar13;
		HashSet<string> __this_02;
		String* metadataPointer;
		KeyValuePair<string, JSONNode> aKeyValue;
		byte[] local_d8 = new byte[24];
		byte[] local_c0 = new byte[24];
		int iStack_88;
		int iStack_84;
		System_Collections_Generic_Dictionary_Entry_TKey__TValue__array local_78;
		ulong uStack_40;

		uStack_40._0_4_ = 0;
		uStack_40._4_4_ = 0;
		local_78 = null;
		local_d8._0_8_ = null;
		local_d8._8_8_ = null;
		local_d8._16_8_ = null;
		bVar3 = File.Exists(this._path);
		if (!bVar3) {
			pSVar13 = new ExperienceScoreStore.ScoreFile();
			return pSVar13;
		}
		pSVar5 = File.ReadAllText(this._path);
		if ((pSVar5 == null) ||(pSVar6 = pSVar5.TrimStart(), pSVar6 == null)) {
	label_059d761b: ;
			throw new NullReferenceException();
		}
		bVar3 = pSVar6.StartsWith("{", 4);
		if (!bVar3) {
			__this_01 = new SimpleAES();
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			pSVar5 = __this_01.Decrypt(pSVar5);
		}
		pSVar7 = JSON.Parse(pSVar5);
		bVar4 = (pSVar7 == null);
		if (!bVar4) {
			if (pSVar7 == null) goto label_059d761b;
			bVar4 = pSVar7.get_IsObject();
			if (bVar4) {
				pSVar8 = pSVar7.get_Item("Records");
				if (pSVar8 == null) goto label_059d761b;
				bVar4 = pSVar8.get_IsArray();
				if (bVar4) {
					pSVar7 = pSVar7.get_Item("Records");
					if ((pSVar7 == null) ||(pSVar9 = pSVar7.get_AsArray(), pSVar9 == null)) goto label_059d761b;
					local_c0.GetEnumerator(pSVar9);
					uStack_40._0_4_ = iStack_88;
					uStack_40._4_4_ = iStack_84;
					local_78 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array)local_c0._0_8_;
					do {
						bVar4 = local_78.MoveNext();
						if (!bVar4) {
							pSVar13 = (ExperienceScoreStore.ScoreFile)JsonUtility.FromJson<ExperienceScoreStore.ScoreFile>(pSVar5);
							if ((pSVar13 == null) ||(pSVar13.Records == null)) {
								pSVar5 = this._path;
								goto label_059d762f;
							}
							if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
								if (g_data_075435b6 == false) goto label_059d7591;
	label_059d741a: ;
								uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
							}
							else {
								if (g_data_075435b6 != false) goto label_059d741a;
	label_059d7591: ;
								g_data_075435b6 = true;
								uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
							}
							if (uVar1 == 0) {
							}
							comparer = StringComparer.s_ordinal;
							__this_02 = new HashSet<string>((IEqualityComparer<T>)comparer);
							__this_00 = pSVar13.Records;
							if (__this_00 == null) goto label_059d761b;
							local_c0.GetEnumerator((List<object>)__this_00);
							local_d8._16_8_ = local_c0._16_8_;
							local_d8._0_8_ = local_c0._0_8_;
							local_d8._8_8_ = local_c0._8_8_;
							local_c0._0_8_ = null;
							local_c0._8_8_ = local_d8;
							if (__this_02 != null) {
								goto label_059d74d0;
							}
							bVar4 = local_d8.MoveNext();
							uVar2 = local_d8._16_8_;
							if (!bVar4) goto label_059d75d9;
							ExperienceScoreStore.Validate((ExperienceScoreRecord)uVar2);
							if ((Int32[])uVar2 != null) {
								throw new NullReferenceException();
							}
							goto label_059d766d;
						}
						aKeyValue = local_78.Current;
						pSVar7 = ((JSONNode)aKeyValue);
						if (pSVar7 == null) goto label_059d761b;
						bVar4 = pSVar7.get_IsObject();
						if (!bVar4) break;
						pSVar8 = pSVar7.get_Item("ExperienceID");
						if (pSVar8 == null) goto label_059d761b;
						bVar4 = pSVar8.get_IsString();
						if (!bVar4) break;
						pSVar8 = pSVar7.get_Item("Score");
						if (pSVar8 == null) goto label_059d761b;
						bVar4 = pSVar8.get_IsNumber();
						if (!bVar4) break;
						pSVar8 = pSVar7.get_Item("Unit");
						if (pSVar8 == null) goto label_059d761b;
						bVar4 = pSVar8.get_IsString();
						if (!bVar4) break;
						pSVar7 = pSVar7.get_Item("LowerIsBetter");
						if (pSVar7 == null) goto label_059d761b;
						bVar4 = pSVar7.get_IsBoolean();
					} while (bVar4);
					pSVar5 = this._path;
					metadataPointer = &"Invalid experience score record in: ";
					goto label_059d735a;
				}
			}
		}
		pSVar5 = this._path;
	label_059d762f: ;
		metadataPointer = &"Invalid experience score file: ";
	label_059d735a: ;
		pSVar6 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		pSVar5 = String.Concat(pSVar6, pSVar5);
		pIVar10 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
		pSVar11 = (InvalidDataException)il2cpp_codegen_object_new(pIVar10);
		pSVar11 = new InvalidDataException(pSVar5);
		pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
		throw (object)pSVar11;
	label_059d74d0: ;
		bVar4 = local_d8.MoveNext();
		uVar2 = local_d8._16_8_;
		if (!bVar4) {
	label_059d75d9: ;
			local_d8.Dispose();
			if (bVar3) {
				this.Write(pSVar13);
			}
			return pSVar13;
		}
		ExperienceScoreStore.Validate((ExperienceScoreRecord)uVar2);
		if ((Int32[])uVar2 == null) {
	label_059d766d: ;
			throw new NullReferenceException();
		}
		bVar4 = __this_02.Add((object)((ExperienceScoreRecord)(uVar2 + 0x10)).ExperienceID);
		if (!bVar4) {
			pSVar5 = this._path;
			pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Duplicate experience score in: ");
			pSVar5 = String.Concat(pSVar6, pSVar5);
			pIVar10 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
			pSVar11 = (InvalidDataException)il2cpp_codegen_object_new(pIVar10);
			pSVar11 = new InvalidDataException(pSVar5);
			pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
			throw (object)pSVar11;
		}
		goto label_059d74d0;
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x58D7B40", Offset = "0x58D6B40", VA = "0x58D7B40")]
	private static void Validate(ExperienceScoreRecord record)
	{
		// Lifted from source/cpp/Settings/ExperienceScoreStore.c (Settings.ExperienceScoreStore$$Validate): 9 lines keep C-only constructs
		bool bVar1;
		Il2CppClass pIVar2;
		ArgumentException __this;
		String pSVar3;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		if (record != null) {
			bVar1 = String.IsNullOrWhiteSpace(record.ExperienceID);
			if (!bVar1) {
				if ((~(uint)record.Score & 0x7f800000) == 0) {
					pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this = (ArgumentException)il2cpp_codegen_object_new(pIVar2);
					metadataPointer = &"Experience scores must be finite numbers.";
				}
				else {
					bVar1 = String.IsNullOrWhiteSpace(record.Unit);
					if (!bVar1) {
						pSVar3 = record.Unit;
						if (pSVar3 == null) {
							throw new NullReferenceException();
						}
						if (pSVar3._stringLength < 0x41) {
							return;
						}
					}
					pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this = (ArgumentException)il2cpp_codegen_object_new(pIVar2);
					metadataPointer = &"Experience score units must contain between 1 and 64 characters.";
				}
				goto label_059d7be6;
			}
		}
		pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
		__this = (ArgumentException)il2cpp_codegen_object_new(pIVar2);
		metadataPointer = &"An experience ID is required.";
	label_059d7be6: ;
		pSVar3 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		__this = new ArgumentException(pSVar3);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Validate);
		throw (object)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/ExperienceScoreStore.c.

	// Settings.ExperienceScoreStore$$.cctor: clean
	static ExperienceScoreStore()
	{
		String directory;
		ExperienceScoreStore __this;

		directory = FolderPaths.GameProgress;
		__this = new ExperienceScoreStore(directory);
		ExperienceScoreStore.Local = __this;
		return;
	}

	// Settings.ExperienceScoreStore.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Settings.ExperienceScoreStore.<>c__DisplayClass5_0$$<Get>b__0: clean
	private bool c__DisplayClass5_0__Get_b__0(ExperienceScoreRecord record)
	{
		bool bVar1;

		if (record == null) {
			throw new NullReferenceException();
		}
		bVar1 = (record.ExperienceID == this.experienceID);
		return bVar1;
	}

	// Settings.ExperienceScoreStore.<>c__DisplayClass6_0$$.ctor: clean
	private void c__DisplayClass6_0__ctor()
	{
		base();
		return;
	}

	// Settings.ExperienceScoreStore.<>c__DisplayClass6_0$$<Save>b__0: clean
	private bool c__DisplayClass6_0__Save_b__0(ExperienceScoreRecord existing)
	{
		bool bVar1;

		if (existing == null) {
			throw new NullReferenceException();
		}
		bVar1 = (existing.ExperienceID == this.experienceID);
		return bVar1;
	}
}
