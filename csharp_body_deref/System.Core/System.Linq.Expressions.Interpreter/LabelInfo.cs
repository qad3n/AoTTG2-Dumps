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
		[Address(RVA = "0x41B6330", Offset = "0x41B6330", VA = "0x41B6330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C4")]
	private bool HasMultipleDefinitions
	{
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x41B6B80", Offset = "0x41B6B80", VA = "0x41B6B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x41B6170", Offset = "0x41B6170", VA = "0x41B6170")]
	internal LabelInfo(LabelTarget node)
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x41B6200", Offset = "0x41B6200", VA = "0x41B6200")]
	internal BranchLabel GetLabel(LightCompiler compiler)
	{
		return null;
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x41B6280", Offset = "0x41B6280", VA = "0x41B6280")]
	internal void Reference(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x41B6680", Offset = "0x41B6680", VA = "0x41B6680")]
	internal void Define(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x41B6340", Offset = "0x41B6340", VA = "0x41B6340")]
	private void ValidateJump(LabelScopeInfo reference)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x41B6E90", Offset = "0x41B6E90", VA = "0x41B6E90")]
	internal void ValidateFinish()
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x41B6240", Offset = "0x41B6240", VA = "0x41B6240")]
	private void EnsureLabel(LightCompiler compiler)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x41B6BE0", Offset = "0x41B6BE0", VA = "0x41B6BE0")]
	private bool DefinedIn(LabelScopeInfo scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x41B6C90", Offset = "0x41B6C90", VA = "0x41B6C90")]
	private LabelScopeInfo FirstDefinition()
	{
		return null;
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x41B69A0", Offset = "0x41B69A0", VA = "0x41B69A0")]
	private void AddDefinition(LabelScopeInfo scope)
	{
	}

	[Token(Token = "0x600080E")]
	internal static T CommonNode<T>(T first, T second, Func<T, T> parent) where T : class
	{
		return null;
	}
}
