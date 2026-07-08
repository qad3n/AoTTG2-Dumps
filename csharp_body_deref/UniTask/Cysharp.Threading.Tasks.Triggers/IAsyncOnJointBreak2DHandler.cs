using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C3")]
public interface IAsyncOnJointBreak2DHandler
{
	[Token(Token = "0x6000B11")]
	UniTask<Joint2D> OnJointBreak2DAsync();
}
