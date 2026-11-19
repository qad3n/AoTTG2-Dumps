// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMethodDefinitionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMethodDefinitionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodDefinitionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200043D")]
internal class CustomLogicMethodDefinitionAst : CustomLogicBlockAst
{
	[Token(Token = "0x4001597")]
	[FieldOffset(Offset = "0x20")]
	public List<string> ParameterNames;

	[Token(Token = "0x4001598")]
	[FieldOffset(Offset = "0x28")]
	public bool Coroutine;

	[Token(Token = "0x4001599")]
	[FieldOffset(Offset = "0x30")]
	public string Name;

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x58A8C00", Offset = "0x58A7C00", VA = "0x58A8C00")]
	public CustomLogicMethodDefinitionAst(int line, bool coroutine = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMethodDefinitionAst.c (CustomLogic.CustomLogicMethodDefinitionAst$$.ctor): clean
		List<string> __this_00;
		List<CustomLogicBaseAst> __this_01;

		__this_00 = new List<string>();
		this.ParameterNames = __this_00;
		__this_01 = new List<CustomLogicBaseAst>();
		this.Statements = __this_01;
		base();
		this.Type = 2;
		this.Line = line;
		this.Coroutine = coroutine;
		return;
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x58A90C0", Offset = "0x58A80C0", VA = "0x58A90C0", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMethodDefinitionAst.c (CustomLogic.CustomLogicMethodDefinitionAst$$ToString): 2 lines keep C-only constructs
		String[] values;
		String* ppSVar1;
		String pSVar2;

		values = (String[])new string[6];
		if (this.Coroutine == false) {
			ppSVar1 = &"function";
		}
		else {
			ppSVar1 = &"coroutine";
		}
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = *ppSVar1;
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = " ";
				if (2 < (uint)values.Length) {
					values[2] = this.Name;
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = "(";
						pSVar2 = String.Join(", ", (IEnumerable<string>)this.ParameterNames);
						if (4 < (uint)values.Length) {
							values[4] = pSVar2;
							if (5 < (uint)values.Length) {
								values[5] = ")";
								pSVar2 = String.Concat(values);
								return pSVar2;
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
