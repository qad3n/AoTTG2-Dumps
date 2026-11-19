// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConverter1_0To1_1
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConverter1_0To1_1.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000423")]
public sealed class MapVersionConverter1_0To1_1 : IMapVersionConverter
{
	[Token(Token = "0x4001541")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IReadOnlyList<string> ChangeList;

	[Token(Token = "0x170002C2")]
	public string FromVersion
	{
		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x58A5DB0", Offset = "0x58A4DB0", VA = "0x58A5DB0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$get_FromVersion): clean
			return "1.0";
		}
	}

	[Token(Token = "0x170002C3")]
	public string ToVersion
	{
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x58A5DE0", Offset = "0x58A4DE0", VA = "0x58A5DE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$get_ToVersion): clean
			return "1.1";
		}
	}

	[Token(Token = "0x170002C4")]
	public bool IsReversible
	{
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x58A5E10", Offset = "0x58A4E10", VA = "0x58A5E10", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$get_IsReversible): clean
			return true;
		}
	}

	[Token(Token = "0x170002C5")]
	public IReadOnlyList<string> Changes
	{
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x58A5E20", Offset = "0x58A4E20", VA = "0x58A5E20", Slot = "7")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$get_Changes): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545ab4 == false) {
				Il2CppMethodInitialized_07545ab4 = true;
				uVar1 = (typeof(MapVersionConverter1_0To1_1)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MapVersionConverter1_0To1_1)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return MapVersionConverter1_0To1_1.ChangeList;
			}
			return *(IReadOnlyList<string>*)(typeof(MapVersionConverter1_0To1_1)).static_fields;
		}
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x58A5E90", Offset = "0x58A4E90", VA = "0x58A5E90", Slot = "8")]
	public void Upgrade(MapScript mapScript)
	{
		// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$Upgrade): 4 lines keep C-only constructs
		MapScriptObjects pMVar1;
		List<MapScriptBaseObject> __this_00;
		object pIVar2;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (((mapScript == null) ||(pMVar1 = mapScript.Objects, pMVar1 == null)) ||(__this_00 = pMVar1.Objects, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		while(true) {
			bVar3 = local_48.MoveNext();
			pIVar2 = local_48._current;
			if (!bVar3) {
				local_48.Dispose();
				return;
			}
			if (local_48._current == null) break;
			if (*(int)((long)&local_48._current[2].klass + 4) == 0) {
				*(int)((long)&pIVar2[2].klass + 4) = MapLoader.ROOT_OBJECT_ID;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x58A6020", Offset = "0x58A5020", VA = "0x58A6020", Slot = "9")]
	public void Downgrade(MapScript mapScript)
	{
		// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$Downgrade): 4 lines keep C-only constructs
		int iVar1;
		MapScriptObjects pMVar2;
		List<MapScriptBaseObject> __this_00;
		object pIVar3;
		bool bVar4;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_30;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		if (((mapScript == null) ||(pMVar2 = mapScript.Objects, pMVar2 == null)) ||(__this_00 = pMVar2.Objects, __this_00 == null)) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		puStack_30 = (byte)&SStack_58;
	label_059a60e0: ;
		do {
			bVar4 = SStack_58.MoveNext();
			pIVar3 = SStack_58._current;
			if (!bVar4) {
				SStack_58.Dispose();
				return;
			}
			if (SStack_58._current == null) {
				throw new NullReferenceException();
			}
			iVar1 = *(int)((long)&SStack_58._current[2].klass + 4);
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_059a6120;
		} while (iVar1 != MapLoader.ROOT_OBJECT_ID);
		goto label_059a6138;
	label_059a6120: ;
		if (iVar1 == MapLoader.ROOT_OBJECT_ID) {
	label_059a6138: ;
			*(uint)((long)&pIVar3[2].klass + 4) = 0;
		}
		goto label_059a60e0;
	}

	[Token(Token = "0x6001A3C")]
	[Address(RVA = "0x58A5AF0", Offset = "0x58A4AF0", VA = "0x58A5AF0")]
	public MapVersionConverter1_0To1_1()
	{
		// Lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c (Map.MapVersionConverter1_0To1_1$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapVersionConverter1_0To1_1.c.

	// Map.MapVersionConverter1_0To1_1$$.cctor: 4 lines keep C-only constructs
	static MapVersionConverter1_0To1_1()
	{
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		String pSVar5;
		List<string> __this;
		ReadOnlyCollection<T> pSVar6;

		__this = new List<string>();
		pSVar5 = "Root object parent IDs change from 0 to -1.";
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this._items;
			if (pSVar3 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pSVar5;
				}
				else {
					__this.AddWithResize((object)pSVar5);
				}
				pSVar5 = "Object ID 0 can be used as a parent.";
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this._items;
				if (pSVar3 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this.AddWithResize((object)pSVar5);
					}
					pSVar6 = __this.AsReadOnly();
					MapVersionConverter1_0To1_1.ChangeList =(IReadOnlyList<string>)pSVar6;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
