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
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x418BA90", Offset = "0x418BA90", VA = "0x418BA90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007D")]
	[ExcludeFromCodeCoverage]
	public virtual int EndLine
	{
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x418BAC0", Offset = "0x418BAC0", VA = "0x418BAC0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007E")]
	public SymbolDocumentInfo Document
	{
		[Token(Token = "0x6000320")]
		[Address(RVA = "0x418BAF0", Offset = "0x418BAF0", VA = "0x418BAF0")]
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
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x418BB00", Offset = "0x418BB00", VA = "0x418BB00", Slot = "12")]
		get
		{
			return default(bool);
		}
	}
}
