// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LabelScopeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200016B")]
internal sealed class LabelScopeInfo
{
	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x10")]
	private HybridReferenceDictionary<LabelTarget, LabelInfo> _labels;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x18")]
	internal readonly LabelScopeKind Kind;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x20")]
	internal readonly LabelScopeInfo Parent;

	[Token(Token = "0x170001C7")]
	internal bool CanJumpInto
	{
		[Token(Token = "0x600081D")]
		[Address(RVA = "0x5DF1A00", Offset = "0x5DF0A00", VA = "0x5DF1A00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x5DF1B20", Offset = "0x5DF0B20", VA = "0x5DF1B20")]
	internal LabelScopeInfo(LabelScopeInfo parent, LabelScopeKind kind)
	{
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x5DF14F0", Offset = "0x5DF04F0", VA = "0x5DF14F0")]
	internal bool ContainsTarget(LabelTarget target)
	{
		return default(bool);
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x5DF1B50", Offset = "0x5DF0B50", VA = "0x5DF1B50")]
	internal bool TryGetLabelInfo(LabelTarget target, out LabelInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x5DF1670", Offset = "0x5DF0670", VA = "0x5DF1670")]
	internal void AddLabelInfo(LabelTarget target, LabelInfo info)
	{
	}
}
