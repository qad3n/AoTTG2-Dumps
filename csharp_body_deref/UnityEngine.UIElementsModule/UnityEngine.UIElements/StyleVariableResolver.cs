// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariableResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;
using UnityEngine.UIElements.StyleSheets.Syntax;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000490")]
internal class StyleVariableResolver
{
	[Token(Token = "0x2000491")]
	private enum Result
	{
		[Token(Token = "0x4000F3D")]
		Valid,
		[Token(Token = "0x4000F3E")]
		Invalid,
		[Token(Token = "0x4000F3F")]
		NotFound
	}

	[Token(Token = "0x2000492")]
	private struct ResolveContext
	{
		[Token(Token = "0x4000F40")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet sheet;

		[Token(Token = "0x4000F41")]
		[FieldOffset(Offset = "0x8")]
		public StyleValueHandle[] handles;
	}

	[Token(Token = "0x4000F33")]
	internal const int kMaxResolves = 100;

	[Token(Token = "0x4000F34")]
	[FieldOffset(Offset = "0x0")]
	private static StyleSyntaxParser s_SyntaxParser;

	[Token(Token = "0x4000F35")]
	[FieldOffset(Offset = "0x10")]
	private StylePropertyValueMatcher m_Matcher;

	[Token(Token = "0x4000F36")]
	[FieldOffset(Offset = "0x18")]
	private List<StylePropertyValue> m_ResolvedValues;

	[Token(Token = "0x4000F37")]
	[FieldOffset(Offset = "0x20")]
	private Stack<string> m_ResolvedVarStack;

	[Token(Token = "0x4000F38")]
	[FieldOffset(Offset = "0x28")]
	private StyleProperty m_Property;

	[Token(Token = "0x4000F39")]
	[FieldOffset(Offset = "0x30")]
	private Stack<ResolveContext> m_ContextStack;

	[Token(Token = "0x4000F3A")]
	[FieldOffset(Offset = "0x38")]
	private ResolveContext m_CurrentContext;

	[Token(Token = "0x17000936")]
	private StyleSheet currentSheet
	{
		[Token(Token = "0x6002322")]
		[Address(RVA = "0x6B27AD0", Offset = "0x6B26AD0", VA = "0x6B27AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000937")]
	private StyleValueHandle[] currentHandles
	{
		[Token(Token = "0x6002323")]
		[Address(RVA = "0x6B27AE0", Offset = "0x6B26AE0", VA = "0x6B27AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000938")]
	public List<StylePropertyValue> resolvedValues
	{
		[Token(Token = "0x6002324")]
		[Address(RVA = "0x6B27AF0", Offset = "0x6B26AF0", VA = "0x6B27AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000939")]
	public StyleVariableContext variableContext
	{
		[Token(Token = "0x6002325")]
		[Address(RVA = "0x6B27B00", Offset = "0x6B26B00", VA = "0x6B27B00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002326")]
		[Address(RVA = "0x6B27B10", Offset = "0x6B26B10", VA = "0x6B27B10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002327")]
	[Address(RVA = "0x6B27B20", Offset = "0x6B26B20", VA = "0x6B27B20")]
	public void Init(StyleProperty property, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6002328")]
	[Address(RVA = "0x6B27BD0", Offset = "0x6B26BD0", VA = "0x6B27BD0")]
	private void PushContext(StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6002329")]
	[Address(RVA = "0x6B27C80", Offset = "0x6B26C80", VA = "0x6B27C80")]
	private void PopContext()
	{
	}

	[Token(Token = "0x600232A")]
	[Address(RVA = "0x6B27D00", Offset = "0x6B26D00", VA = "0x6B27D00")]
	public void AddValue(StyleValueHandle handle)
	{
	}

	[Token(Token = "0x600232B")]
	[Address(RVA = "0x6B27DD0", Offset = "0x6B26DD0", VA = "0x6B27DD0")]
	public bool ResolveVarFunction(ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600232C")]
	[Address(RVA = "0x6B27F30", Offset = "0x6B26F30", VA = "0x6B27F30")]
	private Result ResolveVarFunction(ref int index, int argc, string varName)
	{
		return default(Result);
	}

	[Token(Token = "0x600232D")]
	[Address(RVA = "0x6B285E0", Offset = "0x6B275E0", VA = "0x6B285E0")]
	public bool ValidateResolvedValues()
	{
		return default(bool);
	}

	[Token(Token = "0x600232E")]
	[Address(RVA = "0x6B28060", Offset = "0x6B27060", VA = "0x6B28060")]
	private Result ResolveVariable(string variableName)
	{
		return default(Result);
	}

	[Token(Token = "0x600232F")]
	[Address(RVA = "0x6B28350", Offset = "0x6B27350", VA = "0x6B28350")]
	private Result ResolveFallback(ref int index, bool appendValues)
	{
		return default(Result);
	}

	[Token(Token = "0x6002330")]
	[Address(RVA = "0x6B27EA0", Offset = "0x6B26EA0", VA = "0x6B27EA0")]
	private static void ParseVarFunction(StyleSheet sheet, StyleValueHandle[] handles, ref int index, out int argCount, out string variableName)
	{
	}

	[Token(Token = "0x6002331")]
	[Address(RVA = "0x6B28760", Offset = "0x6B27760", VA = "0x6B28760")]
	public StyleVariableResolver()
	{
	}
}
