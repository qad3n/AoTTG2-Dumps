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

[Token(Token = "0x200007D")]
[DebuggerTypeProxy(typeof(DebugInfoExpressionProxy))]
public class DebugInfoExpression : Expression
{
	[Token(Token = "0x1700007E")]
	[ExcludeFromCodeCoverage]
	public virtual int StartLine
	{
		[Token(Token = "0x6000328")]
		[Address(RVA = "0x5DC6CB0", Offset = "0x5DC5CB0", VA = "0x5DC6CB0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	[ExcludeFromCodeCoverage]
	public virtual int EndLine
	{
		[Token(Token = "0x6000329")]
		[Address(RVA = "0x5DC6CE0", Offset = "0x5DC5CE0", VA = "0x5DC6CE0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000080")]
	public SymbolDocumentInfo Document
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x5DC6D10", Offset = "0x5DC5D10", VA = "0x5DC6D10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	[ExcludeFromCodeCoverage]
	public virtual bool IsClear
	{
		[Token(Token = "0x600032B")]
		[Address(RVA = "0x5DC6D20", Offset = "0x5DC5D20", VA = "0x5DC6D20", Slot = "12")]
		get
		{
			return default(bool);
		}
	}
}
