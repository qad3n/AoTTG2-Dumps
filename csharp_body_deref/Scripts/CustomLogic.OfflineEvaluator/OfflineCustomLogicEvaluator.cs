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

[Token(Token = "0x20005FB")]
public class OfflineCustomLogicEvaluator
{
	[Token(Token = "0x4001A7F")]
	[FieldOffset(Offset = "0x10")]
	private CustomLogicEvaluator _evaluator;

	[Token(Token = "0x4001A80")]
	[FieldOffset(Offset = "0x18")]
	private CustomLogicCompiler _compiler;

	[Token(Token = "0x4001A81")]
	[FieldOffset(Offset = "0x20")]
	private CustomLogicClassInstance _mainInstance;

	[Token(Token = "0x4001A82")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> OfflineCompatibleBuiltins;

	[Token(Token = "0x6003A71")]
	[Address(RVA = "0x20ED090", Offset = "0x20EB690", VA = "0x1820ED090")]
	public OfflineCustomLogicEvaluator(string script)
	{
	}

	[Token(Token = "0x6003A72")]
	[Address(RVA = "0x20ED040", Offset = "0x20EB640", VA = "0x1820ED040")]
	public OfflineCustomLogicEvaluator(CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003A73")]
	[Address(RVA = "0x20ECAB0", Offset = "0x20EB0B0", VA = "0x1820ECAB0")]
	private void InitializeSymbols()
	{
	}

	[Token(Token = "0x6003A74")]
	[Address(RVA = "0x20EB400", Offset = "0x20E9A00", VA = "0x1820EB400")]
	private void CompileAndInitialize()
	{
	}

	[Token(Token = "0x6003A75")]
	[Address(RVA = "0x20EBE20", Offset = "0x20EA420", VA = "0x1820EBE20")]
	private void InitializeStaticClasses()
	{
	}

	[Token(Token = "0x6003A76")]
	[Address(RVA = "0x20EB210", Offset = "0x20E9810", VA = "0x1820EB210")]
	private void CallInitOnStaticClasses()
	{
	}

	[Token(Token = "0x6003A77")]
	[Address(RVA = "0x20EB8C0", Offset = "0x20E9EC0", VA = "0x1820EB8C0")]
	private void CreateStaticClassInternal(string className, Dictionary<string, CustomLogicClassInstance> staticClasses)
	{
	}

	[Token(Token = "0x6003A78")]
	[Address(RVA = "0x20ECD00", Offset = "0x20EB300", VA = "0x1820ECD00")]
	private void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x6003A79")]
	[Address(RVA = "0x1A4D2B0", Offset = "0x1A4B8B0", VA = "0x181A4D2B0")]
	private CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6003A7A")]
	[Address(RVA = "0x1A4D270", Offset = "0x1A4B870", VA = "0x181A4D270")]
	private Dictionary<string, CustomLogicClassInstance> GetStaticClassesDictionary()
	{
		return null;
	}

	[Token(Token = "0x6003A7B")]
	[Address(RVA = "0x20EBCC0", Offset = "0x20EA2C0", VA = "0x1820EBCC0")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x6003A7C")]
	[Address(RVA = "0x20EBA30", Offset = "0x20EA030", VA = "0x1820EBA30")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x6003A7D")]
	[Address(RVA = "0x20EBDA0", Offset = "0x20EA3A0", VA = "0x1820EBDA0")]
	public bool HasMainClass()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A7E")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
	public CustomLogicClassInstance GetMainInstance()
	{
		return null;
	}

	[Token(Token = "0x6003A7F")]
	[Address(RVA = "0x20EBBB0", Offset = "0x20EA1B0", VA = "0x1820EBBB0")]
	public object EvaluateMethod(CustomLogicClassInstance instance, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6003A80")]
	[Address(RVA = "0x20EBAF0", Offset = "0x20EA0F0", VA = "0x1820EBAF0")]
	public object EvaluateMethod(string className, string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6003A81")]
	[Address(RVA = "0x20EB820", Offset = "0x20E9E20", VA = "0x1820EB820")]
	public CustomLogicClassInstance CreateClassInstance(string className, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x6003A82")]
	[Address(RVA = "0x20EBA60", Offset = "0x20EA060", VA = "0x1820EBA60")]
	public object EvaluateMainMethod(string methodName, params object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6003A83")]
	[Address(RVA = "0x20EBC50", Offset = "0x20EA250", VA = "0x1820EBC50")]
	public object GetMainVariable(string variableName)
	{
		return null;
	}

	[Token(Token = "0x6003A84")]
	[Address(RVA = "0x20ECD20", Offset = "0x20EB320", VA = "0x1820ECD20")]
	public void SetMainVariable(string variableName, object value)
	{
	}

	[Token(Token = "0x6003A85")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
	public CustomLogicCompiler GetCompiler()
	{
		return null;
	}

	[Token(Token = "0x6003A86")]
	[Address(RVA = "0x1CCD880", Offset = "0x1CCBE80", VA = "0x181CCD880")]
	public List<CustomLogicError> GetCapturedErrors()
	{
		return null;
	}

	[Token(Token = "0x6003A87")]
	[Address(RVA = "0x20EBD50", Offset = "0x20EA350", VA = "0x1820EBD50")]
	public bool HasErrors()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A88")]
	[Address(RVA = "0x20EB390", Offset = "0x20E9990", VA = "0x1820EB390")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6003A89")]
	[Address(RVA = "0x20EBBE0", Offset = "0x20EA1E0", VA = "0x1820EBBE0")]
	public CustomLogicError GetLastError()
	{
		return null;
	}
}
