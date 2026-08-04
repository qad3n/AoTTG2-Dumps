// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic.OfflineEvaluator;

[Token(Token = "0x20004A2")]
public class OfflineCustomLogicEvaluator
{
	[Token(Token = "0x4001434")]
	[FieldOffset(Offset = "0x10")]
	private CustomLogicEvaluator _evaluator;

	[Token(Token = "0x4001435")]
	[FieldOffset(Offset = "0x18")]
	private CustomLogicCompiler _compiler;

	[Token(Token = "0x4001436")]
	[FieldOffset(Offset = "0x20")]
	private CustomLogicClassInstance _mainInstance;

	[Token(Token = "0x4001437")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> OfflineCompatibleBuiltins;

	[Token(Token = "0x60030E9")]
	[Address(RVA = "0x417AC50", Offset = "0x417AC50", VA = "0x417AC50")]
	public OfflineCustomLogicEvaluator(string script)
	{
	}

	[Token(Token = "0x60030EA")]
	[Address(RVA = "0x417B110", Offset = "0x417B110", VA = "0x417B110")]
	public OfflineCustomLogicEvaluator(CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x60030EB")]
	[Address(RVA = "0x417AD30", Offset = "0x417AD30", VA = "0x417AD30")]
	private void InitializeSymbols()
	{
	}

	[Token(Token = "0x60030EC")]
	[Address(RVA = "0x417ADE0", Offset = "0x417ADE0", VA = "0x417ADE0")]
	private void CompileAndInitialize()
	{
	}

	[Token(Token = "0x60030ED")]
	[Address(RVA = "0x417B150", Offset = "0x417B150", VA = "0x417B150")]
	private void InitializeStaticClasses()
	{
	}

	[Token(Token = "0x60030EE")]
	[Address(RVA = "0x417C390", Offset = "0x417C390", VA = "0x417C390")]
	private void CallInitOnStaticClasses()
	{
	}

	[Token(Token = "0x60030EF")]
	[Address(RVA = "0x417C6A0", Offset = "0x417C6A0", VA = "0x417C6A0")]
	private void CreateStaticClassInternal(string className, Dictionary<string, CustomLogicClassInstance> staticClasses)
	{
	}

	[Token(Token = "0x60030F0")]
	[Address(RVA = "0x417C820", Offset = "0x417C820", VA = "0x417C820")]
	private void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x60030F1")]
	[Address(RVA = "0x417C660", Offset = "0x417C660", VA = "0x417C660")]
	private CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x60030F2")]
	[Address(RVA = "0x417C680", Offset = "0x417C680", VA = "0x417C680")]
	private Dictionary<string, CustomLogicClassInstance> GetStaticClassesDictionary()
	{
		return null;
	}

	[Token(Token = "0x60030F3")]
	[Address(RVA = "0x417C5D0", Offset = "0x417C5D0", VA = "0x417C5D0")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x60030F4")]
	[Address(RVA = "0x417C840", Offset = "0x417C840", VA = "0x417C840")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x60030F5")]
	[Address(RVA = "0x417C560", Offset = "0x417C560", VA = "0x417C560")]
	public bool HasMainClass()
	{
		return default(bool);
	}

	[Token(Token = "0x60030F6")]
	[Address(RVA = "0x417C860", Offset = "0x417C860", VA = "0x417C860")]
	public CustomLogicClassInstance GetMainInstance()
	{
		return null;
	}

	[Token(Token = "0x60030F7")]
	[Address(RVA = "0x417C870", Offset = "0x417C870", VA = "0x417C870")]
	public object EvaluateMethod(CustomLogicClassInstance instance, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60030F8")]
	[Address(RVA = "0x417C890", Offset = "0x417C890", VA = "0x417C890")]
	public object EvaluateMethod(string className, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60030F9")]
	[Address(RVA = "0x417C940", Offset = "0x417C940", VA = "0x417C940")]
	public CustomLogicClassInstance CreateClassInstance(string className, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x60030FA")]
	[Address(RVA = "0x417C9C0", Offset = "0x417C9C0", VA = "0x417C9C0")]
	public object EvaluateMainMethod(string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60030FB")]
	[Address(RVA = "0x417CA30", Offset = "0x417CA30", VA = "0x417CA30")]
	public object GetMainVariable(string variableName)
	{
		return null;
	}

	[Token(Token = "0x60030FC")]
	[Address(RVA = "0x417CA90", Offset = "0x417CA90", VA = "0x417CA90")]
	public void SetMainVariable(string variableName, object value)
	{
	}

	[Token(Token = "0x60030FD")]
	[Address(RVA = "0x417CB40", Offset = "0x417CB40", VA = "0x417CB40")]
	public CustomLogicCompiler GetCompiler()
	{
		return null;
	}

	[Token(Token = "0x60030FE")]
	[Address(RVA = "0x417CB50", Offset = "0x417CB50", VA = "0x417CB50")]
	public List<CustomLogicError> GetCapturedErrors()
	{
		return null;
	}

	[Token(Token = "0x60030FF")]
	[Address(RVA = "0x417CB70", Offset = "0x417CB70", VA = "0x417CB70")]
	public bool HasErrors()
	{
		return default(bool);
	}

	[Token(Token = "0x6003100")]
	[Address(RVA = "0x417CBC0", Offset = "0x417CBC0", VA = "0x417CBC0")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6003101")]
	[Address(RVA = "0x417CC20", Offset = "0x417CC20", VA = "0x417CC20")]
	public CustomLogicError GetLastError()
	{
		return null;
	}
}
