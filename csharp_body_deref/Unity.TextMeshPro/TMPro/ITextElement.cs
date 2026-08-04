// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.ITextElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000087")]
public interface ITextElement
{
	[Token(Token = "0x17000109")]
	Material sharedMaterial
	{
		[Token(Token = "0x60004A2")]
		get;
	}

	[Token(Token = "0x60004A3")]
	void Rebuild(CanvasUpdate update);

	[Token(Token = "0x60004A4")]
	int GetInstanceID();
}
