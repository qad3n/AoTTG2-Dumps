using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200016A")]
internal sealed class LabelScopeInfo
{
	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x10")]
	private HybridReferenceDictionary<LabelTarget, LabelInfo> _labels;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x18")]
	internal readonly LabelScopeKind Kind;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x20")]
	internal readonly LabelScopeInfo Parent;

	[Token(Token = "0x170001C5")]
	internal bool CanJumpInto
	{
		[Token(Token = "0x6000813")]
		[Address(RVA = "0x41B6E80", Offset = "0x41B6E80", VA = "0x41B6E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x41B6FA0", Offset = "0x41B6FA0", VA = "0x41B6FA0")]
	internal LabelScopeInfo(LabelScopeInfo parent, LabelScopeKind kind)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x41B6940", Offset = "0x41B6940", VA = "0x41B6940")]
	internal bool ContainsTarget(LabelTarget target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x41B6FD0", Offset = "0x41B6FD0", VA = "0x41B6FD0")]
	internal bool TryGetLabelInfo(LabelTarget target, out LabelInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x41B6AC0", Offset = "0x41B6AC0", VA = "0x41B6AC0")]
	internal void AddLabelInfo(LabelTarget target, LabelInfo info)
	{
	}
}
