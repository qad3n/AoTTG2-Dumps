// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.DebugInfoExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200007C")]
[DebuggerTypeProxy(typeof(DebugInfoExpressionProxy))]
public class DebugInfoExpression : Expression
{
	[Token(Token = "0x1700007C")]
	[ExcludeFromCodeCoverage]
	public virtual int StartLine
	{
		[Token(Token = "0x600031D")]
		[Address(RVA = "0x242BB50", Offset = "0x242A150", VA = "0x18242BB50", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007D")]
	[ExcludeFromCodeCoverage]
	public virtual int EndLine
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x242BAF0", Offset = "0x242A0F0", VA = "0x18242BAF0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007E")]
	public SymbolDocumentInfo Document
	{
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007F")]
	[ExcludeFromCodeCoverage]
	public virtual bool IsClear
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x242BB20", Offset = "0x242A120", VA = "0x18242BB20", Slot = "12")]
		get
		{
			return default(bool);
		}
	}
}
