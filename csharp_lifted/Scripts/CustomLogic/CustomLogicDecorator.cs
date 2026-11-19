// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDecorator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDecorator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200042F")]
internal class CustomLogicDecorator
{
	[Token(Token = "0x400156C")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x400156D")]
	[FieldOffset(Offset = "0x18")]
	public List<object> Parameters;

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x58A88E0", Offset = "0x58A78E0", VA = "0x58A88E0")]
	public CustomLogicDecorator(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDecorator.c (CustomLogic.CustomLogicDecorator$$.ctor): clean
		List<object> __this_00;

		__this_00 = new List<object>();
		this.Parameters = __this_00;
		base();
		this.Name = name;
		return;
	}
}
