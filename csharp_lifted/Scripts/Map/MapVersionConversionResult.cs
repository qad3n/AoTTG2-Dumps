// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConversionResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConversionResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200041D")]
public sealed class MapVersionConversionResult
{
	[Token(Token = "0x170002BC")]
	public string OriginalVersion
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x58A4DA0", Offset = "0x58A3DA0", VA = "0x58A4DA0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$get_OriginalVersion): clean
			return this._OriginalVersion_k__BackingField;
		}
		[Token(Token = "0x6001A20")]
		[Address(RVA = "0x58A4DB0", Offset = "0x58A3DB0", VA = "0x58A4DB0")]
		[CompilerGenerated]
		internal set
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$set_OriginalVersion): clean
			this._OriginalVersion_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002BD")]
	public string FinalVersion
	{
		[Token(Token = "0x6001A21")]
		[Address(RVA = "0x58A4DC0", Offset = "0x58A3DC0", VA = "0x58A4DC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$get_FinalVersion): clean
			return this._FinalVersion_k__BackingField;
		}
		[Token(Token = "0x6001A22")]
		[Address(RVA = "0x58A4DD0", Offset = "0x58A3DD0", VA = "0x58A4DD0")]
		[CompilerGenerated]
		internal set
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$set_FinalVersion): clean
			this._FinalVersion_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002BE")]
	public IReadOnlyList<IMapVersionConverter> Converters
	{
		[Token(Token = "0x6001A23")]
		[Address(RVA = "0x58A4DE0", Offset = "0x58A3DE0", VA = "0x58A4DE0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$get_Converters): clean
			return this._Converters_k__BackingField;
		}
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x58A4DF0", Offset = "0x58A3DF0", VA = "0x58A4DF0")]
		[CompilerGenerated]
		internal set
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$set_Converters): clean
			this._Converters_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002BF")]
	public int VersionCount
	{
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x58A4E00", Offset = "0x58A3E00", VA = "0x58A4E00")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$get_VersionCount): 4 lines keep C-only constructs
			object obj;
			Il2CppClass pIVar1;
			Il2CppRuntimeInterfaceOffsetPair pIVar2;
			int iVar3;
			VirtualInvokeData pVVar4;
			ulong uVar5;
			long lVar6;

			obj = (object)this._Converters_k__BackingField;
			if (obj == null) {
				throw new NullReferenceException();
			}
			pIVar1 = obj.klass;
			uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar5 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar6 = 0;
				do {
					if (*(IReadOnlyCollection<IMapVersionConverter>*)((long)&pIVar2.interfaceType + lVar6) == typeof(IReadOnlyCollection<IMapVersionConverter>)) {
						pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar6);
						goto label_059a4e7d;
					}
					lVar6 = lVar6 + 0x10;
				} while (uVar5 * 0x10 != lVar6);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<IMapVersionConverter>), 0);
		label_059a4e7d: ;
			iVar3 = (*pVVar4.methodPtr)(obj,pVVar4.method);
			return iVar3;
		}
	}

	[Token(Token = "0x170002C0")]
	public bool IsReversible
	{
		[Token(Token = "0x6001A26")]
		[Address(RVA = "0x58A4E90", Offset = "0x58A3E90", VA = "0x58A4E90")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$get_IsReversible): 4 lines keep C-only constructs
			System_Collections_Generic_IEnumerable_TSource__o source;
			object @object;
			bool bVar1;
			Map_MapVersionConversionResult___c_StaticFields pMVar2;
			Func<IMapVersionConverter, bool> __this_00;

			source = (System_Collections_Generic_IEnumerable_TSource__o)this._Converters_k__BackingField;
			if ((typeof(MapVersionConversionResult.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar2 = typeof(MapVersionConversionResult.c).static_fields;
				__this_00 = pMVar2.__9__15_0;
			}
			else {
				pMVar2 = typeof(MapVersionConversionResult.c).static_fields;
				__this_00 = pMVar2.__9__15_0;
			}
			if (__this_00 == null) {
				if (((typeof(MapVersionConversionResult.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar2 = typeof(MapVersionConversionResult.c).static_fields;
				}
				@object = (object)pMVar2.__9;
				__this_00 = new Func<IMapVersionConverter, bool>(@object, (intptr_t)MethodInfo_Map_MapVersionConversionResult_c_get_IsReversible_b__15_0);
				pMVar2 = typeof(MapVersionConversionResult.c).static_fields;
				pMVar2.__9__15_0 = __this_00;
			}
			bVar1 = Enumerable.All<IMapVersionConverter>(source, (System_Func_TSource__bool__o)__this_00);
			return bVar1;
		}
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x58A4FA0", Offset = "0x58A3FA0", VA = "0x58A4FA0")]
	public MapVersionConversionResult()
	{
		// Lifted from source/cpp/Map/MapVersionConversionResult.c (Map.MapVersionConversionResult$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapVersionConversionResult.c.

	// Map.MapVersionConversionResult.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(MapVersionConversionResult.c)) ;
		__this = new Object();
		MapVersionConversionResult.c.__9 =(MapVersionConversionResult.c)__this;
		return;
	}

	// Map.MapVersionConversionResult.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Map.MapVersionConversionResult.<>c$$<get_IsReversible>b__15_0: clean
	private bool c__get_IsReversible_b__15_0(IMapVersionConverter converter)
	{
		bool bVar3;

		if (converter == null) {
			throw new NullReferenceException();
		}
		return bVar3;
	}
}
