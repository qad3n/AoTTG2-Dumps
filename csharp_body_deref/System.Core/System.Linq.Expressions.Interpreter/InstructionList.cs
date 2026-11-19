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

[Token(Token = "0x2000162")]
[DebuggerTypeProxy(typeof(DebugView))]
internal sealed class InstructionList
{
	[Token(Token = "0x2000163")]
	internal sealed class DebugView
	{
		[Token(Token = "0x2000164")]
		[DebuggerDisplay("{GetValue(),nq}", Name = "{GetName(),nq}", Type = "{GetDisplayType(), nq}")]
		internal readonly struct InstructionView
		{
			[Token(Token = "0x40002EB")]
			[FieldOffset(Offset = "0x0")]
			private readonly int _index;

			[Token(Token = "0x40002EC")]
			[FieldOffset(Offset = "0x4")]
			private readonly int _stackDepth;

			[Token(Token = "0x40002ED")]
			[FieldOffset(Offset = "0x8")]
			private readonly int _continuationsDepth;

			[Token(Token = "0x40002EE")]
			[FieldOffset(Offset = "0x10")]
			private readonly string _name;

			[Token(Token = "0x40002EF")]
			[FieldOffset(Offset = "0x18")]
			private readonly Instruction _instruction;

			[Token(Token = "0x60007DF")]
			[Address(RVA = "0x5DEFAB0", Offset = "0x5DEEAB0", VA = "0x5DEFAB0")]
			internal string GetValue()
			{
				return null;
			}

			[Token(Token = "0x60007E0")]
			[Address(RVA = "0x5DEFA60", Offset = "0x5DEEA60", VA = "0x5DEFA60")]
			public InstructionView(Instruction instruction, string name, int index, int stackDepth, int continuationsDepth)
			{
			}
		}

		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x5DE8E40", Offset = "0x5DE7E40", VA = "0x5DE8E40")]
		internal static InstructionView[] GetInstructionViews(IReadOnlyList<Instruction> instructions, IReadOnlyList<object> objects, Func<int, int> labelIndexer, IReadOnlyList<KeyValuePair<int, object>> debugCookies)
		{
			return null;
		}
	}

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<Instruction> _instructions;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x18")]
	private List<object> _objects;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x20")]
	private int _currentStackDepth;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x24")]
	private int _maxStackDepth;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x28")]
	private int _currentContinuationsDepth;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x2C")]
	private int _maxContinuationDepth;

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x30")]
	private int _runtimeLabelCount;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x38")]
	private List<BranchLabel> _labels;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x40")]
	private List<KeyValuePair<int, object>> _debugCookies;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_null;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_true;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_false;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction[] s_Ints;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction[] s_loadObjectCached;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction[] s_loadLocal;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction[] s_loadLocalBoxed;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction[] s_loadLocalFromClosure;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x40")]
	private static Instruction[] s_loadLocalFromClosureBoxed;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x48")]
	private static Instruction[] s_assignLocal;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x50")]
	private static Instruction[] s_storeLocal;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x58")]
	private static Instruction[] s_assignLocalBoxed;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x60")]
	private static Instruction[] s_storeLocalBoxed;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x68")]
	private static Instruction[] s_assignLocalToClosure;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x70")]
	private static readonly Dictionary<FieldInfo, Instruction> s_loadFields;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x78")]
	private static readonly RuntimeLabel[] s_emptyRuntimeLabels;

	[Token(Token = "0x170001B9")]
	public int Count
	{
		[Token(Token = "0x600076F")]
		[Address(RVA = "0x5DE9870", Offset = "0x5DE8870", VA = "0x5DE9870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001BA")]
	public int CurrentStackDepth
	{
		[Token(Token = "0x6000770")]
		[Address(RVA = "0x5DE98B0", Offset = "0x5DE88B0", VA = "0x5DE98B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001BB")]
	public int CurrentContinuationsDepth
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x5DE98C0", Offset = "0x5DE88C0", VA = "0x5DE98C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x5DE95B0", Offset = "0x5DE85B0", VA = "0x5DE95B0")]
	public void Emit(Instruction instruction)
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x5DE96D0", Offset = "0x5DE86D0", VA = "0x5DE96D0")]
	private void UpdateStackDepth(Instruction instruction)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x5DE9770", Offset = "0x5DE8770", VA = "0x5DE9770")]
	public void UnEmit()
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x5DE98D0", Offset = "0x5DE88D0", VA = "0x5DE98D0")]
	internal Instruction GetInstruction(int index)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x5DE9920", Offset = "0x5DE8920", VA = "0x5DE9920")]
	public InstructionArray ToArray()
	{
		return default(InstructionArray);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x5DE9D00", Offset = "0x5DE8D00", VA = "0x5DE9D00")]
	public void EmitLoad(object value)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x5DEA2F0", Offset = "0x5DE92F0", VA = "0x5DEA2F0")]
	public void EmitLoad(bool value)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x5DE9D10", Offset = "0x5DE8D10", VA = "0x5DE9D10")]
	public void EmitLoad(object value, Type type)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x5DEA4C0", Offset = "0x5DE94C0", VA = "0x5DEA4C0")]
	public void EmitDup()
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x5DEA520", Offset = "0x5DE9520", VA = "0x5DEA520")]
	public void EmitPop()
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x5DEA580", Offset = "0x5DE9580", VA = "0x5DEA580")]
	internal void SwitchToBoxed(int index, int instructionIndex)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x5DEA6B0", Offset = "0x5DE96B0", VA = "0x5DEA6B0")]
	public void EmitLoadLocal(int index)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x5DEA8F0", Offset = "0x5DE98F0", VA = "0x5DEA8F0")]
	public void EmitLoadLocalBoxed(int index)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x5DEA950", Offset = "0x5DE9950", VA = "0x5DEA950")]
	internal static Instruction LoadLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x5DEAB80", Offset = "0x5DE9B80", VA = "0x5DEAB80")]
	public void EmitLoadLocalFromClosure(int index)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x5DEADC0", Offset = "0x5DE9DC0", VA = "0x5DEADC0")]
	public void EmitLoadLocalFromClosureBoxed(int index)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x5DEB000", Offset = "0x5DEA000", VA = "0x5DEB000")]
	public void EmitAssignLocal(int index)
	{
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x5DEB240", Offset = "0x5DEA240", VA = "0x5DEB240")]
	public void EmitStoreLocal(int index)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x5DEB480", Offset = "0x5DEA480", VA = "0x5DEB480")]
	public void EmitAssignLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x5DEB4E0", Offset = "0x5DEA4E0", VA = "0x5DEB4E0")]
	internal static Instruction AssignLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x5DEB710", Offset = "0x5DEA710", VA = "0x5DEB710")]
	public void EmitStoreLocalBoxed(int index)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x5DEB770", Offset = "0x5DEA770", VA = "0x5DEB770")]
	internal static Instruction StoreLocalBoxed(int index)
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x5DEB9A0", Offset = "0x5DEA9A0", VA = "0x5DEB9A0")]
	public void EmitAssignLocalToClosure(int index)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x5DEBBE0", Offset = "0x5DEABE0", VA = "0x5DEBBE0")]
	public void EmitStoreLocalToClosure(int index)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x5DEBC40", Offset = "0x5DEAC40", VA = "0x5DEBC40")]
	public void EmitInitializeLocal(int index, Type type)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x5DEBDC0", Offset = "0x5DEADC0", VA = "0x5DEBDC0")]
	internal void EmitInitializeParameter(int index)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x5DEBE70", Offset = "0x5DEAE70", VA = "0x5DEBE70")]
	internal static Instruction Parameter(int index)
	{
		return null;
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x5DEBEC0", Offset = "0x5DEAEC0", VA = "0x5DEBEC0")]
	internal static Instruction ParameterBox(int index)
	{
		return null;
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x5DEBD70", Offset = "0x5DEAD70", VA = "0x5DEBD70")]
	internal static Instruction InitReference(int index)
	{
		return null;
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x5DEBF10", Offset = "0x5DEAF10", VA = "0x5DEBF10")]
	internal static Instruction InitImmutableRefBox(int index)
	{
		return null;
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x5DEBF60", Offset = "0x5DEAF60", VA = "0x5DEBF60")]
	public void EmitNewRuntimeVariables(int count)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x5DEBFC0", Offset = "0x5DEAFC0", VA = "0x5DEBFC0")]
	public void EmitGetArrayItem()
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x5DEC020", Offset = "0x5DEB020", VA = "0x5DEC020")]
	public void EmitSetArrayItem()
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x5DEC080", Offset = "0x5DEB080", VA = "0x5DEC080")]
	public void EmitNewArray(Type elementType)
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x5DEC0E0", Offset = "0x5DEB0E0", VA = "0x5DEC0E0")]
	public void EmitNewArrayBounds(Type elementType, int rank)
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x5DEC150", Offset = "0x5DEB150", VA = "0x5DEC150")]
	public void EmitNewArrayInit(Type elementType, int elementCount)
	{
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x5DEC1C0", Offset = "0x5DEB1C0", VA = "0x5DEC1C0")]
	public void EmitAdd(Type type, bool @checked)
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x5DEC1F0", Offset = "0x5DEB1F0", VA = "0x5DEC1F0")]
	public void EmitSub(Type type, bool @checked)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x5DEC220", Offset = "0x5DEB220", VA = "0x5DEC220")]
	public void EmitMul(Type type, bool @checked)
	{
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x5DEC250", Offset = "0x5DEB250", VA = "0x5DEC250")]
	public void EmitDiv(Type type)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x5DEC270", Offset = "0x5DEB270", VA = "0x5DEC270")]
	public void EmitModulo(Type type)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x5DEC290", Offset = "0x5DEB290", VA = "0x5DEC290")]
	public void EmitExclusiveOr(Type type)
	{
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x5DEC2B0", Offset = "0x5DEB2B0", VA = "0x5DEC2B0")]
	public void EmitAnd(Type type)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x5DEC2D0", Offset = "0x5DEB2D0", VA = "0x5DEC2D0")]
	public void EmitOr(Type type)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x5DEC2F0", Offset = "0x5DEB2F0", VA = "0x5DEC2F0")]
	public void EmitLeftShift(Type type)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x5DEC6D0", Offset = "0x5DEB6D0", VA = "0x5DEC6D0")]
	public void EmitRightShift(Type type)
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x5DEC6F0", Offset = "0x5DEB6F0", VA = "0x5DEC6F0")]
	public void EmitEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x5DEC710", Offset = "0x5DEB710", VA = "0x5DEC710")]
	public void EmitNotEqual(Type type, bool liftedToNull = false)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x5DEC730", Offset = "0x5DEB730", VA = "0x5DEC730")]
	public void EmitLessThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x5DED370", Offset = "0x5DEC370", VA = "0x5DED370")]
	public void EmitLessThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x5DEDFB0", Offset = "0x5DECFB0", VA = "0x5DEDFB0")]
	public void EmitGreaterThan(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x5DEDFD0", Offset = "0x5DECFD0", VA = "0x5DEDFD0")]
	public void EmitGreaterThanOrEqual(Type type, bool liftedToNull)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x5DEDFF0", Offset = "0x5DECFF0", VA = "0x5DEDFF0")]
	public void EmitNumericConvertChecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x5DEE060", Offset = "0x5DED060", VA = "0x5DEE060")]
	public void EmitNumericConvertUnchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x5DEE0D0", Offset = "0x5DED0D0", VA = "0x5DEE0D0")]
	public void EmitConvertToUnderlying(TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x5DEE140", Offset = "0x5DED140", VA = "0x5DEE140")]
	public void EmitCast(Type toType)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x5DEE160", Offset = "0x5DED160", VA = "0x5DEE160")]
	public void EmitCastToEnum(Type toType)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x5DEE1C0", Offset = "0x5DED1C0", VA = "0x5DEE1C0")]
	public void EmitCastReferenceToEnum(Type toType)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x5DEE220", Offset = "0x5DED220", VA = "0x5DEE220")]
	public void EmitNot(Type type)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x5DEE240", Offset = "0x5DED240", VA = "0x5DEE240")]
	public void EmitDefaultValue(Type type)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x5DEE2A0", Offset = "0x5DED2A0", VA = "0x5DEE2A0")]
	public void EmitNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x5DEE320", Offset = "0x5DED320", VA = "0x5DEE320")]
	public void EmitByRefNew(ConstructorInfo constructorInfo, ParameterInfo[] parameters, ByRefUpdater[] updaters)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x5DEE3A0", Offset = "0x5DED3A0", VA = "0x5DEE3A0")]
	internal void EmitCreateDelegate(LightDelegateCreator creator)
	{
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x5DEE400", Offset = "0x5DED400", VA = "0x5DEE400")]
	public void EmitTypeEquals()
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x5DEE460", Offset = "0x5DED460", VA = "0x5DEE460")]
	public void EmitArrayLength()
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x5DEE4C0", Offset = "0x5DED4C0", VA = "0x5DEE4C0")]
	public void EmitNegate(Type type)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x5DEE4E0", Offset = "0x5DED4E0", VA = "0x5DEE4E0")]
	public void EmitNegateChecked(Type type)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x5DEE500", Offset = "0x5DED500", VA = "0x5DEE500")]
	public void EmitIncrement(Type type)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x5DEE520", Offset = "0x5DED520", VA = "0x5DEE520")]
	public void EmitDecrement(Type type)
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x5DEE540", Offset = "0x5DED540", VA = "0x5DEE540")]
	public void EmitTypeIs(Type type)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x5DEE5A0", Offset = "0x5DED5A0", VA = "0x5DEE5A0")]
	public void EmitTypeAs(Type type)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x5DEE600", Offset = "0x5DED600", VA = "0x5DEE600")]
	public void EmitLoadField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x5DEE620", Offset = "0x5DED620", VA = "0x5DEE620")]
	private Instruction GetLoadField(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x5DEE870", Offset = "0x5DED870", VA = "0x5DEE870")]
	public void EmitStoreField(FieldInfo field)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x5DEE900", Offset = "0x5DED900", VA = "0x5DEE900")]
	public void EmitCall(MethodInfo method)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x5DEE970", Offset = "0x5DED970", VA = "0x5DEE970")]
	public void EmitCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x5DEE990", Offset = "0x5DED990", VA = "0x5DEE990")]
	public void EmitByRefCall(MethodInfo method, ParameterInfo[] parameters, ByRefUpdater[] byrefArgs)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x5DEEA40", Offset = "0x5DEDA40", VA = "0x5DEEA40")]
	public void EmitNullableCall(MethodInfo method, ParameterInfo[] parameters)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x5DE9A30", Offset = "0x5DE8A30", VA = "0x5DE9A30")]
	private RuntimeLabel[] BuildRuntimeLabels()
	{
		return null;
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x5DEEAA0", Offset = "0x5DEDAA0", VA = "0x5DEEAA0")]
	public BranchLabel MakeLabel()
	{
		return null;
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x5DEEBB0", Offset = "0x5DEDBB0", VA = "0x5DEEBB0")]
	internal void FixupBranch(int branchIndex, int offset)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x5DEEC80", Offset = "0x5DEDC80", VA = "0x5DEEC80")]
	private int EnsureLabelIndex(BranchLabel label)
	{
		return default(int);
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x5DEECD0", Offset = "0x5DEDCD0", VA = "0x5DEECD0")]
	public int MarkRuntimeLabel()
	{
		return default(int);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x5DEED30", Offset = "0x5DEDD30", VA = "0x5DEED30")]
	public void MarkLabel(BranchLabel label)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x5DEED50", Offset = "0x5DEDD50", VA = "0x5DEED50")]
	public void EmitGoto(BranchLabel label, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x5DEEE10", Offset = "0x5DEDE10", VA = "0x5DEEE10")]
	private void EmitBranch(OffsetInstruction instruction, BranchLabel label)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x5DEEE70", Offset = "0x5DEDE70", VA = "0x5DEEE70")]
	public void EmitBranch(BranchLabel label)
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x5DEEF10", Offset = "0x5DEDF10", VA = "0x5DEEF10")]
	public void EmitBranch(BranchLabel label, bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x5DEEFC0", Offset = "0x5DEDFC0", VA = "0x5DEEFC0")]
	public void EmitCoalescingBranch(BranchLabel leftNotNull)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x5DEF060", Offset = "0x5DEE060", VA = "0x5DEF060")]
	public void EmitBranchTrue(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x5DEF100", Offset = "0x5DEE100", VA = "0x5DEF100")]
	public void EmitBranchFalse(BranchLabel elseLabel)
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x5DEF1A0", Offset = "0x5DEE1A0", VA = "0x5DEF1A0")]
	public void EmitThrow()
	{
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x5DEF200", Offset = "0x5DEE200", VA = "0x5DEF200")]
	public void EmitThrowVoid()
	{
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x5DEF260", Offset = "0x5DEE260", VA = "0x5DEF260")]
	public void EmitRethrow()
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x5DEF2C0", Offset = "0x5DEE2C0", VA = "0x5DEF2C0")]
	public void EmitRethrowVoid()
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x5DEF320", Offset = "0x5DEE320", VA = "0x5DEF320")]
	public void EmitEnterTryFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x5DEF370", Offset = "0x5DEE370", VA = "0x5DEF370")]
	public void EmitEnterTryCatch()
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x5DEF390", Offset = "0x5DEE390", VA = "0x5DEF390")]
	public EnterTryFaultInstruction EmitEnterTryFault(BranchLabel tryEnd)
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x5DEF420", Offset = "0x5DEE420", VA = "0x5DEF420")]
	public void EmitEnterFinally(BranchLabel finallyStartLabel)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x5DEF4C0", Offset = "0x5DEE4C0", VA = "0x5DEF4C0")]
	public void EmitLeaveFinally()
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x5DEF520", Offset = "0x5DEE520", VA = "0x5DEF520")]
	public void EmitEnterFault(BranchLabel faultStartLabel)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x5DEF5C0", Offset = "0x5DEE5C0", VA = "0x5DEF5C0")]
	public void EmitLeaveFault()
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x5DEF620", Offset = "0x5DEE620", VA = "0x5DEF620")]
	public void EmitEnterExceptionFilter()
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x5DEF680", Offset = "0x5DEE680", VA = "0x5DEF680")]
	public void EmitLeaveExceptionFilter()
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x5DEF6E0", Offset = "0x5DEE6E0", VA = "0x5DEF6E0")]
	public void EmitEnterExceptionHandlerNonVoid()
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x5DEF740", Offset = "0x5DEE740", VA = "0x5DEF740")]
	public void EmitEnterExceptionHandlerVoid()
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x5DEF7A0", Offset = "0x5DEE7A0", VA = "0x5DEF7A0")]
	public void EmitLeaveExceptionHandler(bool hasValue, BranchLabel tryExpressionEndLabel)
	{
	}

	[Token(Token = "0x60007DA")]
	public void EmitIntSwitch<T>(Dictionary<T, int> cases)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x5DEF850", Offset = "0x5DEE850", VA = "0x5DEF850")]
	public void EmitStringSwitch(Dictionary<string, int> cases, StrongBox<int> nullCase)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x5DEF8C0", Offset = "0x5DEE8C0", VA = "0x5DEF8C0")]
	public InstructionList()
	{
	}
}
