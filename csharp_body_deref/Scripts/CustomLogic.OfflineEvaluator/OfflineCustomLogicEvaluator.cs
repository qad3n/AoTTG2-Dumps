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

[Token(Token = "0x200065A")]
public class OfflineCustomLogicEvaluator
{
	[Token(Token = "0x4001C20")]
	[FieldOffset(Offset = "0x10")]
	private CustomLogicEvaluator _evaluator;

	[Token(Token = "0x4001C21")]
	[FieldOffset(Offset = "0x18")]
	private CustomLogicCompiler _compiler;

	[Token(Token = "0x4001C22")]
	[FieldOffset(Offset = "0x20")]
	private CustomLogicClassInstance _mainInstance;

	[Token(Token = "0x4001C23")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> OfflineCompatibleBuiltins;

	[Token(Token = "0x6003CFF")]
	[Address(RVA = "0x5A8FC60", Offset = "0x5A8EC60", VA = "0x5A8FC60")]
	public OfflineCustomLogicEvaluator(string script)
	{
	}

	[Token(Token = "0x6003D00")]
	[Address(RVA = "0x5A90120", Offset = "0x5A8F120", VA = "0x5A90120")]
	public OfflineCustomLogicEvaluator(CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003D01")]
	[Address(RVA = "0x5A8FD40", Offset = "0x5A8ED40", VA = "0x5A8FD40")]
	private void InitializeSymbols()
	{
	}

	[Token(Token = "0x6003D02")]
	[Address(RVA = "0x5A8FDF0", Offset = "0x5A8EDF0", VA = "0x5A8FDF0")]
	private void CompileAndInitialize()
	{
	}

	[Token(Token = "0x6003D03")]
	[Address(RVA = "0x5A90160", Offset = "0x5A8F160", VA = "0x5A90160")]
	private void InitializeStaticClasses()
	{
	}

	[Token(Token = "0x6003D04")]
	[Address(RVA = "0x5A91030", Offset = "0x5A90030", VA = "0x5A91030")]
	private void CallInitOnStaticClasses()
	{
	}

	[Token(Token = "0x6003D05")]
	[Address(RVA = "0x5A91320", Offset = "0x5A90320", VA = "0x5A91320")]
	private void CreateStaticClassInternal(string className, Dictionary<string, CustomLogicClassInstance> staticClasses)
	{
	}

	[Token(Token = "0x6003D06")]
	[Address(RVA = "0x5A91490", Offset = "0x5A90490", VA = "0x5A91490")]
	private void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x6003D07")]
	[Address(RVA = "0x5A912E0", Offset = "0x5A902E0", VA = "0x5A912E0")]
	private CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6003D08")]
	[Address(RVA = "0x5A91300", Offset = "0x5A90300", VA = "0x5A91300")]
	private Dictionary<string, CustomLogicClassInstance> GetStaticClassesDictionary()
	{
		return null;
	}

	[Token(Token = "0x6003D09")]
	[Address(RVA = "0x5A91250", Offset = "0x5A90250", VA = "0x5A91250")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x6003D0A")]
	[Address(RVA = "0x5A914B0", Offset = "0x5A904B0", VA = "0x5A914B0")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x6003D0B")]
	[Address(RVA = "0x5A911E0", Offset = "0x5A901E0", VA = "0x5A911E0")]
	public bool HasMainClass()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D0C")]
	[Address(RVA = "0x5A914D0", Offset = "0x5A904D0", VA = "0x5A914D0")]
	public CustomLogicClassInstance GetMainInstance()
	{
		return null;
	}

	[Token(Token = "0x6003D0D")]
	[Address(RVA = "0x5A914E0", Offset = "0x5A904E0", VA = "0x5A914E0")]
	public object EvaluateMethod(CustomLogicClassInstance instance, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6003D0E")]
	[Address(RVA = "0x5A91500", Offset = "0x5A90500", VA = "0x5A91500")]
	public object EvaluateMethod(string className, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6003D0F")]
	[Address(RVA = "0x5A915B0", Offset = "0x5A905B0", VA = "0x5A915B0")]
	public CustomLogicClassInstance CreateClassInstance(string className, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x6003D10")]
	[Address(RVA = "0x5A91630", Offset = "0x5A90630", VA = "0x5A91630")]
	public object EvaluateMainMethod(string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6003D11")]
	[Address(RVA = "0x5A916B0", Offset = "0x5A906B0", VA = "0x5A916B0")]
	public object GetMainVariable(string variableName)
	{
		return null;
	}

	[Token(Token = "0x6003D12")]
	[Address(RVA = "0x5A91710", Offset = "0x5A90710", VA = "0x5A91710")]
	public void SetMainVariable(string variableName, object value)
	{
	}

	[Token(Token = "0x6003D13")]
	[Address(RVA = "0x5A917C0", Offset = "0x5A907C0", VA = "0x5A917C0")]
	public CustomLogicCompiler GetCompiler()
	{
		return null;
	}

	[Token(Token = "0x6003D14")]
	[Address(RVA = "0x5A917D0", Offset = "0x5A907D0", VA = "0x5A917D0")]
	public List<CustomLogicError> GetCapturedErrors()
	{
		return null;
	}

	[Token(Token = "0x6003D15")]
	[Address(RVA = "0x5A917F0", Offset = "0x5A907F0", VA = "0x5A917F0")]
	public bool HasErrors()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D16")]
	[Address(RVA = "0x5A91840", Offset = "0x5A90840", VA = "0x5A91840")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6003D17")]
	[Address(RVA = "0x5A91860", Offset = "0x5A90860", VA = "0x5A91860")]
	public CustomLogicError GetLastError()
	{
		return null;
	}
}
