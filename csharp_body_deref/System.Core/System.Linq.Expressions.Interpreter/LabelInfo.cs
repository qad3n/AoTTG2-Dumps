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
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x2450AE0", Offset = "0x244F0E0", VA = "0x182450AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C4")]
	private bool HasMultipleDefinitions
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x2450AF0", Offset = "0x244F0F0", VA = "0x182450AF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x2450A40", Offset = "0x244F040", VA = "0x182450A40")]
	internal LabelInfo(LabelTarget node)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x24504F0", Offset = "0x244EAF0", VA = "0x1824504F0")]
	internal BranchLabel GetLabel(LightCompiler compiler)
	{
		return null;
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x2450540", Offset = "0x244EB40", VA = "0x182450540")]
	internal void Reference(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x244FE40", Offset = "0x244E440", VA = "0x18244FE40")]
	internal void Define(LabelScopeInfo block)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x2450690", Offset = "0x244EC90", VA = "0x182450690")]
	private void ValidateJump(LabelScopeInfo reference)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x2450600", Offset = "0x244EC00", VA = "0x182450600")]
	internal void ValidateFinish()
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x24502C0", Offset = "0x244E8C0", VA = "0x1824502C0")]
	private void EnsureLabel(LightCompiler compiler)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x2450210", Offset = "0x244E810", VA = "0x182450210")]
	private bool DefinedIn(LabelScopeInfo scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x2450310", Offset = "0x244E910", VA = "0x182450310")]
	private LabelScopeInfo FirstDefinition()
	{
		return null;
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x244FD00", Offset = "0x244E300", VA = "0x18244FD00")]
	private void AddDefinition(LabelScopeInfo scope)
	{
	}

	[Token(Token = "0x600080D")]
	internal static T CommonNode<T>(T first, T second, Func<T, T> parent) where T : class
	{
		return null;
	}
}
