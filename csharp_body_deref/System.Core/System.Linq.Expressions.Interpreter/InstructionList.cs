// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InstructionList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000161")]
[DebuggerTypeProxy(typeof(DebugView))]
internal sealed class InstructionList
{
	[Token(Token = "0x2000162")]
	internal sealed class DebugView
	{
		[Token(Token = "0x2000163")]
		[DebuggerDisplay("{GetValue(),nq}", Name = "{GetName(),nq}", Type = "{GetDisplayType(), nq}")]
		internal readonly struct InstructionView
		{
			[Token(Token = "0x40002E2")]
			[FieldOffset(Offset = "0x0")]
			private readonly int _index;

			[Token(Token = "0x40002E3")]
			[FieldOffset(Offset = "0x4")]
			private readonly int _stackDepth;

			[Token(Token = "0x40002E4")]
			[FieldOffset(Offset = "0x8")]
			private readonly int _continuationsDepth;

			[Token(Token = "0x40002E5")]
			[FieldOffset(Offset = "0x10")]
			private readonly string _name;

			[Token(Token = "0x40002E6")]
			[FieldOffset(Offset = "0x18")]
			private readonly Instruction _instruction;

			[Token(Token = "0x60007D4")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			internal string GetValue()
			{
				return null;
			}

			[Token(Token = "0x60007D5")]
			[Address(RVA = "0x244E710", Offset = "0x244CD10", VA = "0x18244E710")]
			public InstructionView(Instruction instruction, string name, int index, int stackDepth, int continuationsDepth)
			{
			}
		}

		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x2444230", Offset = "0x2442830", VA = "0x182444230")]
		internal static InstructionView[] GetInstructionViews(IReadOnlyList<Instruction> instructions, IReadOnlyList<object> objects, Func<int, int> labelIndexer, IReadOnlyList<KeyValuePair<int, object>> debugCookies)
		{
			return null;
		}
	}

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Instruction> _instructions;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x18")]
	private List<object> _objects;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x20")]
	private int _currentStackDepth;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x24")]
	private int _maxStackDepth;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x28")]
	private int _currentContinuationsDepth;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x2C")]
	private int _maxContinuationDepth;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x30")]
	private int _runtimeLabelCount;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x38")]
	private List<BranchLabel> _labels;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x40")]
	private List<KeyValuePair<int, object>> _debugCookies;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_null;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_true;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_false;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction[] s_Ints;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction[] s_loadObjectCached;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction[] s_loadLocal;

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction[] s_loadLocalBoxed;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction[] s_loadLocalFromClosure;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x40")]
	private static Instruction[] s_loadLocalFromClosureBoxed;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x48")]
	private static Instruction[] s_assignLocal;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x50")]
	private static Instruction[] s_storeLocal;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x58")]
	private static Instruction[] s_assignLocalBoxed;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x60")]
	private static Instruction[] s_storeLocalBoxed;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x68")]
	private static Instruction[] s_assignLocalToClosure;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Dictionary<FieldInfo, Instruction> s_loadFields;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x78")]
	private static readonly RuntimeLabel[] s_emptyRuntimeLabels;

	[Token(Token = "0x170001B7")]
	public int Count
	{
		[Token(Token = "0x6000764")]
		[Address(RVA = "0x244E6D0", Offset = "0x244CCD0", VA = "0x18244E6D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B8")]
	public int CurrentStackDepth
	{
		[Token(Token = "0x6000765")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B9")]
	public int CurrentContinuationsDepth
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x244D500", Offset = "0x244BB00", VA = "0x18244D500")]
	public void Emit(Instruction instruction)
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x244E470", Offset = "0x244CA70", VA = "0x18244E470")]
	private void UpdateStackDepth(Instruction instruction)
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x244E360", Offset = "0x244C960", VA = "0x18244E360")]
	public void UnEmit()
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x244D760", Offset = "0x244BD60", VA = "0x18244D760")]
	internal Instruction GetInstruction(int index)
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x244E230", Offset = "0x244C830", VA = "0x18244E230")]
	public InstructionArray ToArray()
	{
		return default(InstructionArray);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x244C7B0", Offset = "0x244ADB0", VA = "0x18244C7B0")]
	public void EmitLoad(object value)
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x244C5C0", Offset = "0x244ABC0", VA = "0x18244C5C0")]
	public void EmitLoad(bool value)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x244BFB0", Offset = "0x244A5B0", VA = "0x18244BFB0")]
	public void EmitLoad(object value, Type type)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x244AE70", Offset = "0x2449470", VA = "0x18244AE70")]
	public void EmitDup()
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x244CCF0", Offset = "0x244B2F0", VA = "0x18244CCF0")]
	public void EmitPop()
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x244E170", Offset = "0x244C770", VA = "0x18244E170")]
	internal void SwitchToBoxed(int index, int instructionIndex)
	{
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x244BD90", Offset = "0x244A390", VA = "0x18244BD90")]
	public void EmitLoadLocal(int index)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x244B8E0", Offset = "0x2449EE0", VA = "0x18244B8E0")]
	public void EmitLoadLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x244DAD0", Offset = "0x244C0D0", VA = "0x18244DAD0")]
	internal static Instruction LoadLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x244BB70", Offset = "0x244A170", VA = "0x18244BB70")]
	public void EmitLoadLocalFromClosure(int index)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x244B950", Offset = "0x2449F50", VA = "0x18244B950")]
	public void EmitLoadLocalFromClosureBoxed(int index)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x244A3B0", Offset = "0x24489B0", VA = "0x18244A3B0")]
	public void EmitAssignLocal(int index)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x244D030", Offset = "0x244B630", VA = "0x18244D030")]
	public void EmitStoreLocal(int index)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x244A120", Offset = "0x2448720", VA = "0x18244A120")]
	public void EmitAssignLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x2449BF0", Offset = "0x24481F0", VA = "0x182449BF0")]
	internal static Instruction AssignLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x244CF50", Offset = "0x244B550", VA = "0x18244CF50")]
	public void EmitStoreLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x244DF60", Offset = "0x244C560", VA = "0x18244DF60")]
	internal static Instruction StoreLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x244A190", Offset = "0x2448790", VA = "0x18244A190")]
	public void EmitAssignLocalToClosure(int index)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x244CFC0", Offset = "0x244B5C0", VA = "0x18244CFC0")]
	public void EmitStoreLocalToClosure(int index)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x244B470", Offset = "0x2449A70", VA = "0x18244B470")]
	public void EmitInitializeLocal(int index, Type type)
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x244B5A0", Offset = "0x2449BA0", VA = "0x18244B5A0")]
	internal void EmitInitializeParameter(int index)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x244DF00", Offset = "0x244C500", VA = "0x18244DF00")]
	internal static Instruction Parameter(int index)
	{
		return null;
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x244DEA0", Offset = "0x244C4A0", VA = "0x18244DEA0")]
	internal static Instruction ParameterBox(int index)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x244DA70", Offset = "0x244C070", VA = "0x18244DA70")]
	internal static Instruction InitReference(int index)
	{
		return null;
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x244DA10", Offset = "0x244C010", VA = "0x18244DA10")]
	internal static Instruction InitImmutableRefBox(int index)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x244C9E0", Offset = "0x244AFE0", VA = "0x18244C9E0")]
	public void EmitNewRuntimeVariables(int count)
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x244B2B0", Offset = "0x24498B0", VA = "0x18244B2B0")]
	public void EmitGetArrayItem()
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x244CE40", Offset = "0x244B440", VA = "0x18244CE40")]
	public void EmitSetArrayItem()
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x244C970", Offset = "0x244AF70", VA = "0x18244C970")]
	public void EmitNewArray(Type elementType)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x244C890", Offset = "0x244AE90", VA = "0x18244C890")]
	public void EmitNewArrayBounds(Type elementType, int rank)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x244C900", Offset = "0x244AF00", VA = "0x18244C900")]
	public void EmitNewArrayInit(Type elementType, int elementCount)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x244A050", Offset = "0x2448650", VA = "0x18244A050")]
	public void EmitAdd(Type type, bool @checked)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x244D2C0", Offset = "0x244B8C0", VA = "0x18244D2C0")]
	public void EmitSub(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x244C7F0", Offset = "0x244ADF0", VA = "0x18244C7F0")]
	public void EmitMul(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x244AE40", Offset = "0x2449440", VA = "0x18244AE40")]
	public void EmitDiv(Type type)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x244C7C0", Offset = "0x244ADC0", VA = "0x18244C7C0")]
	public void EmitModulo(Type type)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x244B280", Offset = "0x2449880", VA = "0x18244B280")]
	public void EmitExclusiveOr(Type type)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x244A090", Offset = "0x2448690", VA = "0x18244A090")]
	public void EmitAnd(Type type)
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x244CCC0", Offset = "0x244B2C0", VA = "0x18244CCC0")]
	public void EmitOr(Type type)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x244B800", Offset = "0x2449E00", VA = "0x18244B800")]
	public void EmitLeftShift(Type type)
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x244CE10", Offset = "0x244B410", VA = "0x18244CE10")]
	public void EmitRightShift(Type type)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x244B240", Offset = "0x2449840", VA = "0x18244B240")]
	public void EmitEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x244CAE0", Offset = "0x244B0E0", VA = "0x18244CAE0")]
	public void EmitNotEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x244B870", Offset = "0x2449E70", VA = "0x18244B870")]
	public void EmitLessThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x244B830", Offset = "0x2449E30", VA = "0x18244B830")]
	public void EmitLessThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x244B400", Offset = "0x2449A00", VA = "0x18244B400")]
	public void EmitGreaterThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x244B3C0", Offset = "0x24499C0", VA = "0x18244B3C0")]
	public void EmitGreaterThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x244CBC0", Offset = "0x244B1C0", VA = "0x18244CBC0")]
	public void EmitNumericConvertChecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x244CC40", Offset = "0x244B240", VA = "0x18244CC40")]
	public void EmitNumericConvertUnchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x244ACC0", Offset = "0x24492C0", VA = "0x18244ACC0")]
	public void EmitConvertToUnderlying(TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x244ABE0", Offset = "0x24491E0", VA = "0x18244ABE0")]
	public void EmitCast(Type toType)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x244AB70", Offset = "0x2449170", VA = "0x18244AB70")]
	public void EmitCastToEnum(Type toType)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x244AB00", Offset = "0x2449100", VA = "0x18244AB00")]
	public void EmitCastReferenceToEnum(Type toType)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x244CB20", Offset = "0x244B120", VA = "0x18244CB20")]
	public void EmitNot(Type type)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x244ADD0", Offset = "0x24493D0", VA = "0x18244ADD0")]
	public void EmitDefaultValue(Type type)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x244CA50", Offset = "0x244B050", VA = "0x18244CA50")]
	public void EmitNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x244A9C0", Offset = "0x2448FC0", VA = "0x18244A9C0")]
	public void EmitByRefNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters, ByRefUpdater[] updaters)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x244AD30", Offset = "0x2449330", VA = "0x18244AD30")]
	internal void EmitCreateDelegate(LightDelegateCreator creator)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x244D430", Offset = "0x244BA30", VA = "0x18244D430")]
	public void EmitTypeEquals()
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x244A0C0", Offset = "0x24486C0", VA = "0x18244A0C0")]
	public void EmitArrayLength()
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x244C860", Offset = "0x244AE60", VA = "0x18244C860")]
	public void EmitNegate(Type type)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x244C830", Offset = "0x244AE30", VA = "0x18244C830")]
	public void EmitNegateChecked(Type type)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x244B440", Offset = "0x2449A40", VA = "0x18244B440")]
	public void EmitIncrement(Type type)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x244ADA0", Offset = "0x24493A0", VA = "0x18244ADA0")]
	public void EmitDecrement(Type type)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x244D490", Offset = "0x244BA90", VA = "0x18244D490")]
	public void EmitTypeIs(Type type)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x244D3C0", Offset = "0x244B9C0", VA = "0x18244D3C0")]
	public void EmitTypeAs(Type type)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x244B8B0", Offset = "0x2449EB0", VA = "0x18244B8B0")]
	public void EmitLoadField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x244D7C0", Offset = "0x244BDC0", VA = "0x18244D7C0")]
	private Instruction GetLoadField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x244CEA0", Offset = "0x244B4A0", VA = "0x18244CEA0")]
	public void EmitStoreField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x244AA80", Offset = "0x2449080", VA = "0x18244AA80")]
	public void EmitCall(MethodInfo method)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x244AA50", Offset = "0x2449050", VA = "0x18244AA50")]
	public void EmitCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x244A910", Offset = "0x2448F10", VA = "0x18244A910")]
	public void EmitByRefCall(MethodInfo method, ParameterInfo[] parameters, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x244CB50", Offset = "0x244B150", VA = "0x18244CB50")]
	public void EmitNullableCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x2449E00", Offset = "0x2448400", VA = "0x182449E00")]
	private RuntimeLabel[] BuildRuntimeLabels()
	{
		return null;
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x244DCE0", Offset = "0x244C2E0", VA = "0x18244DCE0")]
	public BranchLabel MakeLabel()
	{
		return null;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x244D680", Offset = "0x244BC80", VA = "0x18244D680")]
	internal void FixupBranch(int branchIndex, int offset)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x244D640", Offset = "0x244BC40", VA = "0x18244D640")]
	private int EnsureLabelIndex(BranchLabel label)
	{
		return default(int);
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x244DE40", Offset = "0x244C440", VA = "0x18244DE40")]
	public int MarkRuntimeLabel()
	{
		return default(int);
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x244DE10", Offset = "0x244C410", VA = "0x18244DE10")]
	public void MarkLabel(BranchLabel label)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x244B310", Offset = "0x2449910", VA = "0x18244B310")]
	public void EmitGoto(BranchLabel label, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x244A8A0", Offset = "0x2448EA0", VA = "0x18244A8A0")]
	private void EmitBranch(OffsetInstruction instruction, BranchLabel label)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x244A730", Offset = "0x2448D30", VA = "0x18244A730")]
	public void EmitBranch(BranchLabel label)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x244A7E0", Offset = "0x2448DE0", VA = "0x18244A7E0")]
	public void EmitBranch(BranchLabel label, bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x244AC10", Offset = "0x2449210", VA = "0x18244AC10")]
	public void EmitCoalescingBranch(BranchLabel leftNotNull)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x244A680", Offset = "0x2448C80", VA = "0x18244A680")]
	public void EmitBranchTrue(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x244A5D0", Offset = "0x2448BD0", VA = "0x18244A5D0")]
	public void EmitBranchFalse(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x244D360", Offset = "0x244B960", VA = "0x18244D360")]
	public void EmitThrow()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x244D300", Offset = "0x244B900", VA = "0x18244D300")]
	public void EmitThrowVoid()
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x244CDB0", Offset = "0x244B3B0", VA = "0x18244CDB0")]
	public void EmitRethrow()
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x244CD50", Offset = "0x244B350", VA = "0x18244CD50")]
	public void EmitRethrowVoid()
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x244B1E0", Offset = "0x24497E0", VA = "0x18244B1E0")]
	public void EmitEnterTryFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x244B110", Offset = "0x2449710", VA = "0x18244B110")]
	public void EmitEnterTryCatch()
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x244B140", Offset = "0x2449740", VA = "0x18244B140")]
	public EnterTryFaultInstruction EmitEnterTryFault(BranchLabel tryEnd)
	{
		return null;
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x244B080", Offset = "0x2449680", VA = "0x18244B080")]
	public void EmitEnterFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x244B7A0", Offset = "0x2449DA0", VA = "0x18244B7A0")]
	public void EmitLeaveFinally()
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x244AFF0", Offset = "0x24495F0", VA = "0x18244AFF0")]
	public void EmitEnterFault(BranchLabel faultStartLabel)
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x244B740", Offset = "0x2449D40", VA = "0x18244B740")]
	public void EmitLeaveFault()
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x244AED0", Offset = "0x24494D0", VA = "0x18244AED0")]
	public void EmitEnterExceptionFilter()
	{
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x244B640", Offset = "0x2449C40", VA = "0x18244B640")]
	public void EmitLeaveExceptionFilter()
	{
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x244AF30", Offset = "0x2449530", VA = "0x18244AF30")]
	public void EmitEnterExceptionHandlerNonVoid()
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x244AF90", Offset = "0x2449590", VA = "0x18244AF90")]
	public void EmitEnterExceptionHandlerVoid()
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x244B6A0", Offset = "0x2449CA0", VA = "0x18244B6A0")]
	public void EmitLeaveExceptionHandler(bool hasValue, BranchLabel tryExpressionEndLabel)
	{
	}

	[Token(Token = "0x60007CF")]
	public void EmitIntSwitch<T>(Dictionary<T, int> cases)
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x244D250", Offset = "0x244B850", VA = "0x18244D250")]
	public void EmitStringSwitch(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x244E650", Offset = "0x244CC50", VA = "0x18244E650")]
	public InstructionList()
	{
	}
}
