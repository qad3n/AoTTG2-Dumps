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

[Token(Token = "0x2000267")]
public abstract class DynamicMetaObjectBinder : CallSiteBinder
{
	[Token(Token = "0x17000268")]
	public virtual Type ReturnType
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x1C79630", Offset = "0x1C77C30", VA = "0x181C79630", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	internal virtual bool IsStandardBinder
	{
		[Token(Token = "0x6000BEF")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x246B7D0", Offset = "0x2469DD0", VA = "0x18246B7D0")]
	protected DynamicMetaObjectBinder()
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x246AD70", Offset = "0x2469370", VA = "0x18246AD70", Slot = "4")]
	public sealed override Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x246B580", Offset = "0x2469B80", VA = "0x18246B580")]
	private static DynamicMetaObject[] CreateArgumentMetaObjects(object[] args, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	public abstract DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args);

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x246B710", Offset = "0x2469D10", VA = "0x18246B710")]
	public Expression GetUpdateExpression(Type type)
	{
		return null;
	}
}
