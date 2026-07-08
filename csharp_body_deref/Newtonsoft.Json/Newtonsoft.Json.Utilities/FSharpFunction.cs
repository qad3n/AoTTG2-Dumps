using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000C5")]
internal class FSharpFunction
{
	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x10")]
	private readonly object? _instance;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x18")]
	private readonly MethodCall<object?, object> _invoker;

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x3AC34C0", Offset = "0x3AC34C0", VA = "0x3AC34C0")]
	public FSharpFunction(object? instance, MethodCall<object?, object> invoker)
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x3AC3500", Offset = "0x3AC3500", VA = "0x3AC3500")]
	public object Invoke(params object[] args)
	{
		return null;
	}
}
