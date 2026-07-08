using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200011E")]
internal class ExceptionHolder
{
	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x10")]
	private ExceptionDispatchInfo exception;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x18")]
	private bool calledGet;

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x46C5BB0", Offset = "0x46C5BB0", VA = "0x46C5BB0")]
	public ExceptionHolder(ExceptionDispatchInfo exception)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x46C5BE0", Offset = "0x46C5BE0", VA = "0x46C5BE0")]
	public ExceptionDispatchInfo GetException()
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x46C5C40", Offset = "0x46C5C40", VA = "0x46C5C40", Slot = "1")]
	~ExceptionHolder()
	{
	}
}
