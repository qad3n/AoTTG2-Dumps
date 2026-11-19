// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Diagnostics;

[Token(Token = "0x200005D")]
public static class GisketchUiPerfLog
{
	[Token(Token = "0x200005E")]
	public readonly struct Scope : IDisposable
	{
		[Token(Token = "0x40001D1")]
		[FieldOffset(Offset = "0x0")]
		private readonly string _area;

		[Token(Token = "0x40001D2")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _detail;

		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x10")]
		private readonly long _startMs;

		[Token(Token = "0x40001D4")]
		[FieldOffset(Offset = "0x18")]
		private readonly bool _enabled;

		[Token(Token = "0x40001D5")]
		[FieldOffset(Offset = "0x19")]
		private readonly bool _hotLoop;

		[Token(Token = "0x6000358")]
		[Address(RVA = "0x5260900", Offset = "0x525F900", VA = "0x5260900")]
		public Scope(string area, string detail)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$.ctor): 3 lines keep C-only constructs
			sbyte cVar1;
			Stopwatch __this_00;
			Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_StaticFields pGVar2;
			String area_00;
			bool bVar3;
			long iVar4;
			String detail_00;

			this._area = area;
			this._detail = detail;
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			}
			this._enabled = GisketchUiPerfLog.Enabled ;
			bVar3 = GisketchUiPerfLog.IsHotLoop(area);
			this._hotLoop = bVar3;
			__this_00 = GisketchUiPerfLog.Clock;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			iVar4 = __this_00.ElapsedMilliseconds;
			this._startMs = iVar4;
			if (this._enabled == false) {
				return;
			}
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
				pGVar2 = typeof(GisketchUiPerfLog).static_fields;
				cVar1 = pGVar2.LogBegins;
			}
			else {
				pGVar2 = typeof(GisketchUiPerfLog).static_fields;
				cVar1 = pGVar2.LogBegins;
			}
			if (cVar1 == false) {
				if (((typeof(GisketchUiPerfLog))._2). cctor_finished_or_no_cctor == 0) {
					cVar1 = GisketchUiPerfLog.VerboseHotLoops;
				}
				else {
					cVar1 = pGVar2.VerboseHotLoops;
				}
				if (cVar1 == false) {
					return;
				}
				if (this._hotLoop == false) {
					return;
				}
			}
			area_00 = this._area;
			detail_00 = String.Concat("BEGIN ", this._detail);
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			}
			GisketchUiPerfLog.Write(area_00, detail_00);
			return;
		}

		[Token(Token = "0x6000359")]
		[Address(RVA = "0x5260AE0", Offset = "0x525FAE0", VA = "0x5260AE0", Slot = "4")]
		public void Dispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$Dispose): 3 lines keep C-only constructs
			sbyte cVar1;
			int iVar2;
			Stopwatch __this_00;
			Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_StaticFields pGVar3;
			String area;
			long in_RAX;
			long iVar4;
			String[] values;
			String pSVar5;
			long lVar6;
			long local_28;

			local_28 = in_RAX;
			if (this._enabled == false) {
				return;
			}
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			}
			__this_00 = GisketchUiPerfLog.Clock;
			if (__this_00 != null) {
				iVar4 = __this_00.ElapsedMilliseconds;
				lVar6 = iVar4 - this._startMs;
				local_28 = lVar6;
				if (this._hotLoop != false) {
					if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
						pGVar3 = typeof(GisketchUiPerfLog).static_fields;
						cVar1 = pGVar3.VerboseHotLoops;
					}
					else {
						pGVar3 = typeof(GisketchUiPerfLog).static_fields;
						cVar1 = pGVar3.VerboseHotLoops;
					}
					if (cVar1 == false) {
						if (((typeof(GisketchUiPerfLog))._2). cctor_finished_or_no_cctor == 0) {
							iVar2 = GisketchUiPerfLog.SlowElapsedMs;
						}
						else {
							iVar2 = pGVar3.SlowElapsedMs;
						}
						if (lVar6 < iVar2) {
							return;
						}
					}
				}
				area = this._area;
				values = (String[])new string[5];
				if (values != null) {
					if ((int)values.Length != 0) {
						values[0] = "END ";
						if ((values.Length & 0xfffffffe) != 0) {
							values[1] = this._detail;
							if (2 < (uint)values.Length) {
								values[2] = " (";
								pSVar5 = local_28.ToString();
								if ((values.Length & 0xfffffffc) != 0) {
									values[3] = pSVar5;
									if (4 < (uint)values.Length) {
										values[4] = "ms)";
										pSVar5 = String.Concat(values);
										if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
										}
										GisketchUiPerfLog.Write(area, pSVar5);
										return;
									}
								}
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x1")]
	public static bool LogBegins;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x2")]
	public static bool VerboseHotLoops;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x4")]
	public static int SlowElapsedMs;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stopwatch Clock;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	private static long _lastMs;

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x5251E10", Offset = "0x5250E10", VA = "0x5251E10")]
	public static long NowMs()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$NowMs): 1 lines keep C-only constructs
		uint uVar1;
		Stopwatch __this;
		long iVar2;

		if (Il2CppMethodInitialized_075429aa == false) {
			Il2CppMethodInitialized_075429aa = true;
			uVar1 = (typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			__this = GisketchUiPerfLog.Clock;
		}
		else {
			__this = *(Stopwatch*)((long)(typeof(GisketchUiPerfLog)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x524DF60", Offset = "0x524CF60", VA = "0x524DF60")]
	public static void Mark(string area, string detail)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Mark): 3 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_075429ab == false) {
			Il2CppMethodInitialized_075429ab = true;
			uVar2 = (typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			cVar1 = GisketchUiPerfLog.Enabled;
		}
		else {
			cVar1 = *(sbyte)(typeof(GisketchUiPerfLog)).static_fields;
		}
		if (cVar1 == false) {
			return;
		}
		if (((typeof(GisketchUiPerfLog))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		bVar3 = GisketchUiPerfLog.IsHotLoop(area);
		if (bVar3) {
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = GisketchUiPerfLog.VerboseHotLoops;
			}
			else {
				cVar1 = GisketchUiPerfLog.VerboseHotLoops;
			}
			if (cVar1 == false) {
				return;
			}
		}
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Write(area, detail);
		return;
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x524DF40", Offset = "0x524CF40", VA = "0x524DF40")]
	public static Scope Time(string area, string detail)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Time): 1 lines keep C-only constructs
		__return_storage_ptr__._startMs = 0;
		__return_storage_ptr__._enabled = false;
		__return_storage_ptr__._hotLoop = false;
		*(undefined6)&__return_storage_ptr__.field_0x1a = 0;
		__return_storage_ptr__._area = null;
		__return_storage_ptr__._detail = null;
		__return_storage_ptr__ = new GisketchUiPerfLog.Scope(area, detail);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x52606A0", Offset = "0x525F6A0", VA = "0x52606A0")]
	private static void Write(string area, string detail)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Write): 5 lines keep C-only constructs
		Stopwatch __this;
		long lVar1;
		long iVar2;
		Object[] args;
		object pIVar3;
		object pIVar4;
		long local_40;
		long local_38;

		if (Il2CppMethodInitialized_075429ac == false) {
			Il2CppMethodInitialized_075429ac = true;
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) goto label_0536072f;
	label_053606d0: ;
			__this = GisketchUiPerfLog.Clock;
		}
		else {
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor != 0) goto label_053606d0;
	label_0536072f: ;
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			__this = GisketchUiPerfLog.Clock;
		}
		if (__this != null) {
			iVar2 = __this.ElapsedMilliseconds;
			lVar1 = GisketchUiPerfLog._lastMs;
			GisketchUiPerfLog._lastMs = iVar2;
			args = (Object[])new object[4];
			local_38 = iVar2 - lVar1;
			pIVar3 = (object)local_38;
			if (args != null) {
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((args.obj).klass)._1).element_class), pIVar4 == null)) {
	label_053608e7: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)args.Length != 0) {
					args[0] = pIVar3;
					local_40 = iVar2;
					pIVar3 = (object)local_40;
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((args.obj).klass)._1).element_class), pIVar4 == null)) goto label_053608e7;
					if ((args.Length & 0xfffffffe) != 0) {
						args[1] = pIVar3;
						if ((area != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)area, (((args.obj).klass)._1).element_class), pIVar3 == null)) goto label_053608e7;
						if (2 < (uint)args.Length) {
							args[2] = (object)area;
							if ((detail != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)detail, (((args.obj).klass)._1).element_class), pIVar3 == null)) goto label_053608e7;
							if ((args.Length & 0xfffffffc) != 0) {
								args[3] = (object)detail;
								Debug.LogFormat(3, 1, null, "[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}", args);
								return;
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x52605F0", Offset = "0x525F5F0", VA = "0x52605F0")]
	private static bool IsHotLoop(string area)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c (Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$IsHotLoop): clean
		bool bVar1;

		bVar1 = (area == "ScreenBuilder.BuildNode");
		if (!bVar1) {
			bVar1 = (area == "GridPicker.CreateCard");
			if (!bVar1) {
				bVar1 = (area == "GridPicker.BuildThumbnail");
				if (!bVar1) {
					bVar1 = (area == "SpriteLoader.ResourcesLoadSprite");
					return bVar1;
				}
			}
		}
		return true;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c.

	// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$.cctor: clean
	static GisketchUiPerfLog()
	{
		Stopwatch pSVar2;

		GisketchUiPerfLog.SlowElapsedMs = 4;
		pSVar2 = Stopwatch.StartNew();
		GisketchUiPerfLog.Clock = pSVar2;
		return;
	}
}
