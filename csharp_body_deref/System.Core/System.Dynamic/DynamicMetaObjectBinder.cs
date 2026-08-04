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
		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x450A690", Offset = "0x450A690", VA = "0x450A690", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	internal virtual bool IsStandardBinder
	{
		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x450B070", Offset = "0x450B070", VA = "0x450B070", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x450A620", Offset = "0x450A620", VA = "0x450A620")]
	protected DynamicMetaObjectBinder()
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x450A6D0", Offset = "0x450A6D0", VA = "0x450A6D0", Slot = "4")]
	public sealed override Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x450AD80", Offset = "0x450AD80", VA = "0x450AD80")]
	private static DynamicMetaObject[] CreateArgumentMetaObjects(object[] args, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	public abstract DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args);

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x450AF70", Offset = "0x450AF70", VA = "0x450AF70")]
	public Expression GetUpdateExpression(Type type)
	{
		return null;
	}
}
