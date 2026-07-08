using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200006F")]
public interface ITaskPoolNode<T>
{
	[Token(Token = "0x1700002C")]
	ref T NextNode
	{
		[Token(Token = "0x600017D")]
		get;
	}
}
