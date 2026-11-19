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

[Token(Token = "0x200025A")]
public abstract class BinaryOperationBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000260")]
	public ExpressionType Operation
	{
		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x5E1D240", Offset = "0x5E1C240", VA = "0x5E1D240")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x5E1D250", Offset = "0x5E1C250", VA = "0x5E1D250")]
	public DynamicMetaObject FallbackBinaryOperation(DynamicMetaObject target, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BB2")]
	public abstract DynamicMetaObject FallbackBinaryOperation(DynamicMetaObject target, DynamicMetaObject arg, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x5E1D270", Offset = "0x5E1C270", VA = "0x5E1D270", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
