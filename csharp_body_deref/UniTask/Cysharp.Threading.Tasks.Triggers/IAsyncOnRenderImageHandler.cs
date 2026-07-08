using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E5")]
public interface IAsyncOnRenderImageHandler
{
	[Token(Token = "0x6000B88")]
	UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync();
}
