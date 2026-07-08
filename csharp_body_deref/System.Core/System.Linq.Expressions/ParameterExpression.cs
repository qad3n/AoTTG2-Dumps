using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B8")]
[DebuggerTypeProxy(typeof(ParameterExpressionProxy))]
public class ParameterExpression : Expression
{
	[Token(Token = "0x170000E0")]
	public override Type Type
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x419AF80", Offset = "0x419AF80", VA = "0x419AF80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x419AFC0", Offset = "0x419AFC0", VA = "0x419AFC0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000E2")]
	public string Name
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x419AFD0", Offset = "0x419AFD0", VA = "0x419AFD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public bool IsByRef
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x4192E30", Offset = "0x4192E30", VA = "0x4192E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x419A720", Offset = "0x419A720", VA = "0x419A720")]
	internal ParameterExpression(string name)
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x419A790", Offset = "0x419A790", VA = "0x419A790")]
	internal static ParameterExpression Make(Type type, string name, bool isByRef)
	{
		return null;
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x419AFE0", Offset = "0x419AFE0", VA = "0x419AFE0", Slot = "10")]
	internal virtual bool GetIsByRef()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x419AFF0", Offset = "0x419AFF0", VA = "0x419AFF0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
