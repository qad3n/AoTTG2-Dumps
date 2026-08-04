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

[Token(Token = "0x2000194")]
internal sealed class LightCompiler
{
	[Token(Token = "0x2000195")]
	private sealed class QuoteVisitor : ExpressionVisitor
	{
		[Token(Token = "0x400036C")]
		[FieldOffset(Offset = "0x10")]
		private readonly Dictionary<ParameterExpression, int> _definedParameters;

		[Token(Token = "0x400036D")]
		[FieldOffset(Offset = "0x18")]
		public readonly HashSet<ParameterExpression> _hoistedParameters;

		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x44F08E0", Offset = "0x44F08E0", VA = "0x44F08E0", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x44F0960", Offset = "0x44F0960", VA = "0x44F0960", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x44F11D0", Offset = "0x44F11D0", VA = "0x44F11D0", Slot = "22")]
		protected override CatchBlock VisitCatchBlock(CatchBlock node)
		{
			return null;
		}

		[Token(Token = "0x60008D7")]
		protected internal override Expression VisitLambda<T>(Expression<T> node)
		{
			return null;
		}

		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x44F09C0", Offset = "0x44F09C0", VA = "0x44F09C0")]
		private void PushParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x44F0DC0", Offset = "0x44F0DC0", VA = "0x44F0DC0")]
		private void PopParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x44F1330", Offset = "0x44F1330", VA = "0x44F1330")]
		public QuoteVisitor()
		{
		}
	}

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x10")]
	private readonly InstructionList _instructions;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalVariables _locals;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<DebugInfo> _debugInfos;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x28")]
	private readonly HybridReferenceDictionary<LabelTarget, LabelInfo> _treeLabels;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x30")]
	private LabelScopeInfo _labelBlock;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x38")]
	private readonly Stack<ParameterExpression> _exceptionForRethrowStack;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x40")]
	private readonly LightCompiler _parent;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x48")]
	private readonly StackGuard _guard;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly LocalDefinition[] s_emptyLocals;

	[Token(Token = "0x170001D2")]
	public InstructionList Instructions
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x44DF8B0", Offset = "0x44DF8B0", VA = "0x44DF8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x44DF610", Offset = "0x44DF610", VA = "0x44DF610")]
	public LightCompiler()
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x44DF880", Offset = "0x44DF880", VA = "0x44DF880")]
	private LightCompiler(LightCompiler parent)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x44DF8C0", Offset = "0x44DF8C0", VA = "0x44DF8C0")]
	public LightDelegateCreator CompileTop(LambdaExpression node)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x44DFC20", Offset = "0x44DFC20", VA = "0x44DFC20")]
	private Interpreter MakeInterpreter(string lambdaName)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x44E0060", Offset = "0x44E0060", VA = "0x44E0060")]
	private void CompileConstantExpression(Expression expr)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x44E0100", Offset = "0x44E0100", VA = "0x44E0100")]
	private void CompileDefaultExpression(Expression expr)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x44E0130", Offset = "0x44E0130", VA = "0x44E0130")]
	private void CompileDefaultExpression(Type type)
	{
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x44E0250", Offset = "0x44E0250", VA = "0x44E0250")]
	private LocalVariable EnsureAvailableForClosure(ParameterExpression expr)
	{
		return null;
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x44E0370", Offset = "0x44E0370", VA = "0x44E0370")]
	private LocalVariable ResolveLocal(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x44E03D0", Offset = "0x44E03D0", VA = "0x44E03D0")]
	private void CompileGetVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x44E0510", Offset = "0x44E0510", VA = "0x44E0510")]
	private void EmitCopyValueType(Type valueType)
	{
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x44E0410", Offset = "0x44E0410", VA = "0x44E0410")]
	private void LoadLocalNoValueTypeCopy(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x44E05C0", Offset = "0x44E05C0", VA = "0x44E05C0")]
	private bool MaybeMutableValueType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x44E0620", Offset = "0x44E0620", VA = "0x44E0620")]
	private void CompileGetBoxedVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x44E06B0", Offset = "0x44E06B0", VA = "0x44E06B0")]
	private void CompileSetVariable(ParameterExpression variable, bool isVoid)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x44E0860", Offset = "0x44E0860", VA = "0x44E0860")]
	private void CompileParameterExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x44E0900", Offset = "0x44E0900", VA = "0x44E0900")]
	private void CompileBlockExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x44E0A70", Offset = "0x44E0A70", VA = "0x44E0A70")]
	private LocalDefinition[] CompileBlockStart(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x44E1060", Offset = "0x44E1060", VA = "0x44E1060")]
	private void CompileBlockEnd(LocalDefinition[] locals)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x44E1300", Offset = "0x44E1300", VA = "0x44E1300")]
	private void CompileIndexExpression(Expression expr)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x44E1410", Offset = "0x44E1410", VA = "0x44E1410")]
	private void EmitIndexGet(IndexExpression index)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x44E15A0", Offset = "0x44E15A0", VA = "0x44E15A0")]
	private void CompileIndexAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x44E1A30", Offset = "0x44E1A30", VA = "0x44E1A30")]
	private void CompileMemberAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x44E1AE0", Offset = "0x44E1AE0", VA = "0x44E1AE0")]
	private void CompileMemberAssignment(bool asVoid, MemberInfo refMember, Expression value, bool forBinding)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x44E1FE0", Offset = "0x44E1FE0", VA = "0x44E1FE0")]
	private void CompileVariableAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x44E20B0", Offset = "0x44E20B0", VA = "0x44E20B0")]
	private void CompileAssignBinaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x44E21D0", Offset = "0x44E21D0", VA = "0x44E21D0")]
	private void CompileBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x44E36C0", Offset = "0x44E36C0", VA = "0x44E36C0")]
	private void CompileEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x44E3790", Offset = "0x44E3790", VA = "0x44E3790")]
	private void CompileNotEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x44E3860", Offset = "0x44E3860", VA = "0x44E3860")]
	private void CompileComparison(BinaryExpression node)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x44E3420", Offset = "0x44E3420", VA = "0x44E3420")]
	private void CompileArithmetic(ExpressionType nodeType, Expression left, Expression right)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x44E3A60", Offset = "0x44E3A60", VA = "0x44E3A60")]
	private void CompileConvertUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x44E4E80", Offset = "0x44E4E80", VA = "0x44E4E80")]
	private void CompileConvertToType(Type typeFrom, Type typeTo, bool isChecked, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x44E5550", Offset = "0x44E5550", VA = "0x44E5550")]
	private void CompileNotExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x44E55E0", Offset = "0x44E55E0", VA = "0x44E55E0")]
	private void CompileUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x44E5A40", Offset = "0x44E5A40", VA = "0x44E5A40")]
	private void EmitUnaryMethodCall(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x44E5D00", Offset = "0x44E5D00", VA = "0x44E5D00")]
	private void EmitUnaryBoolCheck(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x44E5F20", Offset = "0x44E5F20", VA = "0x44E5F20")]
	private void CompileAndAlsoBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x44E6120", Offset = "0x44E6120", VA = "0x44E6120")]
	private void CompileOrElseBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x44E5FA0", Offset = "0x44E5FA0", VA = "0x44E5FA0")]
	private void CompileLogicalBinaryExpression(BinaryExpression b, bool andAlso)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x44E61A0", Offset = "0x44E61A0", VA = "0x44E61A0")]
	private void CompileMethodLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x44E6460", Offset = "0x44E6460", VA = "0x44E6460")]
	private void CompileLiftedLogicalBinaryExpression(BinaryExpression node, bool andAlso)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x44E6D40", Offset = "0x44E6D40", VA = "0x44E6D40")]
	private void CompileUnliftedLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x44E6EA0", Offset = "0x44E6EA0", VA = "0x44E6EA0")]
	private void CompileConditionalExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x44E71C0", Offset = "0x44E71C0", VA = "0x44E71C0")]
	private void CompileLoopExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x44E7600", Offset = "0x44E7600", VA = "0x44E7600")]
	private void CompileSwitchExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A6")]
	private void CompileIntSwitchExpression<T>(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x44E8170", Offset = "0x44E8170", VA = "0x44E8170")]
	private void CompileStringSwitchExpression(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x44E8A60", Offset = "0x44E8A60", VA = "0x44E8A60")]
	private void CompileLabelExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x44E8DA0", Offset = "0x44E8DA0", VA = "0x44E8DA0")]
	private void CompileGotoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x44E74E0", Offset = "0x44E74E0", VA = "0x44E74E0")]
	private void PushLabelBlock(LabelScopeKind type)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x44E75E0", Offset = "0x44E75E0", VA = "0x44E75E0")]
	private void PopLabelBlock(LabelScopeKind kind)
	{
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x44E8FF0", Offset = "0x44E8FF0", VA = "0x44E8FF0")]
	private LabelInfo EnsureLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x44E8FC0", Offset = "0x44E8FC0", VA = "0x44E8FC0")]
	private LabelInfo ReferenceLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x44E7560", Offset = "0x44E7560", VA = "0x44E7560")]
	private LabelInfo DefineLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x44E90C0", Offset = "0x44E90C0", VA = "0x44E90C0")]
	private bool TryPushLabelBlock(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x44E9810", Offset = "0x44E9810", VA = "0x44E9810")]
	private void DefineBlockLabels(Expression node)
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x44E99A0", Offset = "0x44E99A0", VA = "0x44E99A0")]
	private void CheckRethrow()
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x44E99F0", Offset = "0x44E99F0", VA = "0x44E99F0")]
	private void CompileThrowUnaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x44E9C60", Offset = "0x44E9C60", VA = "0x44E9C60")]
	private void CompileTryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x44EAFF0", Offset = "0x44EAFF0", VA = "0x44EAFF0")]
	private void CompileTryFaultExpression(TryExpression expr)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x44EB480", Offset = "0x44EB480", VA = "0x44EB480")]
	private void CompileMethodCallExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x44EB510", Offset = "0x44EB510", VA = "0x44EB510")]
	private void CompileMethodCallExpression(Expression @object, MethodInfo method, IArgumentProvider arguments)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x44EBBB0", Offset = "0x44EBBB0", VA = "0x44EBBB0")]
	private ByRefUpdater CompileArrayIndexAddress(Expression array, Expression index, int argumentIndex)
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x44E1400", Offset = "0x44E1400", VA = "0x44E1400")]
	private void EmitThisForMethodCall(Expression node)
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x44EBED0", Offset = "0x44EBED0", VA = "0x44EBED0")]
	private static bool ShouldWritebackNode(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x44E4220", Offset = "0x44E4220", VA = "0x44E4220")]
	private ByRefUpdater CompileAddress(Expression node, int index)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x44EC060", Offset = "0x44EC060", VA = "0x44EC060")]
	private ByRefUpdater CompileMultiDimArrayAccess(Expression array, IArgumentProvider arguments, int index)
	{
		return null;
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x44EC680", Offset = "0x44EC680", VA = "0x44EC680")]
	private void CompileNewExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x44ECB40", Offset = "0x44ECB40", VA = "0x44ECB40")]
	private void CompileMemberExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x44ECBD0", Offset = "0x44ECBD0", VA = "0x44ECBD0")]
	private void CompileMember(Expression from, MemberInfo member, bool forBinding)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x44ECFF0", Offset = "0x44ECFF0", VA = "0x44ECFF0")]
	private void CompileNewArrayExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x44ED4C0", Offset = "0x44ED4C0", VA = "0x44ED4C0")]
	private void CompileDebugInfoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x44ED690", Offset = "0x44ED690", VA = "0x44ED690")]
	private void CompileRuntimeVariablesExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x44EDA20", Offset = "0x44EDA20", VA = "0x44EDA20")]
	private void CompileLambdaExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x44EDCA0", Offset = "0x44EDCA0", VA = "0x44EDCA0")]
	private void CompileCoalesceBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x44EE3E0", Offset = "0x44EE3E0", VA = "0x44EE3E0")]
	private void CompileInvocationExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x44EE6E0", Offset = "0x44EE6E0", VA = "0x44EE6E0")]
	private void CompileListInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x44EE750", Offset = "0x44EE750", VA = "0x44EE750")]
	private void CompileListInit(ReadOnlyCollection<ElementInit> initializers)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x44EECF0", Offset = "0x44EECF0", VA = "0x44EECF0")]
	private void CompileMemberInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x44EED60", Offset = "0x44EED60", VA = "0x44EED60")]
	private void CompileMemberInit(ReadOnlyCollection<MemberBinding> bindings)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x44EF520", Offset = "0x44EF520", VA = "0x44EF520")]
	private static Type GetMemberType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x44EF670", Offset = "0x44EF670", VA = "0x44EF670")]
	private void CompileQuoteUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x44EFA30", Offset = "0x44EFA30", VA = "0x44EFA30")]
	private void CompileUnboxUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x44EFB90", Offset = "0x44EFB90", VA = "0x44EFB90")]
	private void CompileTypeEqualExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x44E5C30", Offset = "0x44E5C30", VA = "0x44E5C30")]
	private void CompileTypeAsExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x44EFDB0", Offset = "0x44EFDB0", VA = "0x44EFDB0")]
	private void CompileTypeIsExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x44E0FF0", Offset = "0x44E0FF0", VA = "0x44E0FF0")]
	private void Compile(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x44E1140", Offset = "0x44E1140", VA = "0x44E1140")]
	private void CompileAsVoid(Expression expr)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x44F00D0", Offset = "0x44F00D0", VA = "0x44F00D0")]
	private void CompileNoLabelPush(Expression expr)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x44DFBD0", Offset = "0x44DFBD0", VA = "0x44DFBD0")]
	private void Compile(Expression expr)
	{
	}
}
