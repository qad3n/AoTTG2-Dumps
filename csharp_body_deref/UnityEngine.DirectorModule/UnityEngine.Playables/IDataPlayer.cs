using Il2CppDummyDll;

namespace UnityEngine.Playables;

[Token(Token = "0x2000003")]
internal interface IDataPlayer
{
	[Token(Token = "0x6000003")]
	void Bind(DataPlayableOutput output);

	[Token(Token = "0x6000004")]
	void Release(DataPlayableOutput output);
}
