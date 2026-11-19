// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LightCompiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000195")]
internal sealed class LightCompiler
{
	[Token(Token = "0x2000196")]
	private sealed class QuoteVisitor : ExpressionVisitor
	{
		[Token(Token = "0x4000375")]
		[FieldOffset(Offset = "0x10")]
		private readonly Dictionary<ParameterExpression, int> _definedParameters;

		[Token(Token = "0x4000376")]
		[FieldOffset(Offset = "0x18")]
		public readonly HashSet<ParameterExpression> _hoistedParameters;

		[Token(Token = "0x60008DE")]
		[Address(RVA = "0x5E06070", Offset = "0x5E05070", VA = "0x5E06070", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008DF")]
		[Address(RVA = "0x5E060F0", Offset = "0x5E050F0", VA = "0x5E060F0", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008E0")]
		[Address(RVA = "0x5E06880", Offset = "0x5E05880", VA = "0x5E06880", Slot = "22")]
		protected override CatchBlock VisitCatchBlock(CatchBlock node)
		{
			return null;
		}

		[Token(Token = "0x60008E1")]
		protected internal override Expression VisitLambda<T>(Expression<T> node)
		{
			return null;
		}

		[Token(Token = "0x60008E2")]
		[Address(RVA = "0x5E06150", Offset = "0x5E05150", VA = "0x5E06150")]
		private void PushParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008E3")]
		[Address(RVA = "0x5E064F0", Offset = "0x5E054F0", VA = "0x5E064F0")]
		private void PopParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008E4")]
		[Address(RVA = "0x5E069E0", Offset = "0x5E059E0", VA = "0x5E069E0")]
		public QuoteVisitor()
		{
		}
	}

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x10")]
	private readonly InstructionList _instructions;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalVariables _locals;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<DebugInfo> _debugInfos;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x28")]
	private readonly HybridReferenceDictionary<LabelTarget, LabelInfo> _treeLabels;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x30")]
	private LabelScopeInfo _labelBlock;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x38")]
	private readonly Stack<ParameterExpression> _exceptionForRethrowStack;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x40")]
	private readonly LightCompiler _parent;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x48")]
	private readonly StackGuard _guard;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x0")]
	private static readonly LocalDefinition[] s_emptyLocals;

	[Token(Token = "0x170001D4")]
	public InstructionList Instructions
	{
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x5DF52D0", Offset = "0x5DF42D0", VA = "0x5DF52D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x5DF5030", Offset = "0x5DF4030", VA = "0x5DF5030")]
	public LightCompiler()
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x5DF52A0", Offset = "0x5DF42A0", VA = "0x5DF52A0")]
	private LightCompiler(LightCompiler parent)
	{
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x5DF52E0", Offset = "0x5DF42E0", VA = "0x5DF52E0")]
	public LightDelegateCreator CompileTop(LambdaExpression node)
	{
		return null;
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x5DF5640", Offset = "0x5DF4640", VA = "0x5DF5640")]
	private Interpreter MakeInterpreter(string lambdaName)
	{
		return null;
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x5DF59F0", Offset = "0x5DF49F0", VA = "0x5DF59F0")]
	private void CompileConstantExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x5DF5A90", Offset = "0x5DF4A90", VA = "0x5DF5A90")]
	private void CompileDefaultExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x5DF5AC0", Offset = "0x5DF4AC0", VA = "0x5DF5AC0")]
	private void CompileDefaultExpression(Type type)
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x5DF5BF0", Offset = "0x5DF4BF0", VA = "0x5DF5BF0")]
	private LocalVariable EnsureAvailableForClosure(ParameterExpression expr)
	{
		return null;
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x5DF5D10", Offset = "0x5DF4D10", VA = "0x5DF5D10")]
	private LocalVariable ResolveLocal(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x5DF5D60", Offset = "0x5DF4D60", VA = "0x5DF5D60")]
	private void CompileGetVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x5DF5EA0", Offset = "0x5DF4EA0", VA = "0x5DF5EA0")]
	private void EmitCopyValueType(Type valueType)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x5DF5DA0", Offset = "0x5DF4DA0", VA = "0x5DF5DA0")]
	private void LoadLocalNoValueTypeCopy(ParameterExpression variable)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x5DF5F50", Offset = "0x5DF4F50", VA = "0x5DF5F50")]
	private bool MaybeMutableValueType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x5DF5FB0", Offset = "0x5DF4FB0", VA = "0x5DF5FB0")]
	private void CompileGetBoxedVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x5DF6040", Offset = "0x5DF5040", VA = "0x5DF6040")]
	private void CompileSetVariable(ParameterExpression variable, bool isVoid)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x5DF6210", Offset = "0x5DF5210", VA = "0x5DF6210")]
	private void CompileParameterExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x5DF62B0", Offset = "0x5DF52B0", VA = "0x5DF62B0")]
	private void CompileBlockExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x5DF6420", Offset = "0x5DF5420", VA = "0x5DF6420")]
	private LocalDefinition[] CompileBlockStart(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x5DF6970", Offset = "0x5DF5970", VA = "0x5DF6970")]
	private void CompileBlockEnd(LocalDefinition[] locals)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x5DF6C10", Offset = "0x5DF5C10", VA = "0x5DF6C10")]
	private void CompileIndexExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x5DF6D20", Offset = "0x5DF5D20", VA = "0x5DF6D20")]
	private void EmitIndexGet(IndexExpression index)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x5DF6EB0", Offset = "0x5DF5EB0", VA = "0x5DF6EB0")]
	private void CompileIndexAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x5DF7340", Offset = "0x5DF6340", VA = "0x5DF7340")]
	private void CompileMemberAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x5DF7400", Offset = "0x5DF6400", VA = "0x5DF7400")]
	private void CompileMemberAssignment(bool asVoid, MemberInfo refMember, Expression value, bool forBinding)
	{
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x5DF78D0", Offset = "0x5DF68D0", VA = "0x5DF78D0")]
	private void CompileVariableAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x5DF79A0", Offset = "0x5DF69A0", VA = "0x5DF79A0")]
	private void CompileAssignBinaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x5DF7AC0", Offset = "0x5DF6AC0", VA = "0x5DF7AC0")]
	private void CompileBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x5DF8FA0", Offset = "0x5DF7FA0", VA = "0x5DF8FA0")]
	private void CompileEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x5DF9070", Offset = "0x5DF8070", VA = "0x5DF9070")]
	private void CompileNotEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x5DF9140", Offset = "0x5DF8140", VA = "0x5DF9140")]
	private void CompileComparison(BinaryExpression node)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x5DF8D00", Offset = "0x5DF7D00", VA = "0x5DF8D00")]
	private void CompileArithmetic(ExpressionType nodeType, Expression left, Expression right)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x5DF9340", Offset = "0x5DF8340", VA = "0x5DF9340")]
	private void CompileConvertUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x5DFA7E0", Offset = "0x5DF97E0", VA = "0x5DFA7E0")]
	private void CompileConvertToType(Type typeFrom, Type typeTo, bool isChecked, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x5DFAEA0", Offset = "0x5DF9EA0", VA = "0x5DFAEA0")]
	private void CompileNotExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x5DFAF30", Offset = "0x5DF9F30", VA = "0x5DFAF30")]
	private void CompileUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x5DFB480", Offset = "0x5DFA480", VA = "0x5DFB480")]
	private void EmitUnaryMethodCall(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x5DFB740", Offset = "0x5DFA740", VA = "0x5DFB740")]
	private void EmitUnaryBoolCheck(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x5DFB960", Offset = "0x5DFA960", VA = "0x5DFB960")]
	private void CompileAndAlsoBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x5DFBB60", Offset = "0x5DFAB60", VA = "0x5DFBB60")]
	private void CompileOrElseBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x5DFB9E0", Offset = "0x5DFA9E0", VA = "0x5DFB9E0")]
	private void CompileLogicalBinaryExpression(BinaryExpression b, bool andAlso)
	{
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x5DFBBE0", Offset = "0x5DFABE0", VA = "0x5DFBBE0")]
	private void CompileMethodLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x5DFBEA0", Offset = "0x5DFAEA0", VA = "0x5DFBEA0")]
	private void CompileLiftedLogicalBinaryExpression(BinaryExpression node, bool andAlso)
	{
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x5DFC7E0", Offset = "0x5DFB7E0", VA = "0x5DFC7E0")]
	private void CompileUnliftedLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x5DFC950", Offset = "0x5DFB950", VA = "0x5DFC950")]
	private void CompileConditionalExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x5DFCC90", Offset = "0x5DFBC90", VA = "0x5DFCC90")]
	private void CompileLoopExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x5DFD0D0", Offset = "0x5DFC0D0", VA = "0x5DFD0D0")]
	private void CompileSwitchExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B0")]
	private void CompileIntSwitchExpression<T>(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x5DFDB80", Offset = "0x5DFCB80", VA = "0x5DFDB80")]
	private void CompileStringSwitchExpression(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x5DFE440", Offset = "0x5DFD440", VA = "0x5DFE440")]
	private void CompileLabelExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x5DFE740", Offset = "0x5DFD740", VA = "0x5DFE740")]
	private void CompileGotoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x5DFCFB0", Offset = "0x5DFBFB0", VA = "0x5DFCFB0")]
	private void PushLabelBlock(LabelScopeKind type)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x5DFD0B0", Offset = "0x5DFC0B0", VA = "0x5DFD0B0")]
	private void PopLabelBlock(LabelScopeKind kind)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x5DFE990", Offset = "0x5DFD990", VA = "0x5DFE990")]
	private LabelInfo EnsureLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x5DFE960", Offset = "0x5DFD960", VA = "0x5DFE960")]
	private LabelInfo ReferenceLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x5DFD030", Offset = "0x5DFC030", VA = "0x5DFD030")]
	private LabelInfo DefineLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x5DFEA60", Offset = "0x5DFDA60", VA = "0x5DFEA60")]
	private bool TryPushLabelBlock(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x5DFF0B0", Offset = "0x5DFE0B0", VA = "0x5DFF0B0")]
	private void DefineBlockLabels(Expression node)
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x5DFF220", Offset = "0x5DFE220", VA = "0x5DFF220")]
	private void CheckRethrow()
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x5DFF270", Offset = "0x5DFE270", VA = "0x5DFF270")]
	private void CompileThrowUnaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x5DFF500", Offset = "0x5DFE500", VA = "0x5DFF500")]
	private void CompileTryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x5E00920", Offset = "0x5DFF920", VA = "0x5E00920")]
	private void CompileTryFaultExpression(TryExpression expr)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x5E00E80", Offset = "0x5DFFE80", VA = "0x5E00E80")]
	private void CompileMethodCallExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x5E00F10", Offset = "0x5DFFF10", VA = "0x5E00F10")]
	private void CompileMethodCallExpression(Expression @object, MethodInfo method, IArgumentProvider arguments)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x5E015E0", Offset = "0x5E005E0", VA = "0x5E015E0")]
	private ByRefUpdater CompileArrayIndexAddress(Expression array, Expression index, int argumentIndex)
	{
		return null;
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x5DF6D10", Offset = "0x5DF5D10", VA = "0x5DF6D10")]
	private void EmitThisForMethodCall(Expression node)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x5E01900", Offset = "0x5E00900", VA = "0x5E01900")]
	private static bool ShouldWritebackNode(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x5DF9B70", Offset = "0x5DF8B70", VA = "0x5DF9B70")]
	private ByRefUpdater CompileAddress(Expression node, int index)
	{
		return null;
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x5E01A90", Offset = "0x5E00A90", VA = "0x5E01A90")]
	private ByRefUpdater CompileMultiDimArrayAccess(Expression array, IArgumentProvider arguments, int index)
	{
		return null;
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x5E020B0", Offset = "0x5E010B0", VA = "0x5E020B0")]
	private void CompileNewExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x5E02560", Offset = "0x5E01560", VA = "0x5E02560")]
	private void CompileMemberExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x5E025F0", Offset = "0x5E015F0", VA = "0x5E025F0")]
	private void CompileMember(Expression from, MemberInfo member, bool forBinding)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x5E02A40", Offset = "0x5E01A40", VA = "0x5E02A40")]
	private void CompileNewArrayExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x5E02EE0", Offset = "0x5E01EE0", VA = "0x5E02EE0")]
	private void CompileDebugInfoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x5E030A0", Offset = "0x5E020A0", VA = "0x5E030A0")]
	private void CompileRuntimeVariablesExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x5E033D0", Offset = "0x5E023D0", VA = "0x5E033D0")]
	private void CompileLambdaExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x5E03640", Offset = "0x5E02640", VA = "0x5E03640")]
	private void CompileCoalesceBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x5E03DE0", Offset = "0x5E02DE0", VA = "0x5E03DE0")]
	private void CompileInvocationExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x5E040E0", Offset = "0x5E030E0", VA = "0x5E040E0")]
	private void CompileListInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x5E04150", Offset = "0x5E03150", VA = "0x5E04150")]
	private void CompileListInit(ReadOnlyCollection<ElementInit> initializers)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x5E04670", Offset = "0x5E03670", VA = "0x5E04670")]
	private void CompileMemberInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x5E046E0", Offset = "0x5E036E0", VA = "0x5E046E0")]
	private void CompileMemberInit(ReadOnlyCollection<MemberBinding> bindings)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x5E04D50", Offset = "0x5E03D50", VA = "0x5E04D50")]
	private static Type GetMemberType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x5E04EC0", Offset = "0x5E03EC0", VA = "0x5E04EC0")]
	private void CompileQuoteUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x5E05250", Offset = "0x5E04250", VA = "0x5E05250")]
	private void CompileUnboxUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x5E053B0", Offset = "0x5E043B0", VA = "0x5E053B0")]
	private void CompileTypeEqualExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x5DFB670", Offset = "0x5DFA670", VA = "0x5DFB670")]
	private void CompileTypeAsExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x5E055D0", Offset = "0x5E045D0", VA = "0x5E055D0")]
	private void CompileTypeIsExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x5DF6900", Offset = "0x5DF5900", VA = "0x5DF6900")]
	private void Compile(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x5DF6A50", Offset = "0x5DF5A50", VA = "0x5DF6A50")]
	private void CompileAsVoid(Expression expr)
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x5E058F0", Offset = "0x5E048F0", VA = "0x5E058F0")]
	private void CompileNoLabelPush(Expression expr)
	{
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x5DF55F0", Offset = "0x5DF45F0", VA = "0x5DF55F0")]
	private void Compile(Expression expr)
	{
	}
}
