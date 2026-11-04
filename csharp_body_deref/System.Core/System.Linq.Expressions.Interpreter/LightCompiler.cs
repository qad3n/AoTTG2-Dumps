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

		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x247D060", Offset = "0x247B660", VA = "0x18247D060", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x247CE60", Offset = "0x247B460", VA = "0x18247CE60", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x247CED0", Offset = "0x247B4D0", VA = "0x18247CED0", Slot = "22")]
		protected override CatchBlock VisitCatchBlock(CatchBlock node)
		{
			return null;
		}

		[Token(Token = "0x60008D6")]
		protected internal override Expression VisitLambda<T>(Expression<T> node)
		{
			return null;
		}

		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x247CC30", Offset = "0x247B230", VA = "0x18247CC30")]
		private void PushParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x247CA00", Offset = "0x247B000", VA = "0x18247CA00")]
		private void PopParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x247D0E0", Offset = "0x247B6E0", VA = "0x18247D0E0")]
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
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x2465250", Offset = "0x2463850", VA = "0x182465250")]
	public LightCompiler()
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x2465210", Offset = "0x2463810", VA = "0x182465210")]
	private LightCompiler(LightCompiler parent)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x2461620", Offset = "0x245FC20", VA = "0x182461620")]
	public LightDelegateCreator CompileTop(LambdaExpression node)
	{
		return null;
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x2464520", Offset = "0x2462B20", VA = "0x182464520")]
	private Interpreter MakeInterpreter(string lambdaName)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x2459330", Offset = "0x2457930", VA = "0x182459330")]
	private void CompileConstantExpression(Expression expr)
	{
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x245A510", Offset = "0x2458B10", VA = "0x18245A510")]
	private void CompileDefaultExpression(Expression expr)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x245A410", Offset = "0x2458A10", VA = "0x18245A410")]
	private void CompileDefaultExpression(Type type)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x2464040", Offset = "0x2462640", VA = "0x182464040")]
	private LocalVariable EnsureAvailableForClosure(ParameterExpression expr)
	{
		return null;
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x2464B80", Offset = "0x2463180", VA = "0x182464B80")]
	private LocalVariable ResolveLocal(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x245A750", Offset = "0x2458D50", VA = "0x18245A750")]
	private void CompileGetVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x2463B70", Offset = "0x2462170", VA = "0x182463B70")]
	private void EmitCopyValueType(Type valueType)
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x24643F0", Offset = "0x24629F0", VA = "0x1824643F0")]
	private void LoadLocalNoValueTypeCopy(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x2464990", Offset = "0x2462F90", VA = "0x182464990")]
	private bool MaybeMutableValueType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x245A6B0", Offset = "0x2458CB0", VA = "0x18245A6B0")]
	private void CompileGetBoxedVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x2460300", Offset = "0x245E900", VA = "0x182460300")]
	private void CompileSetVariable(ParameterExpression variable, bool isVoid)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x245FCE0", Offset = "0x245E2E0", VA = "0x18245FCE0")]
	private void CompileParameterExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x2458010", Offset = "0x2456610", VA = "0x182458010")]
	private void CompileBlockExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x24581F0", Offset = "0x24567F0", VA = "0x1824581F0")]
	private LocalDefinition[] CompileBlockStart(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x2457F60", Offset = "0x2456560", VA = "0x182457F60")]
	private void CompileBlockEnd(LocalDefinition[] locals)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x245AEE0", Offset = "0x24594E0", VA = "0x18245AEE0")]
	private void CompileIndexExpression(Expression expr)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x2463C30", Offset = "0x2462230", VA = "0x182463C30")]
	private void EmitIndexGet(IndexExpression index)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x245AB40", Offset = "0x2459140", VA = "0x18245AB40")]
	private void CompileIndexAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x245D200", Offset = "0x245B800", VA = "0x18245D200")]
	private void CompileMemberAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x245CC10", Offset = "0x245B210", VA = "0x18245CC10")]
	private void CompileMemberAssignment(bool asVoid, MemberInfo refMember, Expression value, bool forBinding)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x2463850", Offset = "0x2461E50", VA = "0x182463850")]
	private void CompileVariableAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x2456C90", Offset = "0x2455290", VA = "0x182456C90")]
	private void CompileAssignBinaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x2456F00", Offset = "0x2455500", VA = "0x182456F00")]
	private void CompileBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x245A630", Offset = "0x2458C30", VA = "0x18245A630")]
	private void CompileEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x245FB70", Offset = "0x245E170", VA = "0x18245FB70")]
	private void CompileNotEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x2458EC0", Offset = "0x24574C0", VA = "0x182458EC0")]
	private void CompileComparison(BinaryExpression node)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x2456580", Offset = "0x2454B80", VA = "0x182456580")]
	private void CompileArithmetic(ExpressionType nodeType, Expression left, Expression right)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x2459A70", Offset = "0x2458070", VA = "0x182459A70")]
	private void CompileConvertUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x24593E0", Offset = "0x24579E0", VA = "0x1824593E0")]
	private void CompileConvertToType(Type typeFrom, Type typeTo, bool isChecked, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x245FBF0", Offset = "0x245E1F0", VA = "0x18245FBF0")]
	private void CompileNotExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x2463090", Offset = "0x2461690", VA = "0x182463090")]
	private void CompileUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x2463F40", Offset = "0x2462540", VA = "0x182463F40")]
	private void EmitUnaryMethodCall(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x2463D60", Offset = "0x2462360", VA = "0x182463D60")]
	private void EmitUnaryBoolCheck(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x2456500", Offset = "0x2454B00", VA = "0x182456500")]
	private void CompileAndAlsoBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x245FC60", Offset = "0x245E260", VA = "0x18245FC60")]
	private void CompileOrElseBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x245C4A0", Offset = "0x245AAA0", VA = "0x18245C4A0")]
	private void CompileLogicalBinaryExpression(BinaryExpression b, bool andAlso)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x245E180", Offset = "0x245C780", VA = "0x18245E180")]
	private void CompileMethodLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x245B750", Offset = "0x2459D50", VA = "0x18245B750")]
	private void CompileLiftedLogicalBinaryExpression(BinaryExpression node, bool andAlso)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x24636D0", Offset = "0x2461CD0", VA = "0x1824636D0")]
	private void CompileUnliftedLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x24590A0", Offset = "0x24576A0", VA = "0x1824590A0")]
	private void CompileConditionalExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x245C8D0", Offset = "0x245AED0", VA = "0x18245C8D0")]
	private void CompileLoopExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x2460B40", Offset = "0x245F140", VA = "0x182460B40")]
	private void CompileSwitchExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A5")]
	private void CompileIntSwitchExpression<T>(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x24604E0", Offset = "0x245EAE0", VA = "0x1824604E0")]
	private void CompileStringSwitchExpression(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x245B230", Offset = "0x2459830", VA = "0x18245B230")]
	private void CompileLabelExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x245A830", Offset = "0x2458E30", VA = "0x18245A830")]
	private void CompileGotoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x2464A20", Offset = "0x2463020", VA = "0x182464A20")]
	private void PushLabelBlock(LabelScopeKind type)
	{
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x24649F0", Offset = "0x2462FF0", VA = "0x1824649F0")]
	private void PopLabelBlock(LabelScopeKind kind)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x24641A0", Offset = "0x24627A0", VA = "0x1824641A0")]
	private LabelInfo EnsureLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x2464AA0", Offset = "0x24630A0", VA = "0x182464AA0")]
	private LabelInfo ReferenceLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x2463AD0", Offset = "0x24620D0", VA = "0x182463AD0")]
	private LabelInfo DefineLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x2464DB0", Offset = "0x24633B0", VA = "0x182464DB0")]
	private bool TryPushLabelBlock(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x2463990", Offset = "0x2461F90", VA = "0x182463990")]
	private void DefineBlockLabels(Expression node)
	{
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x2455970", Offset = "0x2453F70", VA = "0x182455970")]
	private void CheckRethrow()
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x2461350", Offset = "0x245F950", VA = "0x182461350")]
	private void CompileThrowUnaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x2461920", Offset = "0x245FF20", VA = "0x182461920")]
	private void CompileTryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x2462640", Offset = "0x2460C40", VA = "0x182462640")]
	private void CompileTryFaultExpression(TryExpression expr)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x245E0E0", Offset = "0x245C6E0", VA = "0x18245E0E0")]
	private void CompileMethodCallExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x245DBE0", Offset = "0x245C1E0", VA = "0x18245DBE0")]
	private void CompileMethodCallExpression(Expression @object, MethodInfo method, IArgumentProvider arguments)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x24567E0", Offset = "0x2454DE0", VA = "0x1824567E0")]
	private ByRefUpdater CompileArrayIndexAddress(Expression array, Expression index, int argumentIndex)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x2463D50", Offset = "0x2462350", VA = "0x182463D50")]
	private void EmitThisForMethodCall(Expression node)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x2464BF0", Offset = "0x24631F0", VA = "0x182464BF0")]
	private static bool ShouldWritebackNode(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x24559D0", Offset = "0x2453FD0", VA = "0x1824559D0")]
	private ByRefUpdater CompileAddress(Expression node, int index)
	{
		return null;
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x245E350", Offset = "0x245C950", VA = "0x18245E350")]
	private ByRefUpdater CompileMultiDimArrayAccess(Expression array, IArgumentProvider arguments, int index)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x245ECB0", Offset = "0x245D2B0", VA = "0x18245ECB0")]
	private void CompileNewExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x245D2F0", Offset = "0x245B8F0", VA = "0x18245D2F0")]
	private void CompileMemberExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x245D870", Offset = "0x245BE70", VA = "0x18245D870")]
	private void CompileMember(Expression from, MemberInfo member, bool forBinding)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x245E940", Offset = "0x245CF40", VA = "0x18245E940")]
	private void CompileNewArrayExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x245A230", Offset = "0x2458830", VA = "0x18245A230")]
	private void CompileDebugInfoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x2460080", Offset = "0x245E680", VA = "0x182460080")]
	private void CompileRuntimeVariablesExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x245B4F0", Offset = "0x2459AF0", VA = "0x18245B4F0")]
	private void CompileLambdaExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x2458720", Offset = "0x2456D20", VA = "0x182458720")]
	private void CompileCoalesceBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x245AFC0", Offset = "0x24595C0", VA = "0x18245AFC0")]
	private void CompileInvocationExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x245C130", Offset = "0x245A730", VA = "0x18245C130")]
	private void CompileListInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x245C1C0", Offset = "0x245A7C0", VA = "0x18245C1C0")]
	private void CompileListInit(ReadOnlyCollection<ElementInit> initializers)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x245D3A0", Offset = "0x245B9A0", VA = "0x18245D3A0")]
	private void CompileMemberInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x245D430", Offset = "0x245BA30", VA = "0x18245D430")]
	private void CompileMemberInit(ReadOnlyCollection<MemberBinding> bindings)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x2464270", Offset = "0x2462870", VA = "0x182464270")]
	private static Type GetMemberType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x245FD60", Offset = "0x245E360", VA = "0x18245FD60")]
	private void CompileQuoteUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x2463590", Offset = "0x2461B90", VA = "0x182463590")]
	private void CompileUnboxUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x2462BF0", Offset = "0x24611F0", VA = "0x182462BF0")]
	private void CompileTypeEqualExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x2462B40", Offset = "0x2461140", VA = "0x182462B40")]
	private void CompileTypeAsExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x2462E10", Offset = "0x2461410", VA = "0x182462E10")]
	private void CompileTypeIsExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x2463970", Offset = "0x2461F70", VA = "0x182463970")]
	private void Compile(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x2456B20", Offset = "0x2455120", VA = "0x182456B20")]
	private void CompileAsVoid(Expression expr)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x245F060", Offset = "0x245D660", VA = "0x18245F060")]
	private void CompileNoLabelPush(Expression expr)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x2463900", Offset = "0x2461F00", VA = "0x182463900")]
	private void Compile(Expression expr)
	{
	}
}
