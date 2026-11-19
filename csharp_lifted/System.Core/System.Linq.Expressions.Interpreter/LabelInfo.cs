// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LabelInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000168")]
internal sealed class LabelInfo
{
	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x10")]
	private readonly LabelTarget _node;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x18")]
	private BranchLabel _label;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x20")]
	private object _definitions;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<LabelScopeInfo> _references;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x30")]
	private bool _acrossBlockJump;

	[Token(Token = "0x170001C5")]
	private bool HasDefinitions
	{
		[Token(Token = "0x6000814")]
		[Address(RVA = "0x5DF0F00", Offset = "0x5DEFF00", VA = "0x5DF0F00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C6")]
	private bool HasMultipleDefinitions
	{
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x5DF1730", Offset = "0x5DF0730", VA = "0x5DF1730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x5DF0D40", Offset = "0x5DEFD40", VA = "0x5DF0D40")]
	internal LabelInfo(LabelTarget node)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x5DF0DD0", Offset = "0x5DEFDD0", VA = "0x5DF0DD0")]
	internal BranchLabel GetLabel(LightCompiler compiler)
	{
		return null;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x5DF0E50", Offset = "0x5DEFE50", VA = "0x5DF0E50")]
	internal void Reference(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x5DF1240", Offset = "0x5DF0240", VA = "0x5DF1240")]
	internal void Define(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x5DF0F10", Offset = "0x5DEFF10", VA = "0x5DF0F10")]
	private void ValidateJump(LabelScopeInfo reference)
	{
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x5DF1A10", Offset = "0x5DF0A10", VA = "0x5DF1A10")]
	internal void ValidateFinish()
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x5DF0E10", Offset = "0x5DEFE10", VA = "0x5DF0E10")]
	private void EnsureLabel(LightCompiler compiler)
	{
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x5DF1790", Offset = "0x5DF0790", VA = "0x5DF1790")]
	private bool DefinedIn(LabelScopeInfo scope)
	{
		return default(bool);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x5DF1830", Offset = "0x5DF0830", VA = "0x5DF1830")]
	private LabelScopeInfo FirstDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x5DF1550", Offset = "0x5DF0550", VA = "0x5DF1550")]
	private void AddDefinition(LabelScopeInfo scope)
	{
	}

	[Token(Token = "0x6000818")]
	internal static T CommonNode<T>(T first, T second, Func<T, T> parent) where T : class
	{
		return null;
	}
}
