using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021B")]
internal sealed class RuntimeVariables : IRuntimeVariables
{
	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x10")]
	private readonly IStrongBox[] _boxes;

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x41DD140", Offset = "0x41DD140", VA = "0x41DD140")]
	private RuntimeVariables(IStrongBox[] boxes)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x41D25B0", Offset = "0x41D25B0", VA = "0x41D25B0")]
	internal static IRuntimeVariables Create(IStrongBox[] boxes)
	{
		return null;
	}
}
