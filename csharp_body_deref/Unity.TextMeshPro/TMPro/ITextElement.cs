using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000071")]
public interface ITextElement
{
	[Token(Token = "0x170000E8")]
	Material sharedMaterial
	{
		[Token(Token = "0x60003B1")]
		get;
	}

	[Token(Token = "0x60003B2")]
	void Rebuild(CanvasUpdate update);

	[Token(Token = "0x60003B3")]
	int GetInstanceID();
}
