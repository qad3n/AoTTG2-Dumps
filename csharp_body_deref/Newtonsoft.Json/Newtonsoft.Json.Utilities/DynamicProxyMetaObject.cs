using System.Collections.Generic;
using System.Dynamic;
using System.Linq.Expressions;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000AC")]
internal sealed class DynamicProxyMetaObject<T> : DynamicMetaObject where T : notnull
{
	[Token(Token = "0x20000AD")]
	private delegate DynamicMetaObject Fallback(DynamicMetaObject? errorSuggestion);

	[Token(Token = "0x20000AE")]
	private sealed class GetBinderAdapter : GetMemberBinder
	{
		[Token(Token = "0x60005CF")]
		internal GetBinderAdapter(InvokeMemberBinder binder)
		{
		}

		[Token(Token = "0x60005D0")]
		public override DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject? errorSuggestion)
		{
			return null;
		}
	}

	[Token(Token = "0x400040C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly DynamicProxy<T> _proxy;

	[Token(Token = "0x170000C8")]
	private static Expression[] NoArgs
	{
		[Token(Token = "0x60005C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005B2")]
	internal DynamicProxyMetaObject(Expression expression, T value, DynamicProxy<T> proxy)
	{
	}

	[Token(Token = "0x60005B3")]
	private bool IsOverridden(string method)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B4")]
	public override DynamicMetaObject BindGetMember(GetMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x60005B6")]
	public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60005B7")]
	public override DynamicMetaObject BindConvert(ConvertBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60005B8")]
	public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x60005B9")]
	public override DynamicMetaObject BindCreateInstance(CreateInstanceBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x60005BA")]
	public override DynamicMetaObject BindInvoke(InvokeBinder binder, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x60005BB")]
	public override DynamicMetaObject BindBinaryOperation(BinaryOperationBinder binder, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x60005BC")]
	public override DynamicMetaObject BindUnaryOperation(UnaryOperationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60005BD")]
	public override DynamicMetaObject BindGetIndex(GetIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x60005BE")]
	public override DynamicMetaObject BindSetIndex(SetIndexBinder binder, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x60005BF")]
	public override DynamicMetaObject BindDeleteIndex(DeleteIndexBinder binder, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x60005C1")]
	private static IEnumerable<Expression> GetArgs(params DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x60005C2")]
	private static Expression[] GetArgArray(DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x60005C3")]
	private static Expression[] GetArgArray(DynamicMetaObject[] args, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x60005C4")]
	private static ConstantExpression Constant(DynamicMetaObjectBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60005C5")]
	private DynamicMetaObject CallMethodWithResult(string methodName, DynamicMetaObjectBinder binder, IEnumerable<Expression> args, Fallback fallback, [Optional] Fallback? fallbackInvoke)
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	private DynamicMetaObject BuildCallMethodWithResult(string methodName, DynamicMetaObjectBinder binder, IEnumerable<Expression> args, DynamicMetaObject fallbackResult, Fallback? fallbackInvoke)
	{
		return null;
	}

	[Token(Token = "0x60005C7")]
	private DynamicMetaObject CallMethodReturnLast(string methodName, DynamicMetaObjectBinder binder, IEnumerable<Expression> args, Fallback fallback)
	{
		return null;
	}

	[Token(Token = "0x60005C8")]
	private DynamicMetaObject CallMethodNoResult(string methodName, DynamicMetaObjectBinder binder, Expression[] args, Fallback fallback)
	{
		return null;
	}

	[Token(Token = "0x60005C9")]
	private BindingRestrictions GetRestrictions()
	{
		return null;
	}

	[Token(Token = "0x60005CA")]
	public override IEnumerable<string> GetDynamicMemberNames()
	{
		return null;
	}
}
