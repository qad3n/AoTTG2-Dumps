using System.Collections.ObjectModel;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000267")]
public abstract class DynamicMetaObjectBinder : CallSiteBinder
{
	[Token(Token = "0x17000268")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x41E5590", Offset = "0x41E5590", VA = "0x41E5590", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	internal virtual bool IsStandardBinder
	{
		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x41E5F70", Offset = "0x41E5F70", VA = "0x41E5F70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x41E5520", Offset = "0x41E5520", VA = "0x41E5520")]
	protected DynamicMetaObjectBinder()
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x41E55D0", Offset = "0x41E55D0", VA = "0x41E55D0", Slot = "4")]
	public sealed override Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x41E5C80", Offset = "0x41E5C80", VA = "0x41E5C80")]
	private static DynamicMetaObject[] CreateArgumentMetaObjects(object[] args, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	public abstract DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args);

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x41E5E70", Offset = "0x41E5E70", VA = "0x41E5E70")]
	public Expression GetUpdateExpression(Type type)
	{
		return null;
	}
}
