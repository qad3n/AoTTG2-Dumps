using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000BC")]
[DebuggerTypeProxy(typeof(RuntimeVariablesExpressionProxy))]
public sealed class RuntimeVariablesExpression : Expression
{
	[Token(Token = "0x170000E6")]
	public ReadOnlyCollection<ParameterExpression> Variables
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x419B040", Offset = "0x419B040", VA = "0x419B040")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}
}
