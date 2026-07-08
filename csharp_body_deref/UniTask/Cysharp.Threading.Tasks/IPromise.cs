using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200011C")]
public interface IPromise<T> : IResolvePromise<T>, IRejectPromise, ICancelPromise
{
}
[Token(Token = "0x200011D")]
public interface IPromise : IResolvePromise, IRejectPromise, ICancelPromise
{
}
