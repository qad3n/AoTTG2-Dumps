// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.IPlugSetter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
