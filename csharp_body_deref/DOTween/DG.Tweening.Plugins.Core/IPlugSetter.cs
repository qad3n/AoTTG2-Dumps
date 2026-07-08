using DG.Tweening.Core;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Core;

[Token(Token = "0x2000095")]
public interface IPlugSetter<T1, out T2, TPlugin, out TPlugOptions>
{
	[Token(Token = "0x600037F")]
	DOGetter<T1> Getter();

	[Token(Token = "0x6000380")]
	DOSetter<T1> Setter();

	[Token(Token = "0x6000381")]
	T2 EndValue();

	[Token(Token = "0x6000382")]
	TPlugOptions GetOptions();
}
