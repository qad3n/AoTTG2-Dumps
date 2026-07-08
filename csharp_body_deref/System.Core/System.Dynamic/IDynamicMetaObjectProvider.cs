using System.Linq.Expressions;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000277")]
public interface IDynamicMetaObjectProvider
{
	[Token(Token = "0x6000C6D")]
	DynamicMetaObject GetMetaObject(Expression parameter);
}
