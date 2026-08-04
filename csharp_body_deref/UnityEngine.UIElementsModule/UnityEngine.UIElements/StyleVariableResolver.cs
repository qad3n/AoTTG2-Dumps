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
		[Address(RVA = "0x4F4E860", Offset = "0x4F4E860", VA = "0x4F4E860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068D")]
	private StyleValueHandle[] currentHandles
	{
		[Token(Token = "0x600188B")]
		[Address(RVA = "0x4F4E870", Offset = "0x4F4E870", VA = "0x4F4E870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068E")]
	public List<StylePropertyValue> resolvedValues
	{
		[Token(Token = "0x600188C")]
		[Address(RVA = "0x4F4E880", Offset = "0x4F4E880", VA = "0x4F4E880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068F")]
	public StyleVariableContext variableContext
	{
		[Token(Token = "0x600188D")]
		[Address(RVA = "0x4F4E890", Offset = "0x4F4E890", VA = "0x4F4E890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600188E")]
		[Address(RVA = "0x4F4E8A0", Offset = "0x4F4E8A0", VA = "0x4F4E8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x4F4E8B0", Offset = "0x4F4E8B0", VA = "0x4F4E8B0")]
	public void Init(StyleProperty property, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x4F4E960", Offset = "0x4F4E960", VA = "0x4F4E960")]
	private void PushContext(StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x4F4EA10", Offset = "0x4F4EA10", VA = "0x4F4EA10")]
	private void PopContext()
	{
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x4F4EA90", Offset = "0x4F4EA90", VA = "0x4F4EA90")]
	public void AddValue(StyleValueHandle handle)
	{
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x4F4EB60", Offset = "0x4F4EB60", VA = "0x4F4EB60")]
	public bool ResolveVarFunction(ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x4F4ECC0", Offset = "0x4F4ECC0", VA = "0x4F4ECC0")]
	private Result ResolveVarFunction(ref int index, int argc, string varName)
	{
		return default(Result);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x4F4F3D0", Offset = "0x4F4F3D0", VA = "0x4F4F3D0")]
	public bool ValidateResolvedValues()
	{
		return default(bool);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x4F4EDF0", Offset = "0x4F4EDF0", VA = "0x4F4EDF0")]
	private Result ResolveVariable(string variableName)
	{
		return default(Result);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x4F4F100", Offset = "0x4F4F100", VA = "0x4F4F100")]
	private Result ResolveFallback(ref int index)
	{
		return default(Result);
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x4F4EC30", Offset = "0x4F4EC30", VA = "0x4F4EC30")]
	private static void ParseVarFunction(StyleSheet sheet, StyleValueHandle[] handles, ref int index, out int argCount, out string variableName)
	{
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x4F4F540", Offset = "0x4F4F540", VA = "0x4F4F540")]
	public StyleVariableResolver()
	{
	}
}
