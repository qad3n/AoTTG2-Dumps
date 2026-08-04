// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.BinaryOperationBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000259")]
public abstract class BinaryOperationBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x1700025E")]
	public ExpressionType Operation
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x4508190", Offset = "0x4508190", VA = "0x4508190")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x45081A0", Offset = "0x45081A0", VA = "0x45081A0")]
	public DynamicMetaObject FallbackBinaryOperation(DynamicMetaObject target, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BA8")]
	public abstract DynamicMetaObject FallbackBinaryOperation(DynamicMetaObject target, DynamicMetaObject arg, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x45081C0", Offset = "0x45081C0", VA = "0x45081C0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
