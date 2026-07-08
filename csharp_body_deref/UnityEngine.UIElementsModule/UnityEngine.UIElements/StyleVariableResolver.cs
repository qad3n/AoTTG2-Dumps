using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;
using UnityEngine.UIElements.StyleSheets.Syntax;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003E2")]
internal class StyleVariableResolver
{
	[Token(Token = "0x20003E3")]
	private enum Result
	{
		[Token(Token = "0x4000BC0")]
		Valid,
		[Token(Token = "0x4000BC1")]
		Invalid,
		[Token(Token = "0x4000BC2")]
		NotFound
	}

	[Token(Token = "0x20003E4")]
	private struct ResolveContext
	{
		[Token(Token = "0x4000BC3")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet sheet;

		[Token(Token = "0x4000BC4")]
		[FieldOffset(Offset = "0x8")]
		public StyleValueHandle[] handles;
	}

	[Token(Token = "0x4000BB6")]
	internal const int kMaxResolves = 100;

	[Token(Token = "0x4000BB7")]
	[FieldOffset(Offset = "0x0")]
	private static StyleSyntaxParser s_SyntaxParser;

	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x10")]
	private StylePropertyValueMatcher m_Matcher;

	[Token(Token = "0x4000BB9")]
	[FieldOffset(Offset = "0x18")]
	private List<StylePropertyValue> m_ResolvedValues;

	[Token(Token = "0x4000BBA")]
	[FieldOffset(Offset = "0x20")]
	private Stack<string> m_ResolvedVarStack;

	[Token(Token = "0x4000BBB")]
	[FieldOffset(Offset = "0x28")]
	private StyleProperty m_Property;

	[Token(Token = "0x4000BBC")]
	[FieldOffset(Offset = "0x30")]
	private Stack<ResolveContext> m_ContextStack;

	[Token(Token = "0x4000BBD")]
	[FieldOffset(Offset = "0x38")]
	private ResolveContext m_CurrentContext;

	[Token(Token = "0x1700068C")]
	private StyleSheet currentSheet
	{
		[Token(Token = "0x600188A")]
		[Address(RVA = "0x4C26F30", Offset = "0x4C26F30", VA = "0x4C26F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068D")]
	private StyleValueHandle[] currentHandles
	{
		[Token(Token = "0x600188B")]
		[Address(RVA = "0x4C26F40", Offset = "0x4C26F40", VA = "0x4C26F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068E")]
	public List<StylePropertyValue> resolvedValues
	{
		[Token(Token = "0x600188C")]
		[Address(RVA = "0x4C26F50", Offset = "0x4C26F50", VA = "0x4C26F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068F")]
	public StyleVariableContext variableContext
	{
		[Token(Token = "0x600188D")]
		[Address(RVA = "0x4C26F60", Offset = "0x4C26F60", VA = "0x4C26F60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600188E")]
		[Address(RVA = "0x4C26F70", Offset = "0x4C26F70", VA = "0x4C26F70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x4C26F80", Offset = "0x4C26F80", VA = "0x4C26F80")]
	public void Init(StyleProperty property, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x4C27030", Offset = "0x4C27030", VA = "0x4C27030")]
	private void PushContext(StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x4C270E0", Offset = "0x4C270E0", VA = "0x4C270E0")]
	private void PopContext()
	{
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x4C27160", Offset = "0x4C27160", VA = "0x4C27160")]
	public void AddValue(StyleValueHandle handle)
	{
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x4C27230", Offset = "0x4C27230", VA = "0x4C27230")]
	public bool ResolveVarFunction(ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x4C27390", Offset = "0x4C27390", VA = "0x4C27390")]
	private Result ResolveVarFunction(ref int index, int argc, string varName)
	{
		return default(Result);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x4C27AA0", Offset = "0x4C27AA0", VA = "0x4C27AA0")]
	public bool ValidateResolvedValues()
	{
		return default(bool);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x4C274C0", Offset = "0x4C274C0", VA = "0x4C274C0")]
	private Result ResolveVariable(string variableName)
	{
		return default(Result);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x4C277D0", Offset = "0x4C277D0", VA = "0x4C277D0")]
	private Result ResolveFallback(ref int index)
	{
		return default(Result);
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x4C27300", Offset = "0x4C27300", VA = "0x4C27300")]
	private static void ParseVarFunction(StyleSheet sheet, StyleValueHandle[] handles, ref int index, out int argCount, out string variableName)
	{
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x4C27C10", Offset = "0x4C27C10", VA = "0x4C27C10")]
	public StyleVariableResolver()
	{
	}
}
