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
		[Address(RVA = "0x41CB7E0", Offset = "0x41CB7E0", VA = "0x41CB7E0", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x41CB860", Offset = "0x41CB860", VA = "0x41CB860", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x41CC0D0", Offset = "0x41CC0D0", VA = "0x41CC0D0", Slot = "22")]
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
		[Address(RVA = "0x41CB8C0", Offset = "0x41CB8C0", VA = "0x41CB8C0")]
		private void PushParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x41CBCC0", Offset = "0x41CBCC0", VA = "0x41CBCC0")]
		private void PopParameters(IEnumerable<ParameterExpression> parameters)
		{
		}

		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x41CC230", Offset = "0x41CC230", VA = "0x41CC230")]
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
		[Address(RVA = "0x41BA7B0", Offset = "0x41BA7B0", VA = "0x41BA7B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x41BA510", Offset = "0x41BA510", VA = "0x41BA510")]
	public LightCompiler()
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x41BA780", Offset = "0x41BA780", VA = "0x41BA780")]
	private LightCompiler(LightCompiler parent)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x41BA7C0", Offset = "0x41BA7C0", VA = "0x41BA7C0")]
	public LightDelegateCreator CompileTop(LambdaExpression node)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x41BAB20", Offset = "0x41BAB20", VA = "0x41BAB20")]
	private Interpreter MakeInterpreter(string lambdaName)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x41BAF60", Offset = "0x41BAF60", VA = "0x41BAF60")]
	private void CompileConstantExpression(Expression expr)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x41BB000", Offset = "0x41BB000", VA = "0x41BB000")]
	private void CompileDefaultExpression(Expression expr)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x41BB030", Offset = "0x41BB030", VA = "0x41BB030")]
	private void CompileDefaultExpression(Type type)
	{
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x41BB150", Offset = "0x41BB150", VA = "0x41BB150")]
	private LocalVariable EnsureAvailableForClosure(ParameterExpression expr)
	{
		return null;
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x41BB270", Offset = "0x41BB270", VA = "0x41BB270")]
	private LocalVariable ResolveLocal(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x41BB2D0", Offset = "0x41BB2D0", VA = "0x41BB2D0")]
	private void CompileGetVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x41BB410", Offset = "0x41BB410", VA = "0x41BB410")]
	private void EmitCopyValueType(Type valueType)
	{
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x41BB310", Offset = "0x41BB310", VA = "0x41BB310")]
	private void LoadLocalNoValueTypeCopy(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x41BB4C0", Offset = "0x41BB4C0", VA = "0x41BB4C0")]
	private bool MaybeMutableValueType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x41BB520", Offset = "0x41BB520", VA = "0x41BB520")]
	private void CompileGetBoxedVariable(ParameterExpression variable)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x41BB5B0", Offset = "0x41BB5B0", VA = "0x41BB5B0")]
	private void CompileSetVariable(ParameterExpression variable, bool isVoid)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x41BB760", Offset = "0x41BB760", VA = "0x41BB760")]
	private void CompileParameterExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x41BB800", Offset = "0x41BB800", VA = "0x41BB800")]
	private void CompileBlockExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x41BB970", Offset = "0x41BB970", VA = "0x41BB970")]
	private LocalDefinition[] CompileBlockStart(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x41BBF60", Offset = "0x41BBF60", VA = "0x41BBF60")]
	private void CompileBlockEnd(LocalDefinition[] locals)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x41BC200", Offset = "0x41BC200", VA = "0x41BC200")]
	private void CompileIndexExpression(Expression expr)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x41BC310", Offset = "0x41BC310", VA = "0x41BC310")]
	private void EmitIndexGet(IndexExpression index)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x41BC4A0", Offset = "0x41BC4A0", VA = "0x41BC4A0")]
	private void CompileIndexAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x41BC930", Offset = "0x41BC930", VA = "0x41BC930")]
	private void CompileMemberAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x41BC9E0", Offset = "0x41BC9E0", VA = "0x41BC9E0")]
	private void CompileMemberAssignment(bool asVoid, MemberInfo refMember, Expression value, bool forBinding)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x41BCEE0", Offset = "0x41BCEE0", VA = "0x41BCEE0")]
	private void CompileVariableAssignment(BinaryExpression node, bool asVoid)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x41BCFB0", Offset = "0x41BCFB0", VA = "0x41BCFB0")]
	private void CompileAssignBinaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x41BD0D0", Offset = "0x41BD0D0", VA = "0x41BD0D0")]
	private void CompileBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x41BE5C0", Offset = "0x41BE5C0", VA = "0x41BE5C0")]
	private void CompileEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x41BE690", Offset = "0x41BE690", VA = "0x41BE690")]
	private void CompileNotEqual(Expression left, Expression right, bool liftedToNull)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x41BE760", Offset = "0x41BE760", VA = "0x41BE760")]
	private void CompileComparison(BinaryExpression node)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x41BE320", Offset = "0x41BE320", VA = "0x41BE320")]
	private void CompileArithmetic(ExpressionType nodeType, Expression left, Expression right)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x41BE960", Offset = "0x41BE960", VA = "0x41BE960")]
	private void CompileConvertUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x41BFD80", Offset = "0x41BFD80", VA = "0x41BFD80")]
	private void CompileConvertToType(Type typeFrom, Type typeTo, bool isChecked, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x41C0450", Offset = "0x41C0450", VA = "0x41C0450")]
	private void CompileNotExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x41C04E0", Offset = "0x41C04E0", VA = "0x41C04E0")]
	private void CompileUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x41C0940", Offset = "0x41C0940", VA = "0x41C0940")]
	private void EmitUnaryMethodCall(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x41C0C00", Offset = "0x41C0C00", VA = "0x41C0C00")]
	private void EmitUnaryBoolCheck(UnaryExpression node)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x41C0E20", Offset = "0x41C0E20", VA = "0x41C0E20")]
	private void CompileAndAlsoBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x41C1020", Offset = "0x41C1020", VA = "0x41C1020")]
	private void CompileOrElseBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x41C0EA0", Offset = "0x41C0EA0", VA = "0x41C0EA0")]
	private void CompileLogicalBinaryExpression(BinaryExpression b, bool andAlso)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x41C10A0", Offset = "0x41C10A0", VA = "0x41C10A0")]
	private void CompileMethodLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x41C1360", Offset = "0x41C1360", VA = "0x41C1360")]
	private void CompileLiftedLogicalBinaryExpression(BinaryExpression node, bool andAlso)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x41C1C40", Offset = "0x41C1C40", VA = "0x41C1C40")]
	private void CompileUnliftedLogicalBinaryExpression(BinaryExpression expr, bool andAlso)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x41C1DA0", Offset = "0x41C1DA0", VA = "0x41C1DA0")]
	private void CompileConditionalExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x41C20C0", Offset = "0x41C20C0", VA = "0x41C20C0")]
	private void CompileLoopExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x41C2500", Offset = "0x41C2500", VA = "0x41C2500")]
	private void CompileSwitchExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A6")]
	private void CompileIntSwitchExpression<T>(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x41C3070", Offset = "0x41C3070", VA = "0x41C3070")]
	private void CompileStringSwitchExpression(SwitchExpression node)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x41C3960", Offset = "0x41C3960", VA = "0x41C3960")]
	private void CompileLabelExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x41C3CA0", Offset = "0x41C3CA0", VA = "0x41C3CA0")]
	private void CompileGotoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x41C23E0", Offset = "0x41C23E0", VA = "0x41C23E0")]
	private void PushLabelBlock(LabelScopeKind type)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x41C24E0", Offset = "0x41C24E0", VA = "0x41C24E0")]
	private void PopLabelBlock(LabelScopeKind kind)
	{
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x41C3EF0", Offset = "0x41C3EF0", VA = "0x41C3EF0")]
	private LabelInfo EnsureLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x41C3EC0", Offset = "0x41C3EC0", VA = "0x41C3EC0")]
	private LabelInfo ReferenceLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x41C2460", Offset = "0x41C2460", VA = "0x41C2460")]
	private LabelInfo DefineLabel(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x41C3FC0", Offset = "0x41C3FC0", VA = "0x41C3FC0")]
	private bool TryPushLabelBlock(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x41C4710", Offset = "0x41C4710", VA = "0x41C4710")]
	private void DefineBlockLabels(Expression node)
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x41C48A0", Offset = "0x41C48A0", VA = "0x41C48A0")]
	private void CheckRethrow()
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x41C48F0", Offset = "0x41C48F0", VA = "0x41C48F0")]
	private void CompileThrowUnaryExpression(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x41C4B60", Offset = "0x41C4B60", VA = "0x41C4B60")]
	private void CompileTryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x41C5EF0", Offset = "0x41C5EF0", VA = "0x41C5EF0")]
	private void CompileTryFaultExpression(TryExpression expr)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x41C6380", Offset = "0x41C6380", VA = "0x41C6380")]
	private void CompileMethodCallExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x41C6410", Offset = "0x41C6410", VA = "0x41C6410")]
	private void CompileMethodCallExpression(Expression @object, MethodInfo method, IArgumentProvider arguments)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x41C6AB0", Offset = "0x41C6AB0", VA = "0x41C6AB0")]
	private ByRefUpdater CompileArrayIndexAddress(Expression array, Expression index, int argumentIndex)
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x41BC300", Offset = "0x41BC300", VA = "0x41BC300")]
	private void EmitThisForMethodCall(Expression node)
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x41C6DD0", Offset = "0x41C6DD0", VA = "0x41C6DD0")]
	private static bool ShouldWritebackNode(Expression node)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x41BF120", Offset = "0x41BF120", VA = "0x41BF120")]
	private ByRefUpdater CompileAddress(Expression node, int index)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x41C6F60", Offset = "0x41C6F60", VA = "0x41C6F60")]
	private ByRefUpdater CompileMultiDimArrayAccess(Expression array, IArgumentProvider arguments, int index)
	{
		return null;
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x41C7580", Offset = "0x41C7580", VA = "0x41C7580")]
	private void CompileNewExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x41C7A40", Offset = "0x41C7A40", VA = "0x41C7A40")]
	private void CompileMemberExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x41C7AD0", Offset = "0x41C7AD0", VA = "0x41C7AD0")]
	private void CompileMember(Expression from, MemberInfo member, bool forBinding)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x41C7EF0", Offset = "0x41C7EF0", VA = "0x41C7EF0")]
	private void CompileNewArrayExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x41C83C0", Offset = "0x41C83C0", VA = "0x41C83C0")]
	private void CompileDebugInfoExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x41C8590", Offset = "0x41C8590", VA = "0x41C8590")]
	private void CompileRuntimeVariablesExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x41C8920", Offset = "0x41C8920", VA = "0x41C8920")]
	private void CompileLambdaExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x41C8BA0", Offset = "0x41C8BA0", VA = "0x41C8BA0")]
	private void CompileCoalesceBinaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x41C92E0", Offset = "0x41C92E0", VA = "0x41C92E0")]
	private void CompileInvocationExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x41C95E0", Offset = "0x41C95E0", VA = "0x41C95E0")]
	private void CompileListInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x41C9650", Offset = "0x41C9650", VA = "0x41C9650")]
	private void CompileListInit(ReadOnlyCollection<ElementInit> initializers)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x41C9BF0", Offset = "0x41C9BF0", VA = "0x41C9BF0")]
	private void CompileMemberInitExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x41C9C60", Offset = "0x41C9C60", VA = "0x41C9C60")]
	private void CompileMemberInit(ReadOnlyCollection<MemberBinding> bindings)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x41CA420", Offset = "0x41CA420", VA = "0x41CA420")]
	private static Type GetMemberType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x41CA570", Offset = "0x41CA570", VA = "0x41CA570")]
	private void CompileQuoteUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x41CA930", Offset = "0x41CA930", VA = "0x41CA930")]
	private void CompileUnboxUnaryExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x41CAA90", Offset = "0x41CAA90", VA = "0x41CAA90")]
	private void CompileTypeEqualExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x41C0B30", Offset = "0x41C0B30", VA = "0x41C0B30")]
	private void CompileTypeAsExpression(UnaryExpression node)
	{
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x41CACB0", Offset = "0x41CACB0", VA = "0x41CACB0")]
	private void CompileTypeIsExpression(Expression expr)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x41BBEF0", Offset = "0x41BBEF0", VA = "0x41BBEF0")]
	private void Compile(Expression expr, bool asVoid)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x41BC040", Offset = "0x41BC040", VA = "0x41BC040")]
	private void CompileAsVoid(Expression expr)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x41CAFD0", Offset = "0x41CAFD0", VA = "0x41CAFD0")]
	private void CompileNoLabelPush(Expression expr)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x41BAAD0", Offset = "0x41BAAD0", VA = "0x41BAAD0")]
	private void Compile(Expression expr)
	{
	}
}
