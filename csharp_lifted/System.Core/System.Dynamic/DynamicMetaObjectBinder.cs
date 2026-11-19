// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.DynamicMetaObjectBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000268")]
public abstract class DynamicMetaObjectBinder : CallSiteBinder
{
	[Token(Token = "0x1700026A")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x5E1F750", Offset = "0x5E1E750", VA = "0x5E1F750", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026B")]
	internal virtual bool IsStandardBinder
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x5E200C0", Offset = "0x5E1F0C0", VA = "0x5E200C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x5E1F6E0", Offset = "0x5E1E6E0", VA = "0x5E1F6E0")]
	protected DynamicMetaObjectBinder()
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x5E1F780", Offset = "0x5E1E780", VA = "0x5E1F780", Slot = "4")]
	public sealed override Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x5E1FDE0", Offset = "0x5E1EDE0", VA = "0x5E1FDE0")]
	private static DynamicMetaObject[] CreateArgumentMetaObjects(object[] args, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	public abstract DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args);

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x5E1FFC0", Offset = "0x5E1EFC0", VA = "0x5E1FFC0")]
	public Expression GetUpdateExpression(Type type)
	{
		return null;
	}
}
