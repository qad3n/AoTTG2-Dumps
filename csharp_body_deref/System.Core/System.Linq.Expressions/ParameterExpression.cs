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

[Token(Token = "0x20000B9")]
[DebuggerTypeProxy(typeof(ParameterExpressionProxy))]
public class ParameterExpression : Expression
{
	[Token(Token = "0x170000E2")]
	public override Type Type
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x5DD5E60", Offset = "0x5DD4E60", VA = "0x5DD5E60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x5DD5E90", Offset = "0x5DD4E90", VA = "0x5DD5E90", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000E4")]
	public string Name
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x5DD5EA0", Offset = "0x5DD4EA0", VA = "0x5DD5EA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	public bool IsByRef
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x5DCDE70", Offset = "0x5DCCE70", VA = "0x5DCDE70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x5DD5640", Offset = "0x5DD4640", VA = "0x5DD5640")]
	internal ParameterExpression(string name)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x5DD56B0", Offset = "0x5DD46B0", VA = "0x5DD56B0")]
	internal static ParameterExpression Make(Type type, string name, bool isByRef)
	{
		return null;
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x5DD5EB0", Offset = "0x5DD4EB0", VA = "0x5DD5EB0", Slot = "10")]
	internal virtual bool GetIsByRef()
	{
		return default(bool);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x5DD5EC0", Offset = "0x5DD4EC0", VA = "0x5DD5EC0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
