// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ParameterExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x1C79630", Offset = "0x1C77C30", VA = "0x181C79630", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x243E8E0", Offset = "0x243CEE0", VA = "0x18243E8E0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000E2")]
	public string Name
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public bool IsByRef
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x243E870", Offset = "0x243CE70", VA = "0x18243E870")]
	internal ParameterExpression(string name)
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x243E110", Offset = "0x243C710", VA = "0x18243E110")]
	internal static ParameterExpression Make(Type type, string name, bool isByRef)
	{
		return null;
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
	internal virtual bool GetIsByRef()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x243E0E0", Offset = "0x243C6E0", VA = "0x18243E0E0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
