// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleVariableResolver
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000937")]
	private StyleValueHandle[] currentHandles
	{
		[Token(Token = "0x6002323")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000938")]
	public List<StylePropertyValue> resolvedValues
	{
		[Token(Token = "0x6002324")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000939")]
	public StyleVariableContext variableContext
	{
		[Token(Token = "0x6002325")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002326")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002327")]
	[Address(RVA = "0x312DC70", Offset = "0x312C270", VA = "0x18312DC70")]
	public void Init(StyleProperty property, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6002328")]
	[Address(RVA = "0x312DE40", Offset = "0x312C440", VA = "0x18312DE40")]
	private void PushContext(StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6002329")]
	[Address(RVA = "0x312DDB0", Offset = "0x312C3B0", VA = "0x18312DDB0")]
	private void PopContext()
	{
	}

	[Token(Token = "0x600232A")]
	[Address(RVA = "0x312DB70", Offset = "0x312C170", VA = "0x18312DB70")]
	public void AddValue(StyleValueHandle handle)
	{
	}

	[Token(Token = "0x600232B")]
	[Address(RVA = "0x312E2F0", Offset = "0x312C8F0", VA = "0x18312E2F0")]
	public bool ResolveVarFunction(ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600232C")]
	[Address(RVA = "0x312E1B0", Offset = "0x312C7B0", VA = "0x18312E1B0")]
	private Result ResolveVarFunction(ref int index, int argc, string varName)
	{
		return default(Result);
	}

	[Token(Token = "0x600232D")]
	[Address(RVA = "0x312E8D0", Offset = "0x312CED0", VA = "0x18312E8D0")]
	public bool ValidateResolvedValues()
	{
		return default(bool);
	}

	[Token(Token = "0x600232E")]
	[Address(RVA = "0x312E520", Offset = "0x312CB20", VA = "0x18312E520")]
	private Result ResolveVariable(string variableName)
	{
		return default(Result);
	}

	[Token(Token = "0x600232F")]
	[Address(RVA = "0x312DEF0", Offset = "0x312C4F0", VA = "0x18312DEF0")]
	private Result ResolveFallback(ref int index, bool appendValues)
	{
		return default(Result);
	}

	[Token(Token = "0x6002330")]
	[Address(RVA = "0x312DD20", Offset = "0x312C320", VA = "0x18312DD20")]
	private static void ParseVarFunction(StyleSheet sheet, StyleValueHandle[] handles, ref int index, out int argCount, out string variableName)
	{
	}

	[Token(Token = "0x6002331")]
	[Address(RVA = "0x312EAF0", Offset = "0x312D0F0", VA = "0x18312EAF0")]
	public StyleVariableResolver()
	{
	}
}
