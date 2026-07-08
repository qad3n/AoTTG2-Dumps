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
			[Address(RVA = "0x41B4EC0", Offset = "0x41B4EC0", VA = "0x41B4EC0")]
			internal string GetValue()
			{
				return null;
			}

			[Token(Token = "0x60007D6")]
			[Address(RVA = "0x41B4E70", Offset = "0x41B4E70", VA = "0x41B4E70")]
			public InstructionView(Instruction instruction, string name, int index, int stackDepth, int continuationsDepth)
			{
			}
		}

		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x41AE0C0", Offset = "0x41AE0C0", VA = "0x41AE0C0")]
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
		[Address(RVA = "0x41AEB00", Offset = "0x41AEB00", VA = "0x41AEB00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B8")]
	public int CurrentStackDepth
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x41AEB40", Offset = "0x41AEB40", VA = "0x41AEB40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B9")]
	public int CurrentContinuationsDepth
	{
		[Token(Token = "0x6000767")]
		[Address(RVA = "0x41AEB50", Offset = "0x41AEB50", VA = "0x41AEB50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x41AE830", Offset = "0x41AE830", VA = "0x41AE830")]
	public void Emit(Instruction instruction)
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x41AE960", Offset = "0x41AE960", VA = "0x41AE960")]
	private void UpdateStackDepth(Instruction instruction)
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x41AEA00", Offset = "0x41AEA00", VA = "0x41AEA00")]
	public void UnEmit()
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x41AEB60", Offset = "0x41AEB60", VA = "0x41AEB60")]
	internal Instruction GetInstruction(int index)
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x41AEBB0", Offset = "0x41AEBB0", VA = "0x41AEBB0")]
	public InstructionArray ToArray()
	{
		return default(InstructionArray);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x41AEFC0", Offset = "0x41AEFC0", VA = "0x41AEFC0")]
	public void EmitLoad(object value)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x41AF5F0", Offset = "0x41AF5F0", VA = "0x41AF5F0")]
	public void EmitLoad(bool value)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x41AEFD0", Offset = "0x41AEFD0", VA = "0x41AEFD0")]
	public void EmitLoad(object value, Type type)
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x41AF7B0", Offset = "0x41AF7B0", VA = "0x41AF7B0")]
	public void EmitDup()
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x41AF810", Offset = "0x41AF810", VA = "0x41AF810")]
	public void EmitPop()
	{
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x41AF870", Offset = "0x41AF870", VA = "0x41AF870")]
	internal void SwitchToBoxed(int index, int instructionIndex)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x41AF9A0", Offset = "0x41AF9A0", VA = "0x41AF9A0")]
	public void EmitLoadLocal(int index)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x41AFC00", Offset = "0x41AFC00", VA = "0x41AFC00")]
	public void EmitLoadLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x41AFC60", Offset = "0x41AFC60", VA = "0x41AFC60")]
	internal static Instruction LoadLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x41AFEB0", Offset = "0x41AFEB0", VA = "0x41AFEB0")]
	public void EmitLoadLocalFromClosure(int index)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x41B0110", Offset = "0x41B0110", VA = "0x41B0110")]
	public void EmitLoadLocalFromClosureBoxed(int index)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x41B0370", Offset = "0x41B0370", VA = "0x41B0370")]
	public void EmitAssignLocal(int index)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x41B05D0", Offset = "0x41B05D0", VA = "0x41B05D0")]
	public void EmitStoreLocal(int index)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x41B0830", Offset = "0x41B0830", VA = "0x41B0830")]
	public void EmitAssignLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x41B0890", Offset = "0x41B0890", VA = "0x41B0890")]
	internal static Instruction AssignLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x41B0AE0", Offset = "0x41B0AE0", VA = "0x41B0AE0")]
	public void EmitStoreLocalBoxed(int index)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x41B0B40", Offset = "0x41B0B40", VA = "0x41B0B40")]
	internal static Instruction StoreLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x41B0D90", Offset = "0x41B0D90", VA = "0x41B0D90")]
	public void EmitAssignLocalToClosure(int index)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x41B0FF0", Offset = "0x41B0FF0", VA = "0x41B0FF0")]
	public void EmitStoreLocalToClosure(int index)
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x41B1050", Offset = "0x41B1050", VA = "0x41B1050")]
	public void EmitInitializeLocal(int index, Type type)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x41B11D0", Offset = "0x41B11D0", VA = "0x41B11D0")]
	internal void EmitInitializeParameter(int index)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x41B1280", Offset = "0x41B1280", VA = "0x41B1280")]
	internal static Instruction Parameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x41B12D0", Offset = "0x41B12D0", VA = "0x41B12D0")]
	internal static Instruction ParameterBox(int index)
	{
		return null;
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x41B1180", Offset = "0x41B1180", VA = "0x41B1180")]
	internal static Instruction InitReference(int index)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x41B1320", Offset = "0x41B1320", VA = "0x41B1320")]
	internal static Instruction InitImmutableRefBox(int index)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x41B1370", Offset = "0x41B1370", VA = "0x41B1370")]
	public void EmitNewRuntimeVariables(int count)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x41B13D0", Offset = "0x41B13D0", VA = "0x41B13D0")]
	public void EmitGetArrayItem()
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x41B1430", Offset = "0x41B1430", VA = "0x41B1430")]
	public void EmitSetArrayItem()
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x41B1490", Offset = "0x41B1490", VA = "0x41B1490")]
	public void EmitNewArray(Type elementType)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x41B14F0", Offset = "0x41B14F0", VA = "0x41B14F0")]
	public void EmitNewArrayBounds(Type elementType, int rank)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x41B1560", Offset = "0x41B1560", VA = "0x41B1560")]
	public void EmitNewArrayInit(Type elementType, int elementCount)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x41B15D0", Offset = "0x41B15D0", VA = "0x41B15D0")]
	public void EmitAdd(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x41B1610", Offset = "0x41B1610", VA = "0x41B1610")]
	public void EmitSub(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x41B1650", Offset = "0x41B1650", VA = "0x41B1650")]
	public void EmitMul(Type type, bool @checked)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x41B1690", Offset = "0x41B1690", VA = "0x41B1690")]
	public void EmitDiv(Type type)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x41B16B0", Offset = "0x41B16B0", VA = "0x41B16B0")]
	public void EmitModulo(Type type)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x41B16D0", Offset = "0x41B16D0", VA = "0x41B16D0")]
	public void EmitExclusiveOr(Type type)
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x41B16F0", Offset = "0x41B16F0", VA = "0x41B16F0")]
	public void EmitAnd(Type type)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x41B1710", Offset = "0x41B1710", VA = "0x41B1710")]
	public void EmitOr(Type type)
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x41B1730", Offset = "0x41B1730", VA = "0x41B1730")]
	public void EmitLeftShift(Type type)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x41B1B10", Offset = "0x41B1B10", VA = "0x41B1B10")]
	public void EmitRightShift(Type type)
	{
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x41B1B30", Offset = "0x41B1B30", VA = "0x41B1B30")]
	public void EmitEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x41B1B50", Offset = "0x41B1B50", VA = "0x41B1B50")]
	public void EmitNotEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x41B1B70", Offset = "0x41B1B70", VA = "0x41B1B70")]
	public void EmitLessThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x41B2770", Offset = "0x41B2770", VA = "0x41B2770")]
	public void EmitLessThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x41B3370", Offset = "0x41B3370", VA = "0x41B3370")]
	public void EmitGreaterThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x41B3390", Offset = "0x41B3390", VA = "0x41B3390")]
	public void EmitGreaterThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x41B33B0", Offset = "0x41B33B0", VA = "0x41B33B0")]
	public void EmitNumericConvertChecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x41B3420", Offset = "0x41B3420", VA = "0x41B3420")]
	public void EmitNumericConvertUnchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x41B3490", Offset = "0x41B3490", VA = "0x41B3490")]
	public void EmitConvertToUnderlying(TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x41B3500", Offset = "0x41B3500", VA = "0x41B3500")]
	public void EmitCast(Type toType)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x41B3520", Offset = "0x41B3520", VA = "0x41B3520")]
	public void EmitCastToEnum(Type toType)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x41B3580", Offset = "0x41B3580", VA = "0x41B3580")]
	public void EmitCastReferenceToEnum(Type toType)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x41B35E0", Offset = "0x41B35E0", VA = "0x41B35E0")]
	public void EmitNot(Type type)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x41B3600", Offset = "0x41B3600", VA = "0x41B3600")]
	public void EmitDefaultValue(Type type)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x41B3660", Offset = "0x41B3660", VA = "0x41B3660")]
	public void EmitNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x41B36E0", Offset = "0x41B36E0", VA = "0x41B36E0")]
	public void EmitByRefNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters, ByRefUpdater[] updaters)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x41B3760", Offset = "0x41B3760", VA = "0x41B3760")]
	internal void EmitCreateDelegate(LightDelegateCreator creator)
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x41B37C0", Offset = "0x41B37C0", VA = "0x41B37C0")]
	public void EmitTypeEquals()
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x41B3820", Offset = "0x41B3820", VA = "0x41B3820")]
	public void EmitArrayLength()
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x41B3880", Offset = "0x41B3880", VA = "0x41B3880")]
	public void EmitNegate(Type type)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x41B38A0", Offset = "0x41B38A0", VA = "0x41B38A0")]
	public void EmitNegateChecked(Type type)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x41B38C0", Offset = "0x41B38C0", VA = "0x41B38C0")]
	public void EmitIncrement(Type type)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x41B38E0", Offset = "0x41B38E0", VA = "0x41B38E0")]
	public void EmitDecrement(Type type)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x41B3900", Offset = "0x41B3900", VA = "0x41B3900")]
	public void EmitTypeIs(Type type)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x41B3960", Offset = "0x41B3960", VA = "0x41B3960")]
	public void EmitTypeAs(Type type)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x41B39C0", Offset = "0x41B39C0", VA = "0x41B39C0")]
	public void EmitLoadField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x41B39E0", Offset = "0x41B39E0", VA = "0x41B39E0")]
	private Instruction GetLoadField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x41B3C90", Offset = "0x41B3C90", VA = "0x41B3C90")]
	public void EmitStoreField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x41B3D20", Offset = "0x41B3D20", VA = "0x41B3D20")]
	public void EmitCall(MethodInfo method)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x41B3D90", Offset = "0x41B3D90", VA = "0x41B3D90")]
	public void EmitCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x41B3DB0", Offset = "0x41B3DB0", VA = "0x41B3DB0")]
	public void EmitByRefCall(MethodInfo method, ParameterInfo[] parameters, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x41B3E50", Offset = "0x41B3E50", VA = "0x41B3E50")]
	public void EmitNullableCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x41AECC0", Offset = "0x41AECC0", VA = "0x41AECC0")]
	private RuntimeLabel[] BuildRuntimeLabels()
	{
		return null;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x41B3EB0", Offset = "0x41B3EB0", VA = "0x41B3EB0")]
	public BranchLabel MakeLabel()
	{
		return null;
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x41B3FC0", Offset = "0x41B3FC0", VA = "0x41B3FC0")]
	internal void FixupBranch(int branchIndex, int offset)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x41B4090", Offset = "0x41B4090", VA = "0x41B4090")]
	private int EnsureLabelIndex(BranchLabel label)
	{
		return default(int);
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x41B40E0", Offset = "0x41B40E0", VA = "0x41B40E0")]
	public int MarkRuntimeLabel()
	{
		return default(int);
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x41B4140", Offset = "0x41B4140", VA = "0x41B4140")]
	public void MarkLabel(BranchLabel label)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x41B4160", Offset = "0x41B4160", VA = "0x41B4160")]
	public void EmitGoto(BranchLabel label, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x41B4220", Offset = "0x41B4220", VA = "0x41B4220")]
	private void EmitBranch(OffsetInstruction instruction, BranchLabel label)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x41B4280", Offset = "0x41B4280", VA = "0x41B4280")]
	public void EmitBranch(BranchLabel label)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x41B4320", Offset = "0x41B4320", VA = "0x41B4320")]
	public void EmitBranch(BranchLabel label, bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x41B43D0", Offset = "0x41B43D0", VA = "0x41B43D0")]
	public void EmitCoalescingBranch(BranchLabel leftNotNull)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x41B4470", Offset = "0x41B4470", VA = "0x41B4470")]
	public void EmitBranchTrue(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x41B4510", Offset = "0x41B4510", VA = "0x41B4510")]
	public void EmitBranchFalse(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x41B45B0", Offset = "0x41B45B0", VA = "0x41B45B0")]
	public void EmitThrow()
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x41B4610", Offset = "0x41B4610", VA = "0x41B4610")]
	public void EmitThrowVoid()
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x41B4670", Offset = "0x41B4670", VA = "0x41B4670")]
	public void EmitRethrow()
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x41B46D0", Offset = "0x41B46D0", VA = "0x41B46D0")]
	public void EmitRethrowVoid()
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x41B4730", Offset = "0x41B4730", VA = "0x41B4730")]
	public void EmitEnterTryFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x41B4780", Offset = "0x41B4780", VA = "0x41B4780")]
	public void EmitEnterTryCatch()
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x41B47A0", Offset = "0x41B47A0", VA = "0x41B47A0")]
	public EnterTryFaultInstruction EmitEnterTryFault(BranchLabel tryEnd)
	{
		return null;
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x41B4830", Offset = "0x41B4830", VA = "0x41B4830")]
	public void EmitEnterFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x41B48D0", Offset = "0x41B48D0", VA = "0x41B48D0")]
	public void EmitLeaveFinally()
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x41B4930", Offset = "0x41B4930", VA = "0x41B4930")]
	public void EmitEnterFault(BranchLabel faultStartLabel)
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x41B49D0", Offset = "0x41B49D0", VA = "0x41B49D0")]
	public void EmitLeaveFault()
	{
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x41B4A30", Offset = "0x41B4A30", VA = "0x41B4A30")]
	public void EmitEnterExceptionFilter()
	{
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x41B4A90", Offset = "0x41B4A90", VA = "0x41B4A90")]
	public void EmitLeaveExceptionFilter()
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x41B4AF0", Offset = "0x41B4AF0", VA = "0x41B4AF0")]
	public void EmitEnterExceptionHandlerNonVoid()
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x41B4B50", Offset = "0x41B4B50", VA = "0x41B4B50")]
	public void EmitEnterExceptionHandlerVoid()
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x41B4BB0", Offset = "0x41B4BB0", VA = "0x41B4BB0")]
	public void EmitLeaveExceptionHandler(bool hasValue, BranchLabel tryExpressionEndLabel)
	{
	}

	[Token(Token = "0x60007D0")]
	public void EmitIntSwitch<T>(Dictionary<T, int> cases)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x41B4C60", Offset = "0x41B4C60", VA = "0x41B4C60")]
	public void EmitStringSwitch(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x41B4CD0", Offset = "0x41B4CD0", VA = "0x41B4CD0")]
	public InstructionList()
	{
	}
}
