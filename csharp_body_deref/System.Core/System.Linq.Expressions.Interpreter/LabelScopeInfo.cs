// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LabelScopeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x44DBF80", Offset = "0x44DBF80", VA = "0x44DBF80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x44DC0A0", Offset = "0x44DC0A0", VA = "0x44DC0A0")]
	internal LabelScopeInfo(LabelScopeInfo parent, LabelScopeKind kind)
	{
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x44DBA40", Offset = "0x44DBA40", VA = "0x44DBA40")]
	internal bool ContainsTarget(LabelTarget target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x44DC0D0", Offset = "0x44DC0D0", VA = "0x44DC0D0")]
	internal bool TryGetLabelInfo(LabelTarget target, out LabelInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x44DBBC0", Offset = "0x44DBBC0", VA = "0x44DBBC0")]
	internal void AddLabelInfo(LabelTarget target, LabelInfo info)
	{
	}
}
