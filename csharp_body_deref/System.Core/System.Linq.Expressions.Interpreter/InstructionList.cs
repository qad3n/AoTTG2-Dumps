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

			[Token(Token = "0x60007D5")]
			[Address(RVA = "0x44D9FC0", Offset = "0x44D9FC0", VA = "0x44D9FC0")]
			internal string GetValue()
			{
				return null;
			}

			[Token(Token = "0x60007D6")]
			[Address(RVA = "0x44D9F70", Offset = "0x44D9F70", VA = "0x44D9F70")]
			public InstructionView(Instruction instruction, string name, int index, int stackDepth, int continuationsDepth)
			{
			}
		}

		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x44D31C0", Offset = "0x44D31C0", VA = "0x44D31C0")]
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
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x44D3C00", Offset = "0x44D3C00", VA = "0x44D3C00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B8")]
	public int CurrentStackDepth
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x44D3C40", Offset = "0x44D3C40", VA = "0x44D3C40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B9")]
	public int CurrentContinuationsDepth
	{
		[Token(Token = "0x6000767")]
		[Address(RVA = "0x44D3C50", Offset = "0x44D3C50", VA = "0x44D3C50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x44D3930", Offset = "0x44D3930", VA = "0x44D3930")]
	public void Emit(Instruction instruction)
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x44D3A60", Offset = "0x44D3A60", VA = "0x44D3A60")]
	private void UpdateStackDepth(Instruction instruction)
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x44D3B00", Offset = "0x44D3B00", VA = "0x44D3B00")]
	public void UnEmit()
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x44D3C60", Offset = "0x44D3C60", VA = "0x44D3C60")]
	internal Instruction GetInstruction(int index)
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x44D3CB0", Offset = "0x44D3CB0", VA = "0x44D3CB0")]
	public InstructionArray ToArray()
	{
		return default(InstructionArray);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x44D40C0", Offset = "0x44D40C0", VA = "0x44D40C0")]
	public void EmitLoad(object value)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x44D46F0", Offset = "0x44D46F0", VA = "0x44D46F0")]
	public void EmitLoad(bool value)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x44D40D0", Offset = "0x44D40D0", VA = "0x44D40D0")]
	public void EmitLoad(object value, Type type)
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x44D48B0", Offset = "0x44D48B0", VA = "0x44D48B0")]
	public void EmitDup()
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x44D4910", Offset = "0x44D4910", VA = "0x44D4910")]
	public void EmitPop()
	{
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x44D4970", Offset = "0x44D4970", VA = "0x44D4970")]
	internal void SwitchToBoxed(int index, int instructionIndex)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x44D4AA0", Offset = "0x44D4AA0", VA = "0x44D4AA0")]
	public void EmitLoadLocal(int index)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x44D4D00", Offset = "0x44D4D00", VA = "0x44D4D00")]
	public void EmitLoadLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x44D4D60", Offset = "0x44D4D60", VA = "0x44D4D60")]
	internal static Instruction LoadLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x44D4FB0", Offset = "0x44D4FB0", VA = "0x44D4FB0")]
	public void EmitLoadLocalFromClosure(int index)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x44D5210", Offset = "0x44D5210", VA = "0x44D5210")]
	public void EmitLoadLocalFromClosureBoxed(int index)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x44D5470", Offset = "0x44D5470", VA = "0x44D5470")]
	public void EmitAssignLocal(int index)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x44D56D0", Offset = "0x44D56D0", VA = "0x44D56D0")]
	public void EmitStoreLocal(int index)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x44D5930", Offset = "0x44D5930", VA = "0x44D5930")]
	public void EmitAssignLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x44D5990", Offset = "0x44D5990", VA = "0x44D5990")]
	internal static Instruction AssignLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x44D5BE0", Offset = "0x44D5BE0", VA = "0x44D5BE0")]
	public void EmitStoreLocalBoxed(int index)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x44D5C40", Offset = "0x44D5C40", VA = "0x44D5C40")]
	internal static Instruction StoreLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x44D5E90", Offset = "0x44D5E90", VA = "0x44D5E90")]
	public void EmitAssignLocalToClosure(int index)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x44D60F0", Offset = "0x44D60F0", VA = "0x44D60F0")]
	public void EmitStoreLocalToClosure(int index)
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x44D6150", Offset = "0x44D6150", VA = "0x44D6150")]
	public void EmitInitializeLocal(int index, Type type)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x44D62D0", Offset = "0x44D62D0", VA = "0x44D62D0")]
	internal void EmitInitializeParameter(int index)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x44D6380", Offset = "0x44D6380", VA = "0x44D6380")]
	internal static Instruction Parameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x44D63D0", Offset = "0x44D63D0", VA = "0x44D63D0")]
	internal static Instruction ParameterBox(int index)
	{
		return null;
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x44D6280", Offset = "0x44D6280", VA = "0x44D6280")]
	internal static Instruction InitReference(int index)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x44D6420", Offset = "0x44D6420", VA = "0x44D6420")]
	internal static Instruction InitImmutableRefBox(int index)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x44D6470", Offset = "0x44D6470", VA = "0x44D6470")]
	public void EmitNewRuntimeVariables(int count)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x44D64D0", Offset = "0x44D64D0", VA = "0x44D64D0")]
	public void EmitGetArrayItem()
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x44D6530", Offset = "0x44D6530", VA = "0x44D6530")]
	public void EmitSetArrayItem()
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x44D6590", Offset = "0x44D6590", VA = "0x44D6590")]
	public void EmitNewArray(Type elementType)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x44D65F0", Offset = "0x44D65F0", VA = "0x44D65F0")]
	public void EmitNewArrayBounds(Type elementType, int rank)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x44D6660", Offset = "0x44D6660", VA = "0x44D6660")]
	public void EmitNewArrayInit(Type elementType, int elementCount)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x44D66D0", Offset = "0x44D66D0", VA = "0x44D66D0")]
	public void EmitAdd(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x44D6710", Offset = "0x44D6710", VA = "0x44D6710")]
	public void EmitSub(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x44D6750", Offset = "0x44D6750", VA = "0x44D6750")]
	public void EmitMul(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x44D6790", Offset = "0x44D6790", VA = "0x44D6790")]
	public void EmitDiv(Type type)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x44D67B0", Offset = "0x44D67B0", VA = "0x44D67B0")]
	public void EmitModulo(Type type)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x44D67D0", Offset = "0x44D67D0", VA = "0x44D67D0")]
	public void EmitExclusiveOr(Type type)
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x44D67F0", Offset = "0x44D67F0", VA = "0x44D67F0")]
	public void EmitAnd(Type type)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x44D6810", Offset = "0x44D6810", VA = "0x44D6810")]
	public void EmitOr(Type type)
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x44D6830", Offset = "0x44D6830", VA = "0x44D6830")]
	public void EmitLeftShift(Type type)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x44D6C10", Offset = "0x44D6C10", VA = "0x44D6C10")]
	public void EmitRightShift(Type type)
	{
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x44D6C30", Offset = "0x44D6C30", VA = "0x44D6C30")]
	public void EmitEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x44D6C50", Offset = "0x44D6C50", VA = "0x44D6C50")]
	public void EmitNotEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x44D6C70", Offset = "0x44D6C70", VA = "0x44D6C70")]
	public void EmitLessThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x44D7870", Offset = "0x44D7870", VA = "0x44D7870")]
	public void EmitLessThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x44D8470", Offset = "0x44D8470", VA = "0x44D8470")]
	public void EmitGreaterThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x44D8490", Offset = "0x44D8490", VA = "0x44D8490")]
	public void EmitGreaterThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x44D84B0", Offset = "0x44D84B0", VA = "0x44D84B0")]
	public void EmitNumericConvertChecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x44D8520", Offset = "0x44D8520", VA = "0x44D8520")]
	public void EmitNumericConvertUnchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x44D8590", Offset = "0x44D8590", VA = "0x44D8590")]
	public void EmitConvertToUnderlying(TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x44D8600", Offset = "0x44D8600", VA = "0x44D8600")]
	public void EmitCast(Type toType)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x44D8620", Offset = "0x44D8620", VA = "0x44D8620")]
	public void EmitCastToEnum(Type toType)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x44D8680", Offset = "0x44D8680", VA = "0x44D8680")]
	public void EmitCastReferenceToEnum(Type toType)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x44D86E0", Offset = "0x44D86E0", VA = "0x44D86E0")]
	public void EmitNot(Type type)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x44D8700", Offset = "0x44D8700", VA = "0x44D8700")]
	public void EmitDefaultValue(Type type)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x44D8760", Offset = "0x44D8760", VA = "0x44D8760")]
	public void EmitNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x44D87E0", Offset = "0x44D87E0", VA = "0x44D87E0")]
	public void EmitByRefNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters, ByRefUpdater[] updaters)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x44D8860", Offset = "0x44D8860", VA = "0x44D8860")]
	internal void EmitCreateDelegate(LightDelegateCreator creator)
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x44D88C0", Offset = "0x44D88C0", VA = "0x44D88C0")]
	public void EmitTypeEquals()
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x44D8920", Offset = "0x44D8920", VA = "0x44D8920")]
	public void EmitArrayLength()
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x44D8980", Offset = "0x44D8980", VA = "0x44D8980")]
	public void EmitNegate(Type type)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x44D89A0", Offset = "0x44D89A0", VA = "0x44D89A0")]
	public void EmitNegateChecked(Type type)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x44D89C0", Offset = "0x44D89C0", VA = "0x44D89C0")]
	public void EmitIncrement(Type type)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x44D89E0", Offset = "0x44D89E0", VA = "0x44D89E0")]
	public void EmitDecrement(Type type)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x44D8A00", Offset = "0x44D8A00", VA = "0x44D8A00")]
	public void EmitTypeIs(Type type)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x44D8A60", Offset = "0x44D8A60", VA = "0x44D8A60")]
	public void EmitTypeAs(Type type)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x44D8AC0", Offset = "0x44D8AC0", VA = "0x44D8AC0")]
	public void EmitLoadField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x44D8AE0", Offset = "0x44D8AE0", VA = "0x44D8AE0")]
	private Instruction GetLoadField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x44D8D90", Offset = "0x44D8D90", VA = "0x44D8D90")]
	public void EmitStoreField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x44D8E20", Offset = "0x44D8E20", VA = "0x44D8E20")]
	public void EmitCall(MethodInfo method)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x44D8E90", Offset = "0x44D8E90", VA = "0x44D8E90")]
	public void EmitCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x44D8EB0", Offset = "0x44D8EB0", VA = "0x44D8EB0")]
	public void EmitByRefCall(MethodInfo method, ParameterInfo[] parameters, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x44D8F50", Offset = "0x44D8F50", VA = "0x44D8F50")]
	public void EmitNullableCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x44D3DC0", Offset = "0x44D3DC0", VA = "0x44D3DC0")]
	private RuntimeLabel[] BuildRuntimeLabels()
	{
		return null;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x44D8FB0", Offset = "0x44D8FB0", VA = "0x44D8FB0")]
	public BranchLabel MakeLabel()
	{
		return null;
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x44D90C0", Offset = "0x44D90C0", VA = "0x44D90C0")]
	internal void FixupBranch(int branchIndex, int offset)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x44D9190", Offset = "0x44D9190", VA = "0x44D9190")]
	private int EnsureLabelIndex(BranchLabel label)
	{
		return default(int);
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x44D91E0", Offset = "0x44D91E0", VA = "0x44D91E0")]
	public int MarkRuntimeLabel()
	{
		return default(int);
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x44D9240", Offset = "0x44D9240", VA = "0x44D9240")]
	public void MarkLabel(BranchLabel label)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x44D9260", Offset = "0x44D9260", VA = "0x44D9260")]
	public void EmitGoto(BranchLabel label, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x44D9320", Offset = "0x44D9320", VA = "0x44D9320")]
	private void EmitBranch(OffsetInstruction instruction, BranchLabel label)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x44D9380", Offset = "0x44D9380", VA = "0x44D9380")]
	public void EmitBranch(BranchLabel label)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x44D9420", Offset = "0x44D9420", VA = "0x44D9420")]
	public void EmitBranch(BranchLabel label, bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x44D94D0", Offset = "0x44D94D0", VA = "0x44D94D0")]
	public void EmitCoalescingBranch(BranchLabel leftNotNull)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x44D9570", Offset = "0x44D9570", VA = "0x44D9570")]
	public void EmitBranchTrue(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x44D9610", Offset = "0x44D9610", VA = "0x44D9610")]
	public void EmitBranchFalse(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x44D96B0", Offset = "0x44D96B0", VA = "0x44D96B0")]
	public void EmitThrow()
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x44D9710", Offset = "0x44D9710", VA = "0x44D9710")]
	public void EmitThrowVoid()
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x44D9770", Offset = "0x44D9770", VA = "0x44D9770")]
	public void EmitRethrow()
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x44D97D0", Offset = "0x44D97D0", VA = "0x44D97D0")]
	public void EmitRethrowVoid()
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x44D9830", Offset = "0x44D9830", VA = "0x44D9830")]
	public void EmitEnterTryFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x44D9880", Offset = "0x44D9880", VA = "0x44D9880")]
	public void EmitEnterTryCatch()
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x44D98A0", Offset = "0x44D98A0", VA = "0x44D98A0")]
	public EnterTryFaultInstruction EmitEnterTryFault(BranchLabel tryEnd)
	{
		return null;
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x44D9930", Offset = "0x44D9930", VA = "0x44D9930")]
	public void EmitEnterFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x44D99D0", Offset = "0x44D99D0", VA = "0x44D99D0")]
	public void EmitLeaveFinally()
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x44D9A30", Offset = "0x44D9A30", VA = "0x44D9A30")]
	public void EmitEnterFault(BranchLabel faultStartLabel)
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x44D9AD0", Offset = "0x44D9AD0", VA = "0x44D9AD0")]
	public void EmitLeaveFault()
	{
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x44D9B30", Offset = "0x44D9B30", VA = "0x44D9B30")]
	public void EmitEnterExceptionFilter()
	{
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x44D9B90", Offset = "0x44D9B90", VA = "0x44D9B90")]
	public void EmitLeaveExceptionFilter()
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x44D9BF0", Offset = "0x44D9BF0", VA = "0x44D9BF0")]
	public void EmitEnterExceptionHandlerNonVoid()
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x44D9C50", Offset = "0x44D9C50", VA = "0x44D9C50")]
	public void EmitEnterExceptionHandlerVoid()
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x44D9CB0", Offset = "0x44D9CB0", VA = "0x44D9CB0")]
	public void EmitLeaveExceptionHandler(bool hasValue, BranchLabel tryExpressionEndLabel)
	{
	}

	[Token(Token = "0x60007D0")]
	public void EmitIntSwitch<T>(Dictionary<T, int> cases)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x44D9D60", Offset = "0x44D9D60", VA = "0x44D9D60")]
	public void EmitStringSwitch(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x44D9DD0", Offset = "0x44D9DD0", VA = "0x44D9DD0")]
	public InstructionList()
	{
	}
}
