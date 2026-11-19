// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptComponent
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScriptComponent.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptComponent.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000416")]
public class MapScriptComponent : BaseCSVRowItem
{
	[Token(Token = "0x4001521")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string ComponentName;

	[Token(Token = "0x4001522")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public List<string> Parameters;

	[Token(Token = "0x4001523")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] ReservedParameterChars;

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x58A3BB0", Offset = "0x58A2BB0", VA = "0x58A3BB0")]
	public static string SanitizeParameter(string value)
	{
		// Lifted from source/cpp/Map/MapScriptComponent.c (Map.MapScriptComponent$$SanitizeParameter): clean
		uint uVar1;
		uint uVar2;
		Char[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		if (Il2CppMethodInitialized_07545a92 == false) {
			Il2CppMethodInitialized_07545a92 = true;
			uVar1 = (typeof(MapScriptComponent)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapScriptComponent)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = MapScriptComponent.ReservedParameterChars;
		}
		else {
			pSVar3 = *(Char[]*)(typeof(MapScriptComponent)).static_fields;
		}
		if (pSVar3 == null) {
	label_059a3c81: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar3.Length) {
			uVar4 = pSVar3.Length & 0xffffffff;
			uVar5 = 0;
			do {
				if (uVar4 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				if (value == null) goto label_059a3c81;
				value = value.Replace(pSVar3[uVar5], 0x20);
				uVar5 = uVar5 + 1;
				uVar2 = (uint)pSVar3.Length;
				uVar4 = (ulong)uVar2;
			} while ((long)uVar5 < (long)(int)uVar2);
		}
		return value;
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x58A3C90", Offset = "0x58A2C90", VA = "0x58A3C90")]
	public MapScriptComponent()
	{
		// Lifted from source/cpp/Map/MapScriptComponent.c (Map.MapScriptComponent$$.ctor): clean
		List<string> __this_00;

		this.ComponentName = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new List<string>();
		this.Parameters = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapScriptComponent.c.

	// Map.MapScriptComponent$$.cctor: clean
	static MapScriptComponent()
	{
		Char[] array;

		array = (Char[])new char[4];
		RuntimeHelpers.InitializeArray((Array)array, FieldRva_PrivateImplementationDetails_C333A006A69EDD08AE61CE52D2CF448CD3FCD80B3830D47F0B6C4E846FE7B572);
		MapScriptComponent.ReservedParameterChars = array;
		return;
	}
}
