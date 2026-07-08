using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic.OfflineEvaluator;

[Token(Token = "0x200045D")]
public class OfflineCustomLogicEvaluator
{
	[Token(Token = "0x4001325")]
	[FieldOffset(Offset = "0x10")]
	private CustomLogicEvaluator _evaluator;

	[Token(Token = "0x4001326")]
	[FieldOffset(Offset = "0x18")]
	private CustomLogicCompiler _compiler;

	[Token(Token = "0x4001327")]
	[FieldOffset(Offset = "0x20")]
	private CustomLogicClassInstance _mainInstance;

	[Token(Token = "0x4001328")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> OfflineCompatibleBuiltins;

	[Token(Token = "0x6002EDC")]
	[Address(RVA = "0x3E6E740", Offset = "0x3E6E740", VA = "0x3E6E740")]
	public OfflineCustomLogicEvaluator(string script)
	{
	}

	[Token(Token = "0x6002EDD")]
	[Address(RVA = "0x3E6EC20", Offset = "0x3E6EC20", VA = "0x3E6EC20")]
	public OfflineCustomLogicEvaluator(CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6002EDE")]
	[Address(RVA = "0x3E6E850", Offset = "0x3E6E850", VA = "0x3E6E850")]
	private void InitializeSymbols()
	{
	}

	[Token(Token = "0x6002EDF")]
	[Address(RVA = "0x3E6E900", Offset = "0x3E6E900", VA = "0x3E6E900")]
	private void CompileAndInitialize()
	{
	}

	[Token(Token = "0x6002EE0")]
	[Address(RVA = "0x3E6EC60", Offset = "0x3E6EC60", VA = "0x3E6EC60")]
	private void InitializeStaticClasses()
	{
	}

	[Token(Token = "0x6002EE1")]
	[Address(RVA = "0x3E6FEA0", Offset = "0x3E6FEA0", VA = "0x3E6FEA0")]
	private void CallInitOnStaticClasses()
	{
	}

	[Token(Token = "0x6002EE2")]
	[Address(RVA = "0x3E701B0", Offset = "0x3E701B0", VA = "0x3E701B0")]
	private void CreateStaticClassInternal(string className, Dictionary<string, CustomLogicClassInstance> staticClasses)
	{
	}

	[Token(Token = "0x6002EE3")]
	[Address(RVA = "0x3E70330", Offset = "0x3E70330", VA = "0x3E70330")]
	private void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x6002EE4")]
	[Address(RVA = "0x3E70170", Offset = "0x3E70170", VA = "0x3E70170")]
	private CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6002EE5")]
	[Address(RVA = "0x3E70190", Offset = "0x3E70190", VA = "0x3E70190")]
	private Dictionary<string, CustomLogicClassInstance> GetStaticClassesDictionary()
	{
		return null;
	}

	[Token(Token = "0x6002EE6")]
	[Address(RVA = "0x3E700E0", Offset = "0x3E700E0", VA = "0x3E700E0")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x6002EE7")]
	[Address(RVA = "0x3E70350", Offset = "0x3E70350", VA = "0x3E70350")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x6002EE8")]
	[Address(RVA = "0x3E70070", Offset = "0x3E70070", VA = "0x3E70070")]
	public bool HasMainClass()
	{
		return default(bool);
	}

	[Token(Token = "0x6002EE9")]
	[Address(RVA = "0x3E70370", Offset = "0x3E70370", VA = "0x3E70370")]
	public CustomLogicClassInstance GetMainInstance()
	{
		return null;
	}

	[Token(Token = "0x6002EEA")]
	[Address(RVA = "0x3E70380", Offset = "0x3E70380", VA = "0x3E70380")]
	public object EvaluateMethod(CustomLogicClassInstance instance, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6002EEB")]
	[Address(RVA = "0x3E703A0", Offset = "0x3E703A0", VA = "0x3E703A0")]
	public object EvaluateMethod(string className, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6002EEC")]
	[Address(RVA = "0x3E70450", Offset = "0x3E70450", VA = "0x3E70450")]
	public CustomLogicClassInstance CreateClassInstance(string className, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x6002EED")]
	[Address(RVA = "0x3E704D0", Offset = "0x3E704D0", VA = "0x3E704D0")]
	public object EvaluateMainMethod(string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6002EEE")]
	[Address(RVA = "0x3E70540", Offset = "0x3E70540", VA = "0x3E70540")]
	public object GetMainVariable(string variableName)
	{
		return null;
	}

	[Token(Token = "0x6002EEF")]
	[Address(RVA = "0x3E705A0", Offset = "0x3E705A0", VA = "0x3E705A0")]
	public void SetMainVariable(string variableName, object value)
	{
	}

	[Token(Token = "0x6002EF0")]
	[Address(RVA = "0x3E70650", Offset = "0x3E70650", VA = "0x3E70650")]
	public CustomLogicCompiler GetCompiler()
	{
		return null;
	}

	[Token(Token = "0x6002EF1")]
	[Address(RVA = "0x3E70660", Offset = "0x3E70660", VA = "0x3E70660")]
	public List<CustomLogicError> GetCapturedErrors()
	{
		return null;
	}

	[Token(Token = "0x6002EF2")]
	[Address(RVA = "0x3E70680", Offset = "0x3E70680", VA = "0x3E70680")]
	public bool HasErrors()
	{
		return default(bool);
	}

	[Token(Token = "0x6002EF3")]
	[Address(RVA = "0x3E706D0", Offset = "0x3E706D0", VA = "0x3E706D0")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6002EF4")]
	[Address(RVA = "0x3E70730", Offset = "0x3E70730", VA = "0x3E70730")]
	public CustomLogicError GetLastError()
	{
		return null;
	}
}
