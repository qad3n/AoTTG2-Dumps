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

[Token(Token = "0x2000167")]
internal sealed class LabelInfo
{
	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x10")]
	private readonly LabelTarget _node;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x18")]
	private BranchLabel _label;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x20")]
	private object _definitions;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<LabelScopeInfo> _references;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x30")]
	private bool _acrossBlockJump;

	[Token(Token = "0x170001C3")]
	private bool HasDefinitions
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x44DB430", Offset = "0x44DB430", VA = "0x44DB430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C4")]
	private bool HasMultipleDefinitions
	{
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x44DBC80", Offset = "0x44DBC80", VA = "0x44DBC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x44DB270", Offset = "0x44DB270", VA = "0x44DB270")]
	internal LabelInfo(LabelTarget node)
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x44DB300", Offset = "0x44DB300", VA = "0x44DB300")]
	internal BranchLabel GetLabel(LightCompiler compiler)
	{
		return null;
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x44DB380", Offset = "0x44DB380", VA = "0x44DB380")]
	internal void Reference(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x44DB780", Offset = "0x44DB780", VA = "0x44DB780")]
	internal void Define(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x44DB440", Offset = "0x44DB440", VA = "0x44DB440")]
	private void ValidateJump(LabelScopeInfo reference)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x44DBF90", Offset = "0x44DBF90", VA = "0x44DBF90")]
	internal void ValidateFinish()
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x44DB340", Offset = "0x44DB340", VA = "0x44DB340")]
	private void EnsureLabel(LightCompiler compiler)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x44DBCE0", Offset = "0x44DBCE0", VA = "0x44DBCE0")]
	private bool DefinedIn(LabelScopeInfo scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x44DBD90", Offset = "0x44DBD90", VA = "0x44DBD90")]
	private LabelScopeInfo FirstDefinition()
	{
		return null;
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x44DBAA0", Offset = "0x44DBAA0", VA = "0x44DBAA0")]
	private void AddDefinition(LabelScopeInfo scope)
	{
	}

	[Token(Token = "0x600080E")]
	internal static T CommonNode<T>(T first, T second, Func<T, T> parent) where T : class
	{
		return null;
	}
}
